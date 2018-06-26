//
// Created by idalov on 12.05.18.
//

#include <EventAction.hh>
#include <G4RunManager.hh>



EventAction::EventAction(RunAction *_runAction) : runAction(_runAction)
{
    comandMan3 = new ComandMan3 (this);
}

void EventAction::Set_eve(G4double newValue3)
{
    Threshold=newValue3;
}
