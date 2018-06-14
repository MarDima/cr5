//
// Created by student on 12.05.18.
//

#ifndef M_DGW_5_COMANDMAN_HH
#define M_DGW_5_COMANDMAN_HH

#include <G4UImessenger.hh>
#include <G4UIcmdWithAnInteger.hh>
#include <Geometry.hh>
#include <StepAction.hh>
#include <G4UIcmdWithADouble.hh>
#include <G4UIcmdWithAString.hh>
#include <G4UIcmdWith3Vector.hh>

class Geometry;
class ComandMan :public G4UImessenger{

    G4UIcmdWithADouble * ras;
    G4UIcmdWithAString* mat;
    G4UIcmdWith3Vector* vect;
    G4UIcmdWithAString* step;

//    StepAction* my_step;
    Geometry* my_geom;

public:
ComandMan(Geometry* geom);
    ~ComandMan();
    void SetNewValue(G4UIcommand *command, G4String newValue) override;

};


#endif //M_DGW_5_COMANDMAN_HH
