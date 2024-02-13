#include "generator.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"

void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
	G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
	
	G4String ParticleName="gamma";
	G4ParticleDefinition *particle = particleTable->FindParticle("gamma");
	
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
	//G4double x0 = 0.025;		//Центр центрального (главного) стрипа 
	G4double x0 = 0.025;
	//G4double x0 = 0.075;		//Центр стрипа справа от главного
	//G4double x0 = 0.175;		//R3 стрип
	G4double y0 = 0.*m;
	//G4double z0 = -0.0045*m;	//Фотоны спавнятся вдали от кристалла
	G4double z0 = -0.0005*m;		//Фотоны спавнятся возле кристалла

	G4ThreeVector pos(x0, y0, z0);	//создали вектор позиции спавна частицы
	
	G4ThreeVector mom(0., 0., 1.);	//создали вектор начального импульса частицы (по оси z)
	
	fParticleGun->SetParticlePosition(pos);			//передаем вектор направления
	fParticleGun->SetParticleMomentumDirection(mom);	//передаем вектор импульса
	fParticleGun->SetParticleMomentum(0.03*MeV);		//задаем модуль импульса
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
