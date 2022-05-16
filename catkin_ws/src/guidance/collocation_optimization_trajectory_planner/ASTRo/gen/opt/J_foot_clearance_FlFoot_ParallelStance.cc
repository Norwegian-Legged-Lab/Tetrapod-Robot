/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:42 GMT+02:00
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
  double t5154;
  double t17810;
  double t18779;
  double t5007;
  double t19682;
  double t22735;
  double t22835;
  double t24381;
  double t24448;
  double t25524;
  double t10585;
  double t19912;
  double t20516;
  double t29129;
  double t30569;
  double t31325;
  double t43040;
  double t43154;
  double t43176;
  double t43187;
  double t43230;
  double t43240;
  double t43252;
  double t43283;
  double t43354;
  double t43394;
  double t43454;
  double t43536;
  double t43687;
  double t43699;
  double t27926;
  double t27960;
  double t31331;
  double t31544;
  double t43050;
  double t43060;
  double t43260;
  double t43272;
  double t44197;
  double t44210;
  double t44252;
  double t44348;
  double t44349;
  double t44351;
  double t44421;
  double t44449;
  double t44460;
  double t44548;
  double t44560;
  double t44582;
  double t44527;
  double t44536;
  double t44545;
  double t44622;
  double t44624;
  double t44625;
  double t44673;
  double t44674;
  double t44677;
  double t44687;
  double t44690;
  double t44634;
  double t44715;
  double t44718;
  double t44721;
  double t44725;
  double t44726;
  double t44727;
  double t44729;
  double t44736;
  double t44738;
  double t44752;
  double t44753;
  double t44754;
  t5154 = Cos(var1[5]);
  t17810 = Sin(var1[3]);
  t18779 = Sin(var1[4]);
  t5007 = Cos(var1[3]);
  t19682 = Sin(var1[5]);
  t22735 = Cos(var1[6]);
  t22835 = -1.*t22735;
  t24381 = 1. + t22835;
  t24448 = 0.15121*t24381;
  t25524 = Sin(var1[6]);
  t10585 = t5007*t5154;
  t19912 = -1.*t17810*t18779*t19682;
  t20516 = t10585 + t19912;
  t29129 = t5154*t17810*t18779;
  t30569 = t5007*t19682;
  t31325 = t29129 + t30569;
  t43040 = Cos(var1[7]);
  t43154 = t22735*t31325;
  t43176 = t20516*t25524;
  t43187 = t43154 + t43176;
  t43230 = Cos(var1[4]);
  t43240 = Sin(var1[7]);
  t43252 = Cos(var1[8]);
  t43283 = t43040*t43187;
  t43354 = t43230*t17810*t43240;
  t43394 = t43283 + t43354;
  t43454 = -1.*t43230*t43040*t17810;
  t43536 = t43187*t43240;
  t43687 = t43454 + t43536;
  t43699 = Sin(var1[8]);
  t27926 = -0.15121*t25524;
  t27960 = t24448 + t27926;
  t31331 = 0.15121*t25524;
  t31544 = t24448 + t31331;
  t43050 = -1.*t43040;
  t43060 = 1. + t43050;
  t43260 = -1.*t43252;
  t43272 = 1. + t43260;
  t44197 = -1.*t5007*t43230*t5154*t22735;
  t44210 = t5007*t43230*t19682*t25524;
  t44252 = t44197 + t44210;
  t44348 = t43040*t44252;
  t44349 = t5007*t18779*t43240;
  t44351 = t44348 + t44349;
  t44421 = -1.*t5007*t43040*t18779;
  t44449 = t44252*t43240;
  t44460 = t44421 + t44449;
  t44548 = t5154*t17810;
  t44560 = t5007*t18779*t19682;
  t44582 = t44548 + t44560;
  t44527 = t5007*t5154*t18779;
  t44536 = -1.*t17810*t19682;
  t44545 = t44527 + t44536;
  t44622 = t22735*t44582;
  t44624 = t44545*t25524;
  t44625 = t44622 + t44624;
  t44673 = -1.*t5007*t5154*t18779;
  t44674 = t17810*t19682;
  t44677 = t44673 + t44674;
  t44687 = -1.*t44677*t25524;
  t44690 = t44622 + t44687;
  t44634 = -1.*t44582*t25524;
  t44715 = t22735*t44677;
  t44718 = t44582*t25524;
  t44721 = t44715 + t44718;
  t44725 = -1.*t5007*t43230*t43040;
  t44726 = -1.*t44721*t43240;
  t44727 = t44725 + t44726;
  t44729 = t43040*t44721;
  t44736 = -1.*t5007*t43230*t43240;
  t44738 = t44729 + t44736;
  t44752 = t5007*t43230*t43040;
  t44753 = t44721*t43240;
  t44754 = t44752 + t44753;
  p_output1[0]=1.;
  p_output1[1]=t20516*t27960 + 0.15121*(t20516*t22735 - 1.*t25524*t31325) + t31325*t31544 + 0.28121*t43060*t43187 - 0.28121*t17810*t43230*t43240 + 0.50321*t43272*t43394 - 0.50321*t43687*t43699 + 0.23321*(t43252*t43394 + t43687*t43699);
  p_output1[2]=0.28121*t43060*t44252 + 0.50321*t43272*t44351 - 0.50321*t43699*t44460 + 0.23321*(t43252*t44351 + t43699*t44460) + t19682*t27960*t43230*t5007 - 0.28121*t18779*t43240*t5007 - 1.*t31544*t43230*t5007*t5154 + 0.15121*(t19682*t22735*t43230*t5007 + t25524*t43230*t5007*t5154);
  p_output1[3]=t27960*t44545 + t31544*t44582 + 0.28121*t43060*t44625 + 0.50321*t43040*t43272*t44625 - 0.50321*t43240*t43699*t44625 + 0.23321*(t43040*t43252*t44625 + t43240*t43699*t44625) + 0.15121*(t22735*t44545 + t44634);
  p_output1[4]=(-0.15121*t22735 + t31331)*t44582 + (0.15121*t22735 + t31331)*t44677 + 0.15121*(t44634 - 1.*t22735*t44677) + 0.28121*t43060*t44690 + 0.50321*t43040*t43272*t44690 - 0.50321*t43240*t43699*t44690 + 0.23321*(t43040*t43252*t44690 + t43240*t43699*t44690);
  p_output1[5]=0.28121*t43240*t44721 + 0.50321*t43272*t44727 - 0.50321*t43699*t44738 + 0.23321*(t43252*t44727 + t43699*t44738) + 0.28121*t43040*t43230*t5007;
  p_output1[6]=0.50321*t43699*t44738 - 0.50321*t43252*t44754 + 0.23321*(-1.*t43699*t44738 + t43252*t44754);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
