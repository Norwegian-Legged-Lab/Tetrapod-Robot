/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:49 GMT+02:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t11459;
  double t2640;
  double t9230;
  double t22229;
  double t26443;
  double t26445;
  double t26454;
  double t26442;
  double t26469;
  double t26436;
  double t26470;
  double t26434;
  double t9237;
  double t24756;
  double t26124;
  double t26194;
  double t26465;
  double t26491;
  double t26497;
  double t26505;
  double t26501;
  double t26502;
  double t26503;
  double t26500;
  double t26506;
  double t26508;
  double t26509;
  double t26567;
  double t26568;
  double t26569;
  double t26580;
  double t26582;
  double t26593;
  double t26596;
  double t26597;
  double t26599;
  double t26600;
  double t26601;
  double t26602;
  double t26604;
  double t26606;
  double t26607;
  double t26608;
  double t26613;
  double t26614;
  double t26615;
  double t26586;
  double t26587;
  double t26592;
  double t26609;
  double t26611;
  double t26621;
  double t26622;
  double t26623;
  double t26624;
  double t26625;
  double t26626;
  double t26627;
  double t26629;
  double t26630;
  double t26631;
  double t26612;
  double t26616;
  double t26619;
  double t26563;
  double t26571;
  double t26572;
  double t26573;
  double t26574;
  double t26575;
  double t26628;
  double t26632;
  double t26634;
  double t26637;
  double t26642;
  double t26660;
  double t26665;
  double t26673;
  double t26675;
  double t26576;
  double t26578;
  double t26579;
  double t26620;
  double t26676;
  double t26432;
  double t26498;
  double t26499;
  double t26682;
  double t26684;
  double t26686;
  double t26733;
  double t26743;
  double t26763;
  double t26785;
  double t26960;
  double t26986;
  t11459 = Cos(var1[13]);
  t2640 = Cos(var1[14]);
  t9230 = Sin(var1[13]);
  t22229 = Sin(var1[14]);
  t26443 = t11459*t2640;
  t26445 = t9230*t22229;
  t26454 = t26443 + t26445;
  t26442 = Cos(var1[5]);
  t26469 = Sin(var1[12]);
  t26436 = Cos(var1[12]);
  t26470 = Sin(var1[5]);
  t26434 = Cos(var1[4]);
  t9237 = -1.*t2640*t9230;
  t24756 = t11459*t22229;
  t26124 = t9237 + t24756;
  t26194 = Sin(var1[4]);
  t26465 = t26436*t26442*t26454;
  t26491 = -1.*t26469*t26454*t26470;
  t26497 = t26465 + t26491;
  t26505 = Sin(var1[3]);
  t26501 = t26442*t26469*t26454;
  t26502 = t26436*t26454*t26470;
  t26503 = t26501 + t26502;
  t26500 = Cos(var1[3]);
  t26506 = t26434*t26124;
  t26508 = -1.*t26194*t26497;
  t26509 = t26506 + t26508;
  t26567 = t2640*t9230;
  t26568 = -1.*t11459*t22229;
  t26569 = t26567 + t26568;
  t26580 = -1.*t26436;
  t26582 = 1. + t26580;
  t26593 = -1.*t11459;
  t26596 = 1. + t26593;
  t26597 = 0.28121*t26596;
  t26599 = -1.*t2640;
  t26600 = 1. + t26599;
  t26601 = 0.50321*t26600;
  t26602 = 0.19821*t2640;
  t26604 = t26601 + t26602;
  t26606 = t11459*t26604;
  t26607 = -0.305*t9230*t22229;
  t26608 = t26597 + t26606 + t26607;
  t26613 = 0.15121*t26582;
  t26614 = t26436*t26608;
  t26615 = t26613 + t26614;
  t26586 = -0.15121*t26582;
  t26587 = -0.15121*t26436;
  t26592 = -0.15121*t26469;
  t26609 = t26469*t26608;
  t26611 = t26586 + t26587 + t26592 + t26609;
  t26621 = -1.*t26442*t26469;
  t26622 = -1.*t26436*t26470;
  t26623 = t26621 + t26622;
  t26624 = 0.28121*t9230;
  t26625 = -1.*t26604*t9230;
  t26626 = -0.305*t11459*t22229;
  t26627 = t26624 + t26625 + t26626;
  t26629 = t26442*t26615;
  t26630 = -1.*t26611*t26470;
  t26631 = t26629 + t26630;
  t26612 = t26442*t26611;
  t26616 = t26615*t26470;
  t26619 = t26612 + t26616;
  t26563 = t26454*t26194;
  t26571 = t26436*t26442*t26569;
  t26572 = -1.*t26469*t26569*t26470;
  t26573 = t26571 + t26572;
  t26574 = t26434*t26573;
  t26575 = t26563 + t26574;
  t26628 = t26627*t26194;
  t26632 = t26434*t26631;
  t26634 = t26628 + t26632;
  t26637 = t26434*t26627;
  t26642 = -1.*t26194*t26631;
  t26660 = t26637 + t26642;
  t26665 = t26442*t26469*t26569;
  t26673 = t26436*t26569*t26470;
  t26675 = t26665 + t26673;
  t26576 = t26436*t26442;
  t26578 = -1.*t26469*t26470;
  t26579 = t26576 + t26578;
  t26620 = -1.*t26579*t26619;
  t26676 = t26675*t26619;
  t26432 = t26124*t26194;
  t26498 = t26434*t26497;
  t26499 = t26432 + t26498;
  t26682 = t26434*t26454;
  t26684 = -1.*t26194*t26573;
  t26686 = t26682 + t26684;
  t26733 = -1.*t26675*t26619;
  t26743 = t26503*t26619;
  t26763 = -1.*t26627*t26454;
  t26785 = t26627*t26124;
  t26960 = t26579*t26619;
  t26986 = -1.*t26503*t26619;
  p_output1[0]=t26499;
  p_output1[1]=t26500*t26503 - 1.*t26505*t26509;
  p_output1[2]=t26503*t26505 + t26500*t26509;
  p_output1[3]=t26575*(t26620 - 1.*t26434*t26623*t26634 + t26194*t26623*t26660) + t26434*t26623*(t26575*t26634 + t26676 + t26660*t26686);
  p_output1[4]=(t26620 - 1.*t26623*t26631)*t26675 + t26579*(t26454*t26627 + t26573*t26631 + t26676);
  p_output1[5]=t26454*(-1.*t26436*t26611 + t26469*t26615);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t22229 - 0.305*t22229*t2640 - 1.*t22229*t26604;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t26434*t26623;
  p_output1[19]=t26500*t26579 + t26194*t26505*t26623;
  p_output1[20]=t26505*t26579 - 1.*t26194*t26500*t26623;
  p_output1[21]=t26499*(-1.*t26575*t26634 - 1.*t26660*t26686 + t26733) + t26575*(t26499*t26634 + t26509*t26660 + t26743);
  p_output1[22]=t26503*(-1.*t26573*t26631 + t26733 + t26763) + t26675*(t26497*t26631 + t26743 + t26785);
  p_output1[23]=t26124*(-1.*t26469*t26569*t26611 - 1.*t26436*t26569*t26615 + t26763) + t26454*(t26454*t26469*t26611 + t26436*t26454*t26615 + t26785);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t26124*(-1.*t26569*t26608 + t26763) + t26454*(t26454*t26608 + t26785);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t26575;
  p_output1[37]=t26500*t26675 - 1.*t26505*t26686;
  p_output1[38]=t26505*t26675 + t26500*t26686;
  p_output1[39]=t26499*(t26434*t26623*t26634 - 1.*t26194*t26623*t26660 + t26960) + t26434*t26623*(-1.*t26499*t26634 - 1.*t26509*t26660 + t26986);
  p_output1[40]=t26503*(t26623*t26631 + t26960) + t26579*(-1.*t26124*t26627 - 1.*t26497*t26631 + t26986);
  p_output1[41]=t26124*(t26436*t26611 - 1.*t26469*t26615);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t26124 - 0.15121*t26569;
  p_output1[49]=0.305*Power(t22229,2) + 0.28121*t2640 - 1.*t2640*t26604;
  p_output1[50]=-0.305;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
