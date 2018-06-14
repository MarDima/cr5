//
// Created by student on 12.05.18.
//

#include "ComandMan.hh"
#include <G4UIcommand.hh>
#include <G4UImessenger.hh>
void ComandMan::SetNewValue(G4UIcommand *command, G4String newValue) {

    if(command == ras)
        my_geom->setBox_size(ras->GetNewDoubleValue(newValue));
    if(command == mat)
        my_geom->setMName(newValue);
//    if(command == step)
////        my_step->SetpName(newValue);
////   // if(command == vect);
//
//
}
ComandMan::ComandMan(Geometry* geom): my_geom(geom)
{
    auto dir = new G4UIdirectory("/my_com/");

    ras= new G4UIcmdWithADouble("/my_com/ras",this);
    ras->SetDefaultValue(12);

    mat =  new G4UIcmdWithAString("/my_com/mat",this);
    mat ->SetGuidance("select name");
    mat ->SetParameterName("Name",false);

//    step =  new G4UIcmdWithAString("/my_com/step",this);
//    step ->SetGuidance("select name");
//    step ->SetParameterName("Name",false);



    //vect =  new G4UIcmdWith3Vector("/my_com/mat",this);



}
ComandMan::~ComandMan() {

}