//
// Created by student on 12.05.18.
//

#ifndef M_DGW_5_COMANDMAN_HH
#define M_DGW_5_COMANDMAN_HH

#include <G4UImessenger.hh>
#include <G4UIcmdWithAnInteger.hh>
#include <Geometry.hh>
#include <StepAction.hh>
#include <PrimaryGen.hh>
#include <EventAction.hh>
#include <G4UIcmdWithADouble.hh>
#include <G4UIcmdWithAString.hh>
#include <G4UIcmdWith3Vector.hh>

class Geometry;
class StepAction;
class PrimaryGen;
class ComandMan :public G4UImessenger{

    G4UIcmdWithADouble * ras;
    G4UIcmdWithAString* mat;

    Geometry* my_geom;

public:
ComandMan(Geometry* geom);
    ~ComandMan();
    void SetNewValue(G4UIcommand *command, G4String newValue) override;

};

class ComandMan1 :public G4UImessenger{

    G4UIcmdWithAString* namestep;

    StepAction* my_step;


public:
    ComandMan1(StepAction* step);
    ~ComandMan1();
    void SetNewValue(G4UIcommand *command1, G4String newValue1) override;
};
class ComandMan2 :public G4UImessenger{

    PrimaryGen* my_gen;
    G4UIcommand* ZnVector;


public:
    ComandMan2(PrimaryGen* gen);
    ~ComandMan2();
    void SetNewValue(G4UIcommand *command2, G4ThreeVector newValue2);

};
class ComandMan3 :public G4UImessenger{

    EventAction* my_event;
    G4UIcmdWithADouble* ZnEvent;


public:
    ComandMan3(EventAction* eve);
    ~ComandMan3();
    void SetNewValue(G4UIcommand *command2, G4double newValue3);

};


#endif //M_DGW_5_COMANDMAN_HH
