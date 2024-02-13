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
	//Стрипы слева от главного
	//L1
	man->CreateNtuple("Scoring_L1", "Scoring_L1");
	man->CreateNtupleDColumn("fEdep_L1");
	man->FinishNtuple(6);
	//L2
	man->CreateNtuple("Scoring_L2", "Scoring_L2");
	man->CreateNtupleDColumn("fEdep_L2");
	man->FinishNtuple(7);
	//L3
	man->CreateNtuple("Scoring_L3", "Scoring_L3");
	man->CreateNtupleDColumn("fEdep_L3");
	man->FinishNtuple(8);
	//L4
	man->CreateNtuple("Scoring_L4", "Scoring_L4");
	man->CreateNtupleDColumn("fEdep_L4");
	man->FinishNtuple(9);
	//L5
	man->CreateNtuple("Scoring_L5", "Scoring_L5");
	man->CreateNtupleDColumn("fEdep_L5");
	man->FinishNtuple(10);
}

void MyRunAction::EndOfRunAction(const G4Run*)
{
	G4AnalysisManager *man = G4AnalysisManager::Instance();
	
	man->Write();
	man->CloseFile();
}
