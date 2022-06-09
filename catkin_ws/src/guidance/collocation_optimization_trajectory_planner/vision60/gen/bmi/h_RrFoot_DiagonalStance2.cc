/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:24 GMT+02:00
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
  double t6080;
  double t6087;
  double t6093;
  double t6095;
  double t6098;
  double t6085;
  double t6122;
  double t6024;
  double t6126;
  double t6127;
  double t6131;
  double t6134;
  double t6173;
  double t6177;
  double t6181;
  double t6186;
  double t6203;
  double t6207;
  double t6208;
  double t6078;
  double t6079;
  double t6227;
  double t6096;
  double t6097;
  double t6230;
  double t6238;
  double t6239;
  double t6240;
  double t6229;
  double t6231;
  double t6232;
  double t6246;
  double t6247;
  double t6248;
  double t6190;
  double t6198;
  double t6250;
  double t6251;
  double t6252;
  double t6254;
  double t6255;
  double t6260;
  double t6284;
  double t6285;
  double t6286;
  double t6280;
  double t6281;
  double t6282;
  double t6306;
  double t6307;
  double t6309;
  double t6311;
  double t6312;
  double t6313;
  double t6315;
  double t6316;
  double t6317;
  t6080 = Cos(var1[4]);
  t6087 = Sin(var1[15]);
  t6093 = Sin(var1[4]);
  t6095 = Cos(var1[15]);
  t6098 = Sin(var1[5]);
  t6085 = Cos(var1[5]);
  t6122 = Sin(var1[16]);
  t6024 = Cos(var1[16]);
  t6126 = t6095*t6093;
  t6127 = t6080*t6087*t6098;
  t6131 = t6126 + t6127;
  t6134 = Sin(var1[17]);
  t6173 = -1.*t6080*t6085*t6122;
  t6177 = t6024*t6131;
  t6181 = t6173 + t6177;
  t6186 = Cos(var1[17]);
  t6203 = t6024*t6080*t6085;
  t6207 = t6122*t6131;
  t6208 = t6203 + t6207;
  t6078 = -1.*t6024;
  t6079 = 1. + t6078;
  t6227 = Sin(var1[3]);
  t6096 = -1.*t6095;
  t6097 = 1. + t6096;
  t6230 = Cos(var1[3]);
  t6238 = t6230*t6085;
  t6239 = -1.*t6227*t6093*t6098;
  t6240 = t6238 + t6239;
  t6229 = t6085*t6227*t6093;
  t6231 = t6230*t6098;
  t6232 = t6229 + t6231;
  t6246 = -1.*t6095*t6080*t6227;
  t6247 = -1.*t6087*t6240;
  t6248 = t6246 + t6247;
  t6190 = -1.*t6186;
  t6198 = 1. + t6190;
  t6250 = -1.*t6122*t6232;
  t6251 = t6024*t6248;
  t6252 = t6250 + t6251;
  t6254 = t6024*t6232;
  t6255 = t6122*t6248;
  t6260 = t6254 + t6255;
  t6284 = t6085*t6227;
  t6285 = t6230*t6093*t6098;
  t6286 = t6284 + t6285;
  t6280 = -1.*t6230*t6085*t6093;
  t6281 = t6227*t6098;
  t6282 = t6280 + t6281;
  t6306 = t6095*t6230*t6080;
  t6307 = -1.*t6087*t6286;
  t6309 = t6306 + t6307;
  t6311 = -1.*t6122*t6282;
  t6312 = t6024*t6309;
  t6313 = t6311 + t6312;
  t6315 = t6024*t6282;
  t6316 = t6122*t6309;
  t6317 = t6315 + t6316;
  p_output1[0]=-0.325*t6079*t6080*t6085 + 0.1575*t6087*t6093 + 0.1575*t6080*t6097*t6098 - 0.2255*(t6087*t6093 - 1.*t6080*t6095*t6098) + 0.325*t6122*t6131 - 0.575*t6134*t6181 - 0.575*t6198*t6208 - 0.0641*(t6181*t6186 + t6134*t6208) - 0.295*(-1.*t6134*t6181 + t6186*t6208) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t6080*t6087*t6227 - 0.325*t6079*t6232 - 0.1575*t6097*t6240 - 0.2255*(-1.*t6080*t6087*t6227 + t6095*t6240) + 0.325*t6122*t6248 - 0.575*t6134*t6252 - 0.575*t6198*t6260 - 0.0641*(t6186*t6252 + t6134*t6260) - 0.295*(-1.*t6134*t6252 + t6186*t6260) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t6080*t6087*t6230 - 0.325*t6079*t6282 - 0.1575*t6097*t6286 - 0.2255*(t6080*t6087*t6230 + t6095*t6286) + 0.325*t6122*t6309 - 0.575*t6134*t6313 - 0.575*t6198*t6317 - 0.0641*(t6186*t6313 + t6134*t6317) - 0.295*(-1.*t6134*t6313 + t6186*t6317) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
