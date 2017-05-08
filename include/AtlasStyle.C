
#include <iostream>
#include "AtlasStyle.h"
#include "TROOT.h"


TStyle* AtlasStyle() 
{
  
  TStyle *atlasStyle = new TStyle("ATLAS","Atlas style");
  
  atlasStyle->SetPalette(1);

  //gStyle->SetPaintTextFormat("0.2f ");
  
  // use plain black on white colors
  Int_t icol=0; // WHITE
  atlasStyle->SetFrameBorderMode(icol);
  atlasStyle->SetFrameFillColor(icol);
  atlasStyle->SetCanvasBorderMode(icol);
  atlasStyle->SetCanvasColor(icol);
  atlasStyle->SetPadBorderMode(icol);
  atlasStyle->SetPadColor(icol);
  atlasStyle->SetStatColor(icol);
  //atlasStyle->SetFillColor(icol); // don't use: white fill color for *all* objects

  // set the paper & margin sizes
  atlasStyle->SetPaperSize(20,26);
  
  // set margin sizes
  atlasStyle->SetPadTopMargin(0.02);//0.05?
  atlasStyle->SetPadRightMargin(0.1);
  atlasStyle->SetPadBottomMargin(0.2);
  atlasStyle->SetPadLeftMargin(0.14);
  

  // use large fonts
  //Int_t font=72; // Helvetica italics
  Int_t font=42; // Helvetica
  Double_t tsize=0.05;
  atlasStyle->SetTextFont(font);
  atlasStyle->SetTextSize(tsize);
  atlasStyle->SetOptTitle(0);   
  
  atlasStyle->SetTitleFillColor(0);
  atlasStyle->SetTitleTextColor(0);
  atlasStyle->SetTitleStyle(0);
  
  
  atlasStyle->SetLabelFont(font,"x");
  atlasStyle->SetTitleFont(font,"x");
  atlasStyle->SetLabelFont(font,"y");
  atlasStyle->SetTitleFont(font,"y");
  atlasStyle->SetLabelFont(font,"z");
  atlasStyle->SetTitleFont(font,"z");
  
  atlasStyle->SetLabelSize(tsize,"x");
  atlasStyle->SetTitleSize(tsize,"x");
  atlasStyle->SetLabelSize(tsize,"y");
  atlasStyle->SetTitleSize(tsize,"y");
  atlasStyle->SetLabelSize(tsize,"z");
  atlasStyle->SetTitleSize(tsize,"z");

  atlasStyle->SetLabelSize(0.04,"y");
  atlasStyle->SetLabelOffset(0.010,"x");  
  // set title offsets (for axis label)
  atlasStyle->SetTitleXOffset(1.2);
  atlasStyle->SetTitleYOffset(1.3);


  
  // use bold lines and markers
  atlasStyle->SetMarkerStyle(20);
  atlasStyle->SetMarkerSize(0.8);//2.0 0.8
  atlasStyle->SetHistLineWidth(2.);//3 2
  atlasStyle->SetLineStyleString(2,"[12 12]"); // postscript dashes
  
  // get rid of X error bars 
  //atlasStyle->SetErrorX(0.001);
  // get rid of error bar caps
  atlasStyle->SetEndErrorSize(0.01);

  // do not display any of the standard histogram decorations
  atlasStyle->SetOptTitle(0);
  atlasStyle->SetOptStat(1111);
  atlasStyle->SetOptStat(0);
  //atlasStyle->SetOptFit(1111);
  atlasStyle->SetOptFit(0);

  // put tick marks on top and RHS of plots
  atlasStyle->SetPadTickX(1);
  atlasStyle->SetPadTickY(1);
  // atlasStyle->SetNdivisions(302);
  atlasStyle->SetNdivisions(210,"X");	
  atlasStyle->SetNdivisions(408,"Y");
  
  
  return atlasStyle;

}


void SetAtlasStyle ()
{
  static TStyle* atlasStyle = 0;
  std::cout << "\nApplying ATLAS style settings...\n" << std::endl ;
  if ( atlasStyle==0 ) atlasStyle = AtlasStyle();
  gROOT->SetStyle("ATLAS");
  gROOT->ForceStyle();
  
}
