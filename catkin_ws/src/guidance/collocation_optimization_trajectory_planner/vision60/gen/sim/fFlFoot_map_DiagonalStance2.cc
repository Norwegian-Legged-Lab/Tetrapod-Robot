/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:16 GMT+02:00
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
  double t1684;
  double t1723;
  double t1730;
  double t1731;
  double t2467;
  double t2476;
  double t2481;
  double t3611;
  double t3415;
  double t3100;
  double t4504;
  double t4512;
  double t4526;
  double t2487;
  double t1419;
  double t1446;
  double t3563;
  double t4532;
  double t4533;
  double t5028;
  double t4947;
  double t4951;
  double t4952;
  double t4940;
  double t5041;
  double t5455;
  double t5466;
  double t8391;
  double t8411;
  double t8412;
  double t8420;
  double t8421;
  double t8423;
  double t8430;
  double t8431;
  double t8432;
  double t8390;
  double t8418;
  double t8435;
  double t8436;
  double t8363;
  double t8383;
  double t8387;
  double t8389;
  double t8437;
  double t8439;
  double t8444;
  double t8449;
  double t9094;
  double t9674;
  double t10266;
  double t10269;
  double t10551;
  double t10885;
  double t10886;
  double t12083;
  double t13159;
  double t14765;
  double t14803;
  double t14831;
  double t14835;
  double t20683;
  double t20841;
  double t20842;
  double t20876;
  double t20877;
  double t20908;
  double t20639;
  double t20647;
  double t20660;
  double t20854;
  double t20915;
  double t21131;
  double t21135;
  double t21137;
  double t21139;
  double t11735;
  double t14772;
  double t14786;
  double t20845;
  double t21141;
  double t21142;
  double t21144;
  double t21147;
  double t21166;
  double t21170;
  double t8205;
  double t8207;
  double t8362;
  double t2486;
  double t4647;
  double t4938;
  double t21151;
  double t21152;
  double t21153;
  double t23578;
  double t23658;
  double t23699;
  double t23695;
  double t23718;
  double t23708;
  double t23755;
  double t23758;
  double t23769;
  double t23780;
  t1684 = Cos(var1[8]);
  t1723 = Sin(var1[7]);
  t1730 = t1684*t1723;
  t1731 = Cos(var1[7]);
  t2467 = Sin(var1[8]);
  t2476 = -1.*t1731*t2467;
  t2481 = t1730 + t2476;
  t3611 = Cos(var1[5]);
  t3415 = Sin(var1[6]);
  t3100 = Sin(var1[5]);
  t4504 = t1731*t1684;
  t4512 = t1723*t2467;
  t4526 = t4504 + t4512;
  t2487 = Cos(var1[4]);
  t1419 = Cos(var1[6]);
  t1446 = Sin(var1[4]);
  t3563 = t3100*t3415*t2481;
  t4532 = t3611*t4526;
  t4533 = t3563 + t4532;
  t5028 = Sin(var1[3]);
  t4947 = -1.*t3611*t3415*t2481;
  t4951 = t3100*t4526;
  t4952 = t4947 + t4951;
  t4940 = Cos(var1[3]);
  t5041 = t2487*t1419*t2481;
  t5455 = -1.*t1446*t4533;
  t5466 = t5041 + t5455;
  t8391 = -0.0641*t1684;
  t8411 = -0.28*t2467;
  t8412 = t8391 + t8411;
  t8420 = -1.*t1684;
  t8421 = 1. + t8420;
  t8423 = 0.075*t8421;
  t8430 = 0.355*t1684;
  t8431 = -0.0641*t2467;
  t8432 = t8423 + t8430 + t8431;
  t8390 = -0.325*t1723;
  t8418 = t1731*t8412;
  t8435 = t1723*t8432;
  t8436 = t8390 + t8418 + t8435;
  t8363 = -1.*t1419;
  t8383 = 1. + t8363;
  t8387 = 0.1575*t8383;
  t8389 = 0.2255*t1419;
  t8437 = -1.*t3415*t8436;
  t8439 = t8387 + t8389 + t8437;
  t8444 = -1.*t3100*t8439;
  t8449 = -1.*t1731;
  t9094 = 1. + t8449;
  t9674 = 0.325*t9094;
  t10266 = -1.*t1723*t8412;
  t10269 = t1731*t8432;
  t10551 = t9674 + t10266 + t10269;
  t10885 = t3611*t10551;
  t10886 = t8444 + t10885;
  t12083 = 0.068*t3415;
  t13159 = t1419*t8436;
  t14765 = t12083 + t13159;
  t14803 = -1.*t2487*t1419*t3100;
  t14831 = t1446*t3415;
  t14835 = t14803 + t14831;
  t20683 = t3611*t8439;
  t20841 = t3100*t10551;
  t20842 = t20683 + t20841;
  t20876 = -1.*t1684*t1723;
  t20877 = t1731*t2467;
  t20908 = t20876 + t20877;
  t20639 = t2487*t10886;
  t20647 = t1446*t14765;
  t20660 = t20639 + t20647;
  t20854 = t1419*t1446*t4526;
  t20915 = t3611*t20908;
  t21131 = t3100*t3415*t4526;
  t21135 = t20915 + t21131;
  t21137 = t2487*t21135;
  t21139 = t20854 + t21137;
  t11735 = -1.*t1446*t10886;
  t14772 = t2487*t14765;
  t14786 = t11735 + t14772;
  t20845 = -1.*t3611*t1419*t20842;
  t21141 = t3100*t20908;
  t21142 = -1.*t3611*t3415*t4526;
  t21144 = t21141 + t21142;
  t21147 = t20842*t21144;
  t21166 = -1.*t3415*t14765;
  t21170 = t1419*t14765*t4526;
  t8205 = t1419*t1446*t3100;
  t8207 = t2487*t3415;
  t8362 = t8205 + t8207;
  t2486 = t1419*t1446*t2481;
  t4647 = t2487*t4533;
  t4938 = t2486 + t4647;
  t21151 = t2487*t1419*t4526;
  t21152 = -1.*t1446*t21135;
  t21153 = t21151 + t21152;
  t23578 = t20842*t4952;
  t23658 = -1.*t20842*t21144;
  t23699 = -1.*t1419*t14765*t4526;
  t23695 = t1419*t14765*t2481;
  t23718 = t10551*t4526;
  t23708 = -1.*t10551*t20908;
  t23755 = t3611*t1419*t20842;
  t23758 = -1.*t20842*t4952;
  t23769 = t3415*t14765;
  t23780 = -1.*t1419*t14765*t2481;
  p_output1[0]=t4938;
  p_output1[1]=t4940*t4952 - 1.*t5028*t5466;
  p_output1[2]=t4952*t5028 + t4940*t5466;
  p_output1[3]=t14835*(t20660*t21139 + t21147 + t14786*t21153) + t21139*(-1.*t14835*t20660 + t20845 - 1.*t14786*t8362);
  p_output1[4]=t21144*(t20845 + t21166 + t10886*t1419*t3100) + t1419*(t10886*t21135 + t21147 + t21170)*t3611;
  p_output1[5]=t1419*t4526*(t21166 - 1.*t1419*t8439) + t3415*(t10551*t20908 + t21170 - 1.*t3415*t4526*t8439);
  p_output1[6]=-0.2255*t20908 - 0.1575*t2481;
  p_output1[7]=0.325*t2467 - 1.*t1684*t8412 - 1.*t2467*t8432;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t14835;
  p_output1[19]=t1419*t3611*t4940 - 1.*t5028*t8362;
  p_output1[20]=t1419*t3611*t5028 + t4940*t8362;
  p_output1[21]=(-1.*t20660*t21139 - 1.*t14786*t21153 + t23658)*t4938 + t21139*(t23578 + t20660*t4938 + t14786*t5466);
  p_output1[22]=t21144*(t23578 + t23695 + t10886*t4533) + (-1.*t10886*t21135 + t23658 + t23699)*t4952;
  p_output1[23]=t1419*t4526*(t23695 + t23718 - 1.*t2481*t3415*t8439) + t1419*t2481*(t23699 + t23708 + t3415*t4526*t8439);
  p_output1[24]=t20908*(t23718 + t2481*t8436) + t4526*(t23708 - 1.*t4526*t8436);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t21139;
  p_output1[37]=t21144*t4940 - 1.*t21153*t5028;
  p_output1[38]=t21153*t4940 + t21144*t5028;
  p_output1[39]=t14835*(t23758 - 1.*t20660*t4938 - 1.*t14786*t5466) + t4938*(t14835*t20660 + t23755 + t14786*t8362);
  p_output1[40]=t1419*t3611*(t23758 + t23780 - 1.*t10886*t4533) + (t23755 + t23769 - 1.*t10886*t1419*t3100)*t4952;
  p_output1[41]=t1419*t2481*(t23769 + t1419*t8439) + t3415*(t23780 - 1.*t10551*t4526 + t2481*t3415*t8439);
  p_output1[42]=0.068*t4526;
  p_output1[43]=-0.325*t1684 - 1.*t2467*t8412 + t1684*t8432;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
