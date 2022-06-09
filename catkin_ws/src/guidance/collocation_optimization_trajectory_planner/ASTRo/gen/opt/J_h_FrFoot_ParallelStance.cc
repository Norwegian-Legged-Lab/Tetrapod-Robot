/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:19 GMT+02:00
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
  double t16065;
  double t16066;
  double t16071;
  double t16130;
  double t16206;
  double t16229;
  double t16064;
  double t16234;
  double t5980;
  double t16024;
  double t16292;
  double t16357;
  double t16379;
  double t16383;
  double t16385;
  double t16393;
  double t16394;
  double t16398;
  double t16423;
  double t16424;
  double t16435;
  double t16440;
  double t16231;
  double t16232;
  double t16072;
  double t16224;
  double t16294;
  double t16295;
  double t16391;
  double t16392;
  double t16472;
  double t16478;
  double t16480;
  double t16515;
  double t16486;
  double t16487;
  double t16490;
  double t16494;
  double t16497;
  double t16499;
  double t16501;
  double t16502;
  double t16504;
  double t16506;
  double t16511;
  double t16532;
  double t16533;
  double t16538;
  double t16542;
  double t16543;
  double t16547;
  double t16551;
  double t16557;
  double t16561;
  double t16575;
  double t16576;
  double t16577;
  double t16587;
  double t16592;
  double t16589;
  double t16593;
  double t16594;
  double t16597;
  double t16601;
  double t16605;
  double t16639;
  double t16640;
  double t16642;
  double t16646;
  double t16647;
  double t16648;
  double t16650;
  double t16651;
  double t16652;
  double t16682;
  double t16683;
  double t16685;
  double t16689;
  double t16690;
  double t16691;
  double t16694;
  double t16696;
  double t16697;
  double t16727;
  double t16728;
  double t16732;
  double t16734;
  double t16735;
  double t16736;
  double t16740;
  double t16742;
  double t16743;
  double t16516;
  double t16519;
  double t16523;
  double t16761;
  double t16762;
  double t16763;
  double t16769;
  double t16770;
  double t16751;
  double t16785;
  double t16786;
  double t16787;
  double t16795;
  double t16796;
  double t16797;
  double t16801;
  double t16807;
  double t16808;
  double t16827;
  double t16828;
  double t16830;
  double t16870;
  double t16871;
  double t16872;
  double t16874;
  double t16876;
  double t16877;
  double t16879;
  double t16880;
  double t16881;
  double t16890;
  double t16893;
  double t16895;
  double t16898;
  double t16901;
  double t16903;
  double t16917;
  double t16918;
  double t16921;
  double t16925;
  double t16926;
  double t16907;
  double t16941;
  double t16946;
  double t16949;
  double t16951;
  double t16952;
  double t16953;
  double t16955;
  double t16956;
  double t16965;
  double t16966;
  double t16968;
  t16065 = Cos(var1[12]);
  t16066 = -1.*t16065;
  t16071 = 1. + t16066;
  t16130 = Sin(var1[12]);
  t16206 = -0.15121*t16130;
  t16229 = Sin(var1[4]);
  t16064 = Cos(var1[5]);
  t16234 = Sin(var1[5]);
  t5980 = Cos(var1[4]);
  t16024 = Sin(var1[13]);
  t16292 = Cos(var1[13]);
  t16357 = -1.*t16065*t16064*t16229;
  t16379 = t16130*t16229*t16234;
  t16383 = t16357 + t16379;
  t16385 = Cos(var1[14]);
  t16393 = -1.*t5980*t16024;
  t16394 = t16292*t16383;
  t16398 = t16393 + t16394;
  t16423 = Sin(var1[14]);
  t16424 = t16292*t5980;
  t16435 = t16024*t16383;
  t16440 = t16424 + t16435;
  t16231 = -0.15121*t16071;
  t16232 = t16231 + t16206;
  t16072 = 0.15121*t16071;
  t16224 = t16072 + t16206;
  t16294 = -1.*t16292;
  t16295 = 1. + t16294;
  t16391 = -1.*t16385;
  t16392 = 1. + t16391;
  t16472 = -1.*t5980*t16064*t16130;
  t16478 = -1.*t16065*t5980*t16234;
  t16480 = t16472 + t16478;
  t16515 = -0.15121*t16065;
  t16486 = 0.28121*t16295*t16480;
  t16487 = 0.50321*t16292*t16392*t16480;
  t16490 = -0.50321*t16024*t16423*t16480;
  t16494 = -1.*t16065*t5980*t16064;
  t16497 = t5980*t16130*t16234;
  t16499 = t16494 + t16497;
  t16501 = -0.15121*t16499;
  t16502 = t16292*t16385*t16480;
  t16504 = t16024*t16423*t16480;
  t16506 = t16502 + t16504;
  t16511 = 0.19821*t16506;
  t16532 = t16065*t5980*t16064;
  t16533 = -1.*t5980*t16130*t16234;
  t16538 = t16532 + t16533;
  t16542 = -1.*t16024*t16229;
  t16543 = t16292*t16538;
  t16547 = t16542 + t16543;
  t16551 = -1.*t16292*t16229;
  t16557 = -1.*t16024*t16538;
  t16561 = t16551 + t16557;
  t16575 = t16292*t16229;
  t16576 = t16024*t16538;
  t16577 = t16575 + t16576;
  t16587 = Cos(var1[3]);
  t16592 = Sin(var1[3]);
  t16589 = t16587*t16064*t16229;
  t16593 = -1.*t16592*t16234;
  t16594 = t16589 + t16593;
  t16597 = -1.*t16064*t16592;
  t16601 = -1.*t16587*t16229*t16234;
  t16605 = t16597 + t16601;
  t16639 = t16065*t16594;
  t16640 = t16130*t16605;
  t16642 = t16639 + t16640;
  t16646 = t16587*t5980*t16024;
  t16647 = t16292*t16642;
  t16648 = t16646 + t16647;
  t16650 = -1.*t16292*t16587*t5980;
  t16651 = t16024*t16642;
  t16652 = t16650 + t16651;
  t16682 = t16065*t5980*t16064*t16592;
  t16683 = -1.*t5980*t16130*t16592*t16234;
  t16685 = t16682 + t16683;
  t16689 = -1.*t16024*t16592*t16229;
  t16690 = t16292*t16685;
  t16691 = t16689 + t16690;
  t16694 = t16292*t16592*t16229;
  t16696 = t16024*t16685;
  t16697 = t16694 + t16696;
  t16727 = -1.*t16064*t16592*t16229;
  t16728 = -1.*t16587*t16234;
  t16732 = t16727 + t16728;
  t16734 = t16587*t16064;
  t16735 = -1.*t16592*t16229*t16234;
  t16736 = t16734 + t16735;
  t16740 = t16130*t16732;
  t16742 = t16065*t16736;
  t16743 = t16740 + t16742;
  t16516 = 0.15121*t16130;
  t16519 = t16515 + t16516;
  t16523 = t16515 + t16206;
  t16761 = t16064*t16592*t16229;
  t16762 = t16587*t16234;
  t16763 = t16761 + t16762;
  t16769 = -1.*t16130*t16763;
  t16770 = t16769 + t16742;
  t16751 = -1.*t16130*t16736;
  t16785 = t16065*t16763;
  t16786 = t16130*t16736;
  t16787 = t16785 + t16786;
  t16795 = t5980*t16024*t16592;
  t16796 = t16292*t16787;
  t16797 = t16795 + t16796;
  t16801 = t16292*t5980*t16592;
  t16807 = -1.*t16024*t16787;
  t16808 = t16801 + t16807;
  t16827 = -1.*t16292*t5980*t16592;
  t16828 = t16024*t16787;
  t16830 = t16827 + t16828;
  t16870 = -1.*t16065*t16587*t5980*t16064;
  t16871 = t16587*t5980*t16130*t16234;
  t16872 = t16870 + t16871;
  t16874 = t16587*t16024*t16229;
  t16876 = t16292*t16872;
  t16877 = t16874 + t16876;
  t16879 = -1.*t16292*t16587*t16229;
  t16880 = t16024*t16872;
  t16881 = t16879 + t16880;
  t16890 = t16064*t16592;
  t16893 = t16587*t16229*t16234;
  t16895 = t16890 + t16893;
  t16898 = t16130*t16594;
  t16901 = t16065*t16895;
  t16903 = t16898 + t16901;
  t16917 = -1.*t16587*t16064*t16229;
  t16918 = t16592*t16234;
  t16921 = t16917 + t16918;
  t16925 = -1.*t16130*t16921;
  t16926 = t16925 + t16901;
  t16907 = -1.*t16130*t16895;
  t16941 = t16065*t16921;
  t16946 = t16130*t16895;
  t16949 = t16941 + t16946;
  t16951 = -1.*t16587*t5980*t16024;
  t16952 = t16292*t16949;
  t16953 = t16951 + t16952;
  t16955 = -1.*t16024*t16949;
  t16956 = t16650 + t16955;
  t16965 = t16292*t16587*t5980;
  t16966 = t16024*t16949;
  t16968 = t16965 + t16966;
  p_output1[0]=1.;
  p_output1[1]=-1.*t16064*t16224*t16229 + t16229*t16232*t16234 - 0.15121*(t16064*t16130*t16229 + t16065*t16229*t16234) + 0.28121*t16295*t16383 + 0.50321*t16392*t16398 - 0.50321*t16423*t16440 + 0.19821*(t16385*t16398 + t16423*t16440) + 0.28121*t16024*t5980;
  p_output1[2]=t16486 + t16487 + t16490 + t16501 + t16511 - 1.*t16064*t16232*t5980 - 1.*t16224*t16234*t5980;
  p_output1[3]=t16486 + t16487 + t16490 + t16501 + t16511 + t16064*t16519*t5980 - 1.*t16234*t16523*t5980;
  p_output1[4]=0.28121*t16229*t16292 + 0.28121*t16024*t16538 - 0.50321*t16423*t16547 + 0.50321*t16392*t16561 + 0.19821*(t16423*t16547 + t16385*t16561);
  p_output1[5]=0.50321*t16423*t16547 - 0.50321*t16385*t16577 + 0.19821*(-1.*t16423*t16547 + t16385*t16577);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t16224*t16594 + t16232*t16605 - 0.15121*(-1.*t16130*t16594 + t16065*t16605) + 0.28121*t16295*t16642 + 0.50321*t16392*t16648 - 0.50321*t16423*t16652 + 0.19821*(t16385*t16648 + t16423*t16652) - 0.28121*t16024*t16587*t5980;
  p_output1[9]=0.28121*t16024*t16229*t16592 + 0.28121*t16295*t16685 + 0.50321*t16392*t16691 - 0.50321*t16423*t16697 + 0.19821*(t16385*t16691 + t16423*t16697) + t16064*t16224*t16592*t5980 - 1.*t16232*t16234*t16592*t5980 - 0.15121*(-1.*t16064*t16130*t16592*t5980 - 1.*t16065*t16234*t16592*t5980);
  p_output1[10]=t16232*t16732 + t16224*t16736 + 0.28121*t16295*t16743 + 0.50321*t16292*t16392*t16743 - 0.50321*t16024*t16423*t16743 + 0.19821*(t16292*t16385*t16743 + t16024*t16423*t16743) - 0.15121*(t16065*t16732 + t16751);
  p_output1[11]=t16523*t16736 + t16519*t16763 - 0.15121*(t16751 - 1.*t16065*t16763) + 0.28121*t16295*t16770 + 0.50321*t16292*t16392*t16770 - 0.50321*t16024*t16423*t16770 + 0.19821*(t16292*t16385*t16770 + t16024*t16423*t16770);
  p_output1[12]=0.28121*t16024*t16787 - 0.50321*t16423*t16797 + 0.50321*t16392*t16808 + 0.19821*(t16423*t16797 + t16385*t16808) - 0.28121*t16292*t16592*t5980;
  p_output1[13]=0.50321*t16423*t16797 - 0.50321*t16385*t16830 + 0.19821*(-1.*t16423*t16797 + t16385*t16830);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t16232*t16736 + t16224*t16763 - 0.15121*t16770 + 0.28121*t16295*t16787 + 0.50321*t16392*t16797 - 0.50321*t16423*t16830 + 0.19821*(t16385*t16797 + t16423*t16830) - 0.28121*t16024*t16592*t5980;
  p_output1[17]=-0.28121*t16024*t16229*t16587 + 0.28121*t16295*t16872 + 0.50321*t16392*t16877 - 0.50321*t16423*t16881 + 0.19821*(t16385*t16877 + t16423*t16881) - 1.*t16064*t16224*t16587*t5980 + t16232*t16234*t16587*t5980 - 0.15121*(t16064*t16130*t16587*t5980 + t16065*t16234*t16587*t5980);
  p_output1[18]=t16232*t16594 + t16224*t16895 + 0.28121*t16295*t16903 + 0.50321*t16292*t16392*t16903 - 0.50321*t16024*t16423*t16903 + 0.19821*(t16292*t16385*t16903 + t16024*t16423*t16903) - 0.15121*(t16639 + t16907);
  p_output1[19]=t16523*t16895 + t16519*t16921 - 0.15121*(t16907 - 1.*t16065*t16921) + 0.28121*t16295*t16926 + 0.50321*t16292*t16392*t16926 - 0.50321*t16024*t16423*t16926 + 0.19821*(t16292*t16385*t16926 + t16024*t16423*t16926);
  p_output1[20]=0.28121*t16024*t16949 - 0.50321*t16423*t16953 + 0.50321*t16392*t16956 + 0.19821*(t16423*t16953 + t16385*t16956) + 0.28121*t16292*t16587*t5980;
  p_output1[21]=0.50321*t16423*t16953 - 0.50321*t16385*t16968 + 0.19821*(-1.*t16423*t16953 + t16385*t16968);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
