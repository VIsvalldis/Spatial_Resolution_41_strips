#include "construction.hh"

MyDetectorConstruction::MyDetectorConstruction()
{}

MyDetectorConstruction::~MyDetectorConstruction()
{}

G4VPhysicalVolume *MyDetectorConstruction::Construct()
{
	G4NistManager *nist = G4NistManager::Instance();
	
	G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");
	G4Material *crystall_Mat = nist->FindOrBuildMaterial("G4_Si");
	
	
	//Мировой объем
	G4Box *solidWorld = new G4Box("solidWorld", 0.008*m, 0.008*m, 0.008*m);
	G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");
	G4VPhysicalVolume *physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "physWorld", 0, false, 0, true);
	
	
	//Это стрип, в котором считается энерговыделение
	G4Box *solidCrystall = new G4Box("solidCrystall", 0.025, 1.5, 0.16);
	G4LogicalVolume *logicCrystall = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall");
	G4VPhysicalVolume *physCrystall = new G4PVPlacement(0, G4ThreeVector(0.025, 0., 0.), logicCrystall, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	
	
	
	//Еще стрипы с которых будет считываться энерговыделение
	//R1
	G4LogicalVolume *logicCrystall_R1 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R1");
	G4VPhysicalVolume *physCrystall_R1 = new G4PVPlacement(0, G4ThreeVector(0.075, 0., 0.), logicCrystall_R1, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R2
	G4LogicalVolume *logicCrystall_R2 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R2");
	G4VPhysicalVolume *physCrystall_R2 = new G4PVPlacement(0, G4ThreeVector(0.125, 0., 0.), logicCrystall_R2, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R3
	G4LogicalVolume *logicCrystall_R3 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R3");
	G4VPhysicalVolume *physCrystall_R3 = new G4PVPlacement(0, G4ThreeVector(0.175, 0., 0.), logicCrystall_R3, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R4
	G4LogicalVolume *logicCrystall_R4 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R4");
	G4VPhysicalVolume *physCrystall_R4 = new G4PVPlacement(0, G4ThreeVector(0.225, 0., 0.), logicCrystall_R4, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R5
	G4LogicalVolume *logicCrystall_R5 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R5");
	G4VPhysicalVolume *physCrystall_R5 = new G4PVPlacement(0, G4ThreeVector(0.275, 0., 0.), logicCrystall_R5, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//Стрипы слева от главного !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//L1
	G4LogicalVolume *logicCrystall_L1 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L1");
	G4VPhysicalVolume *physCrystall_L1 = new G4PVPlacement(0, G4ThreeVector(-0.025, 0., 0.), logicCrystall_L1, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L2
	G4LogicalVolume *logicCrystall_L2 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L2");
	G4VPhysicalVolume *physCrystall_L2 = new G4PVPlacement(0, G4ThreeVector(-0.075, 0., 0.), logicCrystall_L2, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L3
	G4LogicalVolume *logicCrystall_L3 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L3");
	G4VPhysicalVolume *physCrystall_L3 = new G4PVPlacement(0, G4ThreeVector(-0.125, 0., 0.), logicCrystall_L3, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L4
	G4LogicalVolume *logicCrystall_L4 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L4");
	G4VPhysicalVolume *physCrystall_L4 = new G4PVPlacement(0, G4ThreeVector(-0.175, 0., 0.), logicCrystall_L4, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L5
	G4LogicalVolume *logicCrystall_L5 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L5");
	G4VPhysicalVolume *physCrystall_L5 = new G4PVPlacement(0, G4ThreeVector(-0.225, 0., 0.), logicCrystall_L5, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	
	
	//Новый объем с которого считывается энерговыделение
	fScoringVolume_R1 = logicCrystall_R1;
	fScoringVolume_R2 = logicCrystall_R2;
	fScoringVolume_R3 = logicCrystall_R3;
	fScoringVolume_R4 = logicCrystall_R4;
	fScoringVolume_R5 = logicCrystall_R5;
	//Стрипы слева от главного
	fScoringVolume_L1 = logicCrystall_L1;
	fScoringVolume_L2 = logicCrystall_L2;
	fScoringVolume_L3 = logicCrystall_L3;
	fScoringVolume_L4 = logicCrystall_L4;
	fScoringVolume_L5 = logicCrystall_L5;
	
	
	
	//Это кремниевые стрипы, с которых НЕ будет счиаться энерговыделение
	G4Box *solidStrip = new G4Box("solidStrip", 0.025, 1.5, 0.16);
	logicStrip = new G4LogicalVolume(solidStrip, crystall_Mat, "logicalStrip");
	
	//Тут распологаем эти стрипы в ряд, пропуская один стрип (solidCrystall) в котором будет считываться энерговыделение
	
	for(G4int i = 0; i < 100; i++)
	{
		G4cout << i << G4endl;
		if(i == 50 or i == 51 or i == 52 or i == 53 or i == 54 or i == 55 or i == 49 or i == 48 or i == 47 or i == 46 or i == 45)
		{
			continue;
		}
		G4VPhysicalVolume *physStrip = new G4PVPlacement(0, G4ThreeVector(-2.5 + (i + 0.5)/20, 0., 0.), logicStrip, "physStrip", logicWorld, false, i*100 - 11, true);
	
	}
	
	
	//Обозначаем логический объем, в котором будет считаться энерговыделение (scoring) Главного стрипа
	fScoringVolume = logicCrystall;
	
	
	return physWorld;
	
}


void MyDetectorConstruction::ConstructSDandField()
{
	//MySensitiveDetector *sensDet = new MySensitiveDetector("SensitiveDetector");
	
	//logicStrip->SetSensitiveDetector(sensDet);
}
