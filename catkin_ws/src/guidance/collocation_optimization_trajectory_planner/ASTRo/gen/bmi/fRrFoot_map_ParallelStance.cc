/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:41 GMT+02:00
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
  double t1075;
  double t167;
  double t525;
  double t1127;
  double t1249;
  double t1255;
  double t1257;
  double t1242;
  double t1594;
  double t1236;
  double t1595;
  double t1214;
  double t728;
  double t1149;
  double t1151;
  double t1152;
  double t1259;
  double t1707;
  double t2560;
  double t4284;
  double t3665;
  double t3671;
  double t3674;
  double t3660;
  double t4295;
  double t4389;
  double t4465;
  double t4713;
  double t4736;
  double t4738;
  double t4758;
  double t4763;
  double t4779;
  double t4782;
  double t4789;
  double t4795;
  double t4796;
  double t4800;
  double t4801;
  double t4803;
  double t4814;
  double t4842;
  double t4845;
  double t4755;
  double t4756;
  double t4821;
  double t4822;
  double t4866;
  double t4868;
  double t4877;
  double t4880;
  double t4889;
  double t4894;
  double t4906;
  double t4911;
  double t4913;
  double t4924;
  double t4830;
  double t4846;
  double t4857;
  double t4555;
  double t4557;
  double t4571;
  double t4582;
  double t4583;
  double t4598;
  double t4601;
  double t4604;
  double t4665;
  double t4910;
  double t4927;
  double t4928;
  double t4930;
  double t4931;
  double t4939;
  double t4965;
  double t4988;
  double t4991;
  double t4685;
  double t4704;
  double t4712;
  double t4858;
  double t5001;
  double t1198;
  double t3602;
  double t3643;
  double t5021;
  double t5025;
  double t5031;
  double t5173;
  double t5202;
  double t5220;
  double t5234;
  double t5473;
  double t5493;
  t1075 = Cos(var1[16]);
  t167 = Cos(var1[17]);
  t525 = Sin(var1[16]);
  t1127 = Sin(var1[17]);
  t1249 = -1.*t1075*t167;
  t1255 = -1.*t525*t1127;
  t1257 = t1249 + t1255;
  t1242 = Cos(var1[5]);
  t1594 = Sin(var1[15]);
  t1236 = Cos(var1[15]);
  t1595 = Sin(var1[5]);
  t1214 = Cos(var1[4]);
  t728 = -1.*t167*t525;
  t1149 = t1075*t1127;
  t1151 = t728 + t1149;
  t1152 = Sin(var1[4]);
  t1259 = t1236*t1242*t1257;
  t1707 = -1.*t1594*t1257*t1595;
  t2560 = t1259 + t1707;
  t4284 = Sin(var1[3]);
  t3665 = t1242*t1594*t1257;
  t3671 = t1236*t1257*t1595;
  t3674 = t3665 + t3671;
  t3660 = Cos(var1[3]);
  t4295 = t1214*t1151;
  t4389 = -1.*t1152*t2560;
  t4465 = t4295 + t4389;
  t4713 = -1.*t1236;
  t4736 = 1. + t4713;
  t4738 = -0.15121*t4736;
  t4758 = -1.*t1075;
  t4763 = 1. + t4758;
  t4779 = -0.28121*t4763;
  t4782 = -1.*t167;
  t4789 = 1. + t4782;
  t4795 = -0.50321*t4789;
  t4796 = -0.19821*t167;
  t4800 = t4795 + t4796;
  t4801 = t1075*t4800;
  t4803 = 0.305*t525*t1127;
  t4814 = t4779 + t4801 + t4803;
  t4842 = t1236*t4814;
  t4845 = t4738 + t4842;
  t4755 = -0.15121*t1236;
  t4756 = 0.15121*t1594;
  t4821 = t1594*t4814;
  t4822 = t4738 + t4755 + t4756 + t4821;
  t4866 = t1242*t1594;
  t4868 = t1236*t1595;
  t4877 = t4866 + t4868;
  t4880 = 0.28121*t525;
  t4889 = t4800*t525;
  t4894 = -0.305*t1075*t1127;
  t4906 = t4880 + t4889 + t4894;
  t4911 = t1242*t4845;
  t4913 = -1.*t4822*t1595;
  t4924 = t4911 + t4913;
  t4830 = t1242*t4822;
  t4846 = t4845*t1595;
  t4857 = t4830 + t4846;
  t4555 = t1075*t167;
  t4557 = t525*t1127;
  t4571 = t4555 + t4557;
  t4582 = t4571*t1152;
  t4583 = t1236*t1242*t1151;
  t4598 = -1.*t1594*t1151*t1595;
  t4601 = t4583 + t4598;
  t4604 = t1214*t4601;
  t4665 = t4582 + t4604;
  t4910 = t4906*t1152;
  t4927 = t1214*t4924;
  t4928 = t4910 + t4927;
  t4930 = t1214*t4906;
  t4931 = -1.*t1152*t4924;
  t4939 = t4930 + t4931;
  t4965 = t1242*t1594*t1151;
  t4988 = t1236*t1151*t1595;
  t4991 = t4965 + t4988;
  t4685 = -1.*t1236*t1242;
  t4704 = t1594*t1595;
  t4712 = t4685 + t4704;
  t4858 = -1.*t4712*t4857;
  t5001 = t4991*t4857;
  t1198 = t1151*t1152;
  t3602 = t1214*t2560;
  t3643 = t1198 + t3602;
  t5021 = t1214*t4571;
  t5025 = -1.*t1152*t4601;
  t5031 = t5021 + t5025;
  t5173 = -1.*t4991*t4857;
  t5202 = t3674*t4857;
  t5220 = -1.*t4906*t4571;
  t5234 = t4906*t1151;
  t5473 = t4712*t4857;
  t5493 = -1.*t3674*t4857;
  p_output1[0]=t3643;
  p_output1[1]=t3660*t3674 - 1.*t4284*t4465;
  p_output1[2]=t3674*t4284 + t3660*t4465;
  p_output1[3]=t4665*(t4858 - 1.*t1214*t4877*t4928 + t1152*t4877*t4939) + t1214*t4877*(t4665*t4928 + t5001 + t4939*t5031);
  p_output1[4]=(t4858 - 1.*t4877*t4924)*t4991 + t4712*(t4571*t4906 + t4601*t4924 + t5001);
  p_output1[5]=t4571*(t1236*t4822 - 1.*t1594*t4845);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t1257 - 0.15121*t4571;
  p_output1[16]=0.28121*t1127 - 0.305*t1127*t167 + t1127*t4800;
  p_output1[17]=0;
  p_output1[18]=t1214*t4877;
  p_output1[19]=t3660*t4712 + t1152*t4284*t4877;
  p_output1[20]=t4284*t4712 - 1.*t1152*t3660*t4877;
  p_output1[21]=t3643*(-1.*t4665*t4928 - 1.*t4939*t5031 + t5173) + t4665*(t3643*t4928 + t4465*t4939 + t5202);
  p_output1[22]=t3674*(-1.*t4601*t4924 + t5173 + t5220) + t4991*(t2560*t4924 + t5202 + t5234);
  p_output1[23]=t1151*(-1.*t1151*t1594*t4822 - 1.*t1151*t1236*t4845 + t5220) + t4571*(t1257*t1594*t4822 + t1236*t1257*t4845 + t5234);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t1151*(-1.*t1151*t4814 + t5220) + t4571*(t1257*t4814 + t5234);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4665;
  p_output1[37]=t3660*t4991 - 1.*t4284*t5031;
  p_output1[38]=t4284*t4991 + t3660*t5031;
  p_output1[39]=t3643*(t1214*t4877*t4928 - 1.*t1152*t4877*t4939 + t5473) + t1214*t4877*(-1.*t3643*t4928 - 1.*t4465*t4939 + t5493);
  p_output1[40]=t3674*(t4877*t4924 + t5473) + t4712*(-1.*t1151*t4906 - 1.*t2560*t4924 + t5493);
  p_output1[41]=t1151*(-1.*t1236*t4822 + t1594*t4845);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.305*Power(t1127,2) + 0.28121*t167 + t167*t4800;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
