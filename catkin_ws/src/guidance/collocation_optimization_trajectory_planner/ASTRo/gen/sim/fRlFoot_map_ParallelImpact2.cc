/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:24 GMT+02:00
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
  double t3932;
  double t3330;
  double t3926;
  double t5080;
  double t16180;
  double t16378;
  double t16417;
  double t14836;
  double t16491;
  double t14818;
  double t16660;
  double t14719;
  double t3930;
  double t5095;
  double t9507;
  double t14349;
  double t16480;
  double t16662;
  double t16665;
  double t16972;
  double t16706;
  double t16709;
  double t16715;
  double t16701;
  double t16978;
  double t17439;
  double t17446;
  double t17751;
  double t17754;
  double t17761;
  double t17766;
  double t17767;
  double t17771;
  double t17772;
  double t17781;
  double t17783;
  double t17785;
  double t17786;
  double t17790;
  double t17791;
  double t17813;
  double t17840;
  double t17861;
  double t17757;
  double t17758;
  double t17759;
  double t17798;
  double t17809;
  double t17879;
  double t17907;
  double t17908;
  double t17909;
  double t17961;
  double t17962;
  double t17965;
  double t17972;
  double t17977;
  double t17983;
  double t17810;
  double t17862;
  double t17871;
  double t17574;
  double t17588;
  double t17589;
  double t17594;
  double t17635;
  double t17649;
  double t17655;
  double t17695;
  double t17745;
  double t17971;
  double t17984;
  double t17991;
  double t17995;
  double t17996;
  double t18001;
  double t18094;
  double t20863;
  double t20948;
  double t17747;
  double t17749;
  double t17750;
  double t17877;
  double t20958;
  double t14699;
  double t16669;
  double t16690;
  double t20961;
  double t20966;
  double t20967;
  double t21058;
  double t21065;
  double t21073;
  double t21078;
  double t21108;
  double t21114;
  t3932 = Cos(var1[10]);
  t3330 = Cos(var1[11]);
  t3926 = Sin(var1[10]);
  t5080 = Sin(var1[11]);
  t16180 = -1.*t3932*t3330;
  t16378 = -1.*t3926*t5080;
  t16417 = t16180 + t16378;
  t14836 = Cos(var1[5]);
  t16491 = Sin(var1[9]);
  t14818 = Cos(var1[9]);
  t16660 = Sin(var1[5]);
  t14719 = Cos(var1[4]);
  t3930 = -1.*t3330*t3926;
  t5095 = t3932*t5080;
  t9507 = t3930 + t5095;
  t14349 = Sin(var1[4]);
  t16480 = t14818*t14836*t16417;
  t16662 = -1.*t16491*t16417*t16660;
  t16665 = t16480 + t16662;
  t16972 = Sin(var1[3]);
  t16706 = t14836*t16491*t16417;
  t16709 = t14818*t16417*t16660;
  t16715 = t16706 + t16709;
  t16701 = Cos(var1[3]);
  t16978 = t14719*t9507;
  t17439 = -1.*t14349*t16665;
  t17446 = t16978 + t17439;
  t17751 = -1.*t14818;
  t17754 = 1. + t17751;
  t17761 = -1.*t3932;
  t17766 = 1. + t17761;
  t17767 = -0.28121*t17766;
  t17771 = -1.*t3330;
  t17772 = 1. + t17771;
  t17781 = -0.50321*t17772;
  t17783 = -0.19821*t3330;
  t17785 = t17781 + t17783;
  t17786 = t3932*t17785;
  t17790 = 0.305*t3926*t5080;
  t17791 = t17767 + t17786 + t17790;
  t17813 = -0.15121*t17754;
  t17840 = t14818*t17791;
  t17861 = t17813 + t17840;
  t17757 = 0.15121*t17754;
  t17758 = 0.15121*t14818;
  t17759 = 0.15121*t16491;
  t17798 = t16491*t17791;
  t17809 = t17757 + t17758 + t17759 + t17798;
  t17879 = t14836*t16491;
  t17907 = t14818*t16660;
  t17908 = t17879 + t17907;
  t17909 = 0.28121*t3926;
  t17961 = t17785*t3926;
  t17962 = -0.305*t3932*t5080;
  t17965 = t17909 + t17961 + t17962;
  t17972 = t14836*t17861;
  t17977 = -1.*t17809*t16660;
  t17983 = t17972 + t17977;
  t17810 = t14836*t17809;
  t17862 = t17861*t16660;
  t17871 = t17810 + t17862;
  t17574 = t3932*t3330;
  t17588 = t3926*t5080;
  t17589 = t17574 + t17588;
  t17594 = t17589*t14349;
  t17635 = t14818*t14836*t9507;
  t17649 = -1.*t16491*t9507*t16660;
  t17655 = t17635 + t17649;
  t17695 = t14719*t17655;
  t17745 = t17594 + t17695;
  t17971 = t17965*t14349;
  t17984 = t14719*t17983;
  t17991 = t17971 + t17984;
  t17995 = t14719*t17965;
  t17996 = -1.*t14349*t17983;
  t18001 = t17995 + t17996;
  t18094 = t14836*t16491*t9507;
  t20863 = t14818*t9507*t16660;
  t20948 = t18094 + t20863;
  t17747 = -1.*t14818*t14836;
  t17749 = t16491*t16660;
  t17750 = t17747 + t17749;
  t17877 = -1.*t17750*t17871;
  t20958 = t20948*t17871;
  t14699 = t9507*t14349;
  t16669 = t14719*t16665;
  t16690 = t14699 + t16669;
  t20961 = t14719*t17589;
  t20966 = -1.*t14349*t17655;
  t20967 = t20961 + t20966;
  t21058 = -1.*t20948*t17871;
  t21065 = t16715*t17871;
  t21073 = -1.*t17965*t17589;
  t21078 = t17965*t9507;
  t21108 = t17750*t17871;
  t21114 = -1.*t16715*t17871;
  p_output1[0]=t16690;
  p_output1[1]=t16701*t16715 - 1.*t16972*t17446;
  p_output1[2]=t16715*t16972 + t16701*t17446;
  p_output1[3]=t17745*(t17877 - 1.*t14719*t17908*t17991 + t14349*t17908*t18001) + t14719*t17908*(t17745*t17991 + t20958 + t18001*t20967);
  p_output1[4]=(t17877 - 1.*t17908*t17983)*t20948 + t17750*(t17589*t17965 + t17655*t17983 + t20958);
  p_output1[5]=t17589*(t14818*t17809 - 1.*t16491*t17861);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t16417 + 0.15121*t17589;
  p_output1[10]=0.28121*t5080 + t17785*t5080 - 0.305*t3330*t5080;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t14719*t17908;
  p_output1[19]=t16701*t17750 + t14349*t16972*t17908;
  p_output1[20]=t16972*t17750 - 1.*t14349*t16701*t17908;
  p_output1[21]=t16690*(-1.*t17745*t17991 - 1.*t18001*t20967 + t21058) + t17745*(t16690*t17991 + t17446*t18001 + t21065);
  p_output1[22]=t16715*(-1.*t17655*t17983 + t21058 + t21073) + t20948*(t16665*t17983 + t21065 + t21078);
  p_output1[23]=t17589*(t16417*t16491*t17809 + t14818*t16417*t17861 + t21078) + t9507*(t21073 - 1.*t16491*t17809*t9507 - 1.*t14818*t17861*t9507);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t17589*(t16417*t17791 + t21078) + t9507*(t21073 - 1.*t17791*t9507);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17745;
  p_output1[37]=t16701*t20948 - 1.*t16972*t20967;
  p_output1[38]=t16972*t20948 + t16701*t20967;
  p_output1[39]=t16690*(t14719*t17908*t17991 - 1.*t14349*t17908*t18001 + t21108) + t14719*t17908*(-1.*t16690*t17991 - 1.*t17446*t18001 + t21114);
  p_output1[40]=t16715*(t17908*t17983 + t21108) + t17750*(-1.*t16665*t17983 + t21114 - 1.*t17965*t9507);
  p_output1[41]=(-1.*t14818*t17809 + t16491*t17861)*t9507;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t3330 + t17785*t3330 + 0.305*Power(t5080,2);
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

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
