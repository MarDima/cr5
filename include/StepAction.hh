//
// Created by idalov on 12.05.18.
//

#ifndef TEMPLATE_STEPACTION_HH
#define TEMPLATE_STEPACTION_HH

#include <G4UserSteppingAction.hh>
#include <G4String.hh>
#include "ComandMan.hh"



class ComandMan1;
class EventAction;
class StepAction : public G4UserSteppingAction{
    EventAction* event;
    G4String pName;
public:


public:
    StepAction();
    void SetpName(G4String newValue);
    explicit StepAction(EventAction *event);

    void UserSteppingAction(const G4Step *step) override;

private:
    ComandMan1* comandMan1;
};
#endif //TEMPLATE_STEPACTION_HH
