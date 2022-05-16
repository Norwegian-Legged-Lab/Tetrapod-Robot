/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:54 GMT+02:00
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
  double t36005;
  double t306;
  double t1086;
  double t36036;
  double t52370;
  double t52371;
  double t52381;
  double t52321;
  double t52384;
  double t45764;
  double t53377;
  double t41305;
  double t1726;
  double t36369;
  double t36373;
  double t36425;
  double t52382;
  double t53388;
  double t53389;
  double t53417;
  double t53409;
  double t53411;
  double t53412;
  double t53406;
  double t53418;
  double t53419;
  double t53421;
  double t53585;
  double t53603;
  double t53608;
  double t53619;
  double t53620;
  double t53628;
  double t53634;
  double t53639;
  double t53666;
  double t53668;
  double t53669;
  double t53677;
  double t53679;
  double t53683;
  double t53704;
  double t53705;
  double t53613;
  double t53617;
  double t53685;
  double t53692;
  double t53717;
  double t53718;
  double t53719;
  double t53731;
  double t53732;
  double t53739;
  double t53740;
  double t53746;
  double t53747;
  double t53751;
  double t53700;
  double t53706;
  double t53710;
  double t53457;
  double t53460;
  double t53462;
  double t53467;
  double t53468;
  double t53471;
  double t53484;
  double t53492;
  double t53504;
  double t53745;
  double t53752;
  double t53757;
  double t53765;
  double t53768;
  double t53769;
  double t53780;
  double t53781;
  double t53782;
  double t53556;
  double t53565;
  double t53579;
  double t53712;
  double t53789;
  double t36653;
  double t53391;
  double t53400;
  double t53798;
  double t53805;
  double t53807;
  double t53854;
  double t53859;
  double t53867;
  double t53878;
  double t53980;
  double t54001;
  t36005 = Cos(var1[16]);
  t306 = Cos(var1[17]);
  t1086 = Sin(var1[16]);
  t36036 = Sin(var1[17]);
  t52370 = -1.*t36005*t306;
  t52371 = -1.*t1086*t36036;
  t52381 = t52370 + t52371;
  t52321 = Cos(var1[5]);
  t52384 = Sin(var1[15]);
  t45764 = Cos(var1[15]);
  t53377 = Sin(var1[5]);
  t41305 = Cos(var1[4]);
  t1726 = -1.*t306*t1086;
  t36369 = t36005*t36036;
  t36373 = t1726 + t36369;
  t36425 = Sin(var1[4]);
  t52382 = t45764*t52321*t52381;
  t53388 = -1.*t52384*t52381*t53377;
  t53389 = t52382 + t53388;
  t53417 = Sin(var1[3]);
  t53409 = t52321*t52384*t52381;
  t53411 = t45764*t52381*t53377;
  t53412 = t53409 + t53411;
  t53406 = Cos(var1[3]);
  t53418 = t41305*t36373;
  t53419 = -1.*t36425*t53389;
  t53421 = t53418 + t53419;
  t53585 = -1.*t45764;
  t53603 = 1. + t53585;
  t53608 = -0.15121*t53603;
  t53619 = -1.*t36005;
  t53620 = 1. + t53619;
  t53628 = -0.28121*t53620;
  t53634 = -1.*t306;
  t53639 = 1. + t53634;
  t53666 = -0.50321*t53639;
  t53668 = -0.23321*t306;
  t53669 = t53666 + t53668;
  t53677 = t36005*t53669;
  t53679 = 0.27*t1086*t36036;
  t53683 = t53628 + t53677 + t53679;
  t53704 = t45764*t53683;
  t53705 = t53608 + t53704;
  t53613 = -0.15121*t45764;
  t53617 = 0.15121*t52384;
  t53685 = t52384*t53683;
  t53692 = t53608 + t53613 + t53617 + t53685;
  t53717 = t52321*t52384;
  t53718 = t45764*t53377;
  t53719 = t53717 + t53718;
  t53731 = 0.28121*t1086;
  t53732 = t53669*t1086;
  t53739 = -0.27*t36005*t36036;
  t53740 = t53731 + t53732 + t53739;
  t53746 = t52321*t53705;
  t53747 = -1.*t53692*t53377;
  t53751 = t53746 + t53747;
  t53700 = t52321*t53692;
  t53706 = t53705*t53377;
  t53710 = t53700 + t53706;
  t53457 = t36005*t306;
  t53460 = t1086*t36036;
  t53462 = t53457 + t53460;
  t53467 = t53462*t36425;
  t53468 = t45764*t52321*t36373;
  t53471 = -1.*t52384*t36373*t53377;
  t53484 = t53468 + t53471;
  t53492 = t41305*t53484;
  t53504 = t53467 + t53492;
  t53745 = t53740*t36425;
  t53752 = t41305*t53751;
  t53757 = t53745 + t53752;
  t53765 = t41305*t53740;
  t53768 = -1.*t36425*t53751;
  t53769 = t53765 + t53768;
  t53780 = t52321*t52384*t36373;
  t53781 = t45764*t36373*t53377;
  t53782 = t53780 + t53781;
  t53556 = -1.*t45764*t52321;
  t53565 = t52384*t53377;
  t53579 = t53556 + t53565;
  t53712 = -1.*t53579*t53710;
  t53789 = t53782*t53710;
  t36653 = t36373*t36425;
  t53391 = t41305*t53389;
  t53400 = t36653 + t53391;
  t53798 = t41305*t53462;
  t53805 = -1.*t36425*t53484;
  t53807 = t53798 + t53805;
  t53854 = -1.*t53782*t53710;
  t53859 = t53412*t53710;
  t53867 = -1.*t53740*t53462;
  t53878 = t53740*t36373;
  t53980 = t53579*t53710;
  t54001 = -1.*t53412*t53710;
  p_output1[0]=t53400;
  p_output1[1]=t53406*t53412 - 1.*t53417*t53421;
  p_output1[2]=t53412*t53417 + t53406*t53421;
  p_output1[3]=t53504*(t53712 - 1.*t41305*t53719*t53757 + t36425*t53719*t53769) + t41305*t53719*(t53504*t53757 + t53789 + t53769*t53807);
  p_output1[4]=(t53712 - 1.*t53719*t53751)*t53782 + t53579*(t53462*t53740 + t53484*t53751 + t53789);
  p_output1[5]=t53462*(t45764*t53692 - 1.*t52384*t53705);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t52381 - 0.15121*t53462;
  p_output1[16]=0.28121*t36036 - 0.27*t306*t36036 + t36036*t53669;
  p_output1[17]=0;
  p_output1[18]=t41305*t53719;
  p_output1[19]=t53406*t53579 + t36425*t53417*t53719;
  p_output1[20]=t53417*t53579 - 1.*t36425*t53406*t53719;
  p_output1[21]=t53400*(-1.*t53504*t53757 - 1.*t53769*t53807 + t53854) + t53504*(t53400*t53757 + t53421*t53769 + t53859);
  p_output1[22]=t53412*(-1.*t53484*t53751 + t53854 + t53867) + t53782*(t53389*t53751 + t53859 + t53878);
  p_output1[23]=t36373*(-1.*t36373*t52384*t53692 - 1.*t36373*t45764*t53705 + t53867) + t53462*(t52381*t52384*t53692 + t45764*t52381*t53705 + t53878);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t36373*(-1.*t36373*t53683 + t53867) + t53462*(t52381*t53683 + t53878);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t53504;
  p_output1[37]=t53406*t53782 - 1.*t53417*t53807;
  p_output1[38]=t53417*t53782 + t53406*t53807;
  p_output1[39]=t53400*(t41305*t53719*t53757 - 1.*t36425*t53719*t53769 + t53980) + t41305*t53719*(-1.*t53400*t53757 - 1.*t53421*t53769 + t54001);
  p_output1[40]=t53412*(t53719*t53751 + t53980) + t53579*(-1.*t36373*t53740 - 1.*t53389*t53751 + t54001);
  p_output1[41]=t36373*(-1.*t45764*t53692 + t52384*t53705);
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
  p_output1[52]=0.28121*t306 + 0.27*Power(t36036,2) + t306*t53669;
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
