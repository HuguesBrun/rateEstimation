#define rateIn50ns_cxx
// The class definition in rateIn50ns.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("rateIn50ns.C")
// root> T->Process("rateIn50ns.C","some options")
// root> T->Process("rateIn50ns.C+")
//

#include "rateIn50ns.h"
#include <TH2.h>
#include <TStyle.h>
#include <iostream>
#include <algorithm>

void rateIn50ns::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void rateIn50ns::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t rateIn50ns::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either rateIn50ns::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.
    // The return value is currently not used.
    fChain->GetTree()->GetEntry(entry);
    myIterator++;
    //fChain->GetEntry(entry);
    if (myIterator%100==0) cout << "i=" << myIterator << endl;
    HLT_Mu20_v2 = T_Event_pathsFired->at(0);
    HLT_IsoMu17_eta2p1_v2 = T_Event_pathsFired->at(1);
    HLT_L2Mu10_v1 = T_Event_pathsFired->at(2);
    HLT_L1SingleMu16_v1 = T_Event_pathsFired->at(3);
    HLT_Mu17_Mu8_SameSign_DZ_v1 = T_Event_pathsFired->at(4);
    HLT_Mu30_TkMu11_v2 = T_Event_pathsFired->at(5);
    HLT_Mu27_TkMu8_v2 = T_Event_pathsFired->at(6);
    HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2 = T_Event_pathsFired->at(7);
    HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2 = T_Event_pathsFired->at(8);
    HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2 = T_Event_pathsFired->at(9);
    HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2 = T_Event_pathsFired->at(10);
    HLT_Mu50_v2 = T_Event_pathsFired->at(11);
    HLT_Mu45_eta2p1_v2 = T_Event_pathsFired->at(12);
    HLT_IsoTkMu27_v2 = T_Event_pathsFired->at(13);
    HLT_IsoMu24_eta2p1_v2 = T_Event_pathsFired->at(14);
    HLT_IsoMu20_eta2p1_v2 = T_Event_pathsFired->at(15);
    HLT_IsoMu20_v2 = T_Event_pathsFired->at(16);
    HLT_IsoTkMu20_v2 = T_Event_pathsFired->at(17);
    HLT_Mu17_v2 = T_Event_pathsFired->at(18);
    HLT_Mu8_v2 = T_Event_pathsFired->at(19);
    HLT_Mu17_TrkIsoVVL_v2 = T_Event_pathsFired->at(20);
    HLT_Mu8_TrkIsoVVL_v2 = T_Event_pathsFired->at(21);
    
    myTree->Fill();


   return kTRUE;
}

void rateIn50ns::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void rateIn50ns::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
    
    // the results graphically or save the results to file.
    myFile->Write();
    myFile->Close();

}
