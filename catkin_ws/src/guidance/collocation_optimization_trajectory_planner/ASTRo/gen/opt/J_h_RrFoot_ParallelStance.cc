/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:50 GMT+02:00
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
  double t4714;
  double t4767;
  double t13323;
  double t13743;
  double t18468;
  double t24997;
  double t4611;
  double t25028;
  double t95;
  double t1744;
  double t25146;
  double t25173;
  double t25326;
  double t25395;
  double t25468;
  double t25599;
  double t25602;
  double t25604;
  double t25738;
  double t25740;
  double t25741;
  double t25742;
  double t24999;
  double t25000;
  double t24697;
  double t24996;
  double t25160;
  double t25162;
  double t25509;
  double t25575;
  double t25778;
  double t25779;
  double t25781;
  double t25790;
  double t25828;
  double t25835;
  double t25846;
  double t25889;
  double t25903;
  double t25908;
  double t25917;
  double t25926;
  double t25939;
  double t25954;
  double t25971;
  double t25972;
  double t25973;
  double t25975;
  double t25976;
  double t25977;
  double t25979;
  double t25980;
  double t25981;
  double t25988;
  double t25989;
  double t25990;
  double t26152;
  double t26166;
  double t26164;
  double t26172;
  double t26173;
  double t26182;
  double t26188;
  double t26194;
  double t26208;
  double t26210;
  double t26211;
  double t26213;
  double t26214;
  double t26216;
  double t26219;
  double t26220;
  double t26221;
  double t26235;
  double t26236;
  double t26237;
  double t26239;
  double t26240;
  double t26241;
  double t26245;
  double t26266;
  double t26269;
  double t26303;
  double t26307;
  double t26311;
  double t26314;
  double t26315;
  double t26316;
  double t26322;
  double t26324;
  double t26330;
  double t25956;
  double t25957;
  double t25964;
  double t25965;
  double t26458;
  double t26459;
  double t26460;
  double t26470;
  double t26471;
  double t26441;
  double t26488;
  double t26489;
  double t26490;
  double t26499;
  double t26502;
  double t26512;
  double t26515;
  double t26516;
  double t26519;
  double t26545;
  double t26552;
  double t26563;
  double t26606;
  double t26607;
  double t26609;
  double t26611;
  double t26612;
  double t26613;
  double t26615;
  double t26616;
  double t26617;
  double t26627;
  double t26628;
  double t26629;
  double t26632;
  double t26633;
  double t26634;
  double t26652;
  double t26653;
  double t26654;
  double t26660;
  double t26661;
  double t26640;
  double t26695;
  double t26696;
  double t26697;
  double t26699;
  double t26700;
  double t26711;
  double t26712;
  double t26716;
  double t26726;
  double t26727;
  double t26728;
  t4714 = Cos(var1[15]);
  t4767 = -1.*t4714;
  t13323 = 1. + t4767;
  t13743 = -0.15121*t13323;
  t18468 = Sin(var1[15]);
  t24997 = Sin(var1[4]);
  t4611 = Cos(var1[5]);
  t25028 = Sin(var1[5]);
  t95 = Cos(var1[4]);
  t1744 = Sin(var1[16]);
  t25146 = Cos(var1[16]);
  t25173 = -1.*t4714*t4611*t24997;
  t25326 = t18468*t24997*t25028;
  t25395 = t25173 + t25326;
  t25468 = Cos(var1[17]);
  t25599 = t95*t1744;
  t25602 = t25146*t25395;
  t25604 = t25599 + t25602;
  t25738 = Sin(var1[17]);
  t25740 = t25146*t95;
  t25741 = -1.*t1744*t25395;
  t25742 = t25740 + t25741;
  t24999 = 0.15121*t18468;
  t25000 = t13743 + t24999;
  t24697 = -0.15121*t18468;
  t24996 = t13743 + t24697;
  t25160 = -1.*t25146;
  t25162 = 1. + t25160;
  t25509 = -1.*t25468;
  t25575 = 1. + t25509;
  t25778 = -1.*t95*t4611*t18468;
  t25779 = -1.*t4714*t95*t25028;
  t25781 = t25778 + t25779;
  t25790 = -0.28121*t25162*t25781;
  t25828 = -0.50321*t25146*t25575*t25781;
  t25835 = 0.50321*t1744*t25738*t25781;
  t25846 = -1.*t4714*t95*t4611;
  t25889 = t95*t18468*t25028;
  t25903 = t25846 + t25889;
  t25908 = -0.15121*t25903;
  t25917 = t25146*t25468*t25781;
  t25926 = t1744*t25738*t25781;
  t25939 = t25917 + t25926;
  t25954 = -0.19821*t25939;
  t25971 = t4714*t95*t4611;
  t25972 = -1.*t95*t18468*t25028;
  t25973 = t25971 + t25972;
  t25975 = -1.*t1744*t24997;
  t25976 = -1.*t25146*t25973;
  t25977 = t25975 + t25976;
  t25979 = t25146*t24997;
  t25980 = -1.*t1744*t25973;
  t25981 = t25979 + t25980;
  t25988 = t1744*t24997;
  t25989 = t25146*t25973;
  t25990 = t25988 + t25989;
  t26152 = Cos(var1[3]);
  t26166 = Sin(var1[3]);
  t26164 = t26152*t4611*t24997;
  t26172 = -1.*t26166*t25028;
  t26173 = t26164 + t26172;
  t26182 = -1.*t4611*t26166;
  t26188 = -1.*t26152*t24997*t25028;
  t26194 = t26182 + t26188;
  t26208 = t4714*t26173;
  t26210 = t18468*t26194;
  t26211 = t26208 + t26210;
  t26213 = -1.*t26152*t95*t1744;
  t26214 = t25146*t26211;
  t26216 = t26213 + t26214;
  t26219 = -1.*t25146*t26152*t95;
  t26220 = -1.*t1744*t26211;
  t26221 = t26219 + t26220;
  t26235 = t4714*t95*t4611*t26166;
  t26236 = -1.*t95*t18468*t26166*t25028;
  t26237 = t26235 + t26236;
  t26239 = t1744*t26166*t24997;
  t26240 = t25146*t26237;
  t26241 = t26239 + t26240;
  t26245 = t25146*t26166*t24997;
  t26266 = -1.*t1744*t26237;
  t26269 = t26245 + t26266;
  t26303 = -1.*t4611*t26166*t24997;
  t26307 = -1.*t26152*t25028;
  t26311 = t26303 + t26307;
  t26314 = t26152*t4611;
  t26315 = -1.*t26166*t24997*t25028;
  t26316 = t26314 + t26315;
  t26322 = t18468*t26311;
  t26324 = t4714*t26316;
  t26330 = t26322 + t26324;
  t25956 = -0.15121*t4714;
  t25957 = t25956 + t24697;
  t25964 = 0.15121*t4714;
  t25965 = t25964 + t24697;
  t26458 = t4611*t26166*t24997;
  t26459 = t26152*t25028;
  t26460 = t26458 + t26459;
  t26470 = -1.*t18468*t26460;
  t26471 = t26470 + t26324;
  t26441 = -1.*t18468*t26316;
  t26488 = t4714*t26460;
  t26489 = t18468*t26316;
  t26490 = t26488 + t26489;
  t26499 = t95*t1744*t26166;
  t26502 = -1.*t25146*t26490;
  t26512 = t26499 + t26502;
  t26515 = -1.*t25146*t95*t26166;
  t26516 = -1.*t1744*t26490;
  t26519 = t26515 + t26516;
  t26545 = -1.*t95*t1744*t26166;
  t26552 = t25146*t26490;
  t26563 = t26545 + t26552;
  t26606 = -1.*t4714*t26152*t95*t4611;
  t26607 = t26152*t95*t18468*t25028;
  t26609 = t26606 + t26607;
  t26611 = -1.*t26152*t1744*t24997;
  t26612 = t25146*t26609;
  t26613 = t26611 + t26612;
  t26615 = -1.*t25146*t26152*t24997;
  t26616 = -1.*t1744*t26609;
  t26617 = t26615 + t26616;
  t26627 = t4611*t26166;
  t26628 = t26152*t24997*t25028;
  t26629 = t26627 + t26628;
  t26632 = t18468*t26173;
  t26633 = t4714*t26629;
  t26634 = t26632 + t26633;
  t26652 = -1.*t26152*t4611*t24997;
  t26653 = t26166*t25028;
  t26654 = t26652 + t26653;
  t26660 = -1.*t18468*t26654;
  t26661 = t26660 + t26633;
  t26640 = -1.*t18468*t26629;
  t26695 = t4714*t26654;
  t26696 = t18468*t26629;
  t26697 = t26695 + t26696;
  t26699 = -1.*t25146*t26697;
  t26700 = t26213 + t26699;
  t26711 = t25146*t26152*t95;
  t26712 = -1.*t1744*t26697;
  t26716 = t26711 + t26712;
  t26726 = t26152*t95*t1744;
  t26727 = t25146*t26697;
  t26728 = t26726 + t26727;
  p_output1[0]=1.;
  p_output1[1]=t24997*t25000*t25028 - 0.28121*t25162*t25395 - 0.50321*t25575*t25604 - 0.50321*t25738*t25742 - 0.19821*(t25468*t25604 - 1.*t25738*t25742) - 1.*t24996*t24997*t4611 - 0.15121*(t18468*t24997*t4611 + t24997*t25028*t4714) + 0.28121*t1744*t95;
  p_output1[2]=t25790 + t25828 + t25835 + t25908 + t25954 - 1.*t24996*t25028*t95 - 1.*t25000*t4611*t95;
  p_output1[3]=t25790 + t25828 + t25835 + t25908 + t25954 - 1.*t25028*t25965*t95 + t25957*t4611*t95;
  p_output1[4]=0.28121*t24997*t25146 - 0.28121*t1744*t25973 - 0.50321*t25738*t25977 - 0.50321*t25575*t25981 - 0.19821*(-1.*t25738*t25977 + t25468*t25981);
  p_output1[5]=-0.50321*t25468*t25981 - 0.50321*t25738*t25990 - 0.19821*(-1.*t25468*t25981 - 1.*t25738*t25990);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t24996*t26173 + t25000*t26194 - 0.28121*t25162*t26211 - 0.50321*t25575*t26216 - 0.50321*t25738*t26221 - 0.19821*(t25468*t26216 - 1.*t25738*t26221) - 0.15121*(-1.*t18468*t26173 + t26194*t4714) - 0.28121*t1744*t26152*t95;
  p_output1[9]=0.28121*t1744*t24997*t26166 - 0.28121*t25162*t26237 - 0.50321*t25575*t26241 - 0.50321*t25738*t26269 - 0.19821*(t25468*t26241 - 1.*t25738*t26269) - 1.*t25000*t25028*t26166*t95 + t24996*t26166*t4611*t95 - 0.15121*(-1.*t18468*t26166*t4611*t95 - 1.*t25028*t26166*t4714*t95);
  p_output1[10]=t25000*t26311 + t24996*t26316 - 0.28121*t25162*t26330 - 0.50321*t25146*t25575*t26330 + 0.50321*t1744*t25738*t26330 - 0.19821*(t25146*t25468*t26330 + t1744*t25738*t26330) - 0.15121*(t26441 + t26311*t4714);
  p_output1[11]=t25965*t26316 + t25957*t26460 - 0.28121*t25162*t26471 - 0.50321*t25146*t25575*t26471 + 0.50321*t1744*t25738*t26471 - 0.19821*(t25146*t25468*t26471 + t1744*t25738*t26471) - 0.15121*(t26441 - 1.*t26460*t4714);
  p_output1[12]=-0.28121*t1744*t26490 - 0.50321*t25738*t26512 - 0.50321*t25575*t26519 - 0.19821*(-1.*t25738*t26512 + t25468*t26519) - 0.28121*t25146*t26166*t95;
  p_output1[13]=-0.50321*t25468*t26519 - 0.50321*t25738*t26563 - 0.19821*(-1.*t25468*t26519 - 1.*t25738*t26563);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t25000*t26316 + t24996*t26460 - 0.15121*t26471 - 0.28121*t25162*t26490 - 0.50321*t25738*t26519 - 0.50321*t25575*t26563 - 0.19821*(-1.*t25738*t26519 + t25468*t26563) - 0.28121*t1744*t26166*t95;
  p_output1[17]=-0.28121*t1744*t24997*t26152 - 0.28121*t25162*t26609 - 0.50321*t25575*t26613 - 0.50321*t25738*t26617 - 0.19821*(t25468*t26613 - 1.*t25738*t26617) + t25000*t25028*t26152*t95 - 1.*t24996*t26152*t4611*t95 - 0.15121*(t18468*t26152*t4611*t95 + t25028*t26152*t4714*t95);
  p_output1[18]=t25000*t26173 + t24996*t26629 - 0.28121*t25162*t26634 - 0.50321*t25146*t25575*t26634 + 0.50321*t1744*t25738*t26634 - 0.19821*(t25146*t25468*t26634 + t1744*t25738*t26634) - 0.15121*(t26208 + t26640);
  p_output1[19]=t25965*t26629 + t25957*t26654 - 0.28121*t25162*t26661 - 0.50321*t25146*t25575*t26661 + 0.50321*t1744*t25738*t26661 - 0.19821*(t25146*t25468*t26661 + t1744*t25738*t26661) - 0.15121*(t26640 - 1.*t26654*t4714);
  p_output1[20]=-0.28121*t1744*t26697 - 0.50321*t25738*t26700 - 0.50321*t25575*t26716 - 0.19821*(-1.*t25738*t26700 + t25468*t26716) + 0.28121*t25146*t26152*t95;
  p_output1[21]=-0.50321*t25468*t26716 - 0.50321*t25738*t26728 - 0.19821*(-1.*t25468*t26716 - 1.*t25738*t26728);
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

#include "J_h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
