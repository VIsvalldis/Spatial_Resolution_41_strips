#include "run.hh"

MyRunAction::MyRunAction()
{}

MyRunAction::~MyRunAction()
{}

void MyRunAction::BeginOfRunAction(const G4Run*)
{
	G4AnalysisManager *man = G4AnalysisManager::Instance();
	
	man->OpenFile("output.root");

	//Главный стрип
	man->CreateNtuple("Scoring", "Scoring");
	man->CreateNtupleDColumn("fEdep");
	man->FinishNtuple(0);
	
	//Стрип справа от главного(когда поток частиц идет на нас). Обозначениее стрипа r1
	//R1
	man->CreateNtuple("Scoring_R1", "Scoring_R1");
	man->CreateNtupleDColumn("fEdep_R1");
	man->FinishNtuple(1);
	//R2
	man->CreateNtuple("Scoring_R2", "Scoring_R2");
	man->CreateNtupleDColumn("fEdep_R2");
	man->FinishNtuple(2);
	//R3
	man->CreateNtuple("Scoring_R3", "Scoring_R3");
	man->CreateNtupleDColumn("fEdep_R3");
	man->FinishNtuple(3);
	//R4
	man->CreateNtuple("Scoring_R4", "Scoring_R4");
	man->CreateNtupleDColumn("fEdep_R4");
	man->FinishNtuple(4);
	//R5
	man->CreateNtuple("Scoring_R5", "Scoring_R5");
	man->CreateNtupleDColumn("fEdep_R5");
	man->FinishNtuple(5);
	//R6
	man->CreateNtuple("Scoring_R6", "Scoring_R6");
	man->CreateNtupleDColumn("fEdep_R6");
	man->FinishNtuple(6);
	//R7
	man->CreateNtuple("Scoring_R7", "Scoring_R7");
	man->CreateNtupleDColumn("fEdep_R7");
	man->FinishNtuple(7);
	//R8
	man->CreateNtuple("Scoring_R8", "Scoring_R8");
	man->CreateNtupleDColumn("fEdep_R8");
	man->FinishNtuple(8);
	//R9
	man->CreateNtuple("Scoring_R9", "Scoring_R9");
	man->CreateNtupleDColumn("fEdep_R9");
	man->FinishNtuple(9);
	//R10
	man->CreateNtuple("Scoring_R10", "Scoring_R10");
	man->CreateNtupleDColumn("fEdep_R10");
	man->FinishNtuple(10);
	//R11
	man->CreateNtuple("Scoring_R11", "Scoring_R11");
	man->CreateNtupleDColumn("fEdep_R11");
	man->FinishNtuple(11);
	//R12
	man->CreateNtuple("Scoring_R12", "Scoring_R12");
	man->CreateNtupleDColumn("fEdep_R12");
	man->FinishNtuple(12);
	//R13
	man->CreateNtuple("Scoring_R13", "Scoring_R13");
	man->CreateNtupleDColumn("fEdep_R13");
	man->FinishNtuple(13);
	//R14
	man->CreateNtuple("Scoring_R14", "Scoring_R14");
	man->CreateNtupleDColumn("fEdep_R14");
	man->FinishNtuple(14);
	//R15
	man->CreateNtuple("Scoring_R15", "Scoring_R15");
	man->CreateNtupleDColumn("fEdep_R15");
	man->FinishNtuple(15);
	//R16
	man->CreateNtuple("Scoring_R16", "Scoring_R16");
	man->CreateNtupleDColumn("fEdep_R16");
	man->FinishNtuple(16);
	//R17
	man->CreateNtuple("Scoring_R17", "Scoring_R17");
	man->CreateNtupleDColumn("fEdep_R17");
	man->FinishNtuple(17);
	//R18
	man->CreateNtuple("Scoring_R18", "Scoring_R18");
	man->CreateNtupleDColumn("fEdep_R18");
	man->FinishNtuple(18);
	//R19
	man->CreateNtuple("Scoring_R19", "Scoring_R19");
	man->CreateNtupleDColumn("fEdep_R19");
	man->FinishNtuple(19);
	//R20
	man->CreateNtuple("Scoring_R20", "Scoring_R20");
	man->CreateNtupleDColumn("fEdep_R20");
	man->FinishNtuple(20);
	
	 
	
	//Стрипы слева от главного
	//L1
	man->CreateNtuple("Scoring_L1", "Scoring_L1");
	man->CreateNtupleDColumn("fEdep_L1");
	man->FinishNtuple(21);
	//L2
	man->CreateNtuple("Scoring_L2", "Scoring_L2");
	man->CreateNtupleDColumn("fEdep_L2");
	man->FinishNtuple(22);
	//L3
	man->CreateNtuple("Scoring_L3", "Scoring_L3");
	man->CreateNtupleDColumn("fEdep_L3");
	man->FinishNtuple(23);
	//L4
	man->CreateNtuple("Scoring_L4", "Scoring_L4");
	man->CreateNtupleDColumn("fEdep_L4");
	man->FinishNtuple(24);
	//L5
	man->CreateNtuple("Scoring_L5", "Scoring_L5");
	man->CreateNtupleDColumn("fEdep_L5");
	man->FinishNtuple(25);
	//L6
	man->CreateNtuple("Scoring_L6", "Scoring_L6");
	man->CreateNtupleDColumn("fEdep_L6");
	man->FinishNtuple(26);
	//L7
	man->CreateNtuple("Scoring_L7", "Scoring_L7");
	man->CreateNtupleDColumn("fEdep_L7");
	man->FinishNtuple(27);
	//L8
	man->CreateNtuple("Scoring_L8", "Scoring_L8");
	man->CreateNtupleDColumn("fEdep_L8");
	man->FinishNtuple(28);
	//L9
	man->CreateNtuple("Scoring_L9", "Scoring_L9");
	man->CreateNtupleDColumn("fEdep_L9");
	man->FinishNtuple(29);
	//L10
	man->CreateNtuple("Scoring_L10", "Scoring_L10");
	man->CreateNtupleDColumn("fEdep_L10");
	man->FinishNtuple(30);
	//L11
	man->CreateNtuple("Scoring_L11", "Scoring_L11");
	man->CreateNtupleDColumn("fEdep_L11");
	man->FinishNtuple(31);
	//L12
	man->CreateNtuple("Scoring_L12", "Scoring_L12");
	man->CreateNtupleDColumn("fEdep_L12");
	man->FinishNtuple(32);
	//L13
	man->CreateNtuple("Scoring_L13", "Scoring_L13");
	man->CreateNtupleDColumn("fEdep_L13");
	man->FinishNtuple(33);
	//L14
	man->CreateNtuple("Scoring_L14", "Scoring_L14");
	man->CreateNtupleDColumn("fEdep_L14");
	man->FinishNtuple(34);
	//L15
	man->CreateNtuple("Scoring_L15", "Scoring_L15");
	man->CreateNtupleDColumn("fEdep_L15");
	man->FinishNtuple(35);
	//L16
	man->CreateNtuple("Scoring_L16", "Scoring_L16");
	man->CreateNtupleDColumn("fEdep_L16");
	man->FinishNtuple(36);
	//L17
	man->CreateNtuple("Scoring_L17", "Scoring_L17");
	man->CreateNtupleDColumn("fEdep_L17");
	man->FinishNtuple(37);
	//L18
	man->CreateNtuple("Scoring_L18", "Scoring_L18");
	man->CreateNtupleDColumn("fEdep_L18");
	man->FinishNtuple(38);
	//L19
	man->CreateNtuple("Scoring_L19", "Scoring_L19");
	man->CreateNtupleDColumn("fEdep_L19");
	man->FinishNtuple(39);
	//L20
	man->CreateNtuple("Scoring_L20", "Scoring_L20");
	man->CreateNtupleDColumn("fEdep_L20");
	man->FinishNtuple(40);
}

void MyRunAction::EndOfRunAction(const G4Run*)
{
	G4AnalysisManager *man = G4AnalysisManager::Instance();
	
	man->Write();
	man->CloseFile();
}
