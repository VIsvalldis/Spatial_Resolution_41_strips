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
	//UImanager->ApplyCommand("/vis/scene/add/axes -0.0025 -0.0015 0 0.005");
	UImanager->ApplyCommand("/vis/scene/add/axes -0.00025 -0.00015 0 0.0005");
	UImanager->ApplyCommand("/vis/scene/add/eventID");
	UImanager->ApplyCommand("/vis/scene/endOfEventAction accumulate");
	
	//Главный стрип
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall 0.9 0.0 0.0 1 .8");
	
	//Стрипы справа от главного
	//R1
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R1 0.0 0.9 0.0 1 .8");
	//R2
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R2 0.05 0.9 0.0 1 .8");
	//R3
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R3 0.1 0.9 0.0 1 .8");
	//R4
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R4 0.15 0.9 0.0 1 .8");
	//R5
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R5 0.2 0.9 0.0 1 .8");
	//R6
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R6 0.25 0.9 0.0 1 .8");
	//R7
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R7 0.3 0.9 0.0 1 .8");
	//R8
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R8 0.35 0.9 0.0 1 .8");
	//R9
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R9 0.4 0.9 0.0 1 .8");
	//R10
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R10 0.45 0.9 0.0 1 .8");
	//R11
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R11 0.5 0.9 0.0 1 .8");
	//R12
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R12 0.55 0.9 0.0 1 .8");
	//R13
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R13 0.6 0.9 0.0 1 .8");
	//R14
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R14 0.65 0.9 0.0 1 .8");
	//R15
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R15 0.7 0.9 0.0 1 .8");
	//R16
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R16 0.75 0.9 0.0 1 .8");
	//R17
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R17 0.8 0.9 0.0 1 .8");
	//R18
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R18 0.85 0.9 0.0 1 .8");
	//R19
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R19 0.9 0.9 0.0 1 .8");
	//R20
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_R20 0.95 0.9 0.0 1 .8");
	
	//Стрипы слева от главного
	//L1
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L1 0.0 0.0 0.9 1 .8");
	//L2
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L2 0.05 0.0 0.9 1 .8");
	//L3
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L3 0.1 0.0 0.9 1 .8");
	//L4
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L4 0.15 0.0 0.9 1 .8");
	//L5
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L5 0.2 0.0 0.9 1 .8");
	//L6
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L6 0.25 0.0 0.9 1 .8");
	//L7
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L7 0.3 0.0 0.9 1 .8");
	//L8
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L8 0.35 0.0 0.9 1 .8");
	//L9
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L9 0.4 0.0 0.9 1 .8");
	//L10
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L10 0.45 0.0 0.9 1 .8");
	//L11
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L11 0.5 0.0 0.9 1 .8");
	//L12
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L12 0.55 0.0 0.9 1 .8");
	//L13
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L13 0.6 0.0 0.9 1 .8");
	//L14
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L14 0.65 0.0 0.9 1 .8");
	//L15
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L15 0.7 0.0 0.9 1 .8");
	//L16
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L16 0.75 0.0 0.9 1 .8");
	//L17
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L17 0.8 0.0 0.9 1 .8");
	//L18
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L18 0.85 0.0 0.9 1 .8");
	//L19
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L19 0.9 0.0 0.9 1 .8");
	//L20
	UImanager->ApplyCommand("/vis/geometry/set/colour logicalCrystall_L20 0.95 0.0 0.9 1 .8");
	
	ui->SessionStart();
	
	return 0;
}
