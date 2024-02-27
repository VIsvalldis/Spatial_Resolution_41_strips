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
	//R6
	G4LogicalVolume *GetScoringVolume_R6() const { return fScoringVolume_R6; }
	//R7
	G4LogicalVolume *GetScoringVolume_R7() const { return fScoringVolume_R7; }
	//R8
	G4LogicalVolume *GetScoringVolume_R8() const { return fScoringVolume_R8; }
	//R9
	G4LogicalVolume *GetScoringVolume_R9() const { return fScoringVolume_R9; }
	//R10
	G4LogicalVolume *GetScoringVolume_R10() const { return fScoringVolume_R10; }
	//R11
	G4LogicalVolume *GetScoringVolume_R11() const { return fScoringVolume_R11; }
	//R12
	G4LogicalVolume *GetScoringVolume_R12() const { return fScoringVolume_R12; }
	//R13
	G4LogicalVolume *GetScoringVolume_R13() const { return fScoringVolume_R13; }
	//R14
	G4LogicalVolume *GetScoringVolume_R14() const { return fScoringVolume_R14; }
	//R15
	G4LogicalVolume *GetScoringVolume_R15() const { return fScoringVolume_R15; }
	//R16
	G4LogicalVolume *GetScoringVolume_R16() const { return fScoringVolume_R16; }
	//R17
	G4LogicalVolume *GetScoringVolume_R17() const { return fScoringVolume_R17; }
	//R18
	G4LogicalVolume *GetScoringVolume_R18() const { return fScoringVolume_R18; }
	//R19
	G4LogicalVolume *GetScoringVolume_R19() const { return fScoringVolume_R19; }
	//R20
	G4LogicalVolume *GetScoringVolume_R20() const { return fScoringVolume_R20; }
	
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
	//L6
	G4LogicalVolume *GetScoringVolume_L6() const { return fScoringVolume_L6; }
	//L7
	G4LogicalVolume *GetScoringVolume_L7() const { return fScoringVolume_L7; }
	//L8
	G4LogicalVolume *GetScoringVolume_L8() const { return fScoringVolume_L8; }
	//L9
	G4LogicalVolume *GetScoringVolume_L9() const { return fScoringVolume_L9; }
	//L10
	G4LogicalVolume *GetScoringVolume_L10() const { return fScoringVolume_L10; }
	//L11
	G4LogicalVolume *GetScoringVolume_L11() const { return fScoringVolume_L11; }
	//L12
	G4LogicalVolume *GetScoringVolume_L12() const { return fScoringVolume_L12; }
	//L13
	G4LogicalVolume *GetScoringVolume_L13() const { return fScoringVolume_L13; }
	//L14
	G4LogicalVolume *GetScoringVolume_L14() const { return fScoringVolume_L14; }
	//L15
	G4LogicalVolume *GetScoringVolume_L15() const { return fScoringVolume_L15; }
	//L16
	G4LogicalVolume *GetScoringVolume_L16() const { return fScoringVolume_L16; }
	//L17
	G4LogicalVolume *GetScoringVolume_L17() const { return fScoringVolume_L17; }
	//L18
	G4LogicalVolume *GetScoringVolume_L18() const { return fScoringVolume_L18; }
	//L19
	G4LogicalVolume *GetScoringVolume_L19() const { return fScoringVolume_L19; }
	//L20
	G4LogicalVolume *GetScoringVolume_L20() const { return fScoringVolume_L20; }
	
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
	//R6
	G4LogicalVolume *fScoringVolume_R6;
	//R7
	G4LogicalVolume *fScoringVolume_R7;
	//R8
	G4LogicalVolume *fScoringVolume_R8;
	//R9
	G4LogicalVolume *fScoringVolume_R9;
	//R10
	G4LogicalVolume *fScoringVolume_R10;
	//R11
	G4LogicalVolume *fScoringVolume_R11;
	//R12
	G4LogicalVolume *fScoringVolume_R12;
	//R13
	G4LogicalVolume *fScoringVolume_R13;
	//R14
	G4LogicalVolume *fScoringVolume_R14;
	//R15
	G4LogicalVolume *fScoringVolume_R15;
	//R16
	G4LogicalVolume *fScoringVolume_R16;
	//R17
	G4LogicalVolume *fScoringVolume_R17;
	//R18
	G4LogicalVolume *fScoringVolume_R18;
	//R19
	G4LogicalVolume *fScoringVolume_R19;
	//R20
	G4LogicalVolume *fScoringVolume_R20;
	
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
	//L6
	G4LogicalVolume *fScoringVolume_L6;
	//L7
	G4LogicalVolume *fScoringVolume_L7;
	//L8
	G4LogicalVolume *fScoringVolume_L8;
	//L9
	G4LogicalVolume *fScoringVolume_L9;
	//L10
	G4LogicalVolume *fScoringVolume_L10;
	//L11
	G4LogicalVolume *fScoringVolume_L11;
	//L12
	G4LogicalVolume *fScoringVolume_L12;
	//L13
	G4LogicalVolume *fScoringVolume_L13;
	//L14
	G4LogicalVolume *fScoringVolume_L14;
	//L15
	G4LogicalVolume *fScoringVolume_L15;
	//L16
	G4LogicalVolume *fScoringVolume_L16;
	//L17
	G4LogicalVolume *fScoringVolume_L17;
	//L18
	G4LogicalVolume *fScoringVolume_L18;
	//L19
	G4LogicalVolume *fScoringVolume_L19;
	//L20
	G4LogicalVolume *fScoringVolume_L20;
	
};

#endif
