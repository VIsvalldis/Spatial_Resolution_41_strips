#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
	//Подключаем то, что нужно, тут э/м и оптика
	RegisterPhysics (new G4EmStandardPhysics());
	RegisterPhysics (new G4OpticalPhysics());
	RegisterPhysics (new G4EmPenelopePhysics());

}

MyPhysicsList::~MyPhysicsList()
{}
