
TChain *chain_DY = new TChain("myTree");
TChain *chain_WMuNu = new TChain("myTree");
TChain *chain_QCDMu15to20 = new TChain("myTree");
TChain *chain_QCDMu20to30 = new TChain("myTree");
TChain *chain_QCDMu30to50 = new TChain("myTree");
TChain *chain_QCDMu50to80 = new TChain("myTree");
TChain *chain_QCDMu80to120 = new TChain("myTree");

TChain *chain_QCD15to30 = new TChain("myTree");
TChain *chain_QCD30to50 = new TChain("myTree");
TChain *chain_QCD50to80 = new TChain("myTree");
TChain *chain_QCD80to120 = new TChain("myTree");


struct rateError{
    float rate;
    float error;
    float purity;
};

void giveTheRate(TString name, float lumi){

    TString cut = name +"==1";
    
    float rateDY = lumi*20000.*chain_DY->GetEntries(cut)/chain_DY->GetEntries();
    //float nbZ = 6870.*chain_DY->GetEntries(cut)/chain_DY->GetEntries();
    float rateW = lumi*60290.*chain_WMuNu->GetEntries(cut)/chain_WMuNu->GetEntries();
    TString cutMu = "&&1&&antiMuEnrichementVeto==1&&T_Event_PUdominated==0";
    float rateQCDMu15to20 = lumi*1273190000.*0.003*chain_QCDMu15to20->GetEntries(cut+cutMu)/chain_QCDMu15to20->GetEntries();
    float rateQCDMu20to30 = lumi*558528000.*0.0053*chain_QCDMu20to30->GetEntries(cut+cutMu)/chain_QCDMu20to30->GetEntries();
    float rateQCDMu30to50 = lumi*139803000.*0.01182*chain_QCDMu30to50->GetEntries(cut+cutMu)/chain_QCDMu30to50->GetEntries();
    float rateQCDMu50to80 = lumi*19222500.*0.02276*chain_QCDMu50to80->GetEntries(cut+cutMu)/chain_QCDMu50to80->GetEntries();
    float rateQCDMu80to120 = lumi*2758420.*0.03844*chain_QCDMu80to120->GetEntries(cut+cutMu)/chain_QCDMu80to120->GetEntries();

    TString cutAntiMu = "&&T_Event_PUdominated==0&&antiMuEnrichementVeto==0";//&&T_Event_PUdominated==0";
    float rateQCD15to30 = lumi*1837410000*chain_QCD15to30->GetEntries(cut+cutAntiMu)/chain_QCD15to30->GetEntries();
    float rateQCD30to50 = lumi*140932000*chain_QCD30to50->GetEntries(cut+cutAntiMu)/chain_QCD30to50->GetEntries();
    float rateQCD50to80 = lumi*19204300*chain_QCD50to80->GetEntries(cut+cutAntiMu)/chain_QCD50to80->GetEntries();
    float rateQCD80to120 = lumi*2762530*chain_QCD80to120->GetEntries(cut+cutAntiMu)/chain_QCD80to120->GetEntries();
    
    
    float errorDY = lumi*20000.*sqrt(chain_DY->GetEntries(cut))/chain_DY->GetEntries();
    float errorW = lumi*60290.*sqrt(chain_WMuNu->GetEntries(cut))/chain_WMuNu->GetEntries();
    /*float rateQCDMu15to20 = lumi*1273190000.*0.003*chain_QCDMu20to30->GetEntries(cut+cutMu)/chain_QCDMu20to30->GetEntries();
    float rateQCDMu20to30 = lumi*558528000.*0.0053*chain_QCDMu20to30->GetEntries(cut+cutMu)/chain_QCDMu20to30->GetEntries();
    float rateQCDMu30to50 = lumi*139803000.*0.01182*chain_QCDMu30to50->GetEntries(cut+cutMu)/chain_QCDMu30to50->GetEntries();
    float rateQCDMu50to80 = lumi*19222500.*0.02276*chain_QCDMu50to80->GetEntries(cut+cutMu)/chain_QCDMu50to80->GetEntries();
    float rateQCDMu80to120 = lumi*2758420.*0.03844*chain_QCDMu80to120->GetEntries(cut+cutMu)/chain_QCDMu80to120->GetEntries();*/
    
    float errorQCD15to30 = lumi*1837410000*sqrt(chain_QCD15to30->GetEntries(cut+cutAntiMu))/chain_QCD15to30->GetEntries();
    /*float rateQCD30to50 = lumi*140932000*chain_QCD30to50->GetEntries(cut+cutAntiMu)/chain_QCD30to50->GetEntries();
    float rateQCD50to80 = lumi*19204300*chain_QCD50to80->GetEntries(cut+cutAntiMu)/chain_QCD50to80->GetEntries();
    float rateQCD80to120 = lumi*2762530*chain_QCD80to120->GetEntries(cut+cutAntiMu)/chain_QCD80to120->GetEntries();*/
    cout << 0.5e-2*1837410000/24945870 << endl;
    

    cout << "Path=" << name << endl;
    cout << "rateDY=" << rateDY << "+-" << errorDY << endl;
    cout << "rateW=" << rateW  << "+-" << errorW << endl;
    cout << "rateQCDMu15to20=" << rateQCDMu15to20 << endl;
    cout << "rateQCDMu20to30=" << rateQCDMu20to30 << endl;
    cout << "rateQCDMu30to50=" << rateQCDMu30to50 << endl;
    cout << "rateQCDMu50to80=" << rateQCDMu50to80 << endl;
    cout << "rateQCDMu80to120=" << rateQCDMu80to120 << endl;
    
    cout << "rateQCD15to30=" << rateQCD15to30 << "+-" << errorQCD15to30 <<  endl;
    cout << "rateQCD30to50=" << rateQCD30to50 << endl;
    cout << "rateQCD50to80=" << rateQCD50to80 << endl;
    cout << "rateQCD80to120=" << rateQCD80to120 << endl;
    
    float sumQCDEnriched= rateQCDMu15to20 + rateQCDMu20to30 + rateQCDMu30to50 +rateQCDMu50to80 + rateQCDMu80to120;
    cout << "sum=" << sumQCDEnriched << endl;
    
    float sumQCD= rateQCD15to30 + rateQCD30to50 + rateQCD50to80+ rateQCD80to120;
    cout << "sum=" << sumQCD << endl;
    
    float sumRate=rateDY + rateW  +  rateQCDMu15to20 + rateQCDMu20to30 + rateQCDMu30to50 +rateQCDMu50to80 + rateQCDMu80to120;//+ rateQCD15to30 + rateQCD30to50 + rateQCD50to80+ rateQCD80to120;
    cout << "sum=" << sumRate << endl;
 
    /*
    float sumRate = rateDY + rateW  + rateQCDMu30to50 + rateQCDMu50to80 + rateQCDMu80to120 + rateQCD30to50 + rateQCD50to80 + rateQCD80to120;
    //cout << "sum= " << sumRate << endl;
   // cout <<  rateQCDMu30to50 + rateQCDMu50to80 + rateQCDMu80to120 << endl;
    
   // cout << rateQCD30to50 + rateQCD50to80 + rateQCD80to120 << endl;
    
    float error = errorDY + errorW  + errorQCDMu30to50 + errorQCDMu50to80 + errorQCDMu80to120 + errorQCD30to50 + errorQCD50to80 + errorQCD80to120;
    //cout << "error=" << error << endl;
    
    purity = (rateDY + rateW)/sumRate;*/
    
    
  /*  theRateAndError.rate = sumRate;
    theRateAndError.error = error;
    theRateAndError.purity = purity;
    
    cout << name << " ";
   //cout << nbZ << " ";
    cout << sumRate << " ";
    cout << 4.0/5*sumRate << " ";
    cout << 3.0/5*sumRate << " ";
    cout << 2.0/5*sumRate << " ";
    cout << 1.0/5*sumRate << " ";
    cout << 0.5/5*sumRate << endl;
    
    cout << "Z= ";
    cout << nbZ << " ";
    cout << 4./5*nbZ << " ";
    cout << 3./5*nbZ << " ";
    cout << 2./5*nbZ << " ";
    cout << 1./5*nbZ << " ";
    cout << .5/5*nbZ << endl;
    
   // cout << error << " ";
    cout << rateDY << " ";
    cout << rateW << " ";
    float fullRateQCDMu = rateQCDMu30to50 + rateQCDMu50to80 + rateQCDMu80to120;
    cout << fullRateQCDMu << " ";
    float fullRateQCD = rateQCD30to50 + rateQCD50to80 + rateQCD80to120;
    cout << fullRateQCD << " " << endl;*/
    
    //cout << "30to50=" << rateQCDMu30to50 << endl;
    //cout << "50to80=" << rateQCDMu50to80 << endl;
    
    //cout << "rate=" << sumRate << " error=" << error << endl;
    
}



void computeRate(){
    gStyle->SetOptStat(0);
    gStyle->SetOptTitle(0);
    chain_DY->Add("theOutFile_DYbis.root");
   chain_WMuNu->Add("theOutFile_W.root");
    chain_QCDMu15to20->Add("theOutFile_QCDMuEnriched15to20.root");
    chain_QCDMu20to30->Add("theOutFile_QCDMuEnriched20to30.root");
    chain_QCDMu30to50->Add("theOutFile_QCDMuEnriched30to50.root");
    chain_QCDMu50to80->Add("theOutFile_QCDMuEnriched50to80.root");
    chain_QCDMu80to120->Add("theOutFile_QCDMuEnriched80to120.root");
    
    chain_QCD15to30->Add("theOutFile_QCD15to30.root");
    chain_QCD30to50->Add("theOutFile_QCD30to50.root");
    chain_QCD50to80->Add("theOutFile_QCD50to80.root");
    chain_QCD80to120->Add("theOutFile_QCD80to120.root");
  
    giveTheRate("HLT_IsoMu20_v2",0.5e-2);
    giveTheRate("HLT_Mu20_v2",0.7e-2);
 /*   giveTheRate("HLT_IsoMu20_v2",0.7e-2);
    giveTheRate("HLT_IsoMu24_eta2p1_v2",0.7e-2);
    giveTheRate("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v2",0.7e-2);*/
   // giveTheRate("HLT_L1SingleMu16_v1",0.7e-2);
    giveTheRate("HLT_L2Mu10_v1",0.7e-2);



  

}
