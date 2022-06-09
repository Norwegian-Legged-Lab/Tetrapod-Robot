/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:24 GMT+02:00
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
  double t5317;
  double t4783;
  double t4808;
  double t5354;
  double t5393;
  double t5402;
  double t5406;
  double t5392;
  double t5415;
  double t5390;
  double t8425;
  double t5386;
  double t4809;
  double t5360;
  double t5383;
  double t5384;
  double t5407;
  double t8429;
  double t8436;
  double t8998;
  double t8961;
  double t8969;
  double t8972;
  double t8937;
  double t8999;
  double t9014;
  double t9031;
  double t9225;
  double t9259;
  double t9278;
  double t9448;
  double t9474;
  double t9667;
  double t9858;
  double t9880;
  double t9949;
  double t9955;
  double t9956;
  double t9974;
  double t9978;
  double t9984;
  double t9994;
  double t10035;
  double t10091;
  double t10096;
  double t10100;
  double t9485;
  double t9630;
  double t9631;
  double t10077;
  double t10082;
  double t10120;
  double t10139;
  double t10156;
  double t10166;
  double t10168;
  double t10183;
  double t10188;
  double t10223;
  double t10248;
  double t10332;
  double t10088;
  double t10110;
  double t10113;
  double t9212;
  double t9279;
  double t9294;
  double t9295;
  double t9297;
  double t9301;
  double t10200;
  double t10334;
  double t10337;
  double t10342;
  double t10345;
  double t10366;
  double t10371;
  double t10372;
  double t10373;
  double t9317;
  double t9322;
  double t9327;
  double t10117;
  double t10375;
  double t5385;
  double t8687;
  double t8704;
  double t10380;
  double t10383;
  double t10384;
  double t10490;
  double t10496;
  double t10514;
  double t10537;
  double t10665;
  double t10686;
  t5317 = Cos(var1[13]);
  t4783 = Cos(var1[14]);
  t4808 = Sin(var1[13]);
  t5354 = Sin(var1[14]);
  t5393 = t5317*t4783;
  t5402 = t4808*t5354;
  t5406 = t5393 + t5402;
  t5392 = Cos(var1[5]);
  t5415 = Sin(var1[12]);
  t5390 = Cos(var1[12]);
  t8425 = Sin(var1[5]);
  t5386 = Cos(var1[4]);
  t4809 = -1.*t4783*t4808;
  t5360 = t5317*t5354;
  t5383 = t4809 + t5360;
  t5384 = Sin(var1[4]);
  t5407 = t5390*t5392*t5406;
  t8429 = -1.*t5415*t5406*t8425;
  t8436 = t5407 + t8429;
  t8998 = Sin(var1[3]);
  t8961 = t5392*t5415*t5406;
  t8969 = t5390*t5406*t8425;
  t8972 = t8961 + t8969;
  t8937 = Cos(var1[3]);
  t8999 = t5386*t5383;
  t9014 = -1.*t5384*t8436;
  t9031 = t8999 + t9014;
  t9225 = t4783*t4808;
  t9259 = -1.*t5317*t5354;
  t9278 = t9225 + t9259;
  t9448 = -1.*t5390;
  t9474 = 1. + t9448;
  t9667 = -1.*t5317;
  t9858 = 1. + t9667;
  t9880 = 0.28121*t9858;
  t9949 = -1.*t4783;
  t9955 = 1. + t9949;
  t9956 = 0.50321*t9955;
  t9974 = 0.19821*t4783;
  t9978 = t9956 + t9974;
  t9984 = t5317*t9978;
  t9994 = -0.305*t4808*t5354;
  t10035 = t9880 + t9984 + t9994;
  t10091 = 0.15121*t9474;
  t10096 = t5390*t10035;
  t10100 = t10091 + t10096;
  t9485 = -0.15121*t9474;
  t9630 = -0.15121*t5390;
  t9631 = -0.15121*t5415;
  t10077 = t5415*t10035;
  t10082 = t9485 + t9630 + t9631 + t10077;
  t10120 = -1.*t5392*t5415;
  t10139 = -1.*t5390*t8425;
  t10156 = t10120 + t10139;
  t10166 = 0.28121*t4808;
  t10168 = -1.*t9978*t4808;
  t10183 = -0.305*t5317*t5354;
  t10188 = t10166 + t10168 + t10183;
  t10223 = t5392*t10100;
  t10248 = -1.*t10082*t8425;
  t10332 = t10223 + t10248;
  t10088 = t5392*t10082;
  t10110 = t10100*t8425;
  t10113 = t10088 + t10110;
  t9212 = t5406*t5384;
  t9279 = t5390*t5392*t9278;
  t9294 = -1.*t5415*t9278*t8425;
  t9295 = t9279 + t9294;
  t9297 = t5386*t9295;
  t9301 = t9212 + t9297;
  t10200 = t10188*t5384;
  t10334 = t5386*t10332;
  t10337 = t10200 + t10334;
  t10342 = t5386*t10188;
  t10345 = -1.*t5384*t10332;
  t10366 = t10342 + t10345;
  t10371 = t5392*t5415*t9278;
  t10372 = t5390*t9278*t8425;
  t10373 = t10371 + t10372;
  t9317 = t5390*t5392;
  t9322 = -1.*t5415*t8425;
  t9327 = t9317 + t9322;
  t10117 = -1.*t9327*t10113;
  t10375 = t10373*t10113;
  t5385 = t5383*t5384;
  t8687 = t5386*t8436;
  t8704 = t5385 + t8687;
  t10380 = t5386*t5406;
  t10383 = -1.*t5384*t9295;
  t10384 = t10380 + t10383;
  t10490 = -1.*t10373*t10113;
  t10496 = t8972*t10113;
  t10514 = -1.*t10188*t5406;
  t10537 = t10188*t5383;
  t10665 = t9327*t10113;
  t10686 = -1.*t8972*t10113;
  p_output1[0]=t8704;
  p_output1[1]=t8937*t8972 - 1.*t8998*t9031;
  p_output1[2]=t8972*t8998 + t8937*t9031;
  p_output1[3]=(t10117 + t10156*t10366*t5384 - 1.*t10156*t10337*t5386)*t9301 + t10156*t5386*(t10375 + t10366*t10384 + t10337*t9301);
  p_output1[4]=(t10117 - 1.*t10156*t10332)*t10373 + (t10375 + t10188*t5406 + t10332*t9295)*t9327;
  p_output1[5]=t5406*(-1.*t10082*t5390 + t10100*t5415);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t5354 - 0.305*t4783*t5354 - 1.*t5354*t9978;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10156*t5386;
  p_output1[19]=t10156*t5384*t8998 + t8937*t9327;
  p_output1[20]=-1.*t10156*t5384*t8937 + t8998*t9327;
  p_output1[21]=(t10496 + t10337*t8704 + t10366*t9031)*t9301 + t8704*(-1.*t10366*t10384 + t10490 - 1.*t10337*t9301);
  p_output1[22]=t10373*(t10496 + t10537 + t10332*t8436) + t8972*(t10490 + t10514 - 1.*t10332*t9295);
  p_output1[23]=t5406*(t10537 + t10100*t5390*t5406 + t10082*t5406*t5415) + t5383*(t10514 - 1.*t10100*t5390*t9278 - 1.*t10082*t5415*t9278);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t5406*(t10537 + t10035*t5406) + t5383*(t10514 - 1.*t10035*t9278);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9301;
  p_output1[37]=t10373*t8937 - 1.*t10384*t8998;
  p_output1[38]=t10384*t8937 + t10373*t8998;
  p_output1[39]=(t10665 - 1.*t10156*t10366*t5384 + t10156*t10337*t5386)*t8704 + t10156*t5386*(t10686 - 1.*t10337*t8704 - 1.*t10366*t9031);
  p_output1[40]=(t10156*t10332 + t10665)*t8972 + (t10686 - 1.*t10188*t5383 - 1.*t10332*t8436)*t9327;
  p_output1[41]=t5383*(t10082*t5390 - 1.*t10100*t5415);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t5383 - 0.15121*t9278;
  p_output1[49]=0.28121*t4783 + 0.305*Power(t5354,2) - 1.*t4783*t9978;
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
