#include "stepping.hh"

MySteppingAction::MySteppingAction(MyEventAction *eventAction)
{
	fEventAction = eventAction;
}

MySteppingAction::~MySteppingAction()
{}

void MySteppingAction::UserSteppingAction(const G4Step *step)
{
	//Подключаем логический объем в котором будут считаться потери энергии
	G4LogicalVolume *volume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetLogicalVolume();
	
	const MyDetectorConstruction *detectorConstruction = static_cast<const MyDetectorConstruction*> (G4RunManager::GetRunManager()->GetUserDetectorConstruction());
	
	//Логический объем главного стрипа
	G4LogicalVolume *fScoringVolume = detectorConstruction->GetScoringVolume();
	//Логический объем стрипа справа от главного
	//R1
	G4LogicalVolume *fScoringVolume_R1 = detectorConstruction->GetScoringVolume_R1();
	//R2
	G4LogicalVolume *fScoringVolume_R2 = detectorConstruction->GetScoringVolume_R2();
	//R3
	G4LogicalVolume *fScoringVolume_R3 = detectorConstruction->GetScoringVolume_R3();
	//R4
	G4LogicalVolume *fScoringVolume_R4 = detectorConstruction->GetScoringVolume_R4();
	//R5
	G4LogicalVolume *fScoringVolume_R5 = detectorConstruction->GetScoringVolume_R5();
	//R6
	G4LogicalVolume *fScoringVolume_R6 = detectorConstruction->GetScoringVolume_R6();
	//R7
	G4LogicalVolume *fScoringVolume_R7 = detectorConstruction->GetScoringVolume_R7();
	//R8
	G4LogicalVolume *fScoringVolume_R8 = detectorConstruction->GetScoringVolume_R8();
	//R9
	G4LogicalVolume *fScoringVolume_R9 = detectorConstruction->GetScoringVolume_R9();
	//R10
	G4LogicalVolume *fScoringVolume_R10 = detectorConstruction->GetScoringVolume_R10();
	//R11
	G4LogicalVolume *fScoringVolume_R11 = detectorConstruction->GetScoringVolume_R11();
	//R12
	G4LogicalVolume *fScoringVolume_R12 = detectorConstruction->GetScoringVolume_R12();
	//R13
	G4LogicalVolume *fScoringVolume_R13 = detectorConstruction->GetScoringVolume_R13();
	//R14
	G4LogicalVolume *fScoringVolume_R14 = detectorConstruction->GetScoringVolume_R14();
	//R15
	G4LogicalVolume *fScoringVolume_R15 = detectorConstruction->GetScoringVolume_R15();
	//R16
	G4LogicalVolume *fScoringVolume_R16 = detectorConstruction->GetScoringVolume_R16();
	//R17
	G4LogicalVolume *fScoringVolume_R17 = detectorConstruction->GetScoringVolume_R17();
	//R18
	G4LogicalVolume *fScoringVolume_R18 = detectorConstruction->GetScoringVolume_R18();
	//R19
	G4LogicalVolume *fScoringVolume_R19 = detectorConstruction->GetScoringVolume_R19();
	//R20
	G4LogicalVolume *fScoringVolume_R20 = detectorConstruction->GetScoringVolume_R20();
	
	//Логический объем стрипа слева от главного
	//L1
	G4LogicalVolume *fScoringVolume_L1 = detectorConstruction->GetScoringVolume_L1();
	//L2
	G4LogicalVolume *fScoringVolume_L2 = detectorConstruction->GetScoringVolume_L2();
	//L3
	G4LogicalVolume *fScoringVolume_L3 = detectorConstruction->GetScoringVolume_L3();
	//L4
	G4LogicalVolume *fScoringVolume_L4 = detectorConstruction->GetScoringVolume_L4();
	//L5
	G4LogicalVolume *fScoringVolume_L5 = detectorConstruction->GetScoringVolume_L5();
	//L6
	G4LogicalVolume *fScoringVolume_L6 = detectorConstruction->GetScoringVolume_L6();
	//L7
	G4LogicalVolume *fScoringVolume_L7 = detectorConstruction->GetScoringVolume_L7();
	//L8
	G4LogicalVolume *fScoringVolume_L8 = detectorConstruction->GetScoringVolume_L8();
	//L9
	G4LogicalVolume *fScoringVolume_L9 = detectorConstruction->GetScoringVolume_L9();
	//L10
	G4LogicalVolume *fScoringVolume_L10 = detectorConstruction->GetScoringVolume_L10();
	//L11
	G4LogicalVolume *fScoringVolume_L11 = detectorConstruction->GetScoringVolume_L11();
	//L12
	G4LogicalVolume *fScoringVolume_L12 = detectorConstruction->GetScoringVolume_L12();
	//L13
	G4LogicalVolume *fScoringVolume_L13 = detectorConstruction->GetScoringVolume_L13();
	//L14
	G4LogicalVolume *fScoringVolume_L14 = detectorConstruction->GetScoringVolume_L14();
	//L15
	G4LogicalVolume *fScoringVolume_L15 = detectorConstruction->GetScoringVolume_L15();
	//L16
	G4LogicalVolume *fScoringVolume_L16 = detectorConstruction->GetScoringVolume_L16();
	//L17
	G4LogicalVolume *fScoringVolume_L17 = detectorConstruction->GetScoringVolume_L17();
	//L18
	G4LogicalVolume *fScoringVolume_L18 = detectorConstruction->GetScoringVolume_L18();
	//L19
	G4LogicalVolume *fScoringVolume_L19 = detectorConstruction->GetScoringVolume_L19();
	//L20
	G4LogicalVolume *fScoringVolume_L20 = detectorConstruction->GetScoringVolume_L20();

	if(volume == fScoringVolume)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep(edep);
	}

	if(volume == fScoringVolume_R1)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R1(edep);
	}
	
	if(volume == fScoringVolume_R2)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R2(edep);
	}
	
	if(volume == fScoringVolume_R3)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R3(edep);
	}
	
	if(volume == fScoringVolume_R4)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R4(edep);
	}
	
	if(volume == fScoringVolume_R5)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R5(edep);
	}
	
	if(volume == fScoringVolume_R6)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R6(edep);
	}
	
	if(volume == fScoringVolume_R7)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R7(edep);
	}
	
	if(volume == fScoringVolume_R8)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R8(edep);
	}
	
	if(volume == fScoringVolume_R9)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R9(edep);
	}
	
	if(volume == fScoringVolume_R10)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R10(edep);
	}
	
	if(volume == fScoringVolume_R11)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R11(edep);
	}
	
	if(volume == fScoringVolume_R12)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R12(edep);
	}
	
	if(volume == fScoringVolume_R13)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R13(edep);
	}
	
	if(volume == fScoringVolume_R14)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R14(edep);
	}
	
	if(volume == fScoringVolume_R15)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R15(edep);
	}
	
	if(volume == fScoringVolume_R16)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R16(edep);
	}
	
	if(volume == fScoringVolume_R17)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R17(edep);
	}
	
	if(volume == fScoringVolume_R18)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R18(edep);
	}
	
	if(volume == fScoringVolume_R19)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R19(edep);
	}
	
	if(volume == fScoringVolume_R20)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_R20(edep);
	}
	
	
	//Стрипы слева от главного
	if(volume == fScoringVolume_L1)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L1(edep);
	}
	
	if(volume == fScoringVolume_L2)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L2(edep);
	}
	
	if(volume == fScoringVolume_L3)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L3(edep);
	}
	
	if(volume == fScoringVolume_L4)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L4(edep);
	}
	
	if(volume == fScoringVolume_L5)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L5(edep);
	}
	
	if(volume == fScoringVolume_L6)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L6(edep);
	}
	
	if(volume == fScoringVolume_L7)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L7(edep);
	}
	
	if(volume == fScoringVolume_L8)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L8(edep);
	}
	
	if(volume == fScoringVolume_L9)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L9(edep);
	}
	
	if(volume == fScoringVolume_L10)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L10(edep);
	}
	
	if(volume == fScoringVolume_L11)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L11(edep);
	}
	
	if(volume == fScoringVolume_L12)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L12(edep);
	}
	
	if(volume == fScoringVolume_L13)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L13(edep);
	}
	
	if(volume == fScoringVolume_L14)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L14(edep);
	}
	
	if(volume == fScoringVolume_L15)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L15(edep);
	}
	
	if(volume == fScoringVolume_L16)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L16(edep);
	}
	
	if(volume == fScoringVolume_L17)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L17(edep);
	}
	
	if(volume == fScoringVolume_L18)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L18(edep);
	}
	
	if(volume == fScoringVolume_L19)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L19(edep);
	}
	
	if(volume == fScoringVolume_L20)
	{
		G4double edep = step->GetTotalEnergyDeposit();
		fEventAction->AddEdep_L20(edep);
	}
	
		
	return;
}
