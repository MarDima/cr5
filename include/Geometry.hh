//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_GEOMETRY_HH
#define TEMPLATE_GEOMETRY_HH

#include <G4VUserDetectorConstruction.hh>
#include <G4Material.hh>
#include <G4NistManager.hh>
#include "ComandMan.hh"
class ComandMan;

class Geometry: public G4VUserDetectorConstruction{
private:
    virtual G4VPhysicalVolume*  Construct();


private:
    G4double box_size;
    G4String mName;
    G4Material* Box_Mat;

public:

    void setBox_size(G4double box_size);

    void setMName(G4String newValue);

private:
    ComandMan* comandMan;


public:

    Geometry();
    virtual ~Geometry();

};
#endif //TEMPLATE_GEOMETRY_HH
