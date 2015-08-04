//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Apr 30 11:04:03 2015 by ROOT version 6.02/04
// from TTree eventsTree/
// found on file: fichier_1.root
//////////////////////////////////////////////////////////

#ifndef rateIn50ns_h
#define rateIn50ns_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class rateIn50ns : public TSelector {
public :
    
    TFile *myFile;
    TTree *myTree;
    
    int myIterator;
    
    int HLT_Mu20_v2;
    int HLT_IsoMu17_eta2p1_v2;
    int HLT_L2Mu10_v1;
    int HLT_L1SingleMu16_v1;
    int HLT_Mu17_Mu8_SameSign_DZ_v1;
    int HLT_Mu30_TkMu11_v2;
    int HLT_Mu27_TkMu8_v2;
    int HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2;
    int HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2;
    int HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2;
    int HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2;
    int HLT_Mu50_v2;
    int HLT_Mu45_eta2p1_v2;
    int HLT_IsoTkMu27_v2;
    int HLT_IsoMu24_eta2p1_v2;
    int HLT_IsoMu20_eta2p1_v2;
    int HLT_IsoMu20_v2;
    int HLT_IsoTkMu20_v2;
    int HLT_Mu17_v2;
    int HLT_Mu8_v2;
    int HLT_Mu17_TrkIsoVVL_v2;
    int HLT_Mu8_TrkIsoVVL_v2;
    
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
    // Declaration of leaf types
    Int_t           T_Event_RunNumber;
    Int_t           T_Event_EventNumber;
    Int_t           T_Event_LuminosityBlock;
    Int_t           T_Event_nPU;
    Float_t         T_Event_nTruePU;
    Int_t           T_Event_nPUm;
    Int_t           T_Event_nPUp;
    Float_t         T_Event_AveNTruePU;
    Float_t         T_Event_PUptHat;
    Float_t         T_Event_PUptHat2;
    Float_t         T_Event_PUeventPtHat;
    Int_t           T_Event_PUdominated;
    Int_t           antiMuEnrichementVeto;
    vector<int>     *T_Event_pathsFired;
    vector<float>   *T_Trig_Eta;
    vector<float>   *T_Trig_Pt;
    vector<float>   *T_Trig_Phi;
    vector<int>     *T_Trig_Leg;
    vector<float>   *T_Trig_Value;
    vector<float>   *T_Trig_Value2;
    vector<float>   *T_Gen_Eta;
    vector<float>   *T_Gen_Phi;
    vector<float>   *T_Gen_Pt;
    vector<float>   *T_Gen_Px;
    vector<float>   *T_Gen_Py;
    vector<float>   *T_Gen_Pz;
    vector<float>   *T_Gen_Energy;
    vector<int>     *T_Gen_pdgID;
    vector<int>     *T_Gen_MotherID;
    vector<int>     *T_Gen_FromW;
    vector<int>     *T_Gen_FromTau;
    
    // List of branches
    TBranch        *b_T_Event_RunNumber;   //!
    TBranch        *b_T_Event_EventNumber;   //!
    TBranch        *b_T_Event_LuminosityBlock;   //!
    TBranch        *b_T_Event_nPU;   //!
    TBranch        *b_T_Event_nTruePU;   //!
    TBranch        *b_T_Event_nPUm;   //!
    TBranch        *b_T_Event_nPUp;   //!
    TBranch        *b_T_Event_AveNTruePU;   //!
    TBranch        *b_T_Event_PUptHat;   //!
    TBranch        *b_T_Event_PUptHat2;   //!
    TBranch        *b_T_Event_PUeventPtHat;   //!
    TBranch        *b_T_Event_PUdominated;   //!
    TBranch        *b_antiMuEnrichementVeto;   //!
    TBranch        *b_T_Event_pathsFired;   //!
    TBranch        *b_T_Trig_Eta;   //!
    TBranch        *b_T_Trig_Pt;   //!
    TBranch        *b_T_Trig_Phi;   //!
    TBranch        *b_T_Trig_Leg;   //!
    TBranch        *b_T_Trig_Value;   //!
    TBranch        *b_T_Trig_Value2;   //!
    TBranch        *b_T_Gen_Eta;   //!
    TBranch        *b_T_Gen_Phi;   //!
    TBranch        *b_T_Gen_Pt;   //!
    TBranch        *b_T_Gen_Px;   //!
    TBranch        *b_T_Gen_Py;   //!
    TBranch        *b_T_Gen_Pz;   //!
    TBranch        *b_T_Gen_Energy;   //!
    TBranch        *b_T_Gen_pdgID;   //!
    TBranch        *b_T_Gen_MotherID;   //!
    TBranch        *b_T_Gen_FromW;   //!
    TBranch        *b_T_Gen_FromTau;   //!

   rateIn50ns(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~rateIn50ns() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(rateIn50ns,0);
};

#endif

#ifdef rateIn50ns_cxx
void rateIn50ns::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
    
    myIterator=0;
    
    myFile = new TFile("theOutFile.root","RECREATE");
    myTree = new TTree("myTree","");
    myTree->Branch("antiMuEnrichementVeto", &antiMuEnrichementVeto,"antiMuEnrichementVeto/I");
    myTree->Branch("T_Event_PUdominated", &T_Event_PUdominated,"T_Event_PUdominated/I");
    myTree->Branch("HLT_Mu20_v2", &HLT_Mu20_v2, "HLT_Mu20_v2/I");
    myTree->Branch("HLT_IsoMu17_eta2p1_v2", &HLT_IsoMu17_eta2p1_v2, "HLT_IsoMu17_eta2p1_v2/I");
    myTree->Branch("HLT_L2Mu10_v1", &HLT_L2Mu10_v1, "HLT_L2Mu10_v1/I");
    myTree->Branch("HLT_L1SingleMu16_v1", &HLT_L1SingleMu16_v1, "HLT_L1SingleMu16_v1/I");
    myTree->Branch("HLT_Mu17_Mu8_SameSign_DZ_v1", &HLT_Mu17_Mu8_SameSign_DZ_v1, "HLT_Mu17_Mu8_SameSign_DZ_v1/I");
    myTree->Branch("HLT_Mu30_TkMu11_v2", &HLT_Mu30_TkMu11_v2, "HLT_Mu30_TkMu11_v2/I");
    myTree->Branch("HLT_Mu27_TkMu8_v2", &HLT_Mu27_TkMu8_v2, "HLT_Mu27_TkMu8_v2/I");
    myTree->Branch("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2, "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v2/I");
    myTree->Branch("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2, "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2/I");
    myTree->Branch("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2, "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_v2/I");
    myTree->Branch("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2, "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v2/I");
    myTree->Branch("HLT_Mu50_v2", &HLT_Mu50_v2, "HLT_Mu50_v2/I");
    myTree->Branch("HLT_Mu45_eta2p1_v2", &HLT_Mu45_eta2p1_v2, "HLT_Mu45_eta2p1_v2/I");
    myTree->Branch("HLT_IsoTkMu27_v2", &HLT_IsoTkMu27_v2, "HLT_IsoTkMu27_v2/I");
    myTree->Branch("HLT_IsoMu24_eta2p1_v2", &HLT_IsoMu24_eta2p1_v2, "HLT_IsoMu24_eta2p1_v2/I");
    myTree->Branch("HLT_IsoMu20_eta2p1_v2", &HLT_IsoMu20_eta2p1_v2, "HLT_IsoMu20_eta2p1_v2/I");
    myTree->Branch("HLT_IsoMu20_v2", &HLT_IsoMu20_v2, "HLT_IsoMu20_v2/I");
    myTree->Branch("HLT_IsoTkMu20_v2", &HLT_IsoTkMu20_v2, "HLT_IsoTkMu20_v2/I");
    myTree->Branch("HLT_Mu17_v2", &HLT_Mu17_v2, "HLT_Mu17_v2/I");
    myTree->Branch("HLT_Mu8_v2", &HLT_Mu8_v2, "HLT_Mu8_v2/I");
    myTree->Branch("HLT_Mu17_TrkIsoVVL_v2", &HLT_Mu17_TrkIsoVVL_v2, "HLT_Mu17_TrkIsoVVL_v2/I");
    myTree->Branch("HLT_Mu8_TrkIsoVVL_v2", &HLT_Mu8_TrkIsoVVL_v2, "HLT_Mu8_TrkIsoVVL_v2/I");
    // Set object pointer
    T_Event_pathsFired = 0;
    T_Trig_Eta = 0;
    T_Trig_Pt = 0;
    T_Trig_Phi = 0;
    T_Trig_Leg = 0;
    T_Trig_Value = 0;
    T_Trig_Value2 = 0;
    T_Gen_Eta = 0;
    T_Gen_Phi = 0;
    T_Gen_Pt = 0;
    T_Gen_Px = 0;
    T_Gen_Py = 0;
    T_Gen_Pz = 0;
    T_Gen_Energy = 0;
    T_Gen_pdgID = 0;
    T_Gen_MotherID = 0;
    T_Gen_FromW = 0;
    T_Gen_FromTau = 0;
    // Set branch addresses and branch pointers
    if (!tree) return;
    fChain = tree;
    fChain->SetMakeClass(1);
    
    fChain->SetBranchAddress("T_Event_RunNumber", &T_Event_RunNumber, &b_T_Event_RunNumber);
    fChain->SetBranchAddress("T_Event_EventNumber", &T_Event_EventNumber, &b_T_Event_EventNumber);
    fChain->SetBranchAddress("T_Event_LuminosityBlock", &T_Event_LuminosityBlock, &b_T_Event_LuminosityBlock);
    fChain->SetBranchAddress("T_Event_nPU", &T_Event_nPU, &b_T_Event_nPU);
    fChain->SetBranchAddress("T_Event_nTruePU", &T_Event_nTruePU, &b_T_Event_nTruePU);
    fChain->SetBranchAddress("T_Event_nPUm", &T_Event_nPUm, &b_T_Event_nPUm);
    fChain->SetBranchAddress("T_Event_nPUp", &T_Event_nPUp, &b_T_Event_nPUp);
    fChain->SetBranchAddress("T_Event_AveNTruePU", &T_Event_AveNTruePU, &b_T_Event_AveNTruePU);
    fChain->SetBranchAddress("T_Event_PUptHat", &T_Event_PUptHat, &b_T_Event_PUptHat);
    fChain->SetBranchAddress("T_Event_PUptHat2", &T_Event_PUptHat2, &b_T_Event_PUptHat2);
    fChain->SetBranchAddress("T_Event_PUeventPtHat", &T_Event_PUeventPtHat, &b_T_Event_PUeventPtHat);
    fChain->SetBranchAddress("T_Event_PUdominated", &T_Event_PUdominated, &b_T_Event_PUdominated);
    fChain->SetBranchAddress("antiMuEnrichementVeto", &antiMuEnrichementVeto, &b_antiMuEnrichementVeto);
    fChain->SetBranchAddress("T_Event_pathsFired", &T_Event_pathsFired, &b_T_Event_pathsFired);
    fChain->SetBranchAddress("T_Trig_Eta", &T_Trig_Eta, &b_T_Trig_Eta);
    fChain->SetBranchAddress("T_Trig_Pt", &T_Trig_Pt, &b_T_Trig_Pt);
    fChain->SetBranchAddress("T_Trig_Phi", &T_Trig_Phi, &b_T_Trig_Phi);
    fChain->SetBranchAddress("T_Trig_Leg", &T_Trig_Leg, &b_T_Trig_Leg);
    fChain->SetBranchAddress("T_Trig_Value", &T_Trig_Value, &b_T_Trig_Value);
    fChain->SetBranchAddress("T_Trig_Value2", &T_Trig_Value2, &b_T_Trig_Value2);
    fChain->SetBranchAddress("T_Gen_Eta", &T_Gen_Eta, &b_T_Gen_Eta);
    fChain->SetBranchAddress("T_Gen_Phi", &T_Gen_Phi, &b_T_Gen_Phi);
    fChain->SetBranchAddress("T_Gen_Pt", &T_Gen_Pt, &b_T_Gen_Pt);
    fChain->SetBranchAddress("T_Gen_Px", &T_Gen_Px, &b_T_Gen_Px);
    fChain->SetBranchAddress("T_Gen_Py", &T_Gen_Py, &b_T_Gen_Py);
    fChain->SetBranchAddress("T_Gen_Pz", &T_Gen_Pz, &b_T_Gen_Pz);
    fChain->SetBranchAddress("T_Gen_Energy", &T_Gen_Energy, &b_T_Gen_Energy);
    fChain->SetBranchAddress("T_Gen_pdgID", &T_Gen_pdgID, &b_T_Gen_pdgID);
    fChain->SetBranchAddress("T_Gen_MotherID", &T_Gen_MotherID, &b_T_Gen_MotherID);
    fChain->SetBranchAddress("T_Gen_FromW", &T_Gen_FromW, &b_T_Gen_FromW);
    fChain->SetBranchAddress("T_Gen_FromTau", &T_Gen_FromTau, &b_T_Gen_FromTau);
}

Bool_t rateIn50ns::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef rateIn50ns_cxx
