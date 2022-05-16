/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:23 GMT+02:00
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
  double t2042;
  double t18425;
  double t4433;
  double t28377;
  double t29824;
  double t24642;
  double t29833;
  double t4438;
  double t31341;
  double t31371;
  double t31449;
  double t18427;
  double t30015;
  double t32857;
  double t32899;
  double t32935;
  double t4695;
  double t19792;
  double t20085;
  double t38886;
  double t34400;
  double t29222;
  double t29872;
  double t29897;
  double t31609;
  double t32303;
  double t32340;
  double t33872;
  double t33878;
  double t33964;
  double t38888;
  double t38896;
  double t38897;
  double t38945;
  double t38973;
  double t38986;
  double t39010;
  double t39032;
  double t39127;
  double t39255;
  double t39260;
  double t39261;
  double t39293;
  double t39326;
  double t39329;
  double t30242;
  double t32719;
  double t32820;
  double t39745;
  double t39757;
  double t39769;
  double t39783;
  double t39788;
  double t39792;
  double t39810;
  double t39838;
  double t39851;
  double t40189;
  double t40191;
  double t40198;
  double t40203;
  double t40204;
  double t40221;
  double t40322;
  double t39771;
  double t39776;
  double t40210;
  double t40211;
  double t40342;
  double t40387;
  double t40403;
  double t40406;
  double t40425;
  double t40438;
  double t40439;
  double t40220;
  double t40324;
  double t40331;
  double t40423;
  double t40444;
  double t40447;
  double t40451;
  double t40455;
  double t40461;
  double t32842;
  double t34352;
  double t34360;
  double t40337;
  double t40467;
  double t41419;
  double t41577;
  double t41957;
  double t42016;
  double t45893;
  double t45996;
  t2042 = Cos(var1[4]);
  t18425 = Cos(var1[15]);
  t4433 = Cos(var1[5]);
  t28377 = Cos(var1[17]);
  t29824 = Sin(var1[16]);
  t24642 = Cos(var1[16]);
  t29833 = Sin(var1[17]);
  t4438 = Sin(var1[15]);
  t31341 = -1.*t28377*t29824;
  t31371 = t24642*t29833;
  t31449 = t31341 + t31371;
  t18427 = Sin(var1[5]);
  t30015 = Sin(var1[4]);
  t32857 = -1.*t24642*t28377;
  t32899 = -1.*t29824*t29833;
  t32935 = t32857 + t32899;
  t4695 = t4433*t4438;
  t19792 = t18425*t18427;
  t20085 = t4695 + t19792;
  t38886 = Cos(var1[3]);
  t34400 = Sin(var1[3]);
  t29222 = t24642*t28377;
  t29872 = t29824*t29833;
  t29897 = t29222 + t29872;
  t31609 = t18425*t4433*t31449;
  t32303 = -1.*t4438*t31449*t18427;
  t32340 = t31609 + t32303;
  t33872 = t18425*t4433*t32935;
  t33878 = -1.*t4438*t32935*t18427;
  t33964 = t33872 + t33878;
  t38888 = -1.*t18425*t4433;
  t38896 = t4438*t18427;
  t38897 = t38888 + t38896;
  t38945 = t4433*t4438*t31449;
  t38973 = t18425*t31449*t18427;
  t38986 = t38945 + t38973;
  t39010 = t2042*t29897;
  t39032 = -1.*t30015*t32340;
  t39127 = t39010 + t39032;
  t39255 = t4433*t4438*t32935;
  t39260 = t18425*t32935*t18427;
  t39261 = t39255 + t39260;
  t39293 = t2042*t31449;
  t39326 = -1.*t30015*t33964;
  t39329 = t39293 + t39326;
  t30242 = t29897*t30015;
  t32719 = t2042*t32340;
  t32820 = t30242 + t32719;
  t39745 = -1.*t18425;
  t39757 = 1. + t39745;
  t39769 = -0.15121*t39757;
  t39783 = -1.*t24642;
  t39788 = 1. + t39783;
  t39792 = -0.28121*t39788;
  t39810 = -1.*t28377;
  t39838 = 1. + t39810;
  t39851 = -0.50321*t39838;
  t40189 = -0.23321*t28377;
  t40191 = t39851 + t40189;
  t40198 = t24642*t40191;
  t40203 = 0.27*t29824*t29833;
  t40204 = t39792 + t40198 + t40203;
  t40221 = t18425*t40204;
  t40322 = t39769 + t40221;
  t39771 = -0.15121*t18425;
  t39776 = 0.15121*t4438;
  t40210 = t4438*t40204;
  t40211 = t39769 + t39771 + t39776 + t40210;
  t40342 = 0.28121*t29824;
  t40387 = t40191*t29824;
  t40403 = -0.27*t24642*t29833;
  t40406 = t40342 + t40387 + t40403;
  t40425 = t4433*t40322;
  t40438 = -1.*t40211*t18427;
  t40439 = t40425 + t40438;
  t40220 = t4433*t40211;
  t40324 = t40322*t18427;
  t40331 = t40220 + t40324;
  t40423 = t40406*t30015;
  t40444 = t2042*t40439;
  t40447 = t40423 + t40444;
  t40451 = t2042*t40406;
  t40455 = -1.*t30015*t40439;
  t40461 = t40451 + t40455;
  t32842 = t31449*t30015;
  t34352 = t2042*t33964;
  t34360 = t32842 + t34352;
  t40337 = -1.*t38897*t40331;
  t40467 = t38986*t40331;
  t41419 = t38897*t40331;
  t41577 = -1.*t39261*t40331;
  t41957 = -1.*t38986*t40331;
  t42016 = t39261*t40331;
  t45893 = -1.*t40406*t29897;
  t45996 = t40406*t31449;
  p_output1[0]=t34360*var2[0] + t20085*t2042*var2[1] + t32820*var2[2];
  p_output1[1]=(t38886*t39261 - 1.*t34400*t39329)*var2[0] + (t20085*t30015*t34400 + t38886*t38897)*var2[1] + (t38886*t38986 - 1.*t34400*t39127)*var2[2];
  p_output1[2]=(t34400*t39261 + t38886*t39329)*var2[0] + (-1.*t20085*t30015*t38886 + t34400*t38897)*var2[1] + (t34400*t38986 + t38886*t39127)*var2[2];
  p_output1[3]=(t32820*(t40337 - 1.*t20085*t2042*t40447 + t20085*t30015*t40461) + t20085*t2042*(t32820*t40447 + t39127*t40461 + t40467))*var2[0] + (t34360*(-1.*t32820*t40447 - 1.*t39127*t40461 + t41957) + t32820*(t34360*t40447 + t39329*t40461 + t42016))*var2[1] + (t34360*(t20085*t2042*t40447 - 1.*t20085*t30015*t40461 + t41419) + t20085*t2042*(-1.*t34360*t40447 - 1.*t39329*t40461 + t41577))*var2[2];
  p_output1[4]=(t38986*(t40337 - 1.*t20085*t40439) + t38897*(t29897*t40406 + t32340*t40439 + t40467))*var2[0] + (t39261*(-1.*t32340*t40439 + t41957 + t45893) + t38986*(t33964*t40439 + t42016 + t45996))*var2[1] + (t39261*(t20085*t40439 + t41419) + t38897*(-1.*t31449*t40406 - 1.*t33964*t40439 + t41577))*var2[2];
  p_output1[5]=t29897*(t18425*t40211 - 1.*t40322*t4438)*var2[0] + (t31449*(-1.*t18425*t31449*t40322 - 1.*t31449*t40211*t4438 + t45893) + t29897*(t18425*t32935*t40322 + t32935*t40211*t4438 + t45996))*var2[1] + t31449*(-1.*t18425*t40211 + t40322*t4438)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t29897 - 0.15121*t32935)*var2[0] + (-0.15121 + t31449*(-1.*t31449*t40204 + t45893) + t29897*(t32935*t40204 + t45996))*var2[1];
  p_output1[16]=(0.28121*t29833 - 0.27*t28377*t29833 + t29833*t40191)*var2[0] + (0.28121*t28377 + 0.27*Power(t29833,2) + t28377*t40191)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
