#ifndef EVENT_HH
#define EVENT_HH

#include "G4UserEventAction.hh"
#include "G4Event.hh"

#include "G4AnalysisManager.hh"

#include "run.hh"

class MyEventAction : public G4UserEventAction
{
public:
	MyEventAction(MyRunAction*);
	~MyEventAction();
	
	virtual void BeginOfEventAction(const G4Event*);
	virtual void EndOfEventAction(const G4Event*);
	
	void AddEdep(G4double edep) { fEdep += edep; }
	//Стрипы справа от главного
	void AddEdep_R1(G4double edep) { fEdep_R1 += edep; }
	void AddEdep_R2(G4double edep) { fEdep_R2 += edep; }
	void AddEdep_R3(G4double edep) { fEdep_R3 += edep; }
	void AddEdep_R4(G4double edep) { fEdep_R4 += edep; }
	void AddEdep_R5(G4double edep) { fEdep_R5 += edep; }
	//Стрипы слева от главного
	void AddEdep_L1(G4double edep) { fEdep_L1 += edep; }
	void AddEdep_L2(G4double edep) { fEdep_L2 += edep; }
	void AddEdep_L3(G4double edep) { fEdep_L3 += edep; }
	void AddEdep_L4(G4double edep) { fEdep_L4 += edep; }
	void AddEdep_L5(G4double edep) { fEdep_L5 += edep; }
	
private:
	G4double fEdep;
	//Стрипы справа от главного
	G4double fEdep_R1;
	G4double fEdep_R2;
	G4double fEdep_R3;
	G4double fEdep_R4;
	G4double fEdep_R5;
	//Стрипы слева от главного
	G4double fEdep_L1;
	G4double fEdep_L2;
	G4double fEdep_L3;
	G4double fEdep_L4;
	G4double fEdep_L5;
	
};

#endif
