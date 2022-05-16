/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 17:54:48 GMT+02:00
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
  double t1722;
  double t2397;
  double t2557;
  double t1272;
  double t2953;
  double t3979;
  double t4150;
  double t4156;
  double t4197;
  double t4201;
  double t1986;
  double t3170;
  double t3916;
  double t4890;
  double t4977;
  double t5226;
  double t7594;
  double t7799;
  double t8337;
  double t8341;
  double t8354;
  double t8919;
  double t9676;
  double t9812;
  double t9814;
  double t9815;
  double t10171;
  double t10199;
  double t10201;
  double t10202;
  double t4362;
  double t4390;
  double t5354;
  double t5366;
  double t7607;
  double t7788;
  double t9755;
  double t9775;
  double t10245;
  double t10253;
  double t10267;
  double t10472;
  double t10473;
  double t10474;
  double t10476;
  double t10515;
  double t10519;
  double t10810;
  double t10817;
  double t10818;
  double t10781;
  double t10795;
  double t10800;
  double t10820;
  double t10821;
  double t10823;
  double t11158;
  double t11394;
  double t11395;
  double t11405;
  double t11410;
  double t11112;
  double t11685;
  double t11686;
  double t11699;
  double t11704;
  double t11705;
  double t11709;
  double t11720;
  double t11721;
  double t11724;
  double t12091;
  double t12096;
  double t12125;
  t1722 = Cos(var1[5]);
  t2397 = Sin(var1[3]);
  t2557 = Sin(var1[4]);
  t1272 = Cos(var1[3]);
  t2953 = Sin(var1[5]);
  t3979 = Cos(var1[6]);
  t4150 = -1.*t3979;
  t4156 = 1. + t4150;
  t4197 = 0.15121*t4156;
  t4201 = Sin(var1[6]);
  t1986 = t1272*t1722;
  t3170 = -1.*t2397*t2557*t2953;
  t3916 = t1986 + t3170;
  t4890 = t1722*t2397*t2557;
  t4977 = t1272*t2953;
  t5226 = t4890 + t4977;
  t7594 = Cos(var1[7]);
  t7799 = t3979*t5226;
  t8337 = t3916*t4201;
  t8341 = t7799 + t8337;
  t8354 = Cos(var1[4]);
  t8919 = Sin(var1[7]);
  t9676 = Cos(var1[8]);
  t9812 = t7594*t8341;
  t9814 = t8354*t2397*t8919;
  t9815 = t9812 + t9814;
  t10171 = -1.*t8354*t7594*t2397;
  t10199 = t8341*t8919;
  t10201 = t10171 + t10199;
  t10202 = Sin(var1[8]);
  t4362 = -0.15121*t4201;
  t4390 = t4197 + t4362;
  t5354 = 0.15121*t4201;
  t5366 = t4197 + t5354;
  t7607 = -1.*t7594;
  t7788 = 1. + t7607;
  t9755 = -1.*t9676;
  t9775 = 1. + t9755;
  t10245 = -1.*t1272*t8354*t1722*t3979;
  t10253 = t1272*t8354*t2953*t4201;
  t10267 = t10245 + t10253;
  t10472 = t7594*t10267;
  t10473 = t1272*t2557*t8919;
  t10474 = t10472 + t10473;
  t10476 = -1.*t1272*t7594*t2557;
  t10515 = t10267*t8919;
  t10519 = t10476 + t10515;
  t10810 = t1722*t2397;
  t10817 = t1272*t2557*t2953;
  t10818 = t10810 + t10817;
  t10781 = t1272*t1722*t2557;
  t10795 = -1.*t2397*t2953;
  t10800 = t10781 + t10795;
  t10820 = t3979*t10818;
  t10821 = t10800*t4201;
  t10823 = t10820 + t10821;
  t11158 = -1.*t1272*t1722*t2557;
  t11394 = t2397*t2953;
  t11395 = t11158 + t11394;
  t11405 = -1.*t11395*t4201;
  t11410 = t10820 + t11405;
  t11112 = -1.*t10818*t4201;
  t11685 = t3979*t11395;
  t11686 = t10818*t4201;
  t11699 = t11685 + t11686;
  t11704 = -1.*t1272*t8354*t7594;
  t11705 = -1.*t11699*t8919;
  t11709 = t11704 + t11705;
  t11720 = t7594*t11699;
  t11721 = -1.*t1272*t8354*t8919;
  t11724 = t11720 + t11721;
  t12091 = t1272*t8354*t7594;
  t12096 = t11699*t8919;
  t12125 = t12091 + t12096;
  p_output1[0]=1.;
  p_output1[1]=-0.50321*t10201*t10202 + t3916*t4390 + 0.15121*(t3916*t3979 - 1.*t4201*t5226) + t5226*t5366 + 0.28121*t7788*t8341 - 0.28121*t2397*t8354*t8919 + 0.50321*t9775*t9815 + 0.23321*(t10201*t10202 + t9676*t9815);
  p_output1[2]=-0.50321*t10202*t10519 + 0.28121*t10267*t7788 + t1272*t2953*t4390*t8354 - 1.*t1272*t1722*t5366*t8354 + 0.15121*(t1272*t2953*t3979*t8354 + t1272*t1722*t4201*t8354) - 0.28121*t1272*t2557*t8919 + 0.23321*(t10202*t10519 + t10474*t9676) + 0.50321*t10474*t9775;
  p_output1[3]=0.15121*(t11112 + t10800*t3979) + t10800*t4390 + t10818*t5366 + 0.28121*t10823*t7788 - 0.50321*t10202*t10823*t8919 + 0.23321*(t10202*t10823*t8919 + t10823*t7594*t9676) + 0.50321*t10823*t7594*t9775;
  p_output1[4]=0.15121*(t11112 - 1.*t11395*t3979) + t10818*(-0.15121*t3979 + t5354) + t11395*(0.15121*t3979 + t5354) + 0.28121*t11410*t7788 - 0.50321*t10202*t11410*t8919 + 0.23321*(t10202*t11410*t8919 + t11410*t7594*t9676) + 0.50321*t11410*t7594*t9775;
  p_output1[5]=-0.50321*t10202*t11724 + 0.28121*t1272*t7594*t8354 + 0.28121*t11699*t8919 + 0.23321*(t10202*t11724 + t11709*t9676) + 0.50321*t11709*t9775;
  p_output1[6]=0.50321*t10202*t11724 - 0.50321*t12125*t9676 + 0.23321*(-1.*t10202*t11724 + t12125*t9676);
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

#include "J_u_frontSwingFootHeight2_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
