/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:45 GMT+02:00
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
  double t13733;
  double t12995;
  double t14122;
  double t19114;
  double t18547;
  double t18560;
  double t20402;
  double t3761;
  double t18582;
  double t20403;
  double t20621;
  double t14388;
  double t20776;
  double t20976;
  double t20977;
  double t20775;
  double t24171;
  double t24178;
  double t21197;
  double t21445;
  double t21698;
  double t22242;
  double t22244;
  double t24149;
  double t24154;
  double t24156;
  double t24159;
  double t24180;
  double t24183;
  double t24184;
  double t24284;
  double t24285;
  double t24286;
  double t24295;
  double t24305;
  double t24310;
  double t24388;
  double t24389;
  double t24391;
  double t24397;
  double t24398;
  double t24400;
  double t20629;
  double t21964;
  double t22090;
  double t24444;
  double t24445;
  double t24447;
  double t24543;
  double t24544;
  double t24548;
  double t24556;
  double t24598;
  double t24599;
  double t13732;
  double t14389;
  double t17148;
  double t24443;
  double t24502;
  double t24600;
  double t24603;
  double t24612;
  double t24613;
  double t24614;
  double t24618;
  double t24619;
  double t24621;
  double t24437;
  double t24438;
  double t24440;
  double t24442;
  double t24604;
  double t24605;
  double t24630;
  double t24631;
  double t24633;
  double t24665;
  double t24666;
  double t24670;
  double t24609;
  double t24624;
  double t24626;
  double t24664;
  double t24671;
  double t24672;
  double t24678;
  double t24679;
  double t24680;
  double t22239;
  double t24163;
  double t24166;
  double t24629;
  double t24689;
  double t24706;
  double t24767;
  double t24988;
  double t25000;
  double t25042;
  double t25048;
  double t25014;
  double t25020;
  double t25034;
  double t25028;
  double t25093;
  double t25086;
  t13733 = Cos(var1[15]);
  t12995 = Sin(var1[4]);
  t14122 = Cos(var1[4]);
  t19114 = Cos(var1[16]);
  t18547 = Cos(var1[17]);
  t18560 = Sin(var1[16]);
  t20402 = Sin(var1[17]);
  t3761 = Sin(var1[15]);
  t18582 = t18547*t18560;
  t20403 = -1.*t19114*t20402;
  t20621 = t18582 + t20403;
  t14388 = Sin(var1[5]);
  t20776 = t19114*t18547;
  t20976 = t18560*t20402;
  t20977 = t20776 + t20976;
  t20775 = Cos(var1[5]);
  t24171 = Cos(var1[3]);
  t24178 = Sin(var1[3]);
  t21197 = t20775*t20977;
  t21445 = t3761*t20621*t14388;
  t21698 = t21197 + t21445;
  t22242 = -1.*t18547*t18560;
  t22244 = t19114*t20402;
  t24149 = t22242 + t22244;
  t24154 = t20775*t24149;
  t24156 = t3761*t20977*t14388;
  t24159 = t24154 + t24156;
  t24180 = t14122*t3761;
  t24183 = t13733*t12995*t14388;
  t24184 = t24180 + t24183;
  t24284 = -1.*t20775*t3761*t20621;
  t24285 = t20977*t14388;
  t24286 = t24284 + t24285;
  t24295 = t13733*t14122*t20621;
  t24305 = -1.*t12995*t21698;
  t24310 = t24295 + t24305;
  t24388 = -1.*t20775*t3761*t20977;
  t24389 = t24149*t14388;
  t24391 = t24388 + t24389;
  t24397 = t13733*t14122*t20977;
  t24398 = -1.*t12995*t24159;
  t24400 = t24397 + t24398;
  t20629 = t13733*t20621*t12995;
  t21964 = t14122*t21698;
  t22090 = t20629 + t21964;
  t24444 = -0.0641*t18547;
  t24445 = -0.28*t20402;
  t24447 = t24444 + t24445;
  t24543 = -1.*t18547;
  t24544 = 1. + t24543;
  t24548 = -0.575*t24544;
  t24556 = -0.295*t18547;
  t24598 = -0.0641*t20402;
  t24599 = t24548 + t24556 + t24598;
  t13732 = t3761*t12995;
  t14389 = -1.*t13733*t14122*t14388;
  t17148 = t13732 + t14389;
  t24443 = 0.325*t18560;
  t24502 = t19114*t24447;
  t24600 = t18560*t24599;
  t24603 = t24443 + t24502 + t24600;
  t24612 = -1.*t19114;
  t24613 = 1. + t24612;
  t24614 = -0.325*t24613;
  t24618 = -1.*t18560*t24447;
  t24619 = t19114*t24599;
  t24621 = t24614 + t24618 + t24619;
  t24437 = -1.*t13733;
  t24438 = 1. + t24437;
  t24440 = -0.1575*t24438;
  t24442 = -0.2255*t13733;
  t24604 = -1.*t3761*t24603;
  t24605 = t24440 + t24442 + t24604;
  t24630 = -0.068*t3761;
  t24631 = t13733*t24603;
  t24633 = t24630 + t24631;
  t24665 = t20775*t24621;
  t24666 = -1.*t24605*t14388;
  t24670 = t24665 + t24666;
  t24609 = t20775*t24605;
  t24624 = t24621*t14388;
  t24626 = t24609 + t24624;
  t24664 = t24633*t12995;
  t24671 = t14122*t24670;
  t24672 = t24664 + t24671;
  t24678 = t14122*t24633;
  t24679 = -1.*t12995*t24670;
  t24680 = t24678 + t24679;
  t22239 = t13733*t20977*t12995;
  t24163 = t14122*t24159;
  t24166 = t22239 + t24163;
  t24629 = t13733*t20775*t24626;
  t24689 = -1.*t24626*t24286;
  t24706 = t24626*t24286;
  t24767 = -1.*t24626*t24391;
  t24988 = -1.*t13733*t20775*t24626;
  t25000 = t24626*t24391;
  t25042 = -1.*t3761*t24633;
  t25048 = t13733*t24633*t20977;
  t25014 = t3761*t24633;
  t25020 = -1.*t13733*t24633*t20621;
  t25034 = -1.*t13733*t24633*t20977;
  t25028 = t13733*t24633*t20621;
  t25093 = t24621*t20977;
  t25086 = -1.*t24621*t24149;
  p_output1[0]=t22090*var2[0] + t17148*var2[1] + t24166*var2[2];
  p_output1[1]=(t24171*t24286 - 1.*t24178*t24310)*var2[0] + (t13733*t20775*t24171 - 1.*t24178*t24184)*var2[1] + (t24171*t24391 - 1.*t24178*t24400)*var2[2];
  p_output1[2]=(t24178*t24286 + t24171*t24310)*var2[0] + (t13733*t20775*t24178 + t24171*t24184)*var2[1] + (t24178*t24391 + t24171*t24400)*var2[2];
  p_output1[3]=(t24166*(-1.*t17148*t24672 - 1.*t24184*t24680 + t24988) + t17148*(t24166*t24672 + t24400*t24680 + t25000))*var2[0] + (t24166*(t22090*t24672 + t24310*t24680 + t24706) + t22090*(-1.*t24166*t24672 - 1.*t24400*t24680 + t24767))*var2[1] + (t22090*(t24629 + t17148*t24672 + t24184*t24680) + t17148*(-1.*t22090*t24672 - 1.*t24310*t24680 + t24689))*var2[2];
  p_output1[4]=(t24391*(t13733*t14388*t24670 + t24988 + t25042) + t13733*t20775*(t24159*t24670 + t25000 + t25048))*var2[0] + (t24391*(t21698*t24670 + t24706 + t25028) + t24286*(-1.*t24159*t24670 + t24767 + t25034))*var2[1] + (t24286*(t24629 - 1.*t13733*t14388*t24670 + t25014) + t13733*t20775*(-1.*t21698*t24670 + t24689 + t25020))*var2[2];
  p_output1[5]=(t13733*t20977*(-1.*t13733*t24605 + t25042) + t3761*(t24149*t24621 + t25048 - 1.*t20977*t24605*t3761))*var2[0] + (t13733*t20977*(t25028 + t25093 - 1.*t20621*t24605*t3761) + t13733*t20621*(t25034 + t25086 + t20977*t24605*t3761))*var2[1] + (t13733*t20621*(t13733*t24605 + t25014) + t3761*(-1.*t20977*t24621 + t25020 + t20621*t24605*t3761))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t20621 + 0.2255*t24149)*var2[0] + (t20977*(-1.*t20977*t24603 + t25086) + t24149*(t20621*t24603 + t25093))*var2[1] - 0.068*t20977*var2[2];
  p_output1[16]=(-0.325*t20402 - 1.*t18547*t24447 - 1.*t20402*t24599)*var2[0] + (0.325*t18547 - 1.*t20402*t24447 + t18547*t24599)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
