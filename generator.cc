#include "generator.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"



////////////////////////Generator of spec////////////////////////////////
double linear_interpolation(double x1, double y1, double x2, double y2, double point) {
   		return x1 + (x2 - x1) * (point - y1) / (y2 - y1);
	}
	
double Generator(const std::vector<double>& x, const std::vector<double>& y) {
	    std::random_device rd;
	    std::mt19937 gen(rd());
	    std::uniform_real_distribution<> dis(0.0, 1.0);

	    double P1 = dis(gen);
	    int b = -1;
	
	    //G4cout << "P1:" << P1 << G4endl;
	    for (int i = 0; i < y.size(); ++i) {
	    	//G4cout << "we are in the cycle" << G4endl;
		if (P1 < y[0]) {
		    b = 0;
		} else {
		    if (P1 > y[i]) {
		        b = i + 1;
		    }
		}
	    }

	    if (b != -1) {
		double photon_energy = linear_interpolation(b * 1000, y[b - 1], (b + 1) * 1000, y[b], P1);
		return photon_energy;
	    } else {
	    	G4cout << "Attention Error" << G4endl;
		return -1; // Handle error case
	    }
	}
////////////////////////////////////////////////////////




void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
	G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
	
	G4String ParticleName="gamma";
	G4ParticleDefinition *particle = particleTable->FindParticle("gamma");
	
	///////////////////////////My Generator///////////////////////////////////////////////////
	std::vector<double> x;
	std::vector<double> y;
	
	//std::ifstream file("Integral_spectra.txt");
	std::ifstream file("Integrated_spec_VEPP4_4-5GeV_1mA_7x1-9T_2x1-2T_eV_sec_Be_N.txt");
    	double x_val, y_val;
    	
    	while (file >> x_val >> y_val) {
        	x.push_back(x_val);
        	y.push_back(y_val);
    	}
    	file.close();
	
	
	//double result = Generator(x, y);
	G4double photon_Energy = Generator(x, y);
	G4cout << "Energy of my photon: " << photon_Energy << G4endl;
	
	std::ofstream filew("use_spec.txt", std::ios::app);
	filew << photon_Energy << std::endl;
	filew.close();
	//////////////////////////////////////////////////////////////////////////////////////////
	
	//G4double x0 = 0.0025;		//Центр центрального (главного) стрипа 
	G4double x0 = 0.0025;
	G4double y0 = 0.*m;
	//G4double z0 = -0.0045*m;	//Фотоны спавнятся вдали от кристалла
	G4double z0 = -0.0005*m;		//Фотоны спавнятся возле кристалла

	G4ThreeVector pos(x0, y0, z0);	//создали вектор позиции спавна частицы
	
	G4ThreeVector mom(0., 0., 1.);	//создали вектор начального импульса частицы (по оси z)
	
	fParticleGun->SetParticlePosition(pos);			//передаем вектор направления
	fParticleGun->SetParticleMomentumDirection(mom);	//передаем вектор импульса
	//fParticleGun->SetParticleMomentum(0.05*MeV);		//задаем модуль импульса
	fParticleGun->SetParticleMomentum(photon_Energy*eV);	//задаем модуль импульса
	fParticleGun->SetParticleDefinition(particle);		//передаем тип частицы
	
	fParticleGun->GeneratePrimaryVertex(anEvent);
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{
	delete fParticleGun;
}

MyPrimaryGenerator::MyPrimaryGenerator()
{	

	
	fParticleGun = new G4ParticleGun(1);	//я так понял, аргумент - количетво частиц за одну итерацию
}
