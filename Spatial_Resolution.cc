#include <iostream>

#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4VisManager.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

#include "construction.hh"
#include "physics.hh"
#include "action.hh"

#include "random"

int main(int argc, char** argv)
{
	G4RunManager *runManager = new G4RunManager();
	
	runManager->SetUserInitialization(new MyDetectorConstruction());
	runManager->SetUserInitialization(new MyPhysicsList());
	runManager->SetUserInitialization(new MyActionInitialization());
	
	runManager->Initialize();
	
	G4UIExecutive *ui = new G4UIExecutive(argc, argv);
	
	G4VisManager *visManager = new G4VisExecutive();
	visManager->Initialize();
	
	G4UImanager *UImanager = G4UImanager::GetUIpointer();
	
	
	
	//Когда этот блок закомментирован MC дает одинаковые полседовательности при каждом запуске.
	//Если разкомментировать последовательности будут разными
	////////////////////////////////////////////////////////////	
	std::random_device rd;
	std::uniform_int_distribution<long> uid(0, LONG_MAX);
	G4long seed =  uid(rd);
	G4Random::setTheEngine(new CLHEP::RanecuEngine);
	G4Random::setTheSeed(seed);
	////////////////////////////////////////////////////////////
	
	
	UImanager->ApplyCommand("/vis/open OGL");
	UImanager->ApplyCommand("/vis/drawVolume");
	UImanager->ApplyCommand("/vis/viewer/set/autoRefresh true");
	UImanager->ApplyCommand("/vis/scene/add/trajectories smooth");
	//UImanager->ApplyCommand("/vis/scene/add/scale 1 cm");
	UImanager->ApplyCommand("/vis/scene/add/axes -0.0025 -0.0015 0 0.005");
	UImanager->ApplyCommand("/vis/scene/add/eventID");
	UImanager->ApplyCommand("/vis/scene/endOfEventAction accumulate");
	
	//Главный стрип
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall 0.9 0.0 0.0 1 .8");
	
	//Стрипы справа от главного
	//R1
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R1 0.0 0.9 0.0 1 .8");
	//R2
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R2 0.3 0.9 0.0 1 .8");
	//R3
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R3 0.5 0.9 0.0 1 .8");
	//R4
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R4 0.7 0.9 0.0 1 .8");
	//R5
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R5 0.9 0.9 0.0 1 .8");
	//Стрипы слева от главного
	//L1
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L1 0.0 0.0 0.9 1 .8");
	//L2
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L2 0.3 0.0 0.9 1 .8");
	//L3
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L3 0.5 0.0 0.9 1 .8");
	//L4
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L4 0.7 0.0 0.9 1 .8");
	//L5
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L5 0.9 0.0 0.9 1 .8");
	
	ui->SessionStart();
	
	return 0;
}
