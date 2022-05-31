/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:37 GMT+02:00
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
  double t17558;
  double t15767;
  double t17206;
  double t17562;
  double t17609;
  double t17614;
  double t17630;
  double t17608;
  double t17648;
  double t17598;
  double t17669;
  double t17592;
  double t17302;
  double t17566;
  double t17582;
  double t17583;
  double t17642;
  double t17677;
  double t17679;
  double t17728;
  double t17724;
  double t17725;
  double t17726;
  double t17723;
  double t17729;
  double t17731;
  double t17733;
  double t27756;
  double t27763;
  double t27787;
  double t28527;
  double t29370;
  double t29438;
  double t29541;
  double t29629;
  double t29630;
  double t29830;
  double t29865;
  double t29872;
  double t30106;
  double t30135;
  double t30137;
  double t30145;
  double t30186;
  double t30187;
  double t30193;
  double t29371;
  double t29431;
  double t29437;
  double t30147;
  double t30148;
  double t30230;
  double t30235;
  double t30241;
  double t30293;
  double t30321;
  double t30328;
  double t30369;
  double t30390;
  double t30435;
  double t30484;
  double t30183;
  double t30208;
  double t30213;
  double t27652;
  double t27805;
  double t27969;
  double t27975;
  double t28260;
  double t28384;
  double t30386;
  double t30497;
  double t30690;
  double t30746;
  double t30768;
  double t30797;
  double t30837;
  double t30870;
  double t30880;
  double t28473;
  double t28487;
  double t28491;
  double t30217;
  double t30892;
  double t17584;
  double t17721;
  double t17722;
  double t30914;
  double t30929;
  double t31075;
  double t32187;
  double t32246;
  double t32314;
  double t32349;
  double t33060;
  double t33329;
  t17558 = Cos(var1[13]);
  t15767 = Cos(var1[14]);
  t17206 = Sin(var1[13]);
  t17562 = Sin(var1[14]);
  t17609 = t17558*t15767;
  t17614 = t17206*t17562;
  t17630 = t17609 + t17614;
  t17608 = Cos(var1[5]);
  t17648 = Sin(var1[12]);
  t17598 = Cos(var1[12]);
  t17669 = Sin(var1[5]);
  t17592 = Cos(var1[4]);
  t17302 = -1.*t15767*t17206;
  t17566 = t17558*t17562;
  t17582 = t17302 + t17566;
  t17583 = Sin(var1[4]);
  t17642 = t17598*t17608*t17630;
  t17677 = -1.*t17648*t17630*t17669;
  t17679 = t17642 + t17677;
  t17728 = Sin(var1[3]);
  t17724 = t17608*t17648*t17630;
  t17725 = t17598*t17630*t17669;
  t17726 = t17724 + t17725;
  t17723 = Cos(var1[3]);
  t17729 = t17592*t17582;
  t17731 = -1.*t17583*t17679;
  t17733 = t17729 + t17731;
  t27756 = t15767*t17206;
  t27763 = -1.*t17558*t17562;
  t27787 = t27756 + t27763;
  t28527 = -1.*t17598;
  t29370 = 1. + t28527;
  t29438 = -1.*t17558;
  t29541 = 1. + t29438;
  t29629 = 0.28121*t29541;
  t29630 = -1.*t15767;
  t29830 = 1. + t29630;
  t29865 = 0.50321*t29830;
  t29872 = 0.19821*t15767;
  t30106 = t29865 + t29872;
  t30135 = t17558*t30106;
  t30137 = -0.305*t17206*t17562;
  t30145 = t29629 + t30135 + t30137;
  t30186 = 0.15121*t29370;
  t30187 = t17598*t30145;
  t30193 = t30186 + t30187;
  t29371 = -0.15121*t29370;
  t29431 = -0.15121*t17598;
  t29437 = -0.15121*t17648;
  t30147 = t17648*t30145;
  t30148 = t29371 + t29431 + t29437 + t30147;
  t30230 = -1.*t17608*t17648;
  t30235 = -1.*t17598*t17669;
  t30241 = t30230 + t30235;
  t30293 = 0.28121*t17206;
  t30321 = -1.*t30106*t17206;
  t30328 = -0.305*t17558*t17562;
  t30369 = t30293 + t30321 + t30328;
  t30390 = t17608*t30193;
  t30435 = -1.*t30148*t17669;
  t30484 = t30390 + t30435;
  t30183 = t17608*t30148;
  t30208 = t30193*t17669;
  t30213 = t30183 + t30208;
  t27652 = t17630*t17583;
  t27805 = t17598*t17608*t27787;
  t27969 = -1.*t17648*t27787*t17669;
  t27975 = t27805 + t27969;
  t28260 = t17592*t27975;
  t28384 = t27652 + t28260;
  t30386 = t30369*t17583;
  t30497 = t17592*t30484;
  t30690 = t30386 + t30497;
  t30746 = t17592*t30369;
  t30768 = -1.*t17583*t30484;
  t30797 = t30746 + t30768;
  t30837 = t17608*t17648*t27787;
  t30870 = t17598*t27787*t17669;
  t30880 = t30837 + t30870;
  t28473 = t17598*t17608;
  t28487 = -1.*t17648*t17669;
  t28491 = t28473 + t28487;
  t30217 = -1.*t28491*t30213;
  t30892 = t30880*t30213;
  t17584 = t17582*t17583;
  t17721 = t17592*t17679;
  t17722 = t17584 + t17721;
  t30914 = t17592*t17630;
  t30929 = -1.*t17583*t27975;
  t31075 = t30914 + t30929;
  t32187 = -1.*t30880*t30213;
  t32246 = t17726*t30213;
  t32314 = -1.*t30369*t17630;
  t32349 = t30369*t17582;
  t33060 = t28491*t30213;
  t33329 = -1.*t17726*t30213;
  p_output1[0]=t17722;
  p_output1[1]=t17723*t17726 - 1.*t17728*t17733;
  p_output1[2]=t17726*t17728 + t17723*t17733;
  p_output1[3]=t28384*(t30217 - 1.*t17592*t30241*t30690 + t17583*t30241*t30797) + t17592*t30241*(t28384*t30690 + t30892 + t30797*t31075);
  p_output1[4]=(t30217 - 1.*t30241*t30484)*t30880 + t28491*(t17630*t30369 + t27975*t30484 + t30892);
  p_output1[5]=t17630*(-1.*t17598*t30148 + t17648*t30193);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t17562 - 0.305*t15767*t17562 - 1.*t17562*t30106;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t17592*t30241;
  p_output1[19]=t17723*t28491 + t17583*t17728*t30241;
  p_output1[20]=t17728*t28491 - 1.*t17583*t17723*t30241;
  p_output1[21]=t17722*(-1.*t28384*t30690 - 1.*t30797*t31075 + t32187) + t28384*(t17722*t30690 + t17733*t30797 + t32246);
  p_output1[22]=t17726*(-1.*t27975*t30484 + t32187 + t32314) + t30880*(t17679*t30484 + t32246 + t32349);
  p_output1[23]=t17582*(-1.*t17648*t27787*t30148 - 1.*t17598*t27787*t30193 + t32314) + t17630*(t17630*t17648*t30148 + t17598*t17630*t30193 + t32349);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t17582*(-1.*t27787*t30145 + t32314) + t17630*(t17630*t30145 + t32349);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t28384;
  p_output1[37]=t17723*t30880 - 1.*t17728*t31075;
  p_output1[38]=t17728*t30880 + t17723*t31075;
  p_output1[39]=t17722*(t17592*t30241*t30690 - 1.*t17583*t30241*t30797 + t33060) + t17592*t30241*(-1.*t17722*t30690 - 1.*t17733*t30797 + t33329);
  p_output1[40]=t17726*(t30241*t30484 + t33060) + t28491*(-1.*t17582*t30369 - 1.*t17679*t30484 + t33329);
  p_output1[41]=t17582*(t17598*t30148 - 1.*t17648*t30193);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t17582 - 0.15121*t27787;
  p_output1[49]=0.28121*t15767 + 0.305*Power(t17562,2) - 1.*t15767*t30106;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
