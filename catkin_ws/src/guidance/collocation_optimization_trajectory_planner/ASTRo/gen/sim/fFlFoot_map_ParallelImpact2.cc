/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:24 GMT+02:00
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
  double t9915;
  double t3518;
  double t3813;
  double t9923;
  double t18437;
  double t18440;
  double t18448;
  double t18436;
  double t18450;
  double t18380;
  double t18455;
  double t18350;
  double t3822;
  double t9936;
  double t12516;
  double t2859;
  double t18449;
  double t18460;
  double t18461;
  double t18475;
  double t18471;
  double t18472;
  double t18473;
  double t18470;
  double t18477;
  double t18478;
  double t18479;
  double t18487;
  double t18488;
  double t18527;
  double t18547;
  double t18550;
  double t18551;
  double t18552;
  double t18555;
  double t18559;
  double t18563;
  double t18564;
  double t18566;
  double t18568;
  double t18569;
  double t18571;
  double t18572;
  double t18581;
  double t18582;
  double t18591;
  double t18595;
  double t18596;
  double t18597;
  double t18598;
  double t18604;
  double t18605;
  double t18606;
  double t18607;
  double t18608;
  double t18609;
  double t18610;
  double t18612;
  double t18613;
  double t18614;
  double t18594;
  double t18599;
  double t18600;
  double t18485;
  double t18532;
  double t18534;
  double t18535;
  double t18539;
  double t18540;
  double t18611;
  double t18615;
  double t18616;
  double t18618;
  double t18620;
  double t18622;
  double t18628;
  double t18629;
  double t18630;
  double t18542;
  double t18544;
  double t18545;
  double t18601;
  double t18631;
  double t17356;
  double t18462;
  double t18466;
  double t18634;
  double t18635;
  double t18636;
  double t18710;
  double t18715;
  double t18721;
  double t18725;
  double t18752;
  double t18757;
  t9915 = Cos(var1[7]);
  t3518 = Cos(var1[8]);
  t3813 = Sin(var1[7]);
  t9923 = Sin(var1[8]);
  t18437 = t9915*t3518;
  t18440 = t3813*t9923;
  t18448 = t18437 + t18440;
  t18436 = Cos(var1[6]);
  t18450 = Sin(var1[5]);
  t18380 = Cos(var1[5]);
  t18455 = Sin(var1[6]);
  t18350 = Cos(var1[4]);
  t3822 = -1.*t3518*t3813;
  t9936 = t9915*t9923;
  t12516 = t3822 + t9936;
  t2859 = Sin(var1[4]);
  t18449 = t18380*t18436*t18448;
  t18460 = -1.*t18450*t18455*t18448;
  t18461 = t18449 + t18460;
  t18475 = Sin(var1[3]);
  t18471 = t18436*t18450*t18448;
  t18472 = t18380*t18455*t18448;
  t18473 = t18471 + t18472;
  t18470 = Cos(var1[3]);
  t18477 = t18350*t12516;
  t18478 = -1.*t2859*t18461;
  t18479 = t18477 + t18478;
  t18487 = t3518*t3813;
  t18488 = -1.*t9915*t9923;
  t18527 = t18487 + t18488;
  t18547 = -1.*t18436;
  t18550 = 1. + t18547;
  t18551 = 0.15121*t18550;
  t18552 = -1.*t9915;
  t18555 = 1. + t18552;
  t18559 = 0.28121*t18555;
  t18563 = -1.*t3518;
  t18564 = 1. + t18563;
  t18566 = 0.50321*t18564;
  t18568 = 0.19821*t3518;
  t18569 = t18566 + t18568;
  t18571 = t9915*t18569;
  t18572 = -0.305*t3813*t9923;
  t18581 = t18559 + t18571 + t18572;
  t18582 = t18436*t18581;
  t18591 = t18551 + t18582;
  t18595 = 0.15121*t18436;
  t18596 = -0.15121*t18455;
  t18597 = t18455*t18581;
  t18598 = t18551 + t18595 + t18596 + t18597;
  t18604 = -1.*t18436*t18450;
  t18605 = -1.*t18380*t18455;
  t18606 = t18604 + t18605;
  t18607 = 0.28121*t3813;
  t18608 = -1.*t18569*t3813;
  t18609 = -0.305*t9915*t9923;
  t18610 = t18607 + t18608 + t18609;
  t18612 = t18380*t18591;
  t18613 = -1.*t18450*t18598;
  t18614 = t18612 + t18613;
  t18594 = t18450*t18591;
  t18599 = t18380*t18598;
  t18600 = t18594 + t18599;
  t18485 = t2859*t18448;
  t18532 = t18380*t18436*t18527;
  t18534 = -1.*t18450*t18455*t18527;
  t18535 = t18532 + t18534;
  t18539 = t18350*t18535;
  t18540 = t18485 + t18539;
  t18611 = t2859*t18610;
  t18615 = t18350*t18614;
  t18616 = t18611 + t18615;
  t18618 = t18350*t18610;
  t18620 = -1.*t2859*t18614;
  t18622 = t18618 + t18620;
  t18628 = t18436*t18450*t18527;
  t18629 = t18380*t18455*t18527;
  t18630 = t18628 + t18629;
  t18542 = t18380*t18436;
  t18544 = -1.*t18450*t18455;
  t18545 = t18542 + t18544;
  t18601 = -1.*t18545*t18600;
  t18631 = t18630*t18600;
  t17356 = t2859*t12516;
  t18462 = t18350*t18461;
  t18466 = t17356 + t18462;
  t18634 = t18350*t18448;
  t18635 = -1.*t2859*t18535;
  t18636 = t18634 + t18635;
  t18710 = -1.*t18630*t18600;
  t18715 = t18473*t18600;
  t18721 = -1.*t18610*t18448;
  t18725 = t18610*t12516;
  t18752 = t18545*t18600;
  t18757 = -1.*t18473*t18600;
  p_output1[0]=t18466;
  p_output1[1]=t18470*t18473 - 1.*t18475*t18479;
  p_output1[2]=t18473*t18475 + t18470*t18479;
  p_output1[3]=t18350*t18606*(t18540*t18616 + t18631 + t18622*t18636) + t18540*(t18601 - 1.*t18350*t18606*t18616 + t18606*t18622*t2859);
  p_output1[4]=(t18601 - 1.*t18606*t18614)*t18630 + t18545*(t18448*t18610 + t18535*t18614 + t18631);
  p_output1[5]=t18448*(t18455*t18591 - 1.*t18436*t18598);
  p_output1[6]=0;
  p_output1[7]=0.28121*t9923 - 1.*t18569*t9923 - 0.305*t3518*t9923;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t18350*t18606;
  p_output1[19]=t18470*t18545 + t18475*t18606*t2859;
  p_output1[20]=t18475*t18545 - 1.*t18470*t18606*t2859;
  p_output1[21]=t18466*(-1.*t18540*t18616 - 1.*t18622*t18636 + t18710) + t18540*(t18466*t18616 + t18479*t18622 + t18715);
  p_output1[22]=t18473*(-1.*t18535*t18614 + t18710 + t18721) + t18630*(t18461*t18614 + t18715 + t18725);
  p_output1[23]=t12516*(-1.*t18436*t18527*t18591 - 1.*t18455*t18527*t18598 + t18721) + t18448*(t18436*t18448*t18591 + t18448*t18455*t18598 + t18725);
  p_output1[24]=-0.15121 + t12516*(-1.*t18527*t18581 + t18721) + t18448*(t18448*t18581 + t18725);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t18540;
  p_output1[37]=t18470*t18630 - 1.*t18475*t18636;
  p_output1[38]=t18475*t18630 + t18470*t18636;
  p_output1[39]=t18350*t18606*(-1.*t18466*t18616 - 1.*t18479*t18622 + t18757) + t18466*(t18350*t18606*t18616 + t18752 - 1.*t18606*t18622*t2859);
  p_output1[40]=t18473*(t18606*t18614 + t18752) + t18545*(-1.*t12516*t18610 - 1.*t18461*t18614 + t18757);
  p_output1[41]=t12516*(-1.*t18455*t18591 + t18436*t18598);
  p_output1[42]=0.15121*t12516 + 0.15121*t18527;
  p_output1[43]=0.28121*t3518 - 1.*t18569*t3518 + 0.305*Power(t9923,2);
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
