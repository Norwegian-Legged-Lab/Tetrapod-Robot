/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:19 GMT+02:00
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
  double t19083;
  double t20604;
  double t20598;
  double t20599;
  double t20631;
  double t18877;
  double t18995;
  double t20983;
  double t21032;
  double t21033;
  double t21034;
  double t21068;
  double t20600;
  double t20778;
  double t20968;
  double t20334;
  double t21149;
  double t21150;
  double t21151;
  double t21166;
  double t21171;
  double t21173;
  double t21179;
  double t21181;
  double t21185;
  double t21186;
  double t21187;
  double t20400;
  double t20595;
  double t20988;
  double t21031;
  double t21216;
  double t21218;
  double t21219;
  double t21183;
  double t21184;
  double t21221;
  double t21223;
  double t21225;
  double t21227;
  double t21228;
  double t21230;
  double t21244;
  double t21245;
  double t21246;
  double t21250;
  double t21251;
  double t21253;
  double t21255;
  double t21256;
  double t21257;
  double t21259;
  double t21260;
  double t21261;
  double t21387;
  double t21409;
  double t21421;
  double t21436;
  double t21442;
  double t21443;
  double t21478;
  double t21501;
  double t21502;
  double t21538;
  double t21539;
  double t21540;
  double t21543;
  double t21546;
  double t21550;
  double t21566;
  double t21580;
  double t21582;
  t19083 = Sin(var1[3]);
  t20604 = Cos(var1[3]);
  t20598 = Cos(var1[5]);
  t20599 = Sin(var1[4]);
  t20631 = Sin(var1[5]);
  t18877 = Cos(var1[4]);
  t18995 = Sin(var1[15]);
  t20983 = Cos(var1[15]);
  t21032 = t20604*t20598;
  t21033 = -1.*t19083*t20599*t20631;
  t21034 = t21032 + t21033;
  t21068 = Sin(var1[16]);
  t20600 = t20598*t19083*t20599;
  t20778 = t20604*t20631;
  t20968 = t20600 + t20778;
  t20334 = Cos(var1[16]);
  t21149 = -1.*t20983*t18877*t19083;
  t21150 = -1.*t18995*t21034;
  t21151 = t21149 + t21150;
  t21166 = Sin(var1[17]);
  t21171 = -1.*t21068*t20968;
  t21173 = t20334*t21151;
  t21179 = t21171 + t21173;
  t21181 = Cos(var1[17]);
  t21185 = t20334*t20968;
  t21186 = t21068*t21151;
  t21187 = t21185 + t21186;
  t20400 = -1.*t20334;
  t20595 = 1. + t20400;
  t20988 = -1.*t20983;
  t21031 = 1. + t20988;
  t21216 = -1.*t20983*t20604*t20599;
  t21218 = -1.*t20604*t18877*t18995*t20631;
  t21219 = t21216 + t21218;
  t21183 = -1.*t21181;
  t21184 = 1. + t21183;
  t21221 = t20604*t18877*t20598*t21068;
  t21223 = t20334*t21219;
  t21225 = t21221 + t21223;
  t21227 = -1.*t20334*t20604*t18877*t20598;
  t21228 = t21068*t21219;
  t21230 = t21227 + t21228;
  t21244 = t20604*t20598*t20599;
  t21245 = -1.*t19083*t20631;
  t21246 = t21244 + t21245;
  t21250 = t20598*t19083;
  t21251 = t20604*t20599*t20631;
  t21253 = t21250 + t21251;
  t21255 = -1.*t18995*t21068*t21246;
  t21256 = t20334*t21253;
  t21257 = t21255 + t21256;
  t21259 = -1.*t20334*t18995*t21246;
  t21260 = -1.*t21068*t21253;
  t21261 = t21259 + t21260;
  t21387 = -1.*t20604*t18877*t18995;
  t21409 = -1.*t20983*t21253;
  t21421 = t21387 + t21409;
  t21436 = t20983*t20604*t18877;
  t21442 = -1.*t18995*t21253;
  t21443 = t21436 + t21442;
  t21478 = -1.*t20604*t20598*t20599;
  t21501 = t19083*t20631;
  t21502 = t21478 + t21501;
  t21538 = -1.*t21068*t21502;
  t21539 = t20334*t21443;
  t21540 = t21538 + t21539;
  t21543 = -1.*t20334*t21502;
  t21546 = -1.*t21068*t21443;
  t21550 = t21543 + t21546;
  t21566 = t20334*t21502;
  t21580 = t21068*t21443;
  t21582 = t21566 + t21580;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t18877*t18995*t19083 - 0.325*t20595*t20968 - 0.1575*t21031*t21034 - 0.2255*(-1.*t18877*t18995*t19083 + t20983*t21034) + 0.325*t21068*t21151 - 0.575*t21166*t21179 - 0.575*t21184*t21187 - 0.0641*(t21179*t21181 + t21166*t21187) - 0.295*(-1.*t21166*t21179 + t21181*t21187);
  p_output1[2]=0.325*t18877*t20595*t20598*t20604 - 0.1575*t18995*t20599*t20604 - 0.2255*(-1.*t18995*t20599*t20604 + t18877*t20604*t20631*t20983) - 0.1575*t18877*t20604*t20631*t21031 + 0.325*t21068*t21219 - 0.575*t21166*t21225 - 0.575*t21184*t21230 - 0.0641*(t21181*t21225 + t21166*t21230) - 0.295*(-1.*t21166*t21225 + t21181*t21230);
  p_output1[3]=-0.2255*t20983*t21246 - 0.1575*t21031*t21246 - 0.325*t18995*t21068*t21246 - 0.325*t20595*t21253 - 0.575*t21184*t21257 - 0.575*t21166*t21261 - 0.295*(t21181*t21257 - 1.*t21166*t21261) - 0.0641*(t21166*t21257 + t21181*t21261);
  p_output1[4]=0.1575*t18877*t20604*t20983 - 0.1575*t18995*t21253 + 0.325*t21068*t21421 - 0.575*t20334*t21166*t21421 - 0.575*t21068*t21184*t21421 - 0.0641*(t21068*t21166*t21421 + t20334*t21181*t21421) - 0.295*(-1.*t20334*t21166*t21421 + t21068*t21181*t21421) - 0.2255*t21443;
  p_output1[5]=0.325*t20334*t21443 - 0.325*t21068*t21502 - 0.575*t21184*t21540 - 0.575*t21166*t21550 - 0.295*(t21181*t21540 - 1.*t21166*t21550) - 0.0641*(t21166*t21540 + t21181*t21550);
  p_output1[6]=-0.575*t21181*t21540 - 0.575*t21166*t21582 - 0.295*(-1.*t21181*t21540 - 1.*t21166*t21582) - 0.0641*(-1.*t21166*t21540 + t21181*t21582);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
