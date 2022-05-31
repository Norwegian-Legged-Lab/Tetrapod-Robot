/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:04 GMT+02:00
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
  double t155;
  double t58;
  double t110;
  double t175;
  double t3573;
  double t3869;
  double t3937;
  double t2582;
  double t3475;
  double t3985;
  double t3317;
  double t4141;
  double t188;
  double t5288;
  double t5350;
  double t5445;
  double t144;
  double t180;
  double t187;
  double t3951;
  double t4576;
  double t4641;
  double t5556;
  double t5055;
  double t5057;
  double t5096;
  double t5480;
  double t5460;
  double t5463;
  double t5468;
  double t5498;
  double t5511;
  double t5545;
  double t5557;
  double t5564;
  double t5575;
  double t5611;
  double t5631;
  double t5633;
  double t5672;
  double t5673;
  double t5678;
  double t5688;
  double t5689;
  double t5690;
  double t5106;
  double t5470;
  double t5474;
  double t5762;
  double t5769;
  double t5775;
  double t5779;
  double t5780;
  double t5783;
  double t5786;
  double t5788;
  double t5789;
  double t5790;
  double t5791;
  double t5796;
  double t5797;
  double t5812;
  double t5814;
  double t5816;
  double t5772;
  double t5773;
  double t5774;
  double t5799;
  double t5800;
  double t5845;
  double t5851;
  double t5861;
  double t5864;
  double t5870;
  double t5875;
  double t5909;
  double t5810;
  double t5818;
  double t5823;
  double t5865;
  double t5910;
  double t5913;
  double t5915;
  double t5916;
  double t5918;
  double t2289;
  double t4642;
  double t4699;
  double t5824;
  double t5926;
  double t5937;
  double t5953;
  double t5975;
  double t5998;
  double t6078;
  double t6087;
  t155 = Cos(var1[13]);
  t58 = Cos(var1[14]);
  t110 = Sin(var1[13]);
  t175 = Sin(var1[14]);
  t3573 = t155*t58;
  t3869 = t110*t175;
  t3937 = t3573 + t3869;
  t2582 = Cos(var1[4]);
  t3475 = Cos(var1[5]);
  t3985 = Sin(var1[12]);
  t3317 = Cos(var1[12]);
  t4141 = Sin(var1[5]);
  t188 = Sin(var1[4]);
  t5288 = t58*t110;
  t5350 = -1.*t155*t175;
  t5445 = t5288 + t5350;
  t144 = -1.*t58*t110;
  t180 = t155*t175;
  t187 = t144 + t180;
  t3951 = t3317*t3475*t3937;
  t4576 = -1.*t3985*t3937*t4141;
  t4641 = t3951 + t4576;
  t5556 = Sin(var1[3]);
  t5055 = -1.*t3475*t3985;
  t5057 = -1.*t3317*t4141;
  t5096 = t5055 + t5057;
  t5480 = Cos(var1[3]);
  t5460 = t3317*t3475*t5445;
  t5463 = -1.*t3985*t5445*t4141;
  t5468 = t5460 + t5463;
  t5498 = t3475*t3985*t3937;
  t5511 = t3317*t3937*t4141;
  t5545 = t5498 + t5511;
  t5557 = t2582*t187;
  t5564 = -1.*t188*t4641;
  t5575 = t5557 + t5564;
  t5611 = t3317*t3475;
  t5631 = -1.*t3985*t4141;
  t5633 = t5611 + t5631;
  t5672 = t3475*t3985*t5445;
  t5673 = t3317*t5445*t4141;
  t5678 = t5672 + t5673;
  t5688 = t2582*t3937;
  t5689 = -1.*t188*t5468;
  t5690 = t5688 + t5689;
  t5106 = t3937*t188;
  t5470 = t2582*t5468;
  t5474 = t5106 + t5470;
  t5762 = -1.*t3317;
  t5769 = 1. + t5762;
  t5775 = -1.*t155;
  t5779 = 1. + t5775;
  t5780 = 0.28121*t5779;
  t5783 = -1.*t58;
  t5786 = 1. + t5783;
  t5788 = 0.50321*t5786;
  t5789 = 0.19821*t58;
  t5790 = t5788 + t5789;
  t5791 = t155*t5790;
  t5796 = -0.305*t110*t175;
  t5797 = t5780 + t5791 + t5796;
  t5812 = 0.15121*t5769;
  t5814 = t3317*t5797;
  t5816 = t5812 + t5814;
  t5772 = -0.15121*t5769;
  t5773 = -0.15121*t3317;
  t5774 = -0.15121*t3985;
  t5799 = t3985*t5797;
  t5800 = t5772 + t5773 + t5774 + t5799;
  t5845 = 0.28121*t110;
  t5851 = -1.*t5790*t110;
  t5861 = -0.305*t155*t175;
  t5864 = t5845 + t5851 + t5861;
  t5870 = t3475*t5816;
  t5875 = -1.*t5800*t4141;
  t5909 = t5870 + t5875;
  t5810 = t3475*t5800;
  t5818 = t5816*t4141;
  t5823 = t5810 + t5818;
  t5865 = t5864*t188;
  t5910 = t2582*t5909;
  t5913 = t5865 + t5910;
  t5915 = t2582*t5864;
  t5916 = -1.*t188*t5909;
  t5918 = t5915 + t5916;
  t2289 = t187*t188;
  t4642 = t2582*t4641;
  t4699 = t2289 + t4642;
  t5824 = -1.*t5633*t5823;
  t5926 = t5678*t5823;
  t5937 = -1.*t5678*t5823;
  t5953 = t5545*t5823;
  t5975 = t5633*t5823;
  t5998 = -1.*t5545*t5823;
  t6078 = -1.*t5864*t3937;
  t6087 = t5864*t187;
  p_output1[0]=t4699;
  p_output1[1]=t2582*t5096;
  p_output1[2]=t5474;
  p_output1[3]=t5480*t5545 - 1.*t5556*t5575;
  p_output1[4]=t188*t5096*t5556 + t5480*t5633;
  p_output1[5]=t5480*t5678 - 1.*t5556*t5690;
  p_output1[6]=t5545*t5556 + t5480*t5575;
  p_output1[7]=-1.*t188*t5096*t5480 + t5556*t5633;
  p_output1[8]=t5556*t5678 + t5480*t5690;
  p_output1[9]=t5474*(t5824 - 1.*t2582*t5096*t5913 + t188*t5096*t5918) + t2582*t5096*(t5474*t5913 + t5690*t5918 + t5926);
  p_output1[10]=t4699*(-1.*t5474*t5913 - 1.*t5690*t5918 + t5937) + t5474*(t4699*t5913 + t5575*t5918 + t5953);
  p_output1[11]=t4699*(t2582*t5096*t5913 - 1.*t188*t5096*t5918 + t5975) + t2582*t5096*(-1.*t4699*t5913 - 1.*t5575*t5918 + t5998);
  p_output1[12]=t5678*(t5824 - 1.*t5096*t5909) + t5633*(t3937*t5864 + t5468*t5909 + t5926);
  p_output1[13]=t5545*(-1.*t5468*t5909 + t5937 + t6078) + t5678*(t4641*t5909 + t5953 + t6087);
  p_output1[14]=t5545*(t5096*t5909 + t5975) + t5633*(-1.*t187*t5864 - 1.*t4641*t5909 + t5998);
  p_output1[15]=t3937*(-1.*t3317*t5800 + t3985*t5816);
  p_output1[16]=t187*(-1.*t3985*t5445*t5800 - 1.*t3317*t5445*t5816 + t6078) + t3937*(t3937*t3985*t5800 + t3317*t3937*t5816 + t6087);
  p_output1[17]=t187*(t3317*t5800 - 1.*t3985*t5816);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t187*(-1.*t5445*t5797 + t6078) + t3937*(t3937*t5797 + t6087);
  p_output1[38]=-0.15121*t187 - 0.15121*t5445;
  p_output1[39]=0.28121*t175 - 1.*t175*t5790 - 0.305*t175*t58;
  p_output1[40]=0;
  p_output1[41]=0.305*Power(t175,2) + 0.28121*t58 - 1.*t5790*t58;
  p_output1[42]=0;
  p_output1[43]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
