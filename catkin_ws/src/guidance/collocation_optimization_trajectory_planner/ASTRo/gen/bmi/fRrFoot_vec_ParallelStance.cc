/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:36 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t3203;
  double t17164;
  double t3849;
  double t17211;
  double t17244;
  double t17207;
  double t17245;
  double t9121;
  double t17262;
  double t17263;
  double t17264;
  double t17180;
  double t17259;
  double t17304;
  double t17305;
  double t17306;
  double t17094;
  double t17181;
  double t17185;
  double t17568;
  double t17564;
  double t17219;
  double t17246;
  double t17253;
  double t17285;
  double t17286;
  double t17287;
  double t17308;
  double t17311;
  double t17547;
  double t17569;
  double t17576;
  double t17578;
  double t17587;
  double t17588;
  double t17589;
  double t17593;
  double t17594;
  double t17597;
  double t17611;
  double t17612;
  double t17613;
  double t17627;
  double t17628;
  double t17629;
  double t17261;
  double t17300;
  double t17301;
  double t17734;
  double t17739;
  double t17740;
  double t17751;
  double t17752;
  double t17757;
  double t17758;
  double t17761;
  double t17774;
  double t17778;
  double t22892;
  double t22893;
  double t22896;
  double t22909;
  double t24575;
  double t25047;
  double t17741;
  double t17747;
  double t22912;
  double t22922;
  double t26295;
  double t26390;
  double t26402;
  double t26403;
  double t26508;
  double t26533;
  double t26547;
  double t23861;
  double t25248;
  double t25253;
  double t26408;
  double t26616;
  double t26624;
  double t26733;
  double t26750;
  double t26797;
  double t17303;
  double t17556;
  double t17557;
  double t26198;
  double t26996;
  double t27905;
  double t28402;
  double t29402;
  double t29617;
  double t30382;
  double t30456;
  t3203 = Cos(var1[4]);
  t17164 = Cos(var1[15]);
  t3849 = Cos(var1[5]);
  t17211 = Cos(var1[17]);
  t17244 = Sin(var1[16]);
  t17207 = Cos(var1[16]);
  t17245 = Sin(var1[17]);
  t9121 = Sin(var1[15]);
  t17262 = -1.*t17211*t17244;
  t17263 = t17207*t17245;
  t17264 = t17262 + t17263;
  t17180 = Sin(var1[5]);
  t17259 = Sin(var1[4]);
  t17304 = -1.*t17207*t17211;
  t17305 = -1.*t17244*t17245;
  t17306 = t17304 + t17305;
  t17094 = t3849*t9121;
  t17181 = t17164*t17180;
  t17185 = t17094 + t17181;
  t17568 = Cos(var1[3]);
  t17564 = Sin(var1[3]);
  t17219 = t17207*t17211;
  t17246 = t17244*t17245;
  t17253 = t17219 + t17246;
  t17285 = t17164*t3849*t17264;
  t17286 = -1.*t9121*t17264*t17180;
  t17287 = t17285 + t17286;
  t17308 = t17164*t3849*t17306;
  t17311 = -1.*t9121*t17306*t17180;
  t17547 = t17308 + t17311;
  t17569 = -1.*t17164*t3849;
  t17576 = t9121*t17180;
  t17578 = t17569 + t17576;
  t17587 = t3849*t9121*t17264;
  t17588 = t17164*t17264*t17180;
  t17589 = t17587 + t17588;
  t17593 = t3203*t17253;
  t17594 = -1.*t17259*t17287;
  t17597 = t17593 + t17594;
  t17611 = t3849*t9121*t17306;
  t17612 = t17164*t17306*t17180;
  t17613 = t17611 + t17612;
  t17627 = t3203*t17264;
  t17628 = -1.*t17259*t17547;
  t17629 = t17627 + t17628;
  t17261 = t17253*t17259;
  t17300 = t3203*t17287;
  t17301 = t17261 + t17300;
  t17734 = -1.*t17164;
  t17739 = 1. + t17734;
  t17740 = -0.15121*t17739;
  t17751 = -1.*t17207;
  t17752 = 1. + t17751;
  t17757 = -0.28121*t17752;
  t17758 = -1.*t17211;
  t17761 = 1. + t17758;
  t17774 = -0.50321*t17761;
  t17778 = -0.19821*t17211;
  t22892 = t17774 + t17778;
  t22893 = t17207*t22892;
  t22896 = 0.305*t17244*t17245;
  t22909 = t17757 + t22893 + t22896;
  t24575 = t17164*t22909;
  t25047 = t17740 + t24575;
  t17741 = -0.15121*t17164;
  t17747 = 0.15121*t9121;
  t22912 = t9121*t22909;
  t22922 = t17740 + t17741 + t17747 + t22912;
  t26295 = 0.28121*t17244;
  t26390 = t22892*t17244;
  t26402 = -0.305*t17207*t17245;
  t26403 = t26295 + t26390 + t26402;
  t26508 = t3849*t25047;
  t26533 = -1.*t22922*t17180;
  t26547 = t26508 + t26533;
  t23861 = t3849*t22922;
  t25248 = t25047*t17180;
  t25253 = t23861 + t25248;
  t26408 = t26403*t17259;
  t26616 = t3203*t26547;
  t26624 = t26408 + t26616;
  t26733 = t3203*t26403;
  t26750 = -1.*t17259*t26547;
  t26797 = t26733 + t26750;
  t17303 = t17264*t17259;
  t17556 = t3203*t17547;
  t17557 = t17303 + t17556;
  t26198 = -1.*t17578*t25253;
  t26996 = t17589*t25253;
  t27905 = t17578*t25253;
  t28402 = -1.*t17613*t25253;
  t29402 = -1.*t17589*t25253;
  t29617 = t17613*t25253;
  t30382 = -1.*t26403*t17253;
  t30456 = t26403*t17264;
  p_output1[0]=t17557*var2[0] + t17185*t3203*var2[1] + t17301*var2[2];
  p_output1[1]=(t17568*t17613 - 1.*t17564*t17629)*var2[0] + (t17185*t17259*t17564 + t17568*t17578)*var2[1] + (t17568*t17589 - 1.*t17564*t17597)*var2[2];
  p_output1[2]=(t17564*t17613 + t17568*t17629)*var2[0] + (-1.*t17185*t17259*t17568 + t17564*t17578)*var2[1] + (t17564*t17589 + t17568*t17597)*var2[2];
  p_output1[3]=(t17185*(t17301*t26624 + t17597*t26797 + t26996)*t3203 + t17301*(t26198 + t17185*t17259*t26797 - 1.*t17185*t26624*t3203))*var2[0] + (t17557*(-1.*t17301*t26624 - 1.*t17597*t26797 + t29402) + t17301*(t17557*t26624 + t17629*t26797 + t29617))*var2[1] + (t17185*(-1.*t17557*t26624 - 1.*t17629*t26797 + t28402)*t3203 + t17557*(-1.*t17185*t17259*t26797 + t27905 + t17185*t26624*t3203))*var2[2];
  p_output1[4]=(t17589*(t26198 - 1.*t17185*t26547) + t17578*(t17253*t26403 + t17287*t26547 + t26996))*var2[0] + (t17613*(-1.*t17287*t26547 + t29402 + t30382) + t17589*(t17547*t26547 + t29617 + t30456))*var2[1] + (t17613*(t17185*t26547 + t27905) + t17578*(-1.*t17264*t26403 - 1.*t17547*t26547 + t28402))*var2[2];
  p_output1[5]=t17253*(t17164*t22922 - 1.*t25047*t9121)*var2[0] + (t17264*(-1.*t17164*t17264*t25047 + t30382 - 1.*t17264*t22922*t9121) + t17253*(t17164*t17306*t25047 + t30456 + t17306*t22922*t9121))*var2[1] + t17264*(-1.*t17164*t22922 + t25047*t9121)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t17253 - 0.15121*t17306)*var2[0] + (-0.15121 + t17264*(-1.*t17264*t22909 + t30382) + t17253*(t17306*t22909 + t30456))*var2[1];
  p_output1[16]=(0.28121*t17245 - 0.305*t17211*t17245 + t17245*t22892)*var2[0] + (0.28121*t17211 + 0.305*Power(t17245,2) + t17211*t22892)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
