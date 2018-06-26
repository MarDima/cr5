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
 // if(command == namestep)
   //     my_step->SetpName(newValue);
 //if(command == vect);
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
void ComandMan1::SetNewValue(G4UIcommand *command1, G4String newValue1) {


    if(command1 == namestep)
        my_step->SetpName(newValue1);
    // if(command == namestep)
    //     my_step->SetpName(newValue);
    //if(command == vect);
//
//
}
ComandMan1::ComandMan1(StepAction* step): my_step(step)
{
    auto dir1 = new G4UIdirectory("/my_com1/");
    namestep =  new G4UIcmdWithAString("/my_com1/stepname",this);
    namestep ->SetGuidance("select name");
    namestep ->SetParameterName("Name",false);

//    step =  new G4UIcmdWithAString("/my_com/step",this);
//    step ->SetGuidance("select name");
//    step ->SetParameterName("Name",false);



    //vect =  new G4UIcmdWith3Vector("/my_com/mat",this);



}
ComandMan1::~ComandMan1() {
}
void ComandMan2::SetNewValue(G4UIcommand *command2, G4String newValue2) {

    if(command2 == ZnVector)
        my_gen->Set_pos_vect(newValue2);
    // if(command == namestep)
    //     my_step->SetpName(newValue);
    //if(command == vect);
//
//
}
ComandMan2::ComandMan2(PrimaryGen* gen): my_gen(gen)
{
    auto dir2 = new G4UIdirectory("/my_com2/");
    ZnVector =  new G4UIcommand("/my_com2/vector",this);


//    step =  new G4UIcmdWithAString("/my_com/step",this);
//    step ->SetGuidance("select name");
//    step ->SetParameterName("Name",false);



    //vect =  new G4UIcmdWith3Vector("/my_com/mat",this);



}
ComandMan2::~ComandMan2() {
}
void ComandMan3::SetNewValue(G4UIcommand *command2, G4double newValue3) {

    if(command2 == ZnEvent)
        my_event->Set_eve(newValue3);
    // if(command == namestep)
    //     my_step->SetpName(newValue);
    //if(command == vect);
//
//
}
ComandMan3::ComandMan3(EventAction* eve): my_event(eve)
{
    auto dir3 = new G4UIdirectory("/my_com3/");
    ZnEvent =  new G4UIcmdWithADouble("/my_com3/znacheve",this);


//    step =  new G4UIcmdWithAString("/my_com/step",this);
//    step ->SetGuidance("select name");
//    step ->SetParameterName("Name",false);



    //vect =  new G4UIcmdWith3Vector("/my_com/mat",this);



}
ComandMan3::~ComandMan3() {
}