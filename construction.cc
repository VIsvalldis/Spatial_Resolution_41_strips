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
	G4Box *solidWorld = new G4Box("solidWorld", 0.003*m, 0.003*m, 0.003*m);
	G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");
	G4VPhysicalVolume *physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "physWorld", 0, false, 0, true);
	
	
	//Это главный стрип, в котором считается энерговыделение
	G4Box *solidCrystall = new G4Box("solidCrystall", 0.0025, 1.5, 0.16);
	G4LogicalVolume *logicCrystall = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall");
	G4VPhysicalVolume *physCrystall = new G4PVPlacement(0, G4ThreeVector(0.0025, 0., 0.), logicCrystall, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	
	
	//Еще стрипы с которых будет считываться энерговыделение
	//R1
	G4LogicalVolume *logicCrystall_R1 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R1");
	G4VPhysicalVolume *physCrystall_R1 = new G4PVPlacement(0, G4ThreeVector(0.0075, 0., 0.), logicCrystall_R1, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R2
	G4LogicalVolume *logicCrystall_R2 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R2");
	G4VPhysicalVolume *physCrystall_R2 = new G4PVPlacement(0, G4ThreeVector(0.0125, 0., 0.), logicCrystall_R2, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R3
	G4LogicalVolume *logicCrystall_R3 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R3");
	G4VPhysicalVolume *physCrystall_R3 = new G4PVPlacement(0, G4ThreeVector(0.0175, 0., 0.), logicCrystall_R3, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R4
	G4LogicalVolume *logicCrystall_R4 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R4");
	G4VPhysicalVolume *physCrystall_R4 = new G4PVPlacement(0, G4ThreeVector(0.0225, 0., 0.), logicCrystall_R4, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R5
	G4LogicalVolume *logicCrystall_R5 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R5");
	G4VPhysicalVolume *physCrystall_R5 = new G4PVPlacement(0, G4ThreeVector(0.0275, 0., 0.), logicCrystall_R5, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R6
	G4LogicalVolume *logicCrystall_R6 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R6");
	G4VPhysicalVolume *physCrystall_R6 = new G4PVPlacement(0, G4ThreeVector(0.0325, 0., 0.), logicCrystall_R6, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R7
	G4LogicalVolume *logicCrystall_R7 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R7");
	G4VPhysicalVolume *physCrystall_R7 = new G4PVPlacement(0, G4ThreeVector(0.0375, 0., 0.), logicCrystall_R7, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R8
	G4LogicalVolume *logicCrystall_R8 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R8");
	G4VPhysicalVolume *physCrystall_R8 = new G4PVPlacement(0, G4ThreeVector(0.0425, 0., 0.), logicCrystall_R8, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R9
	G4LogicalVolume *logicCrystall_R9 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R9");
	G4VPhysicalVolume *physCrystall_R9 = new G4PVPlacement(0, G4ThreeVector(0.0475, 0., 0.), logicCrystall_R9, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R10
	G4LogicalVolume *logicCrystall_R10 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R10");
	G4VPhysicalVolume *physCrystall_R10 = new G4PVPlacement(0, G4ThreeVector(0.0525, 0., 0.), logicCrystall_R10, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R11
	G4LogicalVolume *logicCrystall_R11 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R11");
	G4VPhysicalVolume *physCrystall_R11 = new G4PVPlacement(0, G4ThreeVector(0.0575, 0., 0.), logicCrystall_R11, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R12
	G4LogicalVolume *logicCrystall_R12 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R12");
	G4VPhysicalVolume *physCrystall_R12 = new G4PVPlacement(0, G4ThreeVector(0.0625, 0., 0.), logicCrystall_R12, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R13
	G4LogicalVolume *logicCrystall_R13 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R13");
	G4VPhysicalVolume *physCrystall_R13 = new G4PVPlacement(0, G4ThreeVector(0.0675, 0., 0.), logicCrystall_R13, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R14
	G4LogicalVolume *logicCrystall_R14 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R14");
	G4VPhysicalVolume *physCrystall_R14 = new G4PVPlacement(0, G4ThreeVector(0.0725, 0., 0.), logicCrystall_R14, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R15
	G4LogicalVolume *logicCrystall_R15 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R15");
	G4VPhysicalVolume *physCrystall_R15 = new G4PVPlacement(0, G4ThreeVector(0.0775, 0., 0.), logicCrystall_R15, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R16
	G4LogicalVolume *logicCrystall_R16 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R16");
	G4VPhysicalVolume *physCrystall_R16 = new G4PVPlacement(0, G4ThreeVector(0.0825, 0., 0.), logicCrystall_R16, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R17
	G4LogicalVolume *logicCrystall_R17 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R17");
	G4VPhysicalVolume *physCrystall_R17 = new G4PVPlacement(0, G4ThreeVector(0.0875, 0., 0.), logicCrystall_R17, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R18
	G4LogicalVolume *logicCrystall_R18 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R18");
	G4VPhysicalVolume *physCrystall_R18 = new G4PVPlacement(0, G4ThreeVector(0.0925, 0., 0.), logicCrystall_R18, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R19
	G4LogicalVolume *logicCrystall_R19 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R19");
	G4VPhysicalVolume *physCrystall_R19 = new G4PVPlacement(0, G4ThreeVector(0.0975, 0., 0.), logicCrystall_R19, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//R20
	G4LogicalVolume *logicCrystall_R20 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_R20");
	G4VPhysicalVolume *physCrystall_R20 = new G4PVPlacement(0, G4ThreeVector(0.1025, 0., 0.), logicCrystall_R20, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	
	
	//Стрипы слева от главного !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//L1
	G4LogicalVolume *logicCrystall_L1 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L1");
	G4VPhysicalVolume *physCrystall_L1 = new G4PVPlacement(0, G4ThreeVector(-0.0025, 0., 0.), logicCrystall_L1, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L2
	G4LogicalVolume *logicCrystall_L2 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L2");
	G4VPhysicalVolume *physCrystall_L2 = new G4PVPlacement(0, G4ThreeVector(-0.0075, 0., 0.), logicCrystall_L2, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L3
	G4LogicalVolume *logicCrystall_L3 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L3");
	G4VPhysicalVolume *physCrystall_L3 = new G4PVPlacement(0, G4ThreeVector(-0.0125, 0., 0.), logicCrystall_L3, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L4
	G4LogicalVolume *logicCrystall_L4 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L4");
	G4VPhysicalVolume *physCrystall_L4 = new G4PVPlacement(0, G4ThreeVector(-0.0175, 0., 0.), logicCrystall_L4, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L5
	G4LogicalVolume *logicCrystall_L5 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L5");
	G4VPhysicalVolume *physCrystall_L5 = new G4PVPlacement(0, G4ThreeVector(-0.0225, 0., 0.), logicCrystall_L5, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L6
	G4LogicalVolume *logicCrystall_L6 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L6");
	G4VPhysicalVolume *physCrystall_L6 = new G4PVPlacement(0, G4ThreeVector(-0.0275, 0., 0.), logicCrystall_L6, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L7
	G4LogicalVolume *logicCrystall_L7 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L7");
	G4VPhysicalVolume *physCrystall_L7 = new G4PVPlacement(0, G4ThreeVector(-0.0325, 0., 0.), logicCrystall_L7, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L8
	G4LogicalVolume *logicCrystall_L8 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L8");
	G4VPhysicalVolume *physCrystall_L8 = new G4PVPlacement(0, G4ThreeVector(-0.0375, 0., 0.), logicCrystall_L8, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L9
	G4LogicalVolume *logicCrystall_L9 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L9");
	G4VPhysicalVolume *physCrystall_L9 = new G4PVPlacement(0, G4ThreeVector(-0.0425, 0., 0.), logicCrystall_L9, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L10
	G4LogicalVolume *logicCrystall_L10 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L10");
	G4VPhysicalVolume *physCrystall_L10 = new G4PVPlacement(0, G4ThreeVector(-0.0475, 0., 0.), logicCrystall_L10, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L11
	G4LogicalVolume *logicCrystall_L11 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L11");
	G4VPhysicalVolume *physCrystall_L11 = new G4PVPlacement(0, G4ThreeVector(-0.0525, 0., 0.), logicCrystall_L11, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L12
	G4LogicalVolume *logicCrystall_L12 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L12");
	G4VPhysicalVolume *physCrystall_L12 = new G4PVPlacement(0, G4ThreeVector(-0.0575, 0., 0.), logicCrystall_L12, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L13
	G4LogicalVolume *logicCrystall_L13 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L13");
	G4VPhysicalVolume *physCrystall_L13 = new G4PVPlacement(0, G4ThreeVector(-0.0625, 0., 0.), logicCrystall_L13, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L14
	G4LogicalVolume *logicCrystall_L14 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L14");
	G4VPhysicalVolume *physCrystall_L14 = new G4PVPlacement(0, G4ThreeVector(-0.0675, 0., 0.), logicCrystall_L14, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L15
	G4LogicalVolume *logicCrystall_L15 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L15");
	G4VPhysicalVolume *physCrystall_L15 = new G4PVPlacement(0, G4ThreeVector(-0.0725, 0., 0.), logicCrystall_L15, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L16
	G4LogicalVolume *logicCrystall_L16 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L16");
	G4VPhysicalVolume *physCrystall_L16 = new G4PVPlacement(0, G4ThreeVector(-0.0775, 0., 0.), logicCrystall_L16, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L17
	G4LogicalVolume *logicCrystall_L17 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L17");
	G4VPhysicalVolume *physCrystall_L17 = new G4PVPlacement(0, G4ThreeVector(-0.0825, 0., 0.), logicCrystall_L17, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L18
	G4LogicalVolume *logicCrystall_L18 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L18");
	G4VPhysicalVolume *physCrystall_L18 = new G4PVPlacement(0, G4ThreeVector(-0.0875, 0., 0.), logicCrystall_L18, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L19
	G4LogicalVolume *logicCrystall_L19 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L19");
	G4VPhysicalVolume *physCrystall_L19 = new G4PVPlacement(0, G4ThreeVector(-0.0925, 0., 0.), logicCrystall_L19, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	//L20
	G4LogicalVolume *logicCrystall_L20 = new G4LogicalVolume(solidCrystall, crystall_Mat, "logicalCrystall_L20");
	G4VPhysicalVolume *physCrystall_L20 = new G4PVPlacement(0, G4ThreeVector(-0.0975, 0., 0.), logicCrystall_L20, "physCrystall", logicWorld, false, 0, true);  //Положение стрипа "В ряд"
	
	
	//Новый объем с которого считывается энерговыделение
	fScoringVolume_R1 = logicCrystall_R1;
	fScoringVolume_R2 = logicCrystall_R2;
	fScoringVolume_R3 = logicCrystall_R3;
	fScoringVolume_R4 = logicCrystall_R4;
	fScoringVolume_R5 = logicCrystall_R5;
	fScoringVolume_R6 = logicCrystall_R6;
	fScoringVolume_R7 = logicCrystall_R7;
	fScoringVolume_R8 = logicCrystall_R8;
	fScoringVolume_R9 = logicCrystall_R9;
	fScoringVolume_R10 = logicCrystall_R10;
	fScoringVolume_R11 = logicCrystall_R11;
	fScoringVolume_R12 = logicCrystall_R12;
	fScoringVolume_R13 = logicCrystall_R13;
	fScoringVolume_R14 = logicCrystall_R14;
	fScoringVolume_R15 = logicCrystall_R15;
	fScoringVolume_R16 = logicCrystall_R16;
	fScoringVolume_R17 = logicCrystall_R17;
	fScoringVolume_R18 = logicCrystall_R18;
	fScoringVolume_R19 = logicCrystall_R19;
	fScoringVolume_R20 = logicCrystall_R20;
	
	//Стрипы слева от главного
	fScoringVolume_L1 = logicCrystall_L1;
	fScoringVolume_L2 = logicCrystall_L2;
	fScoringVolume_L3 = logicCrystall_L3;
	fScoringVolume_L4 = logicCrystall_L4;
	fScoringVolume_L5 = logicCrystall_L5;
	fScoringVolume_L6 = logicCrystall_L6;
	fScoringVolume_L7 = logicCrystall_L7;
	fScoringVolume_L8 = logicCrystall_L8;
	fScoringVolume_L9 = logicCrystall_L9;
	fScoringVolume_L10 = logicCrystall_L10;
	fScoringVolume_L11 = logicCrystall_L11;
	fScoringVolume_L12 = logicCrystall_L12;
	fScoringVolume_L13 = logicCrystall_L13;
	fScoringVolume_L14 = logicCrystall_L14;
	fScoringVolume_L15 = logicCrystall_L15;
	fScoringVolume_L16 = logicCrystall_L16;
	fScoringVolume_L17 = logicCrystall_L17;
	fScoringVolume_L18 = logicCrystall_L18;
	fScoringVolume_L19 = logicCrystall_L19;
	fScoringVolume_L20 = logicCrystall_L20;
	
	
	
	//Это кремниевые стрипы, с которых НЕ будет счиаться энерговыделение
	G4Box *solidStrip = new G4Box("solidStrip", 0.0025, 1.5, 0.16);
	logicStrip = new G4LogicalVolume(solidStrip, crystall_Mat, "logicalStrip");
	
	//Тут распологаем эти стрипы в ряд, пропуская один стрип (solidCrystall) в котором будет считываться энерговыделение
	
	for(G4int i = 0; i < 100; i++)
	{
	//Переписать нормально, через массив?
		G4cout << i << G4endl;
		if(i == 50 or i == 51 or i == 52 or i == 53 or i == 54 or i == 55 or i == 56 or i == 57 or i == 58 or i == 59 or i == 60 or i == 61 or i == 62 or i == 63 or i == 64 or i == 65 or i == 66 or i == 67 or i == 68 or i == 69 or i == 70  or i == 49 or i == 48 or i == 47 or i == 46 or i == 45 or i == 44 or i == 43 or i == 42 or i == 41 or i == 40 or i == 39 or i == 38 or i == 37 or i == 36 or i == 35 or i == 34 or i == 33 or i == 32 or i == 31 or i == 30)
		{
			continue;
		}
		G4VPhysicalVolume *physStrip = new G4PVPlacement(0, G4ThreeVector(-0.25 + (i + 0.5)/200, 0., 0.), logicStrip, "physStrip", logicWorld, false, i*100 - 41, true);
	
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
