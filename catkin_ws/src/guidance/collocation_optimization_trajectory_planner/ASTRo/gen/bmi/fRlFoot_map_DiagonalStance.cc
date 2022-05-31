/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:19 GMT+02:00
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
  double t5192;
  double t2886;
  double t3215;
  double t5209;
  double t18572;
  double t18593;
  double t18727;
  double t18546;
  double t18840;
  double t18494;
  double t18867;
  double t9301;
  double t3908;
  double t5263;
  double t5264;
  double t5274;
  double t18777;
  double t18870;
  double t18894;
  double t18932;
  double t18927;
  double t18929;
  double t18930;
  double t18925;
  double t18950;
  double t18996;
  double t19016;
  double t19149;
  double t19151;
  double t19166;
  double t19177;
  double t19178;
  double t19187;
  double t19188;
  double t19272;
  double t19278;
  double t19283;
  double t19298;
  double t19324;
  double t19326;
  double t19347;
  double t19348;
  double t19361;
  double t19154;
  double t19164;
  double t19165;
  double t19330;
  double t19337;
  double t19373;
  double t19385;
  double t19430;
  double t19478;
  double t19489;
  double t19627;
  double t19628;
  double t19655;
  double t19656;
  double t19657;
  double t19342;
  double t19362;
  double t19363;
  double t19111;
  double t19113;
  double t19114;
  double t19116;
  double t19121;
  double t19123;
  double t19131;
  double t19134;
  double t19135;
  double t19631;
  double t19668;
  double t19671;
  double t19677;
  double t19680;
  double t19681;
  double t20379;
  double t20399;
  double t20406;
  double t19137;
  double t19141;
  double t19148;
  double t19368;
  double t20407;
  double t5336;
  double t18919;
  double t18924;
  double t20410;
  double t20411;
  double t20412;
  double t22876;
  double t24853;
  double t26095;
  double t26327;
  double t29168;
  double t29527;
  t5192 = Cos(var1[10]);
  t2886 = Cos(var1[11]);
  t3215 = Sin(var1[10]);
  t5209 = Sin(var1[11]);
  t18572 = -1.*t5192*t2886;
  t18593 = -1.*t3215*t5209;
  t18727 = t18572 + t18593;
  t18546 = Cos(var1[5]);
  t18840 = Sin(var1[9]);
  t18494 = Cos(var1[9]);
  t18867 = Sin(var1[5]);
  t9301 = Cos(var1[4]);
  t3908 = -1.*t2886*t3215;
  t5263 = t5192*t5209;
  t5264 = t3908 + t5263;
  t5274 = Sin(var1[4]);
  t18777 = t18494*t18546*t18727;
  t18870 = -1.*t18840*t18727*t18867;
  t18894 = t18777 + t18870;
  t18932 = Sin(var1[3]);
  t18927 = t18546*t18840*t18727;
  t18929 = t18494*t18727*t18867;
  t18930 = t18927 + t18929;
  t18925 = Cos(var1[3]);
  t18950 = t9301*t5264;
  t18996 = -1.*t5274*t18894;
  t19016 = t18950 + t18996;
  t19149 = -1.*t18494;
  t19151 = 1. + t19149;
  t19166 = -1.*t5192;
  t19177 = 1. + t19166;
  t19178 = -0.28121*t19177;
  t19187 = -1.*t2886;
  t19188 = 1. + t19187;
  t19272 = -0.50321*t19188;
  t19278 = -0.19821*t2886;
  t19283 = t19272 + t19278;
  t19298 = t5192*t19283;
  t19324 = 0.305*t3215*t5209;
  t19326 = t19178 + t19298 + t19324;
  t19347 = -0.15121*t19151;
  t19348 = t18494*t19326;
  t19361 = t19347 + t19348;
  t19154 = 0.15121*t19151;
  t19164 = 0.15121*t18494;
  t19165 = 0.15121*t18840;
  t19330 = t18840*t19326;
  t19337 = t19154 + t19164 + t19165 + t19330;
  t19373 = t18546*t18840;
  t19385 = t18494*t18867;
  t19430 = t19373 + t19385;
  t19478 = 0.28121*t3215;
  t19489 = t19283*t3215;
  t19627 = -0.305*t5192*t5209;
  t19628 = t19478 + t19489 + t19627;
  t19655 = t18546*t19361;
  t19656 = -1.*t19337*t18867;
  t19657 = t19655 + t19656;
  t19342 = t18546*t19337;
  t19362 = t19361*t18867;
  t19363 = t19342 + t19362;
  t19111 = t5192*t2886;
  t19113 = t3215*t5209;
  t19114 = t19111 + t19113;
  t19116 = t19114*t5274;
  t19121 = t18494*t18546*t5264;
  t19123 = -1.*t18840*t5264*t18867;
  t19131 = t19121 + t19123;
  t19134 = t9301*t19131;
  t19135 = t19116 + t19134;
  t19631 = t19628*t5274;
  t19668 = t9301*t19657;
  t19671 = t19631 + t19668;
  t19677 = t9301*t19628;
  t19680 = -1.*t5274*t19657;
  t19681 = t19677 + t19680;
  t20379 = t18546*t18840*t5264;
  t20399 = t18494*t5264*t18867;
  t20406 = t20379 + t20399;
  t19137 = -1.*t18494*t18546;
  t19141 = t18840*t18867;
  t19148 = t19137 + t19141;
  t19368 = -1.*t19148*t19363;
  t20407 = t20406*t19363;
  t5336 = t5264*t5274;
  t18919 = t9301*t18894;
  t18924 = t5336 + t18919;
  t20410 = t9301*t19114;
  t20411 = -1.*t5274*t19131;
  t20412 = t20410 + t20411;
  t22876 = -1.*t20406*t19363;
  t24853 = t18930*t19363;
  t26095 = -1.*t19628*t19114;
  t26327 = t19628*t5264;
  t29168 = t19148*t19363;
  t29527 = -1.*t18930*t19363;
  p_output1[0]=t18924;
  p_output1[1]=t18925*t18930 - 1.*t18932*t19016;
  p_output1[2]=t18930*t18932 + t18925*t19016;
  p_output1[3]=t19430*(t19135*t19671 + t20407 + t19681*t20412)*t9301 + t19135*(t19368 + t19430*t19681*t5274 - 1.*t19430*t19671*t9301);
  p_output1[4]=(t19368 - 1.*t19430*t19657)*t20406 + t19148*(t19114*t19628 + t19131*t19657 + t20407);
  p_output1[5]=t19114*(t18494*t19337 - 1.*t18840*t19361);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t18727 + 0.15121*t19114;
  p_output1[10]=0.28121*t5209 + t19283*t5209 - 0.305*t2886*t5209;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t19430*t9301;
  p_output1[19]=t18925*t19148 + t18932*t19430*t5274;
  p_output1[20]=t18932*t19148 - 1.*t18925*t19430*t5274;
  p_output1[21]=t18924*(-1.*t19135*t19671 - 1.*t19681*t20412 + t22876) + t19135*(t18924*t19671 + t19016*t19681 + t24853);
  p_output1[22]=t18930*(-1.*t19131*t19657 + t22876 + t26095) + t20406*(t18894*t19657 + t24853 + t26327);
  p_output1[23]=t19114*(t18727*t18840*t19337 + t18494*t18727*t19361 + t26327) + t5264*(t26095 - 1.*t18840*t19337*t5264 - 1.*t18494*t19361*t5264);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t19114*(t18727*t19326 + t26327) + t5264*(t26095 - 1.*t19326*t5264);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t19135;
  p_output1[37]=t18925*t20406 - 1.*t18932*t20412;
  p_output1[38]=t18932*t20406 + t18925*t20412;
  p_output1[39]=t19430*(-1.*t18924*t19671 - 1.*t19016*t19681 + t29527)*t9301 + t18924*(t29168 - 1.*t19430*t19681*t5274 + t19430*t19671*t9301);
  p_output1[40]=t18930*(t19430*t19657 + t29168) + t19148*(-1.*t18894*t19657 + t29527 - 1.*t19628*t5264);
  p_output1[41]=(-1.*t18494*t19337 + t18840*t19361)*t5264;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2886 + t19283*t2886 + 0.305*Power(t5209,2);
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
