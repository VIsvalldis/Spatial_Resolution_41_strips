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
	void AddEdep_R6(G4double edep) { fEdep_R6 += edep; }
	void AddEdep_R7(G4double edep) { fEdep_R7 += edep; }
	void AddEdep_R8(G4double edep) { fEdep_R8 += edep; }
	void AddEdep_R9(G4double edep) { fEdep_R9 += edep; }
	void AddEdep_R10(G4double edep) { fEdep_R10 += edep; }
	void AddEdep_R11(G4double edep) { fEdep_R11 += edep; }
	void AddEdep_R12(G4double edep) { fEdep_R12 += edep; }
	void AddEdep_R13(G4double edep) { fEdep_R13 += edep; }
	void AddEdep_R14(G4double edep) { fEdep_R14 += edep; }
	void AddEdep_R15(G4double edep) { fEdep_R15 += edep; }
	void AddEdep_R16(G4double edep) { fEdep_R16 += edep; }
	void AddEdep_R17(G4double edep) { fEdep_R17 += edep; }
	void AddEdep_R18(G4double edep) { fEdep_R18 += edep; }
	void AddEdep_R19(G4double edep) { fEdep_R19 += edep; }
	void AddEdep_R20(G4double edep) { fEdep_R20 += edep; }
	
	//Стрипы слева от главного
	void AddEdep_L1(G4double edep) { fEdep_L1 += edep; }
	void AddEdep_L2(G4double edep) { fEdep_L2 += edep; }
	void AddEdep_L3(G4double edep) { fEdep_L3 += edep; }
	void AddEdep_L4(G4double edep) { fEdep_L4 += edep; }
	void AddEdep_L5(G4double edep) { fEdep_L5 += edep; }
	void AddEdep_L6(G4double edep) { fEdep_L6 += edep; }
	void AddEdep_L7(G4double edep) { fEdep_L7 += edep; }
	void AddEdep_L8(G4double edep) { fEdep_L8 += edep; }
	void AddEdep_L9(G4double edep) { fEdep_L9 += edep; }
	void AddEdep_L10(G4double edep) { fEdep_L10 += edep; }
	void AddEdep_L11(G4double edep) { fEdep_L11 += edep; }
	void AddEdep_L12(G4double edep) { fEdep_L12 += edep; }
	void AddEdep_L13(G4double edep) { fEdep_L13 += edep; }
	void AddEdep_L14(G4double edep) { fEdep_L14 += edep; }
	void AddEdep_L15(G4double edep) { fEdep_L15 += edep; }
	void AddEdep_L16(G4double edep) { fEdep_L16 += edep; }
	void AddEdep_L17(G4double edep) { fEdep_L17 += edep; }
	void AddEdep_L18(G4double edep) { fEdep_L18 += edep; }
	void AddEdep_L19(G4double edep) { fEdep_L19 += edep; }
	void AddEdep_L20(G4double edep) { fEdep_L20 += edep; }
	
private:
	G4double fEdep;
	//Стрипы справа от главного
	G4double fEdep_R1;
	G4double fEdep_R2;
	G4double fEdep_R3;
	G4double fEdep_R4;
	G4double fEdep_R5;
	G4double fEdep_R6;
	G4double fEdep_R7;
	G4double fEdep_R8;
	G4double fEdep_R9;
	G4double fEdep_R10;
	G4double fEdep_R11;
	G4double fEdep_R12;
	G4double fEdep_R13;
	G4double fEdep_R14;
	G4double fEdep_R15;
	G4double fEdep_R16;
	G4double fEdep_R17;
	G4double fEdep_R18;
	G4double fEdep_R19;
	G4double fEdep_R20;
	
	//Стрипы слева от главного
	G4double fEdep_L1;
	G4double fEdep_L2;
	G4double fEdep_L3;
	G4double fEdep_L4;
	G4double fEdep_L5;
	G4double fEdep_L6;
	G4double fEdep_L7;
	G4double fEdep_L8;
	G4double fEdep_L9;
	G4double fEdep_L10;
	G4double fEdep_L11;
	G4double fEdep_L12;
	G4double fEdep_L13;
	G4double fEdep_L14;
	G4double fEdep_L15;
	G4double fEdep_L16;
	G4double fEdep_L17;
	G4double fEdep_L18;
	G4double fEdep_L19;
	G4double fEdep_L20;
	
};

#endif
