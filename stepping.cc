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
		
	return;
}
