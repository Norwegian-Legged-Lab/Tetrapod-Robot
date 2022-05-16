/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 17:55:02 GMT+02:00
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
  double t1059;
  double t1445;
  double t2024;
  double t2165;
  double t2339;
  double t2371;
  double t3018;
  double t2641;
  double t2750;
  double t3170;
  double t2935;
  double t3372;
  double t3638;
  double t3881;
  double t3975;
  double t3979;
  double t457;
  double t883;
  double t4377;
  double t4417;
  double t4664;
  double t4964;
  double t4977;
  double t5069;
  double t5071;
  double t5095;
  double t5282;
  double t5286;
  double t5366;
  double t6492;
  double t2332;
  double t2374;
  double t3768;
  double t3845;
  double t4379;
  double t4390;
  double t4985;
  double t4986;
  double t6706;
  double t6707;
  double t6736;
  double t6759;
  double t6761;
  double t6825;
  double t6924;
  double t7594;
  double t7825;
  double t7990;
  double t8002;
  double t8004;
  double t8909;
  double t8928;
  double t8935;
  double t8943;
  double t8955;
  double t8956;
  double t10171;
  double t10400;
  double t10401;
  double t10469;
  double t10599;
  double t10681;
  double t9447;
  double t10872;
  double t10887;
  double t11158;
  double t11405;
  double t11410;
  double t11617;
  double t11709;
  double t12078;
  double t12091;
  double t12958;
  double t12986;
  double t13103;
  t1059 = Sin(var1[3]);
  t1445 = Cos(var1[9]);
  t2024 = -1.*t1445;
  t2165 = 1. + t2024;
  t2339 = Sin(var1[9]);
  t2371 = 0.15121*t2339;
  t3018 = Cos(var1[3]);
  t2641 = Cos(var1[5]);
  t2750 = Sin(var1[4]);
  t3170 = Sin(var1[5]);
  t2935 = t2641*t1059*t2750;
  t3372 = t3018*t3170;
  t3638 = t2935 + t3372;
  t3881 = t3018*t2641;
  t3975 = -1.*t1059*t2750*t3170;
  t3979 = t3881 + t3975;
  t457 = Cos(var1[4]);
  t883 = Sin(var1[10]);
  t4377 = Cos(var1[10]);
  t4417 = t1445*t3638;
  t4664 = t2339*t3979;
  t4964 = t4417 + t4664;
  t4977 = Cos(var1[11]);
  t5069 = -1.*t457*t883*t1059;
  t5071 = t4377*t4964;
  t5095 = t5069 + t5071;
  t5282 = Sin(var1[11]);
  t5286 = -1.*t4377*t457*t1059;
  t5366 = -1.*t883*t4964;
  t6492 = t5286 + t5366;
  t2332 = -0.15121*t2165;
  t2374 = t2332 + t2371;
  t3768 = 0.15121*t2165;
  t3845 = t3768 + t2371;
  t4379 = -1.*t4377;
  t4390 = 1. + t4379;
  t4985 = -1.*t4977;
  t4986 = 1. + t4985;
  t6706 = -1.*t1445*t3018*t457*t2641;
  t6707 = t3018*t457*t2339*t3170;
  t6736 = t6706 + t6707;
  t6759 = -1.*t3018*t883*t2750;
  t6761 = t4377*t6736;
  t6825 = t6759 + t6761;
  t6924 = -1.*t4377*t3018*t2750;
  t7594 = -1.*t883*t6736;
  t7825 = t6924 + t7594;
  t7990 = t3018*t2641*t2750;
  t8002 = -1.*t1059*t3170;
  t8004 = t7990 + t8002;
  t8909 = t2641*t1059;
  t8928 = t3018*t2750*t3170;
  t8935 = t8909 + t8928;
  t8943 = t2339*t8004;
  t8955 = t1445*t8935;
  t8956 = t8943 + t8955;
  t10171 = 0.15121*t1445;
  t10400 = -1.*t3018*t2641*t2750;
  t10401 = t1059*t3170;
  t10469 = t10400 + t10401;
  t10599 = -1.*t2339*t10469;
  t10681 = t10599 + t8955;
  t9447 = -1.*t2339*t8935;
  t10872 = t1445*t10469;
  t10887 = t2339*t8935;
  t11158 = t10872 + t10887;
  t11405 = -1.*t3018*t457*t883;
  t11410 = -1.*t4377*t11158;
  t11617 = t11405 + t11410;
  t11709 = t4377*t3018*t457;
  t12078 = -1.*t883*t11158;
  t12091 = t11709 + t12078;
  t12958 = t3018*t457*t883;
  t12986 = t4377*t11158;
  t13103 = t12958 + t12986;
  p_output1[0]=1.;
  p_output1[1]=t2374*t3638 + t3845*t3979 + 0.15121*(-1.*t2339*t3638 + t1445*t3979) - 0.28121*t4390*t4964 - 0.50321*t4986*t5095 - 0.50321*t5282*t6492 - 0.23321*(t4977*t5095 - 1.*t5282*t6492) - 0.28121*t1059*t457*t883;
  p_output1[2]=-1.*t2374*t2641*t3018*t457 + t3018*t3170*t3845*t457 + 0.15121*(t2339*t2641*t3018*t457 + t1445*t3018*t3170*t457) - 0.28121*t4390*t6736 - 0.50321*t4986*t6825 - 0.50321*t5282*t7825 - 0.23321*(t4977*t6825 - 1.*t5282*t7825) - 0.28121*t2750*t3018*t883;
  p_output1[3]=t3845*t8004 + t2374*t8935 - 0.28121*t4390*t8956 - 0.50321*t4377*t4986*t8956 + 0.50321*t5282*t883*t8956 - 0.23321*(t4377*t4977*t8956 + t5282*t883*t8956) + 0.15121*(t1445*t8004 + t9447);
  p_output1[4]=t10469*(t10171 - 0.15121*t2339) - 0.28121*t10681*t4390 - 0.50321*t10681*t4377*t4986 + 0.50321*t10681*t5282*t883 - 0.23321*(t10681*t4377*t4977 + t10681*t5282*t883) + (t10171 + t2371)*t8935 + 0.15121*(-1.*t10469*t1445 + t9447);
  p_output1[5]=0.28121*t3018*t4377*t457 - 0.50321*t12091*t4986 - 0.50321*t11617*t5282 - 0.23321*(t12091*t4977 - 1.*t11617*t5282) - 0.28121*t11158*t883;
  p_output1[6]=-0.50321*t12091*t4977 - 0.50321*t13103*t5282 - 0.23321*(-1.*t12091*t4977 - 1.*t13103*t5282);
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

#include "J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
