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
	fEdep_R6 =0.;
	fEdep_R7 =0.;
	fEdep_R8 =0.;
	fEdep_R9 =0.;
	fEdep_R10 =0.;
	fEdep_R11 =0.;
	fEdep_R12 =0.;
	fEdep_R13 =0.;
	fEdep_R14 =0.;
	fEdep_R15 =0.;
	fEdep_R16 =0.;
	fEdep_R17 =0.;
	fEdep_R18 =0.;
	fEdep_R19 =0.;
	fEdep_R20 =0.;
	
	//Стрипы слева от главного
	fEdep_L1 =0.;
	fEdep_L2 =0.;
	fEdep_L3 =0.;
	fEdep_L4 =0.;
	fEdep_L5 =0.;
	fEdep_L6 =0.;
	fEdep_L7 =0.;
	fEdep_L8 =0.;
	fEdep_L9 =0.;
	fEdep_L10 =0.;
	fEdep_L11 =0.;
	fEdep_L12 =0.;
	fEdep_L13 =0.;
	fEdep_L14 =0.;
	fEdep_L15 =0.;
	fEdep_L16 =0.;
	fEdep_L17 =0.;
	fEdep_L18 =0.;
	fEdep_L19 =0.;
	fEdep_L20 =0.;
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
	fEdep_R6 =0.;
	fEdep_R7 =0.;
	fEdep_R8 =0.;
	fEdep_R9 =0.;
	fEdep_R10 =0.;
	fEdep_R11 =0.;
	fEdep_R12 =0.;
	fEdep_R13 =0.;
	fEdep_R14 =0.;
	fEdep_R15 =0.;
	fEdep_R16 =0.;
	fEdep_R17 =0.;
	fEdep_R18 =0.;
	fEdep_R19 =0.;
	fEdep_R20 =0.;
	
	//Стрипы слева от главного
	fEdep_L1 =0.;
	fEdep_L2 =0.;
	fEdep_L3 =0.;
	fEdep_L4 =0.;
	fEdep_L5 =0.;
	fEdep_L6 =0.;
	fEdep_L7 =0.;
	fEdep_L8 =0.;
	fEdep_L9 =0.;
	fEdep_L10 =0.;
	fEdep_L11 =0.;
	fEdep_L12 =0.;
	fEdep_L13 =0.;
	fEdep_L14 =0.;
	fEdep_L15 =0.;
	fEdep_L16 =0.;
	fEdep_L17 =0.;
	fEdep_L18 =0.;
	fEdep_L19 =0.;
	fEdep_L20 =0.;
}

void MyEventAction::EndOfEventAction(const G4Event*)
{
	G4cout << "Energy deposition: " << fEdep << G4endl;
	G4cout << "Energy deposition R1: " << fEdep_R1 << G4endl;
	G4cout << "Energy deposition R2: " << fEdep_R2 << G4endl;
	G4cout << "Energy deposition R3: " << fEdep_R3 << G4endl;
	G4cout << "Energy deposition R4: " << fEdep_R4 << G4endl;
	G4cout << "Energy deposition R5: " << fEdep_R5 << G4endl;
	G4cout << "Energy deposition R6: " << fEdep_R6 << G4endl;
	G4cout << "Energy deposition R7: " << fEdep_R7 << G4endl;
	G4cout << "Energy deposition R8: " << fEdep_R8 << G4endl;
	G4cout << "Energy deposition R9: " << fEdep_R9 << G4endl;
	G4cout << "Energy deposition R10: " << fEdep_R10 << G4endl;
	G4cout << "Energy deposition R11: " << fEdep_R11 << G4endl;
	G4cout << "Energy deposition R12: " << fEdep_R12 << G4endl;
	G4cout << "Energy deposition R13: " << fEdep_R13 << G4endl;
	G4cout << "Energy deposition R14: " << fEdep_R14 << G4endl;
	G4cout << "Energy deposition R15: " << fEdep_R15 << G4endl;
	G4cout << "Energy deposition R16: " << fEdep_R16 << G4endl;
	G4cout << "Energy deposition R17: " << fEdep_R17 << G4endl;
	G4cout << "Energy deposition R18: " << fEdep_R18 << G4endl;
	G4cout << "Energy deposition R19: " << fEdep_R19 << G4endl;
	G4cout << "Energy deposition R20: " << fEdep_R20 << G4endl;
	
	//Стрипы справа от главного
	G4cout << "Energy deposition L1: " << fEdep_L1 << G4endl;
	G4cout << "Energy deposition L2: " << fEdep_L2 << G4endl;
	G4cout << "Energy deposition L3: " << fEdep_L3 << G4endl;
	G4cout << "Energy deposition L4: " << fEdep_L4 << G4endl;
	G4cout << "Energy deposition L5: " << fEdep_L5 << G4endl;
	G4cout << "Energy deposition L6: " << fEdep_L6 << G4endl;
	G4cout << "Energy deposition L7: " << fEdep_L7 << G4endl;
	G4cout << "Energy deposition L8: " << fEdep_L8 << G4endl;
	G4cout << "Energy deposition L9: " << fEdep_L9 << G4endl;
	G4cout << "Energy deposition L10: " << fEdep_L10 << G4endl;
	G4cout << "Energy deposition L11: " << fEdep_L11 << G4endl;
	G4cout << "Energy deposition L12: " << fEdep_L12 << G4endl;
	G4cout << "Energy deposition L13: " << fEdep_L13 << G4endl;
	G4cout << "Energy deposition L14: " << fEdep_L14 << G4endl;
	G4cout << "Energy deposition L15: " << fEdep_L15 << G4endl;
	G4cout << "Energy deposition L16: " << fEdep_L16 << G4endl;
	G4cout << "Energy deposition L17: " << fEdep_L17 << G4endl;
	G4cout << "Energy deposition L18: " << fEdep_L18 << G4endl;
	G4cout << "Energy deposition L19: " << fEdep_L19 << G4endl;
	G4cout << "Energy deposition L20: " << fEdep_L20 << G4endl;
	
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
	//R6
	man->FillNtupleDColumn(6, 0, fEdep_R6);
	man->AddNtupleRow(6);
	//R7
	man->FillNtupleDColumn(7, 0, fEdep_R7);
	man->AddNtupleRow(7);
	//R8
	man->FillNtupleDColumn(8, 0, fEdep_R8);
	man->AddNtupleRow(8);
	//R9
	man->FillNtupleDColumn(9, 0, fEdep_R9);
	man->AddNtupleRow(9);
	//R10
	man->FillNtupleDColumn(10, 0, fEdep_R10);
	man->AddNtupleRow(10);
	//R11
	man->FillNtupleDColumn(11, 0, fEdep_R11);
	man->AddNtupleRow(11);
	//R12
	man->FillNtupleDColumn(12, 0, fEdep_R12);
	man->AddNtupleRow(12);
	//R13
	man->FillNtupleDColumn(13, 0, fEdep_R13);
	man->AddNtupleRow(13);
	//R14
	man->FillNtupleDColumn(14, 0, fEdep_R14);
	man->AddNtupleRow(14);
	//R15
	man->FillNtupleDColumn(15, 0, fEdep_R15);
	man->AddNtupleRow(15);
	//R16
	man->FillNtupleDColumn(16, 0, fEdep_R16);
	man->AddNtupleRow(16);
	//R17
	man->FillNtupleDColumn(17, 0, fEdep_R17);
	man->AddNtupleRow(17);
	//R18
	man->FillNtupleDColumn(18, 0, fEdep_R18);
	man->AddNtupleRow(18);
	//R19
	man->FillNtupleDColumn(19, 0, fEdep_R19);
	man->AddNtupleRow(19);
	//R20
	man->FillNtupleDColumn(20, 0, fEdep_R20);
	man->AddNtupleRow(20);
	
	 
	//Стрипы слева от главного
	//L1
	man->FillNtupleDColumn(21, 0, fEdep_L1);
	man->AddNtupleRow(21);
	//L2
	man->FillNtupleDColumn(22, 0, fEdep_L2);
	man->AddNtupleRow(22);
	//L3
	man->FillNtupleDColumn(23, 0, fEdep_L3);
	man->AddNtupleRow(23);
	//L4
	man->FillNtupleDColumn(24, 0, fEdep_L4);
	man->AddNtupleRow(24);
	//L5
	man->FillNtupleDColumn(25, 0, fEdep_L5);
	man->AddNtupleRow(25);
	//L6
	man->FillNtupleDColumn(26, 0, fEdep_L6);
	man->AddNtupleRow(26);
	//L7
	man->FillNtupleDColumn(27, 0, fEdep_L7);
	man->AddNtupleRow(27);
	//L8
	man->FillNtupleDColumn(28, 0, fEdep_L8);
	man->AddNtupleRow(28);
	//L9
	man->FillNtupleDColumn(29, 0, fEdep_L9);
	man->AddNtupleRow(29);
	//L10
	man->FillNtupleDColumn(30, 0, fEdep_L10);
	man->AddNtupleRow(30);
	//L11
	man->FillNtupleDColumn(31, 0, fEdep_L11);
	man->AddNtupleRow(31);
	//L12
	man->FillNtupleDColumn(32, 0, fEdep_L12);
	man->AddNtupleRow(32);
	//L13
	man->FillNtupleDColumn(33, 0, fEdep_L13);
	man->AddNtupleRow(33);
	//L14
	man->FillNtupleDColumn(34, 0, fEdep_L14);
	man->AddNtupleRow(34);
	//L15
	man->FillNtupleDColumn(35, 0, fEdep_L15);
	man->AddNtupleRow(35);
	//L16
	man->FillNtupleDColumn(36, 0, fEdep_L16);
	man->AddNtupleRow(36);
	//L17
	man->FillNtupleDColumn(37, 0, fEdep_L17);
	man->AddNtupleRow(37);
	//L18
	man->FillNtupleDColumn(38, 0, fEdep_L18);
	man->AddNtupleRow(38);
	//L19
	man->FillNtupleDColumn(39, 0, fEdep_L19);
	man->AddNtupleRow(39);
	//L20
	man->FillNtupleDColumn(40, 0, fEdep_L20);
	man->AddNtupleRow(40);

}
