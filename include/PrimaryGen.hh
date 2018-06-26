//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_PRIMARYGEN_HH
#define TEMPLATE_PRIMARYGEN_HH

#include <G4VUserPrimaryGeneratorAction.hh>
#include <G4ParticleGun.hh>
#include "ComandMan.hh"

class ComandMan2;
class PrimaryGen: public G4VUserPrimaryGeneratorAction{
private:
    G4ParticleGun* gun;
    G4ThreeVector pos_vect;
    ComandMan2* comandMan2;
public:
    PrimaryGen();
    void Set_pos_vect(G4ThreeVector newValue2);
    virtual ~PrimaryGen();
    void GeneratePrimaries(G4Event *anEvent) override;
};
#endif //TEMPLATE_PRIMARYGEN_HH
