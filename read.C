

#include "head.h"  

void read(TString req_period = "all",int req_prongs =0,int req_ETA=0,int req_ID=2 , int b_trig=25,TString var = "rQCD")
{   
  // var = "kwOS";
  // var = "kwSS";

  
  gROOT->ProcessLine("#include <vector>");
  
  TString OUTPUT=s_var;
  TString arg_s_xtitle = s_var;//"tau_0_pt";
  
  //    vec_tree.push_back( "rQCD_up" );
  
  TString tree_NAME    ="NOMINAL";
  TString tree_NAME_sys="NOMINAL";
  
#include "selection.h"
  
  float temp_rQCD[2][2]={0}; //trig //pt
  float temp_kwOS[2][2]={0};
  float temp_kwSS[2][2]={0};
  
  float rqcdsys[3]={0};
  float rqcdstat[3]={0};
  float rqcd[3]={0};
  
  
  if(var == "rQCD"){
    rqcdsys[0] = set_rQCD("sys",req_period,req_prongs,req_ETA,req_ID ,0,b_trig);
    rqcdsys[1] = set_rQCD("sys",req_period,req_prongs,req_ETA,req_ID ,1,b_trig);
    rqcdsys[2] = set_rQCD("sys",req_period,req_prongs,req_ETA,req_ID ,2,b_trig);
  
    rqcdstat[0] = set_rQCD("stat",req_period,req_prongs,req_ETA,req_ID ,0,b_trig);
    rqcdstat[1] = set_rQCD("stat",req_period,req_prongs,req_ETA,req_ID ,1,b_trig);
    rqcdstat[2] = set_rQCD("stat",req_period,req_prongs,req_ETA,req_ID ,2,b_trig);
  
    rqcd[0] = set_rQCD("mean",req_period,req_prongs,req_ETA,req_ID ,0,b_trig);
    rqcd[1] = set_rQCD("mean",req_period,req_prongs,req_ETA,req_ID ,1,b_trig);
    rqcd[2] = set_rQCD("mean",req_period,req_prongs,req_ETA,req_ID ,2,b_trig);
  }
  else if(var == "kwOS"){ 
    rqcdsys[0] = set_kW("sys",req_period,req_prongs,req_ETA,req_ID ,"OS",0,b_trig);
    rqcdsys[1] = set_kW("sys",req_period,req_prongs,req_ETA,req_ID ,"OS",1,b_trig);
    rqcdsys[2] = set_kW("sys",req_period,req_prongs,req_ETA,req_ID ,"OS",2,b_trig);
  
    rqcdstat[0] = set_kW("stat",req_period,req_prongs,req_ETA,req_ID ,"OS",0,b_trig);
    rqcdstat[1] = set_kW("stat",req_period,req_prongs,req_ETA,req_ID ,"OS",1,b_trig);
    rqcdstat[2] = set_kW("stat",req_period,req_prongs,req_ETA,req_ID ,"OS",2,b_trig);
  
    rqcd[0] = set_kW("mean",req_period,req_prongs,req_ETA,req_ID ,"OS",0,b_trig);
    rqcd[1] = set_kW("mean",req_period,req_prongs,req_ETA,req_ID ,"OS",1,b_trig);
    rqcd[2] = set_kW("mean",req_period,req_prongs,req_ETA,req_ID ,"OS",2,b_trig);
  }
  else if(var == "kwSS"){ 
    rqcdsys[0] = set_kW("sys",req_period,req_prongs,req_ETA,req_ID ,"SS",0,b_trig);
    rqcdsys[1] = set_kW("sys",req_period,req_prongs,req_ETA,req_ID ,"SS",1,b_trig);
    rqcdsys[2] = set_kW("sys",req_period,req_prongs,req_ETA,req_ID ,"SS",2,b_trig);
  
    rqcdstat[0] = set_kW("stat",req_period,req_prongs,req_ETA,req_ID ,"SS",0,b_trig);
    rqcdstat[1] = set_kW("stat",req_period,req_prongs,req_ETA,req_ID ,"SS",1,b_trig);
    rqcdstat[2] = set_kW("stat",req_period,req_prongs,req_ETA,req_ID ,"SS",2,b_trig);
  
    rqcd[0] = set_kW("mean",req_period,req_prongs,req_ETA,req_ID ,"SS",0,b_trig);
    rqcd[1] = set_kW("mean",req_period,req_prongs,req_ETA,req_ID ,"SS",1,b_trig);
    rqcd[2] = set_kW("mean",req_period,req_prongs,req_ETA,req_ID ,"SS",2,b_trig);
  }
  
  //printf(" %1dp  ID%1d  HLT%2d  all  == %1.3f +- %1.3f +- %1.3f \n",req_prongs, req_ID, b_trig ,rqcd[0],rqcdstat[0],rqcdsys[0]);
  printf(" %1dp  ID%1d  HLT%02d  Low  = %1.3f +-%1.3f +-%1.3f \n",req_prongs, req_ID, b_trig ,rqcd[1],rqcdstat[1],rqcdsys[1]);
  printf(" %1dp  ID%1d  HLT%02d  High = %1.3f +-%1.3f +-%1.3f \n",req_prongs, req_ID, b_trig ,rqcd[2],rqcdstat[2],rqcdsys[2]);

  
  
    
  return;
} //END ALL  //##############################################

