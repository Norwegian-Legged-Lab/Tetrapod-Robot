/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:16 GMT+02:00
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
  double t16694;
  double t16818;
  double t16832;
  double t16859;
  double t16928;
  double t17098;
  double t16680;
  double t17145;
  double t679;
  double t13425;
  double t17300;
  double t17392;
  double t17549;
  double t17589;
  double t17639;
  double t17673;
  double t17674;
  double t17687;
  double t17917;
  double t18044;
  double t18424;
  double t18427;
  double t17133;
  double t17141;
  double t17023;
  double t17053;
  double t17312;
  double t17323;
  double t17646;
  double t17654;
  double t18549;
  double t18551;
  double t18556;
  double t18562;
  double t18563;
  double t18566;
  double t18580;
  double t18581;
  double t18693;
  double t19322;
  double t19652;
  double t19670;
  double t19671;
  double t19672;
  double t19690;
  double t19691;
  double t19692;
  double t19694;
  double t19695;
  double t19696;
  double t19698;
  double t19699;
  double t19700;
  double t19779;
  double t19782;
  double t19805;
  double t20147;
  double t20159;
  double t20155;
  double t20163;
  double t20169;
  double t20177;
  double t20178;
  double t20180;
  double t20195;
  double t20196;
  double t20198;
  double t20201;
  double t20202;
  double t20203;
  double t20205;
  double t20206;
  double t20207;
  double t20224;
  double t20226;
  double t20227;
  double t20327;
  double t20346;
  double t20347;
  double t20354;
  double t20358;
  double t20363;
  double t20380;
  double t20383;
  double t20389;
  double t20396;
  double t20474;
  double t20475;
  double t20498;
  double t20504;
  double t20505;
  double t19675;
  double t19680;
  double t19682;
  double t19683;
  double t20614;
  double t20615;
  double t20618;
  double t20625;
  double t20626;
  double t20587;
  double t20679;
  double t20686;
  double t20690;
  double t20693;
  double t20694;
  double t20695;
  double t20699;
  double t20700;
  double t20701;
  double t20712;
  double t20716;
  double t20717;
  double t20761;
  double t20763;
  double t20769;
  double t20776;
  double t20778;
  double t20784;
  double t20795;
  double t20796;
  double t20797;
  double t20811;
  double t20815;
  double t20816;
  double t20818;
  double t20819;
  double t20820;
  double t20832;
  double t20833;
  double t20834;
  double t20837;
  double t20838;
  double t20824;
  double t20944;
  double t20946;
  double t20947;
  double t20949;
  double t20950;
  double t20953;
  double t20954;
  double t20956;
  double t20964;
  double t20965;
  double t20966;
  t16694 = Cos(var1[15]);
  t16818 = -1.*t16694;
  t16832 = 1. + t16818;
  t16859 = -0.15121*t16832;
  t16928 = Sin(var1[15]);
  t17098 = Sin(var1[4]);
  t16680 = Cos(var1[5]);
  t17145 = Sin(var1[5]);
  t679 = Cos(var1[4]);
  t13425 = Sin(var1[16]);
  t17300 = Cos(var1[16]);
  t17392 = -1.*t16694*t16680*t17098;
  t17549 = t16928*t17098*t17145;
  t17589 = t17392 + t17549;
  t17639 = Cos(var1[17]);
  t17673 = t679*t13425;
  t17674 = t17300*t17589;
  t17687 = t17673 + t17674;
  t17917 = Sin(var1[17]);
  t18044 = t17300*t679;
  t18424 = -1.*t13425*t17589;
  t18427 = t18044 + t18424;
  t17133 = 0.15121*t16928;
  t17141 = t16859 + t17133;
  t17023 = -0.15121*t16928;
  t17053 = t16859 + t17023;
  t17312 = -1.*t17300;
  t17323 = 1. + t17312;
  t17646 = -1.*t17639;
  t17654 = 1. + t17646;
  t18549 = -1.*t679*t16680*t16928;
  t18551 = -1.*t16694*t679*t17145;
  t18556 = t18549 + t18551;
  t18562 = -0.28121*t17323*t18556;
  t18563 = -0.50321*t17300*t17654*t18556;
  t18566 = 0.50321*t13425*t17917*t18556;
  t18580 = -1.*t16694*t679*t16680;
  t18581 = t679*t16928*t17145;
  t18693 = t18580 + t18581;
  t19322 = -0.15121*t18693;
  t19652 = t17300*t17639*t18556;
  t19670 = t13425*t17917*t18556;
  t19671 = t19652 + t19670;
  t19672 = -0.19821*t19671;
  t19690 = t16694*t679*t16680;
  t19691 = -1.*t679*t16928*t17145;
  t19692 = t19690 + t19691;
  t19694 = -1.*t13425*t17098;
  t19695 = -1.*t17300*t19692;
  t19696 = t19694 + t19695;
  t19698 = t17300*t17098;
  t19699 = -1.*t13425*t19692;
  t19700 = t19698 + t19699;
  t19779 = t13425*t17098;
  t19782 = t17300*t19692;
  t19805 = t19779 + t19782;
  t20147 = Cos(var1[3]);
  t20159 = Sin(var1[3]);
  t20155 = t20147*t16680*t17098;
  t20163 = -1.*t20159*t17145;
  t20169 = t20155 + t20163;
  t20177 = -1.*t16680*t20159;
  t20178 = -1.*t20147*t17098*t17145;
  t20180 = t20177 + t20178;
  t20195 = t16694*t20169;
  t20196 = t16928*t20180;
  t20198 = t20195 + t20196;
  t20201 = -1.*t20147*t679*t13425;
  t20202 = t17300*t20198;
  t20203 = t20201 + t20202;
  t20205 = -1.*t17300*t20147*t679;
  t20206 = -1.*t13425*t20198;
  t20207 = t20205 + t20206;
  t20224 = t16694*t679*t16680*t20159;
  t20226 = -1.*t679*t16928*t20159*t17145;
  t20227 = t20224 + t20226;
  t20327 = t13425*t20159*t17098;
  t20346 = t17300*t20227;
  t20347 = t20327 + t20346;
  t20354 = t17300*t20159*t17098;
  t20358 = -1.*t13425*t20227;
  t20363 = t20354 + t20358;
  t20380 = -1.*t16680*t20159*t17098;
  t20383 = -1.*t20147*t17145;
  t20389 = t20380 + t20383;
  t20396 = t20147*t16680;
  t20474 = -1.*t20159*t17098*t17145;
  t20475 = t20396 + t20474;
  t20498 = t16928*t20389;
  t20504 = t16694*t20475;
  t20505 = t20498 + t20504;
  t19675 = -0.15121*t16694;
  t19680 = t19675 + t17023;
  t19682 = 0.15121*t16694;
  t19683 = t19682 + t17023;
  t20614 = t16680*t20159*t17098;
  t20615 = t20147*t17145;
  t20618 = t20614 + t20615;
  t20625 = -1.*t16928*t20618;
  t20626 = t20625 + t20504;
  t20587 = -1.*t16928*t20475;
  t20679 = t16694*t20618;
  t20686 = t16928*t20475;
  t20690 = t20679 + t20686;
  t20693 = t679*t13425*t20159;
  t20694 = -1.*t17300*t20690;
  t20695 = t20693 + t20694;
  t20699 = -1.*t17300*t679*t20159;
  t20700 = -1.*t13425*t20690;
  t20701 = t20699 + t20700;
  t20712 = -1.*t679*t13425*t20159;
  t20716 = t17300*t20690;
  t20717 = t20712 + t20716;
  t20761 = -1.*t16694*t20147*t679*t16680;
  t20763 = t20147*t679*t16928*t17145;
  t20769 = t20761 + t20763;
  t20776 = -1.*t20147*t13425*t17098;
  t20778 = t17300*t20769;
  t20784 = t20776 + t20778;
  t20795 = -1.*t17300*t20147*t17098;
  t20796 = -1.*t13425*t20769;
  t20797 = t20795 + t20796;
  t20811 = t16680*t20159;
  t20815 = t20147*t17098*t17145;
  t20816 = t20811 + t20815;
  t20818 = t16928*t20169;
  t20819 = t16694*t20816;
  t20820 = t20818 + t20819;
  t20832 = -1.*t20147*t16680*t17098;
  t20833 = t20159*t17145;
  t20834 = t20832 + t20833;
  t20837 = -1.*t16928*t20834;
  t20838 = t20837 + t20819;
  t20824 = -1.*t16928*t20816;
  t20944 = t16694*t20834;
  t20946 = t16928*t20816;
  t20947 = t20944 + t20946;
  t20949 = -1.*t17300*t20947;
  t20950 = t20201 + t20949;
  t20953 = t17300*t20147*t679;
  t20954 = -1.*t13425*t20947;
  t20956 = t20953 + t20954;
  t20964 = t20147*t679*t13425;
  t20965 = t17300*t20947;
  t20966 = t20964 + t20965;
  p_output1[0]=1.;
  p_output1[1]=-1.*t16680*t17053*t17098 + t17098*t17141*t17145 - 0.15121*(t16680*t16928*t17098 + t16694*t17098*t17145) - 0.28121*t17323*t17589 - 0.50321*t17654*t17687 - 0.50321*t17917*t18427 - 0.19821*(t17639*t17687 - 1.*t17917*t18427) + 0.28121*t13425*t679;
  p_output1[2]=t18562 + t18563 + t18566 + t19322 + t19672 - 1.*t16680*t17141*t679 - 1.*t17053*t17145*t679;
  p_output1[3]=t18562 + t18563 + t18566 + t19322 + t19672 + t16680*t19680*t679 - 1.*t17145*t19683*t679;
  p_output1[4]=0.28121*t17098*t17300 - 0.28121*t13425*t19692 - 0.50321*t17917*t19696 - 0.50321*t17654*t19700 - 0.19821*(-1.*t17917*t19696 + t17639*t19700);
  p_output1[5]=-0.50321*t17639*t19700 - 0.50321*t17917*t19805 - 0.19821*(-1.*t17639*t19700 - 1.*t17917*t19805);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t17053*t20169 + t17141*t20180 - 0.15121*(-1.*t16928*t20169 + t16694*t20180) - 0.28121*t17323*t20198 - 0.50321*t17654*t20203 - 0.50321*t17917*t20207 - 0.19821*(t17639*t20203 - 1.*t17917*t20207) - 0.28121*t13425*t20147*t679;
  p_output1[9]=0.28121*t13425*t17098*t20159 - 0.28121*t17323*t20227 - 0.50321*t17654*t20347 - 0.50321*t17917*t20363 - 0.19821*(t17639*t20347 - 1.*t17917*t20363) + t16680*t17053*t20159*t679 - 1.*t17141*t17145*t20159*t679 - 0.15121*(-1.*t16680*t16928*t20159*t679 - 1.*t16694*t17145*t20159*t679);
  p_output1[10]=t17141*t20389 + t17053*t20475 - 0.28121*t17323*t20505 - 0.50321*t17300*t17654*t20505 + 0.50321*t13425*t17917*t20505 - 0.19821*(t17300*t17639*t20505 + t13425*t17917*t20505) - 0.15121*(t16694*t20389 + t20587);
  p_output1[11]=t19683*t20475 + t19680*t20618 - 0.15121*(t20587 - 1.*t16694*t20618) - 0.28121*t17323*t20626 - 0.50321*t17300*t17654*t20626 + 0.50321*t13425*t17917*t20626 - 0.19821*(t17300*t17639*t20626 + t13425*t17917*t20626);
  p_output1[12]=-0.28121*t13425*t20690 - 0.50321*t17917*t20695 - 0.50321*t17654*t20701 - 0.19821*(-1.*t17917*t20695 + t17639*t20701) - 0.28121*t17300*t20159*t679;
  p_output1[13]=-0.50321*t17639*t20701 - 0.50321*t17917*t20717 - 0.19821*(-1.*t17639*t20701 - 1.*t17917*t20717);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t17141*t20475 + t17053*t20618 - 0.15121*t20626 - 0.28121*t17323*t20690 - 0.50321*t17917*t20701 - 0.50321*t17654*t20717 - 0.19821*(-1.*t17917*t20701 + t17639*t20717) - 0.28121*t13425*t20159*t679;
  p_output1[17]=-0.28121*t13425*t17098*t20147 - 0.28121*t17323*t20769 - 0.50321*t17654*t20784 - 0.50321*t17917*t20797 - 0.19821*(t17639*t20784 - 1.*t17917*t20797) - 1.*t16680*t17053*t20147*t679 + t17141*t17145*t20147*t679 - 0.15121*(t16680*t16928*t20147*t679 + t16694*t17145*t20147*t679);
  p_output1[18]=t17141*t20169 + t17053*t20816 - 0.28121*t17323*t20820 - 0.50321*t17300*t17654*t20820 + 0.50321*t13425*t17917*t20820 - 0.19821*(t17300*t17639*t20820 + t13425*t17917*t20820) - 0.15121*(t20195 + t20824);
  p_output1[19]=t19683*t20816 + t19680*t20834 - 0.15121*(t20824 - 1.*t16694*t20834) - 0.28121*t17323*t20838 - 0.50321*t17300*t17654*t20838 + 0.50321*t13425*t17917*t20838 - 0.19821*(t17300*t17639*t20838 + t13425*t17917*t20838);
  p_output1[20]=-0.28121*t13425*t20947 - 0.50321*t17917*t20950 - 0.50321*t17654*t20956 - 0.19821*(-1.*t17917*t20950 + t17639*t20956) + 0.28121*t17300*t20147*t679;
  p_output1[21]=-0.50321*t17639*t20956 - 0.50321*t17917*t20966 - 0.19821*(-1.*t17639*t20956 - 1.*t17917*t20966);
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
