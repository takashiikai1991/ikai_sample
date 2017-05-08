
#include <iostream>
#include <cmath>
#include <vector> 

#include "TLine.h"
#include "TLatex.h"
#include "TMarker.h"
#include "TPave.h"
#include "TH1.h"
#include "TLorentzVector.h"
//#include "LinkDef.h"
#include "AtlasUtils.h"

void Label(short N , const float y=0.85 , short logo=1) 
{ 
  double x=0.2;
  if(2==N) x=0.35;
  if(3==N) x=0.5;
  if(4==N) x=0.6;
  if(5==N) x=0.7;
  if(N>10) x=N*0.01;
  

  double color=1;

  TLatex ll; //l.SetTextAlign(12); l.SetTextSize(tsize); 
  ll.SetNDC();
  ll.SetTextFont(42);
  
  ll.SetTextColor(color);
  ll.SetTextSize(0.04);//0.03-0.05 
  
  if(1==logo) 
    ll.DrawLatex(x,y,"#bf{#it{ATLAS}} Internal");
  else if(2==logo) 
    ll.DrawLatex(x,y,"#bf{#it{ATLAS}} Work in Progress");
  else if(3==logo) 
    ll.DrawLatex(x,y,"#bf{#it{ATLAS}} Preliminary");
  else if(4==logo) 
    ll.DrawLatex(x,y,"#bf{#it{ATLAS}} Simulation ");
  else if(5==logo) 
    ll.DrawLatex(x,y,"#bf{#it{ATLAS}} Simulation Preliminary");
  else if(0==logo) 
    ll.DrawLatex(x,y,"#bf{#it{ATLAS}}");
  //ll.DrawLatex(x,y,"#bf{#it{ATLAS}} Simulation Preliminary, Z#rightarrow#tau_{#mu}#tau_{h}");
  //ll.DrawLatex(x+0.13,y,"Work in Progress");
  
}

void Label_NAME(int N ,float y, const char *name) 
{
  double x=0.2;//=0.02
  if(2==N) x=0.35;
  if(3==N) x=0.5;
  if(4==N) x=0.6;;
  if(5==N) x=0.7;
  if(N>10) x=N*0.01;
  
  double color=1;
  
  TLatex ll; //l.SetTextAlign(12); l.SetTextSize(tsize); 
  ll.SetNDC();
  ll.SetTextFont(42);
  ll.SetTextSize(0.04);//0.03-0.05 
  ll.SetTextColor(color);
  ll.DrawLatex(x,y,name);
  
}


