#include "event.hh"

MyEventAction::MyEventAction(MyRunAction*)
{
	fEdep = 0.;
	//Стрипы справа от главного
	fEdep_R1 =0.;
	fEdep_R2 =0.;
	fEdep_R3 =0.;
	fEdep_R4 =0.;
	fEdep_R5 =0.;
	//Стрипы слева от главного
	fEdep_L1 =0.;
	fEdep_L2 =0.;
	fEdep_L3 =0.;
	fEdep_L4 =0.;
	fEdep_L5 =0.;
}

MyEventAction::~MyEventAction()
{}

void MyEventAction::BeginOfEventAction(const G4Event*)
{
	fEdep =0.;
	//Стрипы справа от главного
	fEdep_R1 =0.;
	fEdep_R2 =0.;
	fEdep_R3 =0.;
	fEdep_R4 =0.;
	fEdep_R5 =0.;
	//Стрипы слева от главного
	fEdep_L1 =0.;
	fEdep_L2 =0.;
	fEdep_L3 =0.;
	fEdep_L4 =0.;
	fEdep_L5 =0.;
}

void MyEventAction::EndOfEventAction(const G4Event*)
{
	G4cout << "Energy deposition: " << fEdep << G4endl;
	G4cout << "Energy deposition R1: " << fEdep_R1 << G4endl;
	G4cout << "Energy deposition R2: " << fEdep_R2 << G4endl;
	G4cout << "Energy deposition R3: " << fEdep_R3 << G4endl;
	G4cout << "Energy deposition R4: " << fEdep_R4 << G4endl;
	G4cout << "Energy deposition R5: " << fEdep_R5 << G4endl;
	//Стрипы справа от главного
	G4cout << "Energy deposition L1: " << fEdep_L1 << G4endl;
	G4cout << "Energy deposition L2: " << fEdep_L2 << G4endl;
	G4cout << "Energy deposition L3: " << fEdep_L3 << G4endl;
	G4cout << "Energy deposition L4: " << fEdep_L4 << G4endl;
	G4cout << "Energy deposition L5: " << fEdep_L5 << G4endl;
	
	G4AnalysisManager *man = G4AnalysisManager::Instance();
	
	man->FillNtupleDColumn(0, 0, fEdep);
	man->AddNtupleRow(0);
	
	//Стрипы справа от главного
	man->FillNtupleDColumn(1, 0, fEdep_R1);
	man->AddNtupleRow(1);
	//R2
	man->FillNtupleDColumn(2, 0, fEdep_R2);
	man->AddNtupleRow(2);
	//R3
	man->FillNtupleDColumn(3, 0, fEdep_R3);
	man->AddNtupleRow(3);
	//R4
	man->FillNtupleDColumn(4, 0, fEdep_R4);
	man->AddNtupleRow(4);
	//R5
	man->FillNtupleDColumn(5, 0, fEdep_R5);
	man->AddNtupleRow(5);
	//Стрипы слева от главного
	//L1
	man->FillNtupleDColumn(6, 0, fEdep_L1);
	man->AddNtupleRow(6);
	//L2
	man->FillNtupleDColumn(7, 0, fEdep_L2);
	man->AddNtupleRow(7);
	//L3
	man->FillNtupleDColumn(8, 0, fEdep_L3);
	man->AddNtupleRow(8);
	//L4
	man->FillNtupleDColumn(9, 0, fEdep_L4);
	man->AddNtupleRow(9);
	//L5
	man->FillNtupleDColumn(10, 0, fEdep_L5);
	man->AddNtupleRow(10);

}
