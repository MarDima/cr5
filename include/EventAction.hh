//
// Created by idalov on 12.05.18.
//

#ifndef TEMPLATE_EVENTACTION_HH
#define TEMPLATE_EVENTACTION_HH

#include <G4UserEventAction.hh>
#include <pwdefs.hh>
#include "ComandMan.hh"
class ComandMan3;
class RunAction;


class EventAction: public G4UserEventAction{
    RunAction* runAction;
    G4double Threshold;

public:
    explicit EventAction(RunAction *runAction);
    void Set_eve(G4double newValue3);
private:
    ComandMan3* comandMan3;
};
#endif //TEMPLATE_EVENTACTION_HH
