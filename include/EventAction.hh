#ifndef EVENTACTION_HH
#define EVENTACTION_HH

#include "G4UserEventAction.hh"
#include "globals.hh"
#include "G4THitsCollection.hh"
#include "SDHit.hh"

class RunAction;

class EventAction : public G4UserEventAction
{
public:
    EventAction(RunAction* runAction);
    virtual ~EventAction();
    virtual void BeginOfEventAction(const G4Event* event);
    virtual void EndOfEventAction(const G4Event* event);
    virtual void Accumulate(G4double *list);

private:
    RunAction *fRunAction;
    G4double *accumulateValueList;
    int accumulateValueCount;

};
typedef G4THitsCollection<SDHit> HitsCollection;
#endif // EVENTACTION_HH
