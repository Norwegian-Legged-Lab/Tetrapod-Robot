/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:14 GMT+02:00
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
  double t18501;
  double t13618;
  double t13619;
  double t13692;
  double t18503;
  double t18596;
  double t18616;
  double t18619;
  double t18620;
  double t18626;
  double t18629;
  double t437;
  double t18495;
  double t18504;
  double t18579;
  double t18656;
  double t18657;
  double t18660;
  double t18661;
  double t18663;
  double t18667;
  double t18668;
  double t18669;
  double t18672;
  double t18673;
  double t18675;
  double t18676;
  double t907;
  double t13542;
  double t18599;
  double t18605;
  double t18665;
  double t18666;
  double t18694;
  double t18695;
  double t18697;
  double t18699;
  double t18703;
  double t18710;
  double t18722;
  double t18727;
  double t18735;
  double t18942;
  double t18943;
  double t18949;
  double t19392;
  double t19394;
  double t19404;
  double t19415;
  double t19419;
  double t19426;
  double t19642;
  double t19643;
  double t19645;
  double t19753;
  double t19777;
  double t19787;
  double t19741;
  double t19742;
  double t19748;
  double t19979;
  double t19981;
  double t19996;
  double t20027;
  double t20033;
  double t20034;
  double t20005;
  double t20008;
  double t20011;
  double t20126;
  double t20147;
  double t20159;
  t18501 = Cos(var1[3]);
  t13618 = Cos(var1[5]);
  t13619 = Sin(var1[3]);
  t13692 = Sin(var1[4]);
  t18503 = Sin(var1[5]);
  t18596 = Cos(var1[6]);
  t18616 = t18501*t13618;
  t18619 = -1.*t13619*t13692*t18503;
  t18620 = t18616 + t18619;
  t18626 = Cos(var1[4]);
  t18629 = Sin(var1[6]);
  t437 = Cos(var1[7]);
  t18495 = t13618*t13619*t13692;
  t18504 = t18501*t18503;
  t18579 = t18495 + t18504;
  t18656 = -1.*t18626*t18596*t13619;
  t18657 = -1.*t18620*t18629;
  t18660 = t18656 + t18657;
  t18661 = Sin(var1[7]);
  t18663 = Cos(var1[8]);
  t18667 = t437*t18579;
  t18668 = t18660*t18661;
  t18669 = t18667 + t18668;
  t18672 = t437*t18660;
  t18673 = -1.*t18579*t18661;
  t18675 = t18672 + t18673;
  t18676 = Sin(var1[8]);
  t907 = -1.*t437;
  t13542 = 1. + t907;
  t18599 = -1.*t18596;
  t18605 = 1. + t18599;
  t18665 = -1.*t18663;
  t18666 = 1. + t18665;
  t18694 = -1.*t18501*t18596*t13692;
  t18695 = -1.*t18501*t18626*t18503*t18629;
  t18697 = t18694 + t18695;
  t18699 = -1.*t18501*t18626*t13618*t437;
  t18703 = t18697*t18661;
  t18710 = t18699 + t18703;
  t18722 = t437*t18697;
  t18727 = t18501*t18626*t13618*t18661;
  t18735 = t18722 + t18727;
  t18942 = t18501*t13618*t13692;
  t18943 = -1.*t13619*t18503;
  t18949 = t18942 + t18943;
  t19392 = t13618*t13619;
  t19394 = t18501*t13692*t18503;
  t19404 = t19392 + t19394;
  t19415 = t437*t19404;
  t19419 = -1.*t18949*t18629*t18661;
  t19426 = t19415 + t19419;
  t19642 = -1.*t437*t18949*t18629;
  t19643 = -1.*t19404*t18661;
  t19645 = t19642 + t19643;
  t19753 = -1.*t18596*t19404;
  t19777 = -1.*t18501*t18626*t18629;
  t19787 = t19753 + t19777;
  t19741 = t18501*t18626*t18596;
  t19742 = -1.*t19404*t18629;
  t19748 = t19741 + t19742;
  t19979 = -1.*t18501*t13618*t13692;
  t19981 = t13619*t18503;
  t19996 = t19979 + t19981;
  t20027 = -1.*t437*t19996;
  t20033 = -1.*t19748*t18661;
  t20034 = t20027 + t20033;
  t20005 = t437*t19748;
  t20008 = -1.*t19996*t18661;
  t20011 = t20005 + t20008;
  t20126 = t437*t19996;
  t20147 = t19748*t18661;
  t20159 = t20126 + t20147;
  p_output1[0]=1.;
  p_output1[1]=0.325*t13542*t18579 + 0.1575*t18605*t18620 + 0.1575*t13619*t18626*t18629 + 0.2255*(t18596*t18620 - 1.*t13619*t18626*t18629) - 0.325*t18660*t18661 + 0.075*t18666*t18669 + 0.075*t18675*t18676 - 0.0641*(t18663*t18675 + t18669*t18676) + 0.355*(t18663*t18669 - 1.*t18675*t18676);
  p_output1[2]=-0.325*t13542*t13618*t18501*t18626 + 0.1575*t18501*t18503*t18605*t18626 + 0.1575*t13692*t18501*t18629 + 0.2255*(t18501*t18503*t18596*t18626 - 1.*t13692*t18501*t18629) - 0.325*t18661*t18697 + 0.075*t18666*t18710 + 0.075*t18676*t18735 - 0.0641*(t18676*t18710 + t18663*t18735) + 0.355*(t18663*t18710 - 1.*t18676*t18735);
  p_output1[3]=0.2255*t18596*t18949 + 0.1575*t18605*t18949 + 0.325*t18629*t18661*t18949 + 0.325*t13542*t19404 + 0.075*t18666*t19426 + 0.075*t18676*t19645 - 0.0641*(t18676*t19426 + t18663*t19645) + 0.355*(t18663*t19426 - 1.*t18676*t19645);
  p_output1[4]=-0.1575*t18501*t18596*t18626 + 0.1575*t18629*t19404 + 0.2255*t19748 - 0.325*t18661*t19787 + 0.075*t18661*t18666*t19787 + 0.075*t18676*t19787*t437 - 0.0641*(t18661*t18676*t19787 + t18663*t19787*t437) + 0.355*(t18661*t18663*t19787 - 1.*t18676*t19787*t437);
  p_output1[5]=0.325*t18661*t19996 + 0.075*t18666*t20011 + 0.075*t18676*t20034 - 0.0641*(t18676*t20011 + t18663*t20034) + 0.355*(t18663*t20011 - 1.*t18676*t20034) - 0.325*t19748*t437;
  p_output1[6]=0.075*t18663*t20011 + 0.075*t18676*t20159 - 0.0641*(-1.*t18676*t20011 + t18663*t20159) + 0.355*(-1.*t18663*t20011 - 1.*t18676*t20159);
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
