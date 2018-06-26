//
// Created by student on 08.05.18.
//

#include <G4Event.hh>
#include <PrimaryGen.hh>
#include <G4Gamma.hh>
#include <QtCore/qatomic_armv5.h>
#include "G4SystemOfUnits.hh"
void PrimaryGen::GeneratePrimaries(G4Event *anEvent) {
    gun->GeneratePrimaryVertex(anEvent);
}



PrimaryGen::PrimaryGen() {
    comandMan2 = new ComandMan2 (this);
    pos_vect.set(0,0,-10*cm);
    gun = new G4ParticleGun(1);
    gun->SetParticleDefinition(G4Gamma::GammaDefinition());
    gun->SetParticleMomentumDirection(G4ThreeVector(0,0,1));
    gun->SetParticlePosition(pos_vect);
    gun->SetParticleEnergy(661*keV);
}
void PrimaryGen::Set_pos_vect(G4ThreeVector newValue2)
{
    pos_vect = newValue2;
}


PrimaryGen::~PrimaryGen() {
    delete gun;
}
