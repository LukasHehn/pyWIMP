 /***************************************************************************** 
  * Project: RooFit                                                           * 
  *                                                                           * 
  * This code was autogenerated by RooClassFactory                            * 
  *****************************************************************************/ 

 // Your description goes here... 

 #include "MGMBetaDecayFunction.hh" 
 #include <math.h> 

 ClassImp(MGMBetaDecayFunction) 

 MGMBetaDecayFunction::MGMBetaDecayFunction(const char *name, const char *title, 
                        RooAbsReal& _energy,
                        RooAbsReal& _mass_of_electron,
                        RooAbsReal& _qvalue) :
   RooAbsPdf(name,title), 
   fEnergy("fEnergy","Energy",this,_energy),
   fMassOfElectron("fMassOfElectron","MassOfElectron",this,_mass_of_electron),
   fQValue("fQValue","QValue",this,_qvalue)
 { 
 } 


 MGMBetaDecayFunction::MGMBetaDecayFunction(const MGMBetaDecayFunction& other, const char* name) :  
   RooAbsPdf(other,name), 
   fEnergy("fEnergy",this,other.fEnergy),
   fMassOfElectron("fMassOfElectron",this,other.fMassOfElectron),
   fQValue("fQValue",this,other.fQValue)
 { 
 } 



 Double_t MGMBetaDecayFunction::evaluate() const 
 { 
   if (fEnergy >= fQValue) return 1e-15;
   Double_t p = sqrt(pow(fEnergy + fMassOfElectron, 2) - pow(fMassOfElectron, 2));
   Double_t func = p*(fEnergy + fMassOfElectron)*pow(fQValue - fEnergy, 2);  
   return ( func > 1e-15 ? func : 1e-15 );
 } 

