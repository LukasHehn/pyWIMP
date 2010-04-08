 /***************************************************************************** 
  * Project: RooFit                                                           * 
  *                                                                           * 
  * This code was autogenerated by RooClassFactory                            * 
  *****************************************************************************/ 

 // Your description goes here... 

 #include "MGMWimpDiffRateBasicPdf.hh" 
 #include "RooAbsReal.h" 
 #include "TMath.h" 

 ClassImp(MGMWimpDiffRateBasicPdf) 

 MGMWimpDiffRateBasicPdf::MGMWimpDiffRateBasicPdf(const char *name, const char *title, 
                        RooAbsReal& _R_sub_0,
                        RooAbsReal& _E_sub_0,
                        RooAbsReal& _Q,
                        RooAbsReal& _r,
                        MGMVWimpFormFactor& _form_factor) :
   RooAbsPdf(name,title), 
   R_sub_0("R_sub_0","R_sub_0",this,_R_sub_0),
   E_sub_0("E_sub_0","E_sub_0",this,_E_sub_0),
   Q("Q","Q",this,_Q),
   r("r","r",this,_r),
   form_factor("form_factor", "form_factor", this, _form_factor)
 { 
 } 


 MGMWimpDiffRateBasicPdf::MGMWimpDiffRateBasicPdf(const MGMWimpDiffRateBasicPdf& other, const char* name) :  
   RooAbsPdf(other,name), 
   R_sub_0("R_sub_0",this,other.R_sub_0),
   E_sub_0("E_sub_0",this,other.E_sub_0),
   Q("Q",this,other.Q),
   r("r",this,other.r),
   form_factor("form_factor", this, other.form_factor)
 { 
 } 

 Double_t MGMWimpDiffRateBasicPdf::EvaluatePDF() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 

   Double_t temp = 0.751*(R_sub_0/(E_sub_0*r))*
          TMath::Exp(-0.561*Q/(E_sub_0*r));
   return temp;
 } 

 Double_t MGMWimpDiffRateBasicPdf::EvaluateFormFactor() const
{
  return form_factor;
}

 Double_t MGMWimpDiffRateBasicPdf::evaluate() const
{
  return EvaluateFormFactor()*EvaluatePDF();
}
