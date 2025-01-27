//**************************************************
// \file ATLTileCalTBPrimaryGenAction.hh
// \brief: definition of 
//         ATLTileCalTBPrimaryGenAction class
// \author: Lorenzo Pezzotti (CERN EP-SFT-sim) 
//          @lopezzot
// \start date: 23 May 2022
//**************************************************

#ifndef ATLTileCalTBPrimaryGenAction_h
#define ATLTileCalTBPrimaryGenAction_h 1

//Includers from Geant4
//
#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"

class G4ParticleGun;
class G4Event;

class ATLTileCalTBPrimaryGenAction : public G4VUserPrimaryGeneratorAction {
    
    public:
        ATLTileCalTBPrimaryGenAction();
        virtual ~ATLTileCalTBPrimaryGenAction();

        virtual void GeneratePrimaries( G4Event* event );

        void SetRandomFlag( G4bool value );

    private:
        G4ParticleGun* fParticleGun;

};

#endif //ATLTileCalTBPrimaryGenAction_h

//**************************************************

