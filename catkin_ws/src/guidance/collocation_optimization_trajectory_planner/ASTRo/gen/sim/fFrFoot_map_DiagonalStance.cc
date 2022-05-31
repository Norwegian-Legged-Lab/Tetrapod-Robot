/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:43 GMT+02:00
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
  double t54419;
  double t54366;
  double t54411;
  double t54420;
  double t54569;
  double t54578;
  double t54680;
  double t54538;
  double t54726;
  double t54530;
  double t54767;
  double t54504;
  double t54413;
  double t54421;
  double t54425;
  double t54432;
  double t54682;
  double t54777;
  double t54778;
  double t54827;
  double t54795;
  double t54796;
  double t54816;
  double t54784;
  double t54835;
  double t54842;
  double t54843;
  double t54917;
  double t54918;
  double t54929;
  double t54998;
  double t54999;
  double t55011;
  double t55014;
  double t55015;
  double t55017;
  double t55018;
  double t55026;
  double t55031;
  double t55039;
  double t55040;
  double t55047;
  double t55051;
  double t55064;
  double t55065;
  double t55067;
  double t55005;
  double t55007;
  double t55010;
  double t55055;
  double t55062;
  double t55081;
  double t55083;
  double t55084;
  double t55085;
  double t55086;
  double t55087;
  double t55092;
  double t55105;
  double t55110;
  double t55121;
  double t55063;
  double t55072;
  double t55078;
  double t54916;
  double t54930;
  double t54937;
  double t54940;
  double t54957;
  double t54984;
  double t55100;
  double t55122;
  double t55127;
  double t55139;
  double t55142;
  double t55143;
  double t55151;
  double t55152;
  double t55153;
  double t54988;
  double t54990;
  double t54991;
  double t55080;
  double t55157;
  double t54439;
  double t54781;
  double t54782;
  double t55160;
  double t55167;
  double t55195;
  double t55287;
  double t55294;
  double t55300;
  double t55305;
  double t55379;
  double t55384;
  t54419 = Cos(var1[13]);
  t54366 = Cos(var1[14]);
  t54411 = Sin(var1[13]);
  t54420 = Sin(var1[14]);
  t54569 = t54419*t54366;
  t54578 = t54411*t54420;
  t54680 = t54569 + t54578;
  t54538 = Cos(var1[5]);
  t54726 = Sin(var1[12]);
  t54530 = Cos(var1[12]);
  t54767 = Sin(var1[5]);
  t54504 = Cos(var1[4]);
  t54413 = -1.*t54366*t54411;
  t54421 = t54419*t54420;
  t54425 = t54413 + t54421;
  t54432 = Sin(var1[4]);
  t54682 = t54530*t54538*t54680;
  t54777 = -1.*t54726*t54680*t54767;
  t54778 = t54682 + t54777;
  t54827 = Sin(var1[3]);
  t54795 = t54538*t54726*t54680;
  t54796 = t54530*t54680*t54767;
  t54816 = t54795 + t54796;
  t54784 = Cos(var1[3]);
  t54835 = t54504*t54425;
  t54842 = -1.*t54432*t54778;
  t54843 = t54835 + t54842;
  t54917 = t54366*t54411;
  t54918 = -1.*t54419*t54420;
  t54929 = t54917 + t54918;
  t54998 = -1.*t54530;
  t54999 = 1. + t54998;
  t55011 = -1.*t54419;
  t55014 = 1. + t55011;
  t55015 = 0.28121*t55014;
  t55017 = -1.*t54366;
  t55018 = 1. + t55017;
  t55026 = 0.50321*t55018;
  t55031 = 0.19821*t54366;
  t55039 = t55026 + t55031;
  t55040 = t54419*t55039;
  t55047 = -0.305*t54411*t54420;
  t55051 = t55015 + t55040 + t55047;
  t55064 = 0.15121*t54999;
  t55065 = t54530*t55051;
  t55067 = t55064 + t55065;
  t55005 = -0.15121*t54999;
  t55007 = -0.15121*t54530;
  t55010 = -0.15121*t54726;
  t55055 = t54726*t55051;
  t55062 = t55005 + t55007 + t55010 + t55055;
  t55081 = -1.*t54538*t54726;
  t55083 = -1.*t54530*t54767;
  t55084 = t55081 + t55083;
  t55085 = 0.28121*t54411;
  t55086 = -1.*t55039*t54411;
  t55087 = -0.305*t54419*t54420;
  t55092 = t55085 + t55086 + t55087;
  t55105 = t54538*t55067;
  t55110 = -1.*t55062*t54767;
  t55121 = t55105 + t55110;
  t55063 = t54538*t55062;
  t55072 = t55067*t54767;
  t55078 = t55063 + t55072;
  t54916 = t54680*t54432;
  t54930 = t54530*t54538*t54929;
  t54937 = -1.*t54726*t54929*t54767;
  t54940 = t54930 + t54937;
  t54957 = t54504*t54940;
  t54984 = t54916 + t54957;
  t55100 = t55092*t54432;
  t55122 = t54504*t55121;
  t55127 = t55100 + t55122;
  t55139 = t54504*t55092;
  t55142 = -1.*t54432*t55121;
  t55143 = t55139 + t55142;
  t55151 = t54538*t54726*t54929;
  t55152 = t54530*t54929*t54767;
  t55153 = t55151 + t55152;
  t54988 = t54530*t54538;
  t54990 = -1.*t54726*t54767;
  t54991 = t54988 + t54990;
  t55080 = -1.*t54991*t55078;
  t55157 = t55153*t55078;
  t54439 = t54425*t54432;
  t54781 = t54504*t54778;
  t54782 = t54439 + t54781;
  t55160 = t54504*t54680;
  t55167 = -1.*t54432*t54940;
  t55195 = t55160 + t55167;
  t55287 = -1.*t55153*t55078;
  t55294 = t54816*t55078;
  t55300 = -1.*t55092*t54680;
  t55305 = t55092*t54425;
  t55379 = t54991*t55078;
  t55384 = -1.*t54816*t55078;
  p_output1[0]=t54782;
  p_output1[1]=t54784*t54816 - 1.*t54827*t54843;
  p_output1[2]=t54816*t54827 + t54784*t54843;
  p_output1[3]=t54984*(t55080 - 1.*t54504*t55084*t55127 + t54432*t55084*t55143) + t54504*t55084*(t54984*t55127 + t55157 + t55143*t55195);
  p_output1[4]=(t55080 - 1.*t55084*t55121)*t55153 + t54991*(t54680*t55092 + t54940*t55121 + t55157);
  p_output1[5]=t54680*(-1.*t54530*t55062 + t54726*t55067);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t54420 - 0.305*t54366*t54420 - 1.*t54420*t55039;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t54504*t55084;
  p_output1[19]=t54784*t54991 + t54432*t54827*t55084;
  p_output1[20]=t54827*t54991 - 1.*t54432*t54784*t55084;
  p_output1[21]=t54782*(-1.*t54984*t55127 - 1.*t55143*t55195 + t55287) + t54984*(t54782*t55127 + t54843*t55143 + t55294);
  p_output1[22]=t54816*(-1.*t54940*t55121 + t55287 + t55300) + t55153*(t54778*t55121 + t55294 + t55305);
  p_output1[23]=t54425*(-1.*t54726*t54929*t55062 - 1.*t54530*t54929*t55067 + t55300) + t54680*(t54680*t54726*t55062 + t54530*t54680*t55067 + t55305);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t54425*(-1.*t54929*t55051 + t55300) + t54680*(t54680*t55051 + t55305);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t54984;
  p_output1[37]=t54784*t55153 - 1.*t54827*t55195;
  p_output1[38]=t54827*t55153 + t54784*t55195;
  p_output1[39]=t54782*(t54504*t55084*t55127 - 1.*t54432*t55084*t55143 + t55379) + t54504*t55084*(-1.*t54782*t55127 - 1.*t54843*t55143 + t55384);
  p_output1[40]=t54816*(t55084*t55121 + t55379) + t54991*(-1.*t54425*t55092 - 1.*t54778*t55121 + t55384);
  p_output1[41]=t54425*(t54530*t55062 - 1.*t54726*t55067);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t54425 - 0.15121*t54929;
  p_output1[49]=0.28121*t54366 + 0.305*Power(t54420,2) - 1.*t54366*t55039;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
