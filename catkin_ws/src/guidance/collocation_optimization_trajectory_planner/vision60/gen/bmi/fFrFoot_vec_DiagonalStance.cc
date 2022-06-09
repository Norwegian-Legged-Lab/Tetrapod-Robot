/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:54 GMT+02:00
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
  double t4718;
  double t4716;
  double t4723;
  double t40997;
  double t40648;
  double t40812;
  double t41000;
  double t4689;
  double t40947;
  double t41011;
  double t42909;
  double t4725;
  double t43966;
  double t44085;
  double t44086;
  double t43219;
  double t44158;
  double t44160;
  double t44092;
  double t44093;
  double t44094;
  double t44113;
  double t44114;
  double t44116;
  double t44120;
  double t44128;
  double t44138;
  double t44228;
  double t44232;
  double t44244;
  double t44286;
  double t44289;
  double t44290;
  double t44293;
  double t44301;
  double t44303;
  double t44314;
  double t44316;
  double t44324;
  double t44328;
  double t44329;
  double t44330;
  double t43165;
  double t44099;
  double t44102;
  double t44378;
  double t44379;
  double t44389;
  double t44395;
  double t44401;
  double t44403;
  double t44404;
  double t44405;
  double t44406;
  double t4717;
  double t35767;
  double t37549;
  double t44377;
  double t44393;
  double t44407;
  double t44408;
  double t44422;
  double t44424;
  double t44428;
  double t44433;
  double t44435;
  double t44437;
  double t44368;
  double t44373;
  double t44374;
  double t44376;
  double t44409;
  double t44413;
  double t44442;
  double t44443;
  double t44444;
  double t44447;
  double t44448;
  double t44449;
  double t44419;
  double t44438;
  double t44440;
  double t44445;
  double t44455;
  double t44456;
  double t44459;
  double t44460;
  double t44463;
  double t44109;
  double t44140;
  double t44141;
  double t44441;
  double t44481;
  double t44490;
  double t44511;
  double t44549;
  double t44555;
  double t44600;
  double t44609;
  double t44570;
  double t44575;
  double t44590;
  double t44584;
  double t44655;
  double t44640;
  t4718 = Cos(var1[12]);
  t4716 = Sin(var1[4]);
  t4723 = Cos(var1[4]);
  t40997 = Cos(var1[13]);
  t40648 = Cos(var1[14]);
  t40812 = Sin(var1[13]);
  t41000 = Sin(var1[14]);
  t4689 = Sin(var1[12]);
  t40947 = t40648*t40812;
  t41011 = -1.*t40997*t41000;
  t42909 = t40947 + t41011;
  t4725 = Sin(var1[5]);
  t43966 = t40997*t40648;
  t44085 = t40812*t41000;
  t44086 = t43966 + t44085;
  t43219 = Cos(var1[5]);
  t44158 = Cos(var1[3]);
  t44160 = Sin(var1[3]);
  t44092 = t43219*t44086;
  t44093 = t4689*t42909*t4725;
  t44094 = t44092 + t44093;
  t44113 = -1.*t40648*t40812;
  t44114 = t40997*t41000;
  t44116 = t44113 + t44114;
  t44120 = t43219*t44116;
  t44128 = t4689*t44086*t4725;
  t44138 = t44120 + t44128;
  t44228 = t4723*t4689;
  t44232 = t4718*t4716*t4725;
  t44244 = t44228 + t44232;
  t44286 = -1.*t43219*t4689*t42909;
  t44289 = t44086*t4725;
  t44290 = t44286 + t44289;
  t44293 = t4718*t4723*t42909;
  t44301 = -1.*t4716*t44094;
  t44303 = t44293 + t44301;
  t44314 = -1.*t43219*t4689*t44086;
  t44316 = t44116*t4725;
  t44324 = t44314 + t44316;
  t44328 = t4718*t4723*t44086;
  t44329 = -1.*t4716*t44138;
  t44330 = t44328 + t44329;
  t43165 = t4718*t42909*t4716;
  t44099 = t4723*t44094;
  t44102 = t43165 + t44099;
  t44378 = -0.0641*t40648;
  t44379 = -0.28*t41000;
  t44389 = t44378 + t44379;
  t44395 = -1.*t40648;
  t44401 = 1. + t44395;
  t44403 = 0.075*t44401;
  t44404 = 0.355*t40648;
  t44405 = -0.0641*t41000;
  t44406 = t44403 + t44404 + t44405;
  t4717 = t4689*t4716;
  t35767 = -1.*t4718*t4723*t4725;
  t37549 = t4717 + t35767;
  t44377 = -0.325*t40812;
  t44393 = t40997*t44389;
  t44407 = t40812*t44406;
  t44408 = t44377 + t44393 + t44407;
  t44422 = -1.*t40997;
  t44424 = 1. + t44422;
  t44428 = 0.325*t44424;
  t44433 = -1.*t40812*t44389;
  t44435 = t40997*t44406;
  t44437 = t44428 + t44433 + t44435;
  t44368 = -1.*t4718;
  t44373 = 1. + t44368;
  t44374 = -0.1575*t44373;
  t44376 = -0.2255*t4718;
  t44409 = -1.*t4689*t44408;
  t44413 = t44374 + t44376 + t44409;
  t44442 = -0.068*t4689;
  t44443 = t4718*t44408;
  t44444 = t44442 + t44443;
  t44447 = t43219*t44437;
  t44448 = -1.*t44413*t4725;
  t44449 = t44447 + t44448;
  t44419 = t43219*t44413;
  t44438 = t44437*t4725;
  t44440 = t44419 + t44438;
  t44445 = t44444*t4716;
  t44455 = t4723*t44449;
  t44456 = t44445 + t44455;
  t44459 = t4723*t44444;
  t44460 = -1.*t4716*t44449;
  t44463 = t44459 + t44460;
  t44109 = t4718*t44086*t4716;
  t44140 = t4723*t44138;
  t44141 = t44109 + t44140;
  t44441 = t4718*t43219*t44440;
  t44481 = -1.*t44440*t44290;
  t44490 = t44440*t44290;
  t44511 = -1.*t44440*t44324;
  t44549 = -1.*t4718*t43219*t44440;
  t44555 = t44440*t44324;
  t44600 = -1.*t4689*t44444;
  t44609 = t4718*t44444*t44086;
  t44570 = t4689*t44444;
  t44575 = -1.*t4718*t44444*t42909;
  t44590 = -1.*t4718*t44444*t44086;
  t44584 = t4718*t44444*t42909;
  t44655 = t44437*t44086;
  t44640 = -1.*t44437*t44116;
  p_output1[0]=t44102*var2[0] + t37549*var2[1] + t44141*var2[2];
  p_output1[1]=(t44158*t44290 - 1.*t44160*t44303)*var2[0] + (-1.*t44160*t44244 + t43219*t44158*t4718)*var2[1] + (t44158*t44324 - 1.*t44160*t44330)*var2[2];
  p_output1[2]=(t44160*t44290 + t44158*t44303)*var2[0] + (t44158*t44244 + t43219*t44160*t4718)*var2[1] + (t44160*t44324 + t44158*t44330)*var2[2];
  p_output1[3]=(t44141*(-1.*t37549*t44456 - 1.*t44244*t44463 + t44549) + t37549*(t44141*t44456 + t44330*t44463 + t44555))*var2[0] + (t44141*(t44102*t44456 + t44303*t44463 + t44490) + t44102*(-1.*t44141*t44456 - 1.*t44330*t44463 + t44511))*var2[1] + (t44102*(t44441 + t37549*t44456 + t44244*t44463) + t37549*(-1.*t44102*t44456 - 1.*t44303*t44463 + t44481))*var2[2];
  p_output1[4]=(t43219*(t44138*t44449 + t44555 + t44609)*t4718 + t44324*(t44549 + t44600 + t44449*t4718*t4725))*var2[0] + (t44324*(t44094*t44449 + t44490 + t44584) + t44290*(-1.*t44138*t44449 + t44511 + t44590))*var2[1] + (t43219*(-1.*t44094*t44449 + t44481 + t44575)*t4718 + t44290*(t44441 + t44570 - 1.*t44449*t4718*t4725))*var2[2];
  p_output1[5]=(t4689*(t44116*t44437 + t44609 - 1.*t44086*t44413*t4689) + t44086*t4718*(t44600 - 1.*t44413*t4718))*var2[0] + (t44086*(t44584 + t44655 - 1.*t42909*t44413*t4689)*t4718 + t42909*(t44590 + t44640 + t44086*t44413*t4689)*t4718)*var2[1] + (t4689*(-1.*t44086*t44437 + t44575 + t42909*t44413*t4689) + t42909*t4718*(t44570 + t44413*t4718))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t42909 + 0.2255*t44116)*var2[0] + (t44086*(-1.*t44086*t44408 + t44640) + t44116*(t42909*t44408 + t44655))*var2[1] - 0.068*t44086*var2[2];
  p_output1[13]=(0.325*t41000 - 1.*t40648*t44389 - 1.*t41000*t44406)*var2[0] + (-0.325*t40648 - 1.*t41000*t44389 + t40648*t44406)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
