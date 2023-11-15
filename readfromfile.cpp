#include <iostream>
#include "TFile.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TH1F.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TNtuple.h"
#include "TClass.h"
#include "TDirectory.h"

void readfromfile(){
std::cout<< "hello hello hello" << std::endl;
    TFile f("/Users/meerabharadwaj/Downloads/Dst--20_03_18--cutflow_mc--cocktail--2016--md.root");
    
    TDirectory* dir=f.GetDirectory("TupleB0"); 
    TTree* t1;
    dir->GetObject("DecayTree", t1);
    
    float muplus, dstar;
    
    t1->SetBranchAddress("Dst_2010_minus_PE/PX/PY/PZ", &dstar);
    t1->SetBranchAddress("muplus_PE/PX/PY/PZ", &muplus);
    std::cout<< "Entries equal to   " << t1->GetEntries()<< std::endl;
    /*for (int irow=0;irow<t1->GetEntries();++irow){
        t1->GetEntry(irow);
        std::cout << muplus << " " << dstar <<std::endl;
    }*/
    
}
    


