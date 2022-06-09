/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:37 GMT+02:00
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
  double t8232;
  double t5008;
  double t8235;
  double t8277;
  double t8266;
  double t8273;
  double t8281;
  double t3504;
  double t8275;
  double t8291;
  double t8293;
  double t8238;
  double t8304;
  double t8305;
  double t8307;
  double t8303;
  double t8390;
  double t8392;
  double t8308;
  double t8309;
  double t8311;
  double t8319;
  double t8320;
  double t8321;
  double t8371;
  double t8375;
  double t8381;
  double t8394;
  double t8395;
  double t8396;
  double t8401;
  double t8402;
  double t8403;
  double t8405;
  double t8406;
  double t8408;
  double t8416;
  double t8417;
  double t8418;
  double t8425;
  double t8426;
  double t8433;
  double t8299;
  double t8312;
  double t8313;
  double t8488;
  double t8489;
  double t8490;
  double t8492;
  double t8493;
  double t8494;
  double t8495;
  double t8496;
  double t8498;
  double t8182;
  double t8251;
  double t8255;
  double t8487;
  double t8491;
  double t8502;
  double t8503;
  double t8509;
  double t8510;
  double t8511;
  double t8514;
  double t8516;
  double t8517;
  double t8480;
  double t8481;
  double t8482;
  double t8483;
  double t8504;
  double t8506;
  double t8524;
  double t8525;
  double t8526;
  double t8528;
  double t8529;
  double t8530;
  double t8508;
  double t8518;
  double t8521;
  double t8527;
  double t8532;
  double t8533;
  double t8537;
  double t8538;
  double t8539;
  double t8317;
  double t8383;
  double t8385;
  double t8523;
  double t8543;
  double t8550;
  double t8555;
  double t8563;
  double t8568;
  double t8598;
  double t8605;
  double t8576;
  double t8581;
  double t8592;
  double t8588;
  double t8661;
  double t8655;
  t8232 = Cos(var1[9]);
  t5008 = Sin(var1[4]);
  t8235 = Cos(var1[4]);
  t8277 = Cos(var1[10]);
  t8266 = Cos(var1[11]);
  t8273 = Sin(var1[10]);
  t8281 = Sin(var1[11]);
  t3504 = Sin(var1[9]);
  t8275 = t8266*t8273;
  t8291 = -1.*t8277*t8281;
  t8293 = t8275 + t8291;
  t8238 = Sin(var1[5]);
  t8304 = t8277*t8266;
  t8305 = t8273*t8281;
  t8307 = t8304 + t8305;
  t8303 = Cos(var1[5]);
  t8390 = Cos(var1[3]);
  t8392 = Sin(var1[3]);
  t8308 = t8303*t8307;
  t8309 = t3504*t8293*t8238;
  t8311 = t8308 + t8309;
  t8319 = -1.*t8266*t8273;
  t8320 = t8277*t8281;
  t8321 = t8319 + t8320;
  t8371 = t8303*t8321;
  t8375 = t3504*t8307*t8238;
  t8381 = t8371 + t8375;
  t8394 = t8235*t3504;
  t8395 = t8232*t5008*t8238;
  t8396 = t8394 + t8395;
  t8401 = -1.*t8303*t3504*t8293;
  t8402 = t8307*t8238;
  t8403 = t8401 + t8402;
  t8405 = t8232*t8235*t8293;
  t8406 = -1.*t5008*t8311;
  t8408 = t8405 + t8406;
  t8416 = -1.*t8303*t3504*t8307;
  t8417 = t8321*t8238;
  t8418 = t8416 + t8417;
  t8425 = t8232*t8235*t8307;
  t8426 = -1.*t5008*t8381;
  t8433 = t8425 + t8426;
  t8299 = t8232*t8293*t5008;
  t8312 = t8235*t8311;
  t8313 = t8299 + t8312;
  t8488 = -0.0641*t8266;
  t8489 = -0.28*t8281;
  t8490 = t8488 + t8489;
  t8492 = -1.*t8266;
  t8493 = 1. + t8492;
  t8494 = -0.575*t8493;
  t8495 = -0.295*t8266;
  t8496 = -0.0641*t8281;
  t8498 = t8494 + t8495 + t8496;
  t8182 = t3504*t5008;
  t8251 = -1.*t8232*t8235*t8238;
  t8255 = t8182 + t8251;
  t8487 = 0.325*t8273;
  t8491 = t8277*t8490;
  t8502 = t8273*t8498;
  t8503 = t8487 + t8491 + t8502;
  t8509 = -1.*t8277;
  t8510 = 1. + t8509;
  t8511 = -0.325*t8510;
  t8514 = -1.*t8273*t8490;
  t8516 = t8277*t8498;
  t8517 = t8511 + t8514 + t8516;
  t8480 = -1.*t8232;
  t8481 = 1. + t8480;
  t8482 = 0.1575*t8481;
  t8483 = 0.2255*t8232;
  t8504 = -1.*t3504*t8503;
  t8506 = t8482 + t8483 + t8504;
  t8524 = 0.068*t3504;
  t8525 = t8232*t8503;
  t8526 = t8524 + t8525;
  t8528 = t8303*t8517;
  t8529 = -1.*t8506*t8238;
  t8530 = t8528 + t8529;
  t8508 = t8303*t8506;
  t8518 = t8517*t8238;
  t8521 = t8508 + t8518;
  t8527 = t8526*t5008;
  t8532 = t8235*t8530;
  t8533 = t8527 + t8532;
  t8537 = t8235*t8526;
  t8538 = -1.*t5008*t8530;
  t8539 = t8537 + t8538;
  t8317 = t8232*t8307*t5008;
  t8383 = t8235*t8381;
  t8385 = t8317 + t8383;
  t8523 = t8232*t8303*t8521;
  t8543 = -1.*t8521*t8403;
  t8550 = t8521*t8403;
  t8555 = -1.*t8521*t8418;
  t8563 = -1.*t8232*t8303*t8521;
  t8568 = t8521*t8418;
  t8598 = -1.*t3504*t8526;
  t8605 = t8232*t8526*t8307;
  t8576 = t3504*t8526;
  t8581 = -1.*t8232*t8526*t8293;
  t8592 = -1.*t8232*t8526*t8307;
  t8588 = t8232*t8526*t8293;
  t8661 = t8517*t8307;
  t8655 = -1.*t8517*t8321;
  p_output1[0]=t8313*var2[0] + t8255*var2[1] + t8385*var2[2];
  p_output1[1]=(t8390*t8403 - 1.*t8392*t8408)*var2[0] + (t8232*t8303*t8390 - 1.*t8392*t8396)*var2[1] + (t8390*t8418 - 1.*t8392*t8433)*var2[2];
  p_output1[2]=(t8392*t8403 + t8390*t8408)*var2[0] + (t8232*t8303*t8392 + t8390*t8396)*var2[1] + (t8392*t8418 + t8390*t8433)*var2[2];
  p_output1[3]=(t8385*(-1.*t8255*t8533 - 1.*t8396*t8539 + t8563) + t8255*(t8385*t8533 + t8433*t8539 + t8568))*var2[0] + (t8385*(t8313*t8533 + t8408*t8539 + t8550) + t8313*(-1.*t8385*t8533 - 1.*t8433*t8539 + t8555))*var2[1] + (t8313*(t8523 + t8255*t8533 + t8396*t8539) + t8255*(-1.*t8313*t8533 - 1.*t8408*t8539 + t8543))*var2[2];
  p_output1[4]=(t8418*(t8232*t8238*t8530 + t8563 + t8598) + t8232*t8303*(t8381*t8530 + t8568 + t8605))*var2[0] + (t8418*(t8311*t8530 + t8550 + t8588) + t8403*(-1.*t8381*t8530 + t8555 + t8592))*var2[1] + (t8403*(t8523 - 1.*t8232*t8238*t8530 + t8576) + t8232*t8303*(-1.*t8311*t8530 + t8543 + t8581))*var2[2];
  p_output1[5]=(t8232*t8307*(-1.*t8232*t8506 + t8598) + t3504*(-1.*t3504*t8307*t8506 + t8321*t8517 + t8605))*var2[0] + (t8232*t8293*(t3504*t8307*t8506 + t8592 + t8655) + t8232*t8307*(-1.*t3504*t8293*t8506 + t8588 + t8661))*var2[1] + (t8232*t8293*(t8232*t8506 + t8576) + t3504*(t3504*t8293*t8506 - 1.*t8307*t8517 + t8581))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t8293 - 0.2255*t8321)*var2[0] + (t8307*(-1.*t8307*t8503 + t8655) + t8321*(t8293*t8503 + t8661))*var2[1] + 0.068*t8307*var2[2];
  p_output1[10]=(-0.325*t8281 - 1.*t8266*t8490 - 1.*t8281*t8498)*var2[0] + (0.325*t8266 - 1.*t8281*t8490 + t8266*t8498)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
