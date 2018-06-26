//
// Created by student on 08.05.18.
//

#include <G4VPhysicalVolume.hh>
#include <Geometry.hh>
#include <G4Box.hh>
#include <G4NistManager.hh>
#include "G4SystemOfUnits.hh"
#include <G4LogicalVolume.hh>
#include <G4PVPlacement.hh>
#include <G4VisAttributes.hh>
#include <G4RunManager.hh>
#include <ComandMan.hh>
#include <G4NISTStoppingData.hh>


G4VPhysicalVolume *Geometry::Construct() {
    G4double world_size = 5*m;
    auto world = new G4Box("world", world_size/2.,world_size/2.,world_size/2.);
    auto world_log = new G4LogicalVolume(world,G4NistManager::Instance()->FindOrBuildMaterial("G4_AIR"),"world_log");
    world_log->SetVisAttributes(G4VisAttributes::Invisible);


    auto box = new G4Box("box",box_size/2.,box_size/2., box_size/2.);
    auto box_log = new G4LogicalVolume(box,G4NistManager::Instance()->FindOrBuildMaterial(mName),"box_log");
    new G4PVPlacement(nullptr,G4ThreeVector(),box_log,"box_pvp",world_log,false,0);
    return new G4PVPlacement(nullptr,G4ThreeVector(),world_log,"world_pvp", nullptr,false,0);
}


Geometry::Geometry() {
  //  Box_Mat=
    comandMan = new ComandMan (this);
    box_size = 10*cm;
    mName = "G4_BGO";
}

void Geometry::setBox_size(G4double box_size) {
    Geometry::box_size = box_size;
    G4RunManager::GetRunManager()->DefineWorldVolume(Construct());
    G4RunManager::GetRunManager()->ReinitializeGeometry();

}

void Geometry::setMName(G4String Box_Mat)
{
   // G4NistManager* nist = G4NistManager::Instance();
    mName = Box_Mat;
   // Box_Mat= nist->FindOrBuildMaterial(newValue) ;
    G4RunManager::GetRunManager()->DefineWorldVolume(Construct());
    G4RunManager::GetRunManager()->ReinitializeGeometry();
}





Geometry::~Geometry() {
    delete comandMan;
}
