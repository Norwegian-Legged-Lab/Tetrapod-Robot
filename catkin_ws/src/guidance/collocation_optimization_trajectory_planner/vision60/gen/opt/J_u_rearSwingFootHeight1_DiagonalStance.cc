/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:46 GMT+02:00
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
  double t6624;
  double t29404;
  double t27654;
  double t29379;
  double t30457;
  double t5722;
  double t5909;
  double t37320;
  double t42803;
  double t42813;
  double t43023;
  double t43465;
  double t29394;
  double t32735;
  double t34072;
  double t20410;
  double t43473;
  double t43476;
  double t43991;
  double t44026;
  double t44031;
  double t44153;
  double t44239;
  double t44480;
  double t44883;
  double t44926;
  double t45046;
  double t23026;
  double t27528;
  double t42568;
  double t42775;
  double t46742;
  double t46743;
  double t46745;
  double t44656;
  double t44694;
  double t46850;
  double t47066;
  double t47089;
  double t47395;
  double t47399;
  double t47402;
  double t47652;
  double t47945;
  double t47965;
  double t48064;
  double t48068;
  double t48085;
  double t48101;
  double t48102;
  double t48103;
  double t48105;
  double t48106;
  double t48121;
  double t48294;
  double t48295;
  double t48296;
  double t48552;
  double t48553;
  double t48559;
  double t48610;
  double t48611;
  double t48612;
  double t48615;
  double t48616;
  double t48617;
  double t48619;
  double t48620;
  double t48621;
  double t55657;
  double t55719;
  double t55738;
  t6624 = Sin(var1[3]);
  t29404 = Cos(var1[3]);
  t27654 = Cos(var1[5]);
  t29379 = Sin(var1[4]);
  t30457 = Sin(var1[5]);
  t5722 = Cos(var1[4]);
  t5909 = Sin(var1[15]);
  t37320 = Cos(var1[15]);
  t42803 = t29404*t27654;
  t42813 = -1.*t6624*t29379*t30457;
  t43023 = t42803 + t42813;
  t43465 = Sin(var1[16]);
  t29394 = t27654*t6624*t29379;
  t32735 = t29404*t30457;
  t34072 = t29394 + t32735;
  t20410 = Cos(var1[16]);
  t43473 = -1.*t37320*t5722*t6624;
  t43476 = -1.*t5909*t43023;
  t43991 = t43473 + t43476;
  t44026 = Sin(var1[17]);
  t44031 = -1.*t43465*t34072;
  t44153 = t20410*t43991;
  t44239 = t44031 + t44153;
  t44480 = Cos(var1[17]);
  t44883 = t20410*t34072;
  t44926 = t43465*t43991;
  t45046 = t44883 + t44926;
  t23026 = -1.*t20410;
  t27528 = 1. + t23026;
  t42568 = -1.*t37320;
  t42775 = 1. + t42568;
  t46742 = -1.*t37320*t29404*t29379;
  t46743 = -1.*t29404*t5722*t5909*t30457;
  t46745 = t46742 + t46743;
  t44656 = -1.*t44480;
  t44694 = 1. + t44656;
  t46850 = t29404*t5722*t27654*t43465;
  t47066 = t20410*t46745;
  t47089 = t46850 + t47066;
  t47395 = -1.*t20410*t29404*t5722*t27654;
  t47399 = t43465*t46745;
  t47402 = t47395 + t47399;
  t47652 = t29404*t27654*t29379;
  t47945 = -1.*t6624*t30457;
  t47965 = t47652 + t47945;
  t48064 = t27654*t6624;
  t48068 = t29404*t29379*t30457;
  t48085 = t48064 + t48068;
  t48101 = -1.*t5909*t43465*t47965;
  t48102 = t20410*t48085;
  t48103 = t48101 + t48102;
  t48105 = -1.*t20410*t5909*t47965;
  t48106 = -1.*t43465*t48085;
  t48121 = t48105 + t48106;
  t48294 = -1.*t29404*t5722*t5909;
  t48295 = -1.*t37320*t48085;
  t48296 = t48294 + t48295;
  t48552 = t37320*t29404*t5722;
  t48553 = -1.*t5909*t48085;
  t48559 = t48552 + t48553;
  t48610 = -1.*t29404*t27654*t29379;
  t48611 = t6624*t30457;
  t48612 = t48610 + t48611;
  t48615 = -1.*t43465*t48612;
  t48616 = t20410*t48559;
  t48617 = t48615 + t48616;
  t48619 = -1.*t20410*t48612;
  t48620 = -1.*t43465*t48559;
  t48621 = t48619 + t48620;
  t55657 = t20410*t48612;
  t55719 = t43465*t48559;
  t55738 = t55657 + t55719;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t27528*t34072 - 0.1575*t42775*t43023 + 0.325*t43465*t43991 - 0.575*t44026*t44239 - 0.575*t44694*t45046 - 0.0641*(t44239*t44480 + t44026*t45046) - 0.295*(-1.*t44026*t44239 + t44480*t45046) - 0.1575*t5722*t5909*t6624 - 0.2255*(t37320*t43023 - 1.*t5722*t5909*t6624);
  p_output1[2]=0.325*t43465*t46745 - 0.575*t44026*t47089 - 0.575*t44694*t47402 - 0.0641*(t44480*t47089 + t44026*t47402) - 0.295*(-1.*t44026*t47089 + t44480*t47402) + 0.325*t27528*t27654*t29404*t5722 - 0.1575*t29404*t30457*t42775*t5722 - 0.1575*t29379*t29404*t5909 - 0.2255*(t29404*t30457*t37320*t5722 - 1.*t29379*t29404*t5909);
  p_output1[3]=-0.2255*t37320*t47965 - 0.1575*t42775*t47965 - 0.325*t27528*t48085 - 0.575*t44694*t48103 - 0.575*t44026*t48121 - 0.295*(t44480*t48103 - 1.*t44026*t48121) - 0.0641*(t44026*t48103 + t44480*t48121) - 0.325*t43465*t47965*t5909;
  p_output1[4]=0.325*t43465*t48296 - 0.575*t20410*t44026*t48296 - 0.575*t43465*t44694*t48296 - 0.0641*(t43465*t44026*t48296 + t20410*t44480*t48296) - 0.295*(-1.*t20410*t44026*t48296 + t43465*t44480*t48296) - 0.2255*t48559 + 0.1575*t29404*t37320*t5722 - 0.1575*t48085*t5909;
  p_output1[5]=0.325*t20410*t48559 - 0.325*t43465*t48612 - 0.575*t44694*t48617 - 0.575*t44026*t48621 - 0.295*(t44480*t48617 - 1.*t44026*t48621) - 0.0641*(t44026*t48617 + t44480*t48621);
  p_output1[6]=-0.575*t44480*t48617 - 0.575*t44026*t55738 - 0.295*(-1.*t44480*t48617 - 1.*t44026*t55738) - 0.0641*(-1.*t44026*t48617 + t44480*t55738);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
