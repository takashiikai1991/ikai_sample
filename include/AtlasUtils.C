
#include <iostream>
#include <cmath>
#include <vector> 

#include "TLine.h"
#include "TArrow.h"
#include "TLatex.h"
#include "TMarker.h"
#include "TPave.h"
#include "TH1.h"
#include "TLorentzVector.h"
#include "LinkDef.h"
#include "AtlasUtils.h"


void hist_name(TGraphAsymmErrors* g1, TString name){
  g1->SetTitle(name);
  g1->SetName(name);
  return;
}
void hist_name(TH1* g1, TString name){
  g1->SetTitle(name);
  g1->SetName(name);
  return;
}


void ATLAS_LABEL(Double_t x,Double_t y,Color_t color) 
{
  TLatex l; //l.SetTextAlign(12); l.SetTextSize(tsize); 
  l.SetNDC();
  l.SetTextFont(72);

  l.SetTextColor(color);
  l.DrawLatex(x,y,"ATLAS");
  
  TLatex ll; //l.SetTextAlign(12); l.SetTextSize(tsize); 
  ll.SetNDC();
  ll.SetTextFont(42);
  
  ll.SetTextColor(color);
  ll.DrawLatex(x+0.13,y,"Work in Progress");

}

void LABEL(short N , const float y=0.85 , short logo=1) 
{ 
  double x=0.2;
  if(2==N) x=0.35;
  if(3==N) x=0.5;
  if(4==N) x=0.6;
  if(5==N) x=0.7;
  if(N>10) x=N*0.01;
  
  //if(y=0.85)
  double color=1;
  
  // TLatex l; //ll.SetTextAlign(12); l.SetTextSize(tsize); 
  // l.SetNDC();
  // l.SetTextFont(72);
  
  // l.SetTextColor(color);
  // l.DrawLatex(x,y,"ATLAS");

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

void LABEL_NAME(int N ,float y, const char *name) 
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

void LABEL_DATA(int N ,float y, TString Lumi,int energy=0) //should not use
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
  if(2>energy) ll.DrawLatex(x,y,"#intL dt = "+Lumi+"b^{-1}");
  if(1==energy)ll.DrawLatex(x,y-0.08,"#sqrt{s}=13TeV");  
  else if(2==energy)ll.DrawLatex(x,y,"#sqrt{s}=13TeV #intL dt = "+Lumi+"b^{-1}");
  
  //"#spilitline{first}{second}"
  
}
void LABEL_DATA(int N ,float y, float Lumi,int energy=0) //recommnd
{
  double x=0.2;//=0.02
  if(2==N) x=0.35;
  if(3==N) x=0.5;
  if(4==N) x=0.6;;
  if(5==N) x=0.7;
  if(N>10) x=N*0.01;
  
  double color=1;
  float luminosity=Lumi/1000.;
  TString s_lumi=Form("#intL dt = %1.2f fb^{-1}",luminosity);
  if(luminosity<1000) s_lumi=Form("#intL dt = %3.1f pb^{-1}",luminosity);
  
  TLatex ll; //l.SetTextAlign(12); l.SetTextSize(tsize); 
  ll.SetNDC();
  ll.SetTextFont(42);
  ll.SetTextSize(0.04);//0.03-0.05 
  ll.SetTextColor(color);
  if(2>energy) ll.DrawLatex(x,y,Form("#intL dt = %3.1f fb^{-1}",luminosity));
  if(1==energy)ll.DrawLatex(x,y-0.08,"#sqrt{s}=13TeV");  
  if(2==energy)ll.DrawLatex(x,y,Form("#sqrt{s}=13TeV #intL dt = %3.1f fb^{-1}",luminosity));
  
}


void LABEL_STAT(int N ,float y, const float Lumi,bool energy=0) 
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
  if(Lumi>1000)
    ll.DrawLatex(x,y,Form("#intL dt = %3.1f fb^{-1}",Lumi/1000));
  else 
    ll.DrawLatex(x,y,Form("#intL dt = %3.1f pb^{-1}",Lumi));
  if(energy)ll.DrawLatex(x,y-0.08,"#sqrt{s}=13TeV");    
}

// void myMarkerText(Double_t x,Double_t y,Int_t color,Int_t mstyle, const char *text,Float_t msize) 
// {
//   Double_t tsize=0.06;
//   TMarker *marker = new TMarker(x-(0.4*tsize),y,8);
//   marker->SetMarkerColor(color);  marker->SetNDC();
//   marker->SetMarkerStyle(mstyle);
//   marker->SetMarkerSize(msize);
//   marker->Draw();
  
//   TLatex l; l.SetTextAlign(12); //l.SetTextSize(tsize); 
//   l.SetNDC();
//   l.DrawLatex(x,y,text);
// }







TGraphErrors* myTGraphErrorsDivide(TGraphErrors* g1,TGraphErrors* g2) {
 
  const Int_t debug=0; 

  if (!g1) printf("**myTGraphErrorsDivide: g1 does not exist !  \n"); 
  if (!g2) printf("**myTGraphErrorsDivide: g2 does not exist !  \n"); 


  Int_t n1=g1->GetN();
  Int_t n2=g2->GetN();

  if (n1!=n2) {
   printf("**myTGraphErrorsDivide: vector do not have same number of entries !  \n"); 
  }

  TGraphErrors* g3= new TGraphErrors();

  Double_t  x1=0., y1=0., x2=0., y2=0.;
  Double_t dx1=0.,dy1=0.,       dy2=0.;

  Int_t iv=0;
  for (Int_t i1=0; i1<n1; i1++) {
   for (Int_t i2=0; i2<n2; i2++) {
     //if (debug) printf("**myTGraphErrorsDivide: %d  %d !  \n",i1,i2);

    g1->GetPoint(i1,x1,y1);
    g2->GetPoint(i2,x2,y2);
    if (x1!=x2) {
      //printf("**myTGraphErrorsDivide: %d x1!=x2  %f %f  !  \n",iv,x1,x2);
    }else{
      //if (debug) printf("**myTGraphErrorsDivide: %d x1=x2  %f %f  !  \n",iv,x1,x2);
     dx1  = g1->GetErrorX(i1);
     if (y1!=0) dy1  = g1->GetErrorY(i1)/y1;
     if (y2!=0) dy2  = g2->GetErrorY(i2)/y2;
   
     if (debug)
      printf("**myTGraphErrorsDivide: %d x1=%f x2=%f y1=%f y2=%f  \n",iv,x1,x2,y1,y2);

     if (y2!=0.) g3->SetPoint(iv, x1,y1/y2);
     else        g3->SetPoint(iv, x1,y2);
   
     Double_t e=0.;
     if (y1!=0 && y2!=0) e=std::sqrt(dy1*dy1+dy2*dy2)*(y1/y2); 
     g3->SetPointError(iv,dx1,e);


     if (debug) {
       //Double_t g3y, g3x,g3e;
       //g3->GetPoint(iv, g3y,g3x);
       //g3e=g3->GetErrorY(iv);
       //printf("%d g3y= %f g3e=%f  \n",iv,g3y,g3e);
     }
     iv++;
    }
    //    printf("**myTGraphErrorsDivide: ...next  \n");
   }
  }  
  return g3;

}


TGraphAsymmErrors* myTGraphErrorsDivide(TGraphAsymmErrors* g1,TGraphAsymmErrors* g2) {

  const Int_t debug=0; 

  TGraphAsymmErrors* g3= new TGraphAsymmErrors();
  Int_t n1=g1->GetN();
  Int_t n2=g2->GetN();
  
  if (n1!=n2) {
    printf(" vectors do not have same number of entries !  \n");
   return g3;
  }

  Double_t   x1=0.,   y1=0., x2=0., y2=0.;
  Double_t dx1h=0., dx1l=0.;
  Double_t dy1h=0., dy1l=0.;
  Double_t dy2h=0., dy2l=0.;

  Double_t* X1 = g1->GetX();
  Double_t* Y1 = g1->GetY();
  Double_t* EXhigh1 = g1->GetEXhigh();
  Double_t* EXlow1 =  g1->GetEXlow();
  Double_t* EYhigh1 = g1->GetEYhigh();
  Double_t* EYlow1 =  g1->GetEYlow();

  Double_t* X2 = g2->GetX();
  Double_t* Y2 = g2->GetY();
  Double_t* EXhigh2 = g2->GetEXhigh();
  Double_t* EXlow2 =  g2->GetEXlow();
  Double_t* EYhigh2 = g2->GetEYhigh();
  Double_t* EYlow2 =  g2->GetEYlow();
  
  for (Int_t i=0; i<g1->GetN(); i++) {
    g1->GetPoint(i,x1,y1);
    g2->GetPoint(i,x2,y2);
    dx1h  = EXhigh1[i];
    dx1l  = EXlow1[i];
    if (y1!=0.) dy1h  = EYhigh1[i]/y1;
    else        dy1h  = 0.;
    if (y2!=0.) dy2h  = EYhigh2[i]/y2;
    else        dy2h  = 0.;
    if (y1!=0.) dy1l  = EYlow1 [i]/y1;
    else        dy1l  = 0.;
    if (y2!=0.) dy2l  = EYlow2 [i]/y2;
    else        dy2l  = 0.;
    
    //if (debug)
    //printf("%d x1=%f x2=%f y1=%f y2=%f  \n",i,x1,x2,y1,y2);
    if (debug)
      printf("%d dy1=%f %f dy2=%f %f sqrt= %f %f \n",i,dy1l,dy1h,dy2l,dy2h,
	     std::sqrt(dy1l*dy1l+dy2l*dy2l), std::sqrt(dy1h*dy1h+dy2h*dy2h));
    
    if (y2!=0.) g3->SetPoint(i, x1,y1/y2);
    else       g3->SetPoint(i, x1,y2);
    Double_t el=0.; Double_t eh=0.;
    
    if (y1!=0. && y2!=0.) el=std::sqrt(dy1l*dy1l+dy2h*dy2h)*(y1/y2);
    if (y1!=0. && y2!=0.) eh=std::sqrt(dy1h*dy1h+dy2l*dy2l)*(y1/y2);
    
    if (debug) printf("dx1h=%f  dx1l=%f  el=%f  eh=%f \n",dx1h,dx1l,el,eh);
    g3->SetPointError(i,dx1h,dx1l,el,eh);

  }  
  return g3;

}



//
TGraphAsymmErrors* myTGraphErrorsMultiply(TGraphAsymmErrors* g1,TGraphAsymmErrors* g2) {
  
  const Int_t debug=0; 
  
  TGraphAsymmErrors* g3= new TGraphAsymmErrors();
  Int_t n1=g1->GetN();
  Int_t n2=g2->GetN();
  
  if (n1!=n2) {
    printf(" vectors do not have same number of entries !  \n");
   return g3;
  }

  Double_t   x1=0.,   y1=0., x2=0., y2=0.;
  Double_t dx1h=0., dx1l=0.;
  Double_t dy1h=0., dy1l=0.;
  Double_t dy2h=0., dy2l=0.;

  Double_t* X1 = g1->GetX();
  Double_t* Y1 = g1->GetY();
  Double_t* EXhigh1 = g1->GetEXhigh();
  Double_t* EXlow1 =  g1->GetEXlow();
  Double_t* EYhigh1 = g1->GetEYhigh();
  Double_t* EYlow1 =  g1->GetEYlow();
  
  Double_t* X2 = g2->GetX();
  Double_t* Y2 = g2->GetY();
  Double_t* EXhigh2 = g2->GetEXhigh();
  Double_t* EXlow2 =  g2->GetEXlow();
  Double_t* EYhigh2 = g2->GetEYhigh();
  Double_t* EYlow2 =  g2->GetEYlow();

  for (Int_t i=0; i<g1->GetN(); i++) {
    g1->GetPoint(i,x1,y1);
    g2->GetPoint(i,x2,y2);
    dx1h  = EXhigh1[i];
    dx1l  = EXlow1[i];
    if (y1!=0.) dy1h  = EYhigh1[i]/y1;
    else        dy1h  = 0.;
    if (y2!=0.) dy2h  = EYhigh2[i]/y2;
    else        dy2h  = 0.;
    if (y1!=0.) dy1l  = EYlow1 [i]/y1;
    else        dy1l  = 0.;
    if (y2!=0.) dy2l  = EYlow2 [i]/y2;
    else        dy2l  = 0.;
    
    //if (debug)
    //printf("%d x1=%f x2=%f y1=%f y2=%f  \n",i,x1,x2,y1,y2);
    if (debug)
      printf("%d dy1=%f %f dy2=%f %f sqrt= %f %f \n",i,dy1l,dy1h,dy2l,dy2h,
	     std::sqrt(dy1l*dy1l+dy2l*dy2l), std::sqrt(dy1h*dy1h+dy2h*dy2h));
    
    if (y2!=0.) g3->SetPoint(i, x1,y1*y2);
    else        g3->SetPoint(i, x1,y2);
    Double_t el=0.; Double_t eh=0.;
    
    if (y1!=0. && y2!=0.) el=std::sqrt(dy1l*dy1l+dy2l*dy2l)*(y1*y2);
    if (y1!=0. && y2!=0.) eh=std::sqrt(dy1h*dy1h+dy2h*dy2h)*(y1*y2);
    
    if (debug) printf("dx1h=%f  dx1l=%f  el=%f  eh=%f \n",dx1h,dx1l,el,eh);
    g3->SetPointError(i,dx1h,dx1l,el,eh);

  }  
  return g3;

}





TGraphAsymmErrors* myMakeBand(TGraphErrors* g0, TGraphErrors* g1,TGraphErrors* g2) {
  // default is g0
  //const Int_t debug=0;
  
  TGraphAsymmErrors* g3= new TGraphAsymmErrors();
  
  Double_t  x1=0., y1=0., x2=0., y2=0., y0=0, x3=0.;
  //Double_t dx1=0.;
  Double_t dum;
  for (Int_t i=0; i<g1->GetN(); i++) {
    g0->GetPoint(i, x1,y0);
    g1->GetPoint(i, x1,y1);
    g2->GetPoint(i, x1,y2);

    // if (y1==0) y1=1;
    //if (y2==0) y2=1;

    if (i==g1->GetN()-1) x2=x1;
    else                 g2->GetPoint(i+1,x2,dum);

    if (i==0)            x3=x1;
    else                 g2->GetPoint(i-1,x3,dum);

    Double_t tmp=y2;
    if (y1<y2) {y2=y1; y1=tmp;}
    //Double_t y3=1.;
    Double_t y3=y0;
    g3->SetPoint(i,x1,y3);

    Double_t binwl=(x1-x3)/2.;
    Double_t binwh=(x2-x1)/2.;
    if (binwl==0.)  binwl= binwh;
    if (binwh==0.)  binwh= binwl;
    g3->SetPointError(i,binwl,binwh,(y3-y2),(y1-y3));

  }
  return g3;

}

void myAddtoBand(TGraphErrors* g1, TGraphAsymmErrors* g2) {

  Double_t  x1=0., y1=0.,  y2=0., y0=0;
  //Double_t dx1=0.;
  //Double_t dum;

  if (g1->GetN()!=g2->GetN())
    std::cout << " graphs have not the same # of elements " << std::endl;

  Double_t* EYhigh = g2-> GetEYhigh();
  Double_t* EYlow  = g2-> GetEYlow();

  for (Int_t i=0; i<g1->GetN(); i++) {
    g1->GetPoint(i, x1,y1);
    g2->GetPoint(i, x1,y2);
    
    if ( y1==0 || y2==0 ) { 
      std::cerr << "check these points very carefully : myAddtoBand() : point " << i << std::endl;  
    }
    //    if (y1==0) y1=1;
    //    if (y2==0) y2=1;

    //    if (i==g1->GetN()-1) x2=x1;
    //    else                 g2->GetPoint(i+1,x2,dum);
    //    if (i==0)            x3=x1;
    //    else                 g2->GetPoint(i-1,x3,dum);

    Double_t eyh=0., eyl=0.;
    //if (y1<y2) {y2=y1; y1=tmp;}
    //Double_t y3=1.;

    //printf("%d: y1=%f y2=%f Eyhigh= %f Eylow= %f \n",i,y1,y2,EYhigh[i],EYlow[i]);

    y0=y1-y2;
    if (y0!=0) {
     if (y0>0){
      eyh=EYhigh[i];
      eyh=std::sqrt(eyh*eyh+y0*y0);
      //printf("high: %d: y0=%f eyh=%f  \n",i,y0,eyh);
      g2->SetPointEYhigh(i,eyh);
     } else {
      eyl=EYlow[i];
      eyl=std::sqrt(eyl*eyl+y0*y0);
      // printf("low: %d: y0=%f eyl=%f  \n",i,y0,eyl);
      g2->SetPointEYlow (i,eyl);
     }
    }
  }
  return;

}


TGraphErrors* TH1TOTGraph(TH1 *h1){  
  
  if (!h1) std::cout << "TH1TOTGraph: histogram not found !" << std::endl;
  
 TGraphErrors* g1= new TGraphErrors();

 Double_t x, y, ex, ey;
 for (Int_t i=1 ; i<=h1->GetNbinsX(); i++) {
   y=h1->GetBinContent(i);
   ey=h1->GetBinError(i);
   x=h1->GetBinCenter(i);
   ex=h1->GetBinWidth(i);
   
  //   cout << " x,y = " << x << " " << y << " ex,ey = " << ex << " " << ey << endl;

   g1->SetPoint(i-1,x,y);
   g1->SetPointError(i-1,ex,ey);

 }

 //g1->Print();

 return g1;
}

void myText(Double_t x,Double_t y,Color_t color, const char *text) {

  //Double_t tsize=0.05;
  TLatex l; //l.SetTextAlign(12); l.SetTextSize(tsize); 
  l.SetNDC();
  l.SetTextColor(color);
  l.DrawLatex(x,y,text);
}
 

void myBoxText(Double_t x, Double_t y,Double_t boxsize,Int_t mcolor,const char *text) 
{

  Double_t tsize=0.06;

  TLatex l; l.SetTextAlign(12); //l.SetTextSize(tsize); 
  l.SetNDC();
  l.DrawLatex(x,y,text);

  Double_t y1=y-0.25*tsize;
  Double_t y2=y+0.25*tsize;
  Double_t x2=x-0.3*tsize;
  Double_t x1=x2-boxsize;

  printf("x1= %f x2= %f y1= %f y2= %f \n",x1,x2,y1,y2);

  TPave *mbox= new TPave(x1,y1,x2,y2,0,"NDC");
  
  mbox->SetFillColor(mcolor);
  mbox->SetFillStyle(1001);
  mbox->Draw();

  TLine mline;
  mline.SetLineWidth(4);
  mline.SetLineColor(1);
  mline.SetLineStyle(1);
  Double_t y_new=(y1+y2)/2.;
  mline.DrawLineNDC(x1,y_new,x2,y_new);

}


void myMarkerText(Double_t x,Double_t y,Int_t color,Int_t mstyle, const char *text,Float_t msize) 
{
  Double_t tsize=0.06;
  TMarker *marker = new TMarker(x-(0.4*tsize),y,8);
  marker->SetMarkerColor(color);  marker->SetNDC();
  marker->SetMarkerStyle(mstyle);
  marker->SetMarkerSize(msize);
  marker->Draw();

  TLatex l; l.SetTextAlign(12); //l.SetTextSize(tsize); 
  l.SetNDC();
  l.DrawLatex(x,y,text);
}






// void ERROR_cal(double x ,double y, double xx,double yy,int n) 
// {  //n 1,2,3,4 -- sum,decrease ,multi,div
//   double ans=0;
//   double cal=0;
  
//   if(1==n){
//     cal=x+y;
//     ans=sqrt(xx*xx+yy*yy);
//   } else if (2==n){
//     cal=x-y;
//     ans=sqrt(xx*xx+yy*yy);
//   }else if(n==3){
//     cal=x*y;
//     ans=sqrt(y*y*xx*xx + x*x*yy*yy);
//   }else if(n==4){
//     cal=x/y;
//     ans=sqrt( pow(xx/y,2) + pow(x/y/y*yy,2));
//   }
  
//   std::cout<<"ERROR::"<<cal<<" +- "<<ans<<endl;
//   //return ans;
// }


double ERROR_cal(double x ,double y, double xx,double yy,int n) 
{  //n 1,2,3,4 -- sum,decrease ,multi,div
  double ans=0;
  double cal=0;
  
  if(1==n){
    cal=x+y;
    ans=sqrt(xx*xx+yy*yy);
  } else if (2==n){
    cal=x-y;
    ans=sqrt(xx*xx+yy*yy);
  }else if(n==3){
    cal=x*y;
    ans=sqrt(y*y*xx*xx + x*x*yy*yy);
  }else if(n==4){
    cal=x/y;
    ans=sqrt( pow(xx/y,2) + pow(x/y/y*yy,2));
  }
  
  //std::cout<<"ERROR::"<<cal<<" +- "<<ans<<endl;
  return ans;
}



void sort_tlv(vector <TLorentzVector> RoIs){
  for (unsigned int ii=0;ii<RoIs.size();ii++) { 
    for (unsigned int kk=ii+1;kk<RoIs.size();kk++) {
      TLorentzVector  tlvii=RoIs.at(ii);
      TLorentzVector  tlvkk=RoIs.at(kk);
      if(tlvii.Pt()<tlvkk.Pt()){
	RoIs.at(ii)=tlvkk;
	RoIs.at(kk)=tlvii;
      }
    }//kk
 }//ii
}//void

vector <TLorentzVector> sort_TLV(vector <TLorentzVector> Vec){
  
  vector <TLorentzVector> RoIs=Vec;
  
  for (unsigned int ii=0;ii<RoIs.size();ii++) { 
    for (unsigned int kk=ii+1;kk<RoIs.size();kk++) {
      TLorentzVector  tlvii=RoIs.at(ii);
      TLorentzVector  tlvkk=RoIs.at(kk);
      if(tlvii.Pt()<tlvkk.Pt()){
	RoIs.at(ii)=tlvkk;
	RoIs.at(kk)=tlvii;
      }
    }//kk
  }//ii
  return RoIs;
}//void










void hist_custom(TH1* hist,int kk=1,float width=3.0,float size=1.5)
{
  hist->Sumw2();
  hist->SetLineColor(kk);
  hist->SetFillColor(kk);
  hist->SetMarkerColor(kk);
  
  hist->SetLineWidth(width);
  hist->SetMarkerStyle(20);
  hist->SetMarkerSize(size);
}

void hist_dataSET(TH1* hist){
  hist->SetMaximum(1.7*hist->GetMaximum());
  hist->SetMinimum(0.);
  hist->SetYTitle("Events");
  hist->SetTitleOffset(1.25,"Y");
  hist->SetTitleSize(0.05,"Y");
  hist->SetLabelSize(0.05,"Y");
  
  hist->SetTitleOffset(0.,"X");
  hist->SetTitleSize(0.0 ,"X");
  hist->SetLabelSize(0.0 ,"X");
  
  hist->SetTitleOffset(1.0,"Y");
  hist->SetTitleSize(0.07,"Y");
  hist->SetLabelSize(0.06,"Y");
  
}

void hist_dataRatioSET(TH1* h_ratio_OS2bkg){
  //h_ratio_OS2bkg->SetYTitle("Factor");
  h_ratio_OS2bkg->SetTitleOffset(0.30,"Y");
  h_ratio_OS2bkg->SetTitleSize(0.15,"Y");
  h_ratio_OS2bkg->SetLabelSize(0.15,"Y");
  
  h_ratio_OS2bkg->SetTitleOffset(0.5,"X");
  h_ratio_OS2bkg->SetTitleSize(0.10,"X");
  h_ratio_OS2bkg->SetLabelSize(0.,"X");
  h_ratio_OS2bkg->SetMarkerSize(1.5);
  
  //
  h_ratio_OS2bkg->SetTitleSize(0.13,"Y");
  h_ratio_OS2bkg->SetTitleOffset(0.40,"Y");
  h_ratio_OS2bkg->SetLabelSize(0.12,"Y");
  h_ratio_OS2bkg->SetLabelOffset(0.010,"X");
  h_ratio_OS2bkg->SetYTitle("data/exp. ");
  
  h_ratio_OS2bkg->SetTitleSize(0.15,"X");
  h_ratio_OS2bkg->SetTitleOffset(1.00,"X");
  h_ratio_OS2bkg->SetLabelSize(0.12,"X");
  h_ratio_OS2bkg->SetLabelOffset(0.020,"X");
  
  /* h_ratio_OS2bkg->SetMaximum(1.1*h_ratio_OS2bkg->GetMaximum());   */
  /* h_ratio_OS2bkg->SetMinimum(0.9*h_ratio_OS2bkg->GetMinimum());   */
  //h_ratio_OS2bkg->SetMaximum(1.3);                                                                     
  //h_ratio_OS2bkg->SetMinimum(0.7);                                                                     
}

void hist_custom(TGraphAsymmErrors* h ){
  
  h->GetYaxis()->SetTitle("Eff");
  h->GetYaxis()->SetTitleOffset(1.25);
  h->GetYaxis()->SetTitleSize(0.05);
  h->GetYaxis()->SetLabelSize(0.05);
  
  /* h_ratio_OS2bkg->SetTitleOffset(0.40,"X"); */
  /* h_ratio_OS2bkg->SetTitleSize(0.16,"X"); */
  //h->GetXaxis()->SetLabelSize(0.);
  
  h->SetLineWidth(3);
  Color_t col=h->GetLineColor();
  h->SetMarkerStyle(20);
  h->SetMarkerColor(col);
  h->SetMarkerSize(1.5);
  
  //new!!                                                                                                
  h->GetXaxis()->SetTitleSize(0.16);
  h->GetXaxis()->SetTitleOffset(0.42-0.02);
  
  /* h_ratio_OS2bkg->SetMaximum(1.1*h_ratio_OS2bkg->GetMaximum());   */
  /* h_ratio_OS2bkg->SetMinimum(0.9*h_ratio_OS2bkg->GetMinimum());   */
  h->SetMaximum(1.1);
  h->SetMinimum(0.);

  return;
}

void hist_dataRatioSET(TGraphAsymmErrors* h_ratio_OS2bkg,bool range=1){

  h_ratio_OS2bkg->GetYaxis()->SetTitle("data/MC");
  h_ratio_OS2bkg->GetYaxis()->SetTitleOffset(0.28);
  h_ratio_OS2bkg->GetYaxis()->SetTitleSize(0.14);
  h_ratio_OS2bkg->GetYaxis()->SetLabelSize(0.12);
  /* h_ratio_OS2bkg->SetTitleOffset(0.40,"X"); */
  /* h_ratio_OS2bkg->SetTitleSize(0.16,"X"); */
  h_ratio_OS2bkg->GetXaxis()->SetLabelSize(0.);
  h_ratio_OS2bkg->SetLineWidth(3);
  h_ratio_OS2bkg->SetMarkerSize(1.5);
  
  //new!!   
  h_ratio_OS2bkg->GetXaxis()->SetTitleSize(0.16);
  h_ratio_OS2bkg->GetXaxis()->SetTitleOffset(0.42-0.02);
  
  /* h_ratio_OS2bkg->SetMaximum(1.1*h_ratio_OS2bkg->GetMaximum());   */
  /* h_ratio_OS2bkg->SetMinimum(0.9*h_ratio_OS2bkg->GetMinimum());   */
  if(range){
    h_ratio_OS2bkg->SetMaximum(1.25);
    h_ratio_OS2bkg->SetMinimum(0.75);
  }
  
}//void




void hist_OFUF(TH1* hist,bool treat_UF_bin=1,bool treat_OF_bin=1){
  
  if(treat_OF_bin){ // treat overflow bin  
    int nbin=hist->GetNbinsX();
    double val_OFBin = hist->GetBinContent(nbin+1);
    double err_OFBin = hist->GetBinError(nbin+1);
    double err_LastBin = hist->GetBinError(nbin);
    double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
    hist->AddBinContent(nbin,val_OFBin);
    hist->SetBinError(nbin, err_LastBin_fixed);
  }
  
  if(treat_UF_bin){ 
    // treat underflow bin    
    double val_UFBin = hist->GetBinContent(0);
    double err_UFBin = hist->GetBinError(0);
    double err_FirstBin = hist->GetBinError(1);
    double err_FirstBin_fixed = TMath::Sqrt((err_FirstBin*err_FirstBin)+(err_UFBin*err_UFBin));
    hist->AddBinContent(1,val_UFBin);
    hist->SetBinError(1, err_FirstBin_fixed);
  }
  
  return;
}//void


void treat_Overhist(TH1 *hist){  // not yet done!!! //tikai  
  
  int nbin=hist->GetNbinsX();
  float MAX=hist->GetMaximum();
  float MIN=hist->GetMinimum();
  
  for(int ii=0; ii<nbin; ii++){  
    double con = hist->GetBinContent(ii+1);
    double X = hist->GetBinCenter(ii+1);
    //if( con<MIN )
  }
  
  
  return;
} 




void hist_OFUF(TH2* hist ,  bool treat_OF=1 ,  bool treat_UF=1 ){
  
  int nbinx=hist->GetNbinsX();
  int nbiny=hist->GetNbinsY();
  
  bool debug=0;
  
  if(debug)    
    cout<<" Nbin x:y == "<<nbinx<<"  "<<nbiny<<endl;
  
  for(int ii=0; ii<nbiny; ii++){
    double val_OFBin   = hist->GetBinContent(nbinx+1,ii+1);
    double err_OFBin   = hist->GetBinError  (nbinx+1,ii+1);
    double val_LastBin = hist->GetBinContent(nbinx  ,ii+1);
    double err_LastBin = hist->GetBinError  (nbinx  ,ii+1);
    double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
    if(debug)    
      cout<<" BinValue == "<<val_OFBin<<"  "<<val_LastBin<<"  "<<val_OFBin+val_LastBin<<endl;
    hist->SetBinContent(nbinx,ii+1, val_OFBin + val_LastBin);
    //hist->AddBinContent(ii,nbinx, val_OFBin);
    hist->SetBinError  (nbinx,ii+1, err_LastBin_fixed);
  }
  // for(int ii=1; ii<nbiny; ii++){
  //   double val_UFBin = hist->GetBinContent(ii,0);
  //   double err_UFBin = hist->GetBinError(ii,0);
  //   double val_FirstBin = hist->GetBinContent(ii,1);
  //   double err_FirstBin = hist->GetBinError(ii,1);
  //   double err_FirstBin_fixed = TMath::Sqrt((err_FirstBin*err_FirstBin)+(err_UFBin*err_UFBin));
    
  //   hist->SetBinContent(ii,1, val_UFBin + val_FirstBin);
  //   //hist->AddBinContent(ii,1, val_UFBin);
  //   hist->SetBinError  (ii,1, err_FirstBin_fixed);
  // }
  
  for(int ii=2; ii<nbinx-1; ii++){
    double val_OFBin   = hist->GetBinContent(ii+1 ,nbiny+1);
    double err_OFBin   = hist->GetBinError  (ii+1 ,nbiny+1);
    double val_LastBin = hist->GetBinContent(ii+1 ,nbiny);
    double err_LastBin = hist->GetBinError  (ii+1 ,nbiny);
    double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
    
    hist->SetBinContent(ii+1,nbiny,val_OFBin + val_LastBin);
    //hist->AddBinContent(nbiny,ii, val_OFBin);
    hist->SetBinError  (ii+1,nbiny,err_LastBin_fixed);
  }
  
  if(treat_OF){ // x & y OF bin
    double val_OFBin   = hist->GetBinContent(nbinx+1 ,nbiny+1);
    double err_OFBin   = hist->GetBinError  (nbinx+1 ,nbiny+1);
    double val_LastBin = hist->GetBinContent(nbinx   ,nbiny);
    double err_LastBin = hist->GetBinError  (nbinx   ,nbiny);
    double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
    
    hist->SetBinContent(nbinx,nbiny,val_OFBin + val_LastBin);
    //hist->AddBinContent(nbiny,ii, val_OFBin);
    hist->SetBinError  (nbinx,nbiny,err_LastBin_fixed);
  }
  
  // for(int ii=2; ii<nbinx-1; ii++){
  //   double val_UFBin = hist->GetBinContent(0,ii);
  //   double err_UFBin = hist->GetBinError(0,ii);
  //   double val_FirstBin = hist->GetBinContent(1,ii);
  //   double err_FirstBin = hist->GetBinError(1,ii);
  //   double err_FirstBin_fixed = TMath::Sqrt((err_FirstBin*err_FirstBin)+(err_UFBin*err_UFBin));
    
  //   hist->SetBinContent(1,ii, val_UFBin + val_FirstBin);
  //   //hist->AddBinContent(1,ii, val_OFBin);
  //   hist->SetBinError  (1,ii, err_FirstBin_fixed);
  // }
  
  return;
}//void


//TGraphAsymmErrors* Copy(TGraphAsymmErrors* g1){//tikai
void hist2Divide(TH2* h5,TH2* h1,TH2* h2){
  //    h5=h1/h2
  
  int nbinx1=h1->GetNbinsX();
  int nbiny1=h1->GetNbinsY();
  int nbinx2=h2->GetNbinsX();
  int nbiny2=h2->GetNbinsY();
  
  if(nbinx1!=nbinx2)return;
  if(nbiny1!=nbiny2)return;
  

  for(int ii=0; ii<nbinx1; ii++){
    for(int kk=0; kk<nbiny1; kk++){
      double con1=h1->GetBinContent(ii+1,kk+1);
      double con2=h2->GetBinContent(ii+1,kk+1);
      double err1=h1->GetBinError(ii+1,kk+1);
      double err2=h2->GetBinError(ii+1,kk+1);
      
      double val=0;
      if(con2!=0)val=con1/con2;
      h5->SetBinContent(ii+1,kk+1, val);
      
      double err=ERROR_cal(con1,con2,err1,err2, 4);
      h5->SetBinError  (ii+1,kk+1, err);
      
    }//kk
  }//ii
  
  
    
  
  return;
}//void







void BeforeTGrapgh(TH1* ht_fiducial,TH1* h_fiducial){
  for(int ii=0; ii<h_fiducial->GetNbinsX()+1; ii++){
    double nbase  = h_fiducial->GetBinContent(ii+1);
    double enbase = h_fiducial->GetBinError(ii+1);
    double npass  = ht_fiducial->GetBinContent(ii+1);
    double enpass = ht_fiducial->GetBinError(ii+1);
    if(nbase <= 0){
      std::cout<<h_fiducial->GetBinCenter(ii+1)<<" base <= 0"<<std::endl;
      h_fiducial->SetBinContent(ii+1, 0);
      h_fiducial->SetBinError(ii+1, 0);
      ht_fiducial->SetBinContent(ii+1, 0);
      ht_fiducial->SetBinError(ii+1, 0);
    }else if(npass < 0){
      std::cout<<h_fiducial->GetBinCenter(ii+1)<<" pass < 0"<<std::endl;
      ht_fiducial->SetBinContent(ii+1, 0);
      ht_fiducial->SetBinError(ii+1, 0);
    }else if(npass > nbase){
      std::cout<<h_fiducial->GetBinCenter(ii+1)<<" pass > base"<<std::endl;
      ht_fiducial->SetBinContent(ii+1, nbase);
      ht_fiducial->SetBinError(ii+1, enpass/npass * nbase);
    }
  }
  

  return;
}




/*
TH2* my2DEff(TH2* h1,TH2* h2){
  TH2* h;
  // int nbin=hist->GetNbinsX();
  //   double val_OFBin = hist->GetBinContent(nbin+1);
  //   double err_OFBin = hist->GetBinError(nbin+1);
  //   double err_LastBin = hist->GetBinError(nbin);
  //   double err_LastBin_fixed = TMath::Sqrt((err_LastBin*err_LastBin)+(err_OFBin*err_OFBin));
  //   hist->AddBinContent(nbin,val_OFBin);
  //   hist->SetBinError(nbin, err_LastBin_fixed);
    
    return  h;
}
*/






TLegend* MyLegend(float a=0.55 ,float b=0.25 ,float c=0.88 ,float d=0.42){
  
  TLegend* leg = new TLegend(a,b,c,d);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);
  leg->SetTextSize(0.04);
  leg->SetTextFont(42);
  leg->SetBorderSize(0);  
  
  return leg;
}




void MyRatioBand(TGraphAsymmErrors* g1  ,TGraphAsymmErrors* g2){//tikai
  //g1==MC
  //g2==DATA
  
  Int_t n1 =g1->GetN();
  Int_t n2 =g2->GetN();
  
  
  g1->SetFillColor(2);
  g1->SetLineColor(2);
  g1->SetMarkerColor(0);
  g1->SetFillStyle(3244);
  g1->SetMarkerSize(0);
  // //g1->GetXaxis()->SetRangeUser(X1,Xn);
  //g1->SetMaximum(1.2);
  //g1->SetMinimum(0.8);
  
  
  if (n1!=n2) {
    printf(" vectors do not have same number of entries !  \n");
    return ;
  }  
  
  
  Double_t   x1=0.,   y1=0., x2=0., y2=0.;
  Double_t dx1h=0., dx1l=0.;
  Double_t dy1h=0., dy1l=0.;
  Double_t dy2h=0., dy2l=0.;

  Double_t* X1 = g1->GetX();

  Double_t* Y1 = g1->GetY();
  Double_t* EXhigh1 = g1->GetEXhigh();
  Double_t* EXlow1 =  g1->GetEXlow();
  Double_t* EYhigh1 = g1->GetEYhigh();
  Double_t* EYlow1 =  g1->GetEYlow();
  
  Double_t* X2 = g2->GetX();
  Double_t* Y2 = g2->GetY();
  Double_t* EXhigh2 = g2->GetEXhigh();
  Double_t* EXlow2 =  g2->GetEXlow();
  Double_t* EYhigh2 = g2->GetEYhigh();
  Double_t* EYlow2 =  g2->GetEYlow();
  
  for (Int_t i=0; i<g1->GetN(); i++) {
    g1->GetPoint(i,x1,y1);
    g2->GetPoint(i,x2,y2);
    
    dx1h  = EXhigh1[i];
    dx1l  = EXlow1[i];
    
    
    //divide by MC
    Double_t mean1i = y1/y1;
    Double_t high1i = EYhigh1[i]/y1;
    Double_t low1i  =  EYlow1[i]/y1;
    Double_t mean2i = y2/y1;
    Double_t high2i = EYhigh2[i]/y1;
    Double_t low2i  =  EYlow2[i]/y1;
    //
    // Double_t mean1i = y1/y1;
    // Double_t high1i = (EXhigh1[i]-y1)/y1;
    // Double_t low1i  = (y1-EXlow1[i])/y1;
    // Double_t mean2i = y2/y1;
    // Double_t high2i = (EXhigh2[i]-y2)/y1;
    // Double_t low2i  = (y2-EXlow2[i])/y1;
    
    
    //printf(" %f %f %f %f %f %f %f \n",mean1i,high1i,low1i,mean2i,high2i,low2i,y1);
    if(0!=y1){
      g1->SetPoint(i,x1,mean1i);
      g2->SetPoint(i,x2,mean2i);
      g1->SetPointError(i,dx1l,dx1h,low1i,high1i);
      g2->SetPointError(i,dx1l,dx1h,low2i,high2i);
    }
    
    
  }
  
  return;
}






TGraphAsymmErrors* Copy(TGraphAsymmErrors* g1){//tikai
  
  Int_t n1 =g1->GetN();
  
  Double_t* X1 = g1->GetX();
  Double_t* Y1 = g1->GetY();
  Double_t* EXhigh1 = g1->GetEXhigh();
  Double_t* EXlow1 =  g1->GetEXlow();
  Double_t* EYhigh1 = g1->GetEYhigh();
  Double_t* EYlow1 =  g1->GetEYlow();
  
  TGraphAsymmErrors* g5= new TGraphAsymmErrors(n1,X1,Y1, EXlow1,EXhigh1  , EYlow1,EYhigh1);
  
  return g5;
}


void OUT_bin(TGraphAsymmErrors* g1
	     ){//tikai
  
  int NN=g1->GetN();
  for (Int_t i=0; i<NN; i++) {
    Double_t x1,y1;
    g1->GetPoint(i,x1,y1);
    
    Double_t xerr1,yerr1 , xerr2,yerr2;
    //g1->GetPointError(i,xerr1,xerr2,yerr1,yerr2);
    xerr1=g1->GetErrorXlow(i);
    yerr1=g1->GetErrorYlow(i);
    xerr2=g1->GetErrorXhigh(i);
    yerr2=g1->GetErrorYhigh(i);
    
    printf(" %3d == %f %f %f",i,x1,xerr1,xerr2);
    printf("     == %f %f %f\n",y1,yerr1,yerr2);
    
  }
  
  return;
}



void fill_asym_binXY(TGraphAsymmErrors* g1,
		     vector<float>& X_mean,
		     vector<float>& X_err,
		     vector<float>& mean,
		     vector<float>& err_up,
		     vector<float>& err_down		   
		     ){    //tikai
  
  int NN=g1->GetN();
  for (Int_t i=0; i<NN; i++) {
    Double_t x1,y1;
    g1->GetPoint(i,x1,y1);
    
    Double_t xerr1,yerr1 , xerr2,yerr2;
    //g1->GetPointError(i,xerr1,xerr2,yerr1,yerr2);
    xerr1=g1->GetErrorXhigh(i);
    yerr1=g1->GetErrorYhigh(i);
    xerr2=g1->GetErrorXlow(i);
    yerr2=g1->GetErrorYlow(i);
    
    if(1>0){
      xerr1= (0==xerr1) ? 0 : xerr1;
      xerr2= (0==xerr2) ? 0 : xerr2;
      yerr1= (0==yerr1) ? 0 : yerr1;
      yerr2= (0==yerr2) ? 0 : yerr2;
    }
    
    mean    .push_back(y1);
    err_up  .push_back(yerr1);
    err_down.push_back(yerr2);
    
    X_mean.push_back(x1);
    X_err .push_back(xerr1);    
    
    //printf(" %2d == %3f %3f %3f \n",i,x1,xerr1,xerr2);
    // printf("     == %f %f %f\n",y1,yerr1,yerr2);
    
  }
  printf("Total bin== %2d \n",X_mean.size());
  
  return;
}



void fill_asym_bin(TGraphAsymmErrors* g1,
		   vector<float>& mean,
		   vector<float>& err_up,
		   vector<float>& err_down
		   ){//tikai
  
  int NN=g1->GetN();
  for (Int_t i=0; i<NN; i++) {
    Double_t x1,y1;
    g1->GetPoint(i,x1,y1);
    
    Double_t xerr1,yerr1 , xerr2,yerr2;
    //g1->GetPointError(i,xerr1,xerr2,yerr1,yerr2);
    xerr1=g1->GetErrorXhigh(i);
    yerr1=g1->GetErrorYhigh(i);
    xerr2=g1->GetErrorXlow(i);
    yerr2=g1->GetErrorYlow(i);
    
    mean    .push_back(y1);
    err_up  .push_back(yerr1);
    err_down.push_back(yerr2);
    
    // printf(" %3d == %f %f %f",i,x1,xerr1,xerr2);
    // printf("     == %f %f %f\n",y1,yerr1,yerr2);
    
  }
  
  return;
}






void OverRatioBin(TH1* h1 ,TH1* h2 , short LineWidths=2){
  
  int nbin=h1->GetNbinsX();
  double ymax   = h2->GetMaximum();
  double ymin   = h2->GetMinimum();
  
  double arrow_size=0.01;
  
  // ymax=1.5;
  // ymin=0.5;
  
  //TLine *line = new TLine(-1000,1,1000,1);
  TArrow *line = new TArrow(-1000,1,1000,1);
  line->SetLineColor(4);
  line->SetLineWidth(LineWidths);
  //line->SetLineStyle(2);
  
  for (Int_t i=0; i<nbin; i++) {
    double val       = h1->GetBinContent(i+1);
    double Xcenter   = h1->GetBinCenter(i+1);
    if(0==val)continue;
    
    //printf("Val ,Xce %f %f \n",val,Xcenter);
    if(ymax<val)
      line->DrawArrow(Xcenter , ymax-(ymax-ymin)/4,
		      Xcenter , ymax ,arrow_size );
    else if(val<ymin)
      line->DrawArrow(Xcenter , ymin+(ymax-ymin)/4,
		      Xcenter , ymin   ,arrow_size );
  }//for 
  
  printf("min.max = %f %f ",ymin,ymax);
  
  return;
}//OverRatioBin(TH1* h1 , short LineWidths=2){




void MyRatioBand(TH1* h1  ,TH1* h2){//tikai
  //h1 MC 
  //h2 data
  int nbin=h1->GetNbinsX();
  int nbin2=h2->GetNbinsX();
  
  if(nbin!=nbin2){
    printf("Not  Correspond Nbin %d != %d fail...\n",nbin,nbin2);
    return;
  }else printf("Correspond Nbin %d == %d good...\n",nbin,nbin2);
  
  h1->SetFillColor(2);
  h1->SetLineColor(2);
  h1->SetMarkerColor(0);
  h1->SetFillStyle(3244);//important
  h1->SetMarkerSize(0);
  
  for (Int_t i=0; i<nbin; i++) {
    double val1   = h1->GetBinContent(i+1);
    double err1   = h1->GetBinError(i+1);
    double val2   = h2->GetBinContent(i+1);
    double err2   = h2->GetBinError(i+1);
    
    //printf("Divide %d bin %f ,%f ,%f ,%f \n",i+1,val1,err1,val2,err2);
    
    if(val1==0)continue;  
    double MCval=val1/val1;
    double MCerr=err1/val1;
    double Dval=val2/val1;
    double Derr=err2/val1;
    
    h1->SetBinContent(i+1,MCval);
    h1->SetBinError(i+1,MCerr);
    h2->SetBinContent(i+1,Dval);
    h2->SetBinError(i+1,Derr);
  }//for
  
  
  
  
}//void




TGraphAsymmErrors* MyTGraphAsymmErrors (TH1* ht_fiducial ,TH1* h_fiducial){ //,after ,base
  
  for(int ii=0;  ii<h_fiducial->GetNbinsX(); ii++){
    double nbase  = h_fiducial->GetBinContent(ii+1);
    double enbase = h_fiducial->GetBinError(ii+1);
    double npass  = ht_fiducial->GetBinContent(ii+1);
    double enpass = ht_fiducial->GetBinError(ii+1);
    if(nbase <= 0){
      std::cout<<h_fiducial->GetBinCenter(ii+1)<<" base <= 0"<<std::endl;
      h_fiducial ->SetBinContent(ii+1, 0);
      h_fiducial ->SetBinError  (ii+1, 0);
      ht_fiducial->SetBinContent(ii+1, 0);
      ht_fiducial->SetBinError  (ii+1, 0);
    }else if(npass < 0){
      std::cout<<h_fiducial->GetBinCenter(ii+1)<<" pass < 0"<<std::endl;
      ht_fiducial->SetBinContent(ii+1, 0);
      ht_fiducial->SetBinError(ii+1, 0);
    }else if(npass > nbase){
      std::cout<<h_fiducial->GetBinCenter(ii+1)<<" pass > base"<<std::endl;
      ht_fiducial->SetBinContent(ii+1, nbase);
      ht_fiducial->SetBinError(ii+1, enpass/npass * nbase);
    }
    //std::cout<<" pass , base"<<h_fiducial->GetBinContent(ii+1)<<" > "<<ht_fiducial->GetBinContent(ii+1)<<std::endl;
  }//for ii
  
  TGraphAsymmErrors *g1 = new TGraphAsymmErrors 
    (ht_fiducial,h_fiducial,"cl=0.683 b(1,1) mode");
  
  return g1;
  
}



TString Convert_Title(TString var){
  
  TString name;
  //Tau
  if("tau_0_jet_bdt_score"==var)name="Jet BDT Score";
  else if("tau_0_pt"==var)name="Tau #font[12]{p}_{T}";
  else if("tau_0_eta"==var)name="Tau #eta";
  else if("tau_0_phi"==var)name="Tau #phi";
  else if("tau_0_n_tracks"==var)name="Tau N Tracks";
  else if("tau_0_n_wide_tracks"==var)name="Tau Wide N Tracks";
  else if("tau_0_decay_mode"==var)name="Tau Decay Mode";
  else if("(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt"==var)name="#font[12]{p}_{T}Reso (=Off-HLT/Off)";
  
  //Muon
  else if("lep_0_pt"==var)name="Muon #font[12]{p}_{T}";
  else if("lep_0_eta"==var)name="Muon #eta";
  else if("lep_0_phi"==var)name="Muon #phi";
  else if("lep_0_trk_d0"==var)name="Muon d_{0}";
  else if("lep_0_trk_pvx_z0_sintheta"==var)name="Muon z_{0}^{PV}sin#theta";
  //muon iso
  else if(var.Contains("lep_0_iso_etcone20"))name="EtCone20/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_etcone30"))name="EtCone30/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_etcone30"))name="EtCone40/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_ptcone20"))name="PtCone20/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_ptcone30"))name="PtCone30/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_ptcone40"))name="PtCone40/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_ptvarcone20"))name="PtVarCone20/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_ptvarcone30"))name="PtVarCone30/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_ptvarcone40"))name="PtVarCone40/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_topoetcone20"))name="TopoEtCone20/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_topoetcone30"))name="TopoEtCone30/#font[12]{p}_{T}";  
  else if(var.Contains("lep_0_iso_topoetcone40"))name="TopoEtCone40/#font[12]{p}_{T}";  
  
  //Jet
  else if("jet_0_pt"==var)name="Leading Jet #font[12]{p}_{T}";
  else if("jet_0_eta"==var)name="Leading Jet #eta";
  else if("jet_0_phi"==var)name="Leading Jet #phi";  
  
  //MET
  else if("met_reco_et"==var)name="E_{T}^{miss}";
  else if("met_reco_phi"==var)name="E_{T}^{miss} #phi";
  else if("lephad_met_centrality"==var)name="E_{T}^{miss} centrality";
  
  //lephad
  else if("lephad_dr"==var)name="dR(#tau,#mu)";
  else if("lephad_dpt"==var)name="#font[12]{p}_{T}^{#tau}-#font[12]{p}_{T}^{#mu}";
  else if("lephad_dphi"==var)name="d#phi(#tau,#mu)";
  else if("lephad_deta"==var)name="d#eta(#tau,#mu)";
  //else if("lephad_cosalpha"==var)name="d#eta(#tau,#mu)";
  // root ",\"lephad_met_min_dphi\", 20,0,2.5 )" -l -b -q
  // root ",\"lephad_met_lep0_cos_dphi\", 20,0,3.2 )" -l -b -q
  else if("lephad_met_sum_cos_dphi"==var)name="cos#Delta#phi(#mu,E_{T}^{miss})+cos#Delta#phi(#tau,E_{T}^{miss})";
  else if("lephad_mt_lep0_met"==var)name="M_{T}(#mu,E_{T}^{miss})";
  else if("lephad_vis_mass"==var)name="Mass(#tau,#mu)";
  
  //N 
  else if("n_jets"==var)name="N jets";
  else if("n_vx"==var)name="N Vertices";
  else if("n_avg_int_cor"==var)name="<#mu>";
  else if("(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt"==var)name="OnlineReso";
  //else if(""==var)name="";
  
  else if("(tau_0_pt-tau_0_trig1_HLT_pt)/tau_0_pt"==var)name="OnlineReso";
  
  else if("tau_0_id_centFracCorrected"==var)name="f_{cent } Corrected";
  else if("tau_0_id_etOverPtLeadTrkCorrected"==var)name="f^{EM}_{track } Corrected";
  else if("tau_0_id_innerTrkAvgDistCorrected"==var)name="R_{track } Corrected";
  else if("tau_0_id_ipSigLeadTrkCorrected"==var)name="S_{leadtrack } Corrected";
  else if("tau_0_id_SumPtTrkFracCorrected"==var)name="f^{track}_{iso } Corrected";
  else if("tau_0_id_ptRatioEflowApproxCorrected"==var)name="p^{EM+track}_{T}/p_{T } Corrected";
  else if("tau_0_id_mEflowApproxCorrected"==var)name="m_{EM+track } Corrected";
  else if("tau_0_id_ChPiEMEOverCaloEMECorrected"==var)name="f^{track-HAD}_{EM } Corrected";
  else if("tau_0_id_EMPOverTrkSysPCorrected"==var)name="f^{EM}_{track } Corrected";
  else if("tau_0_id_dRmaxCorrected"==var)name="#DeltaR_{max } Corrected";
  else if("tau_0_id_trFlightPathSigCorrected"==var)name="S^{flight}_{T } Corrected";
  else if("tau_0_id_massTrkSysCorrected"==var)name="m_{track } Corrected";
  //
  else if("tau_0_id_centFrac"==var)name="f_{cent}";
  else if("tau_0_id_etOverPtLeadTrk"==var)name="f^{EM}_{track}";
  else if("tau_0_id_innerTrkAvgDist"==var)name="R_{track}";
  else if("tau_0_id_ipSigLeadTrk"==var)name="S_{leadtrack}";
  else if("tau_0_id_SumPtTrkFrac"==var)name="f^{track}_{iso}";
  else if("tau_0_id_ptRatioEflowApprox"==var)name="p^{EM+track}_{T}/p_{T}";
  else if("tau_0_id_mEflowApprox"==var)name="m_{EM+track}";
  else if("tau_0_id_ChPiEMEOverCaloEME"==var)name="f^{track-HAD}_{EM}";
  else if("tau_0_id_EMPOverTrkSysP"==var)name="f^{EM}_{track}";
  else if("tau_0_id_dRmax"==var)name="#DeltaR_{max}";
  else if("tau_0_id_trFlightPathSig"==var)name="S^{flight}_{T}";
  else if("tau_0_id_massTrkSys"==var)name="m_{track}";
  //
  else if("tau_0_trig1_HLT_centFracCorrected"==var)name="HLT f_{cent } Corrected";
  else if("tau_0_trig1_HLT_etOverPtLeadTrkCorrected"==var)name="HLT f^{EM}_{track } Corrected";
  else if("tau_0_trig1_HLT_innerTrkAvgDistCorrected"==var)name="HLT R_{track } Corrected";
  else if("tau_0_trig1_HLT_ipSigLeadTrkCorrected"==var)name="HLT S_{leadtrack } Corrected";
  else if("tau_0_trig1_HLT_SumPtTrkFracCorrected"==var)name="HLT f^{track}_{iso } Corrected";
  else if("tau_0_trig1_HLT_ptRatioEflowApproxCorrected"==var)name="HLT p^{EM+track}_{T}/p_{T } Corrected";
  else if("tau_0_trig1_HLT_mEflowApproxCorrected"==var)name="HLT m_{EM+track } Corrected";
  else if("tau_0_trig1_HLT_ChPiEMEOverCaloEMECorrected"==var)name="HLT f^{track-HAD}_{EM } Corrected";
  else if("tau_0_trig1_HLT_EMPOverTrkSysPCorrected"==var)name="HLT f^{EM}_{track } Corrected";
  else if("tau_0_trig1_HLT_dRmaxCorrected"==var)name="HLT #DeltaR_{max } Corrected";
  else if("tau_0_trig1_HLT_trFlightPathSigCorrected"==var)name="HLT S^{flight}_{T } Corrected";
  else if("tau_0_trig1_HLT_massTrkSysCorrected"==var)name="HLT m_{track } Corrected";
  //
  else if("tau_0_trig1_HLT_centFrac"==var)name="HLT f_{cent}";
  else if("tau_0_trig1_HLT_etOverPtLeadTrk"==var)name="HLT f^{EM}_{track}";
  else if("tau_0_trig1_HLT_innerTrkAvgDist"==var)name="HLT R_{track}";
  else if("tau_0_trig1_HLT_ipSigLeadTrk"==var)name="HLT S_{leadtrack}";
  else if("tau_0_trig1_HLT_SumPtTrkFrac"==var)name="HLT f^{track}_{iso}";
  else if("tau_0_trig1_HLT_ptRatioEflowApprox"==var)name="HLT p^{EM+track}_{T}/p_{T}";
  else if("tau_0_trig1_HLT_mEflowApprox"==var)name="HLT m_{EM+track}";
  else if("tau_0_trig1_HLT_ChPiEMEOverCaloEME"==var)name="HLT f^{track-HAD}_{EM}";
  else if("tau_0_trig1_HLT_EMPOverTrkSysP"==var)name="HLT f^{EM}_{track}";
  else if("tau_0_trig1_HLT_dRmax"==var)name="HLT #DeltaR_{max}";
  else if("tau_0_trig1_HLT_trFlightPathSig"==var)name="HLT S^{flight}_{T}";
  else if("tau_0_trig1_HLT_massTrkSys"==var)name="HLT m_{track}";

  
  else name=var;
  
  return name;
  
}












