#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"	//Подключаем систему единиц, имеющуюся в G4

#include "detector.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public:
	MyDetectorConstruction();
	~MyDetectorConstruction();
	
	//Логический объем для потерб энергии
	G4LogicalVolume *GetScoringVolume() const { return fScoringVolume; }
	
	
	//Логический объем для потерб энергии Стрипа справа
	//R1
	G4LogicalVolume *GetScoringVolume_R1() const { return fScoringVolume_R1; }
	//R2
	G4LogicalVolume *GetScoringVolume_R2() const { return fScoringVolume_R2; }
	//R3
	G4LogicalVolume *GetScoringVolume_R3() const { return fScoringVolume_R3; }
	//R4
	G4LogicalVolume *GetScoringVolume_R4() const { return fScoringVolume_R4; }
	//R5
	G4LogicalVolume *GetScoringVolume_R5() const { return fScoringVolume_R5; }
	//Логический объем для потерб энергии Стрипа слева
	//L1
	G4LogicalVolume *GetScoringVolume_L1() const { return fScoringVolume_L1; }
	//L2
	G4LogicalVolume *GetScoringVolume_L2() const { return fScoringVolume_L2; }
	//L3
	G4LogicalVolume *GetScoringVolume_L3() const { return fScoringVolume_L3; }
	//L4
	G4LogicalVolume *GetScoringVolume_L4() const { return fScoringVolume_L4; }
	//L5
	G4LogicalVolume *GetScoringVolume_L5() const { return fScoringVolume_L5; }
	
	virtual G4VPhysicalVolume *Construct();
	
private:
	G4LogicalVolume *logicDetector;
	
	G4LogicalVolume *logicStrip;
	
	virtual void ConstructSDandField();
	
	//Логический объем для потерб энергии
	G4LogicalVolume *fScoringVolume;
	//Стрипы справа от главного
	//R1
	G4LogicalVolume *fScoringVolume_R1;
	//R2
	G4LogicalVolume *fScoringVolume_R2;
	//R3
	G4LogicalVolume *fScoringVolume_R3;
	//R4
	G4LogicalVolume *fScoringVolume_R4;
	//R5
	G4LogicalVolume *fScoringVolume_R5;
	//Стрипы слева от главного
	//L1
	G4LogicalVolume *fScoringVolume_L1;
	//L2
	G4LogicalVolume *fScoringVolume_L2;
	//L3
	G4LogicalVolume *fScoringVolume_L3;
	//L4
	G4LogicalVolume *fScoringVolume_L4;
	//L5
	G4LogicalVolume *fScoringVolume_L5;
	
};

#endif
