/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:26:32 GMT+02:00
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
  double t1486;
  double t4113;
  double t3891;
  double t3894;
  double t4291;
  double t870;
  double t1376;
  double t4729;
  double t5329;
  double t5330;
  double t5331;
  double t5462;
  double t3989;
  double t4331;
  double t4726;
  double t2951;
  double t5471;
  double t5475;
  double t5476;
  double t5479;
  double t5480;
  double t5481;
  double t5486;
  double t5489;
  double t5494;
  double t5495;
  double t5496;
  double t3876;
  double t3890;
  double t5314;
  double t5327;
  double t5550;
  double t5552;
  double t5554;
  double t5490;
  double t5491;
  double t5560;
  double t5561;
  double t5563;
  double t5565;
  double t5566;
  double t5568;
  double t5584;
  double t5585;
  double t5586;
  double t5590;
  double t5591;
  double t5592;
  double t5595;
  double t5596;
  double t5597;
  double t5600;
  double t5601;
  double t5603;
  double t5634;
  double t5640;
  double t5671;
  double t5707;
  double t5721;
  double t5750;
  double t7139;
  double t7206;
  double t7301;
  double t7476;
  double t7644;
  double t7701;
  double t7757;
  double t7822;
  double t7866;
  double t8908;
  double t9146;
  double t9429;
  t1486 = Sin(var1[3]);
  t4113 = Cos(var1[3]);
  t3891 = Cos(var1[5]);
  t3894 = Sin(var1[4]);
  t4291 = Sin(var1[5]);
  t870 = Cos(var1[4]);
  t1376 = Sin(var1[9]);
  t4729 = Cos(var1[9]);
  t5329 = t4113*t3891;
  t5330 = -1.*t1486*t3894*t4291;
  t5331 = t5329 + t5330;
  t5462 = Sin(var1[10]);
  t3989 = t3891*t1486*t3894;
  t4331 = t4113*t4291;
  t4726 = t3989 + t4331;
  t2951 = Cos(var1[10]);
  t5471 = -1.*t4729*t870*t1486;
  t5475 = -1.*t1376*t5331;
  t5476 = t5471 + t5475;
  t5479 = Sin(var1[11]);
  t5480 = -1.*t5462*t4726;
  t5481 = t2951*t5476;
  t5486 = t5480 + t5481;
  t5489 = Cos(var1[11]);
  t5494 = t2951*t4726;
  t5495 = t5462*t5476;
  t5496 = t5494 + t5495;
  t3876 = -1.*t2951;
  t3890 = 1. + t3876;
  t5314 = -1.*t4729;
  t5327 = 1. + t5314;
  t5550 = -1.*t4729*t4113*t3894;
  t5552 = -1.*t4113*t870*t1376*t4291;
  t5554 = t5550 + t5552;
  t5490 = -1.*t5489;
  t5491 = 1. + t5490;
  t5560 = t4113*t870*t3891*t5462;
  t5561 = t2951*t5554;
  t5563 = t5560 + t5561;
  t5565 = -1.*t2951*t4113*t870*t3891;
  t5566 = t5462*t5554;
  t5568 = t5565 + t5566;
  t5584 = t4113*t3891*t3894;
  t5585 = -1.*t1486*t4291;
  t5586 = t5584 + t5585;
  t5590 = t3891*t1486;
  t5591 = t4113*t3894*t4291;
  t5592 = t5590 + t5591;
  t5595 = -1.*t1376*t5462*t5586;
  t5596 = t2951*t5592;
  t5597 = t5595 + t5596;
  t5600 = -1.*t2951*t1376*t5586;
  t5601 = -1.*t5462*t5592;
  t5603 = t5600 + t5601;
  t5634 = -1.*t4113*t870*t1376;
  t5640 = -1.*t4729*t5592;
  t5671 = t5634 + t5640;
  t5707 = t4729*t4113*t870;
  t5721 = -1.*t1376*t5592;
  t5750 = t5707 + t5721;
  t7139 = -1.*t4113*t3891*t3894;
  t7206 = t1486*t4291;
  t7301 = t7139 + t7206;
  t7476 = -1.*t5462*t7301;
  t7644 = t2951*t5750;
  t7701 = t7476 + t7644;
  t7757 = -1.*t2951*t7301;
  t7822 = -1.*t5462*t5750;
  t7866 = t7757 + t7822;
  t8908 = t2951*t7301;
  t9146 = t5462*t5750;
  t9429 = t8908 + t9146;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t3890*t4726 + 0.1575*t5327*t5331 + 0.325*t5462*t5476 - 0.575*t5479*t5486 - 0.575*t5491*t5496 - 0.0641*(t5486*t5489 + t5479*t5496) - 0.295*(-1.*t5479*t5486 + t5489*t5496) + 0.1575*t1376*t1486*t870 + 0.2255*(t4729*t5331 - 1.*t1376*t1486*t870);
  p_output1[2]=0.1575*t1376*t3894*t4113 + 0.325*t5462*t5554 - 0.575*t5479*t5563 - 0.575*t5491*t5568 - 0.0641*(t5489*t5563 + t5479*t5568) - 0.295*(-1.*t5479*t5563 + t5489*t5568) + 0.325*t3890*t3891*t4113*t870 + 0.1575*t4113*t4291*t5327*t870 + 0.2255*(-1.*t1376*t3894*t4113 + t4113*t4291*t4729*t870);
  p_output1[3]=0.2255*t4729*t5586 + 0.1575*t5327*t5586 - 0.325*t1376*t5462*t5586 - 0.325*t3890*t5592 - 0.575*t5491*t5597 - 0.575*t5479*t5603 - 0.295*(t5489*t5597 - 1.*t5479*t5603) - 0.0641*(t5479*t5597 + t5489*t5603);
  p_output1[4]=0.1575*t1376*t5592 + 0.325*t5462*t5671 - 0.575*t2951*t5479*t5671 - 0.575*t5462*t5491*t5671 - 0.0641*(t5462*t5479*t5671 + t2951*t5489*t5671) - 0.295*(-1.*t2951*t5479*t5671 + t5462*t5489*t5671) + 0.2255*t5750 - 0.1575*t4113*t4729*t870;
  p_output1[5]=0.325*t2951*t5750 - 0.325*t5462*t7301 - 0.575*t5491*t7701 - 0.575*t5479*t7866 - 0.295*(t5489*t7701 - 1.*t5479*t7866) - 0.0641*(t5479*t7701 + t5489*t7866);
  p_output1[6]=-0.575*t5489*t7701 - 0.575*t5479*t9429 - 0.295*(-1.*t5489*t7701 - 1.*t5479*t9429) - 0.0641*(-1.*t5479*t7701 + t5489*t9429);
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
