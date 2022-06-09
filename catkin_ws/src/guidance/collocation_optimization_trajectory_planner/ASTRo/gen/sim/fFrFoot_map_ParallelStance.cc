/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:41 GMT+02:00
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
  double t3600;
  double t3594;
  double t3595;
  double t3601;
  double t3614;
  double t3621;
  double t3623;
  double t3609;
  double t3659;
  double t3608;
  double t3728;
  double t3606;
  double t3596;
  double t3602;
  double t3603;
  double t3604;
  double t3625;
  double t3746;
  double t3754;
  double t3834;
  double t3804;
  double t3812;
  double t3818;
  double t3791;
  double t3844;
  double t3848;
  double t3896;
  double t3928;
  double t3929;
  double t4116;
  double t10230;
  double t10735;
  double t12931;
  double t12935;
  double t12949;
  double t12951;
  double t12979;
  double t13000;
  double t13002;
  double t13003;
  double t13005;
  double t13010;
  double t13011;
  double t13051;
  double t13052;
  double t13053;
  double t11243;
  double t12738;
  double t12930;
  double t13013;
  double t13016;
  double t13086;
  double t13087;
  double t13167;
  double t13248;
  double t13255;
  double t13258;
  double t13260;
  double t13288;
  double t13291;
  double t13300;
  double t13022;
  double t13062;
  double t13063;
  double t3924;
  double t4218;
  double t8176;
  double t8386;
  double t8390;
  double t8659;
  double t13287;
  double t13301;
  double t13303;
  double t13310;
  double t13311;
  double t13315;
  double t13321;
  double t13329;
  double t13330;
  double t8670;
  double t9691;
  double t10151;
  double t13082;
  double t13335;
  double t3605;
  double t3781;
  double t3787;
  double t13339;
  double t13356;
  double t13365;
  double t13484;
  double t13672;
  double t13718;
  double t13729;
  double t13871;
  double t13892;
  t3600 = Cos(var1[13]);
  t3594 = Cos(var1[14]);
  t3595 = Sin(var1[13]);
  t3601 = Sin(var1[14]);
  t3614 = t3600*t3594;
  t3621 = t3595*t3601;
  t3623 = t3614 + t3621;
  t3609 = Cos(var1[5]);
  t3659 = Sin(var1[12]);
  t3608 = Cos(var1[12]);
  t3728 = Sin(var1[5]);
  t3606 = Cos(var1[4]);
  t3596 = -1.*t3594*t3595;
  t3602 = t3600*t3601;
  t3603 = t3596 + t3602;
  t3604 = Sin(var1[4]);
  t3625 = t3608*t3609*t3623;
  t3746 = -1.*t3659*t3623*t3728;
  t3754 = t3625 + t3746;
  t3834 = Sin(var1[3]);
  t3804 = t3609*t3659*t3623;
  t3812 = t3608*t3623*t3728;
  t3818 = t3804 + t3812;
  t3791 = Cos(var1[3]);
  t3844 = t3606*t3603;
  t3848 = -1.*t3604*t3754;
  t3896 = t3844 + t3848;
  t3928 = t3594*t3595;
  t3929 = -1.*t3600*t3601;
  t4116 = t3928 + t3929;
  t10230 = -1.*t3608;
  t10735 = 1. + t10230;
  t12931 = -1.*t3600;
  t12935 = 1. + t12931;
  t12949 = 0.28121*t12935;
  t12951 = -1.*t3594;
  t12979 = 1. + t12951;
  t13000 = 0.50321*t12979;
  t13002 = 0.19821*t3594;
  t13003 = t13000 + t13002;
  t13005 = t3600*t13003;
  t13010 = -0.305*t3595*t3601;
  t13011 = t12949 + t13005 + t13010;
  t13051 = 0.15121*t10735;
  t13052 = t3608*t13011;
  t13053 = t13051 + t13052;
  t11243 = -0.15121*t10735;
  t12738 = -0.15121*t3608;
  t12930 = -0.15121*t3659;
  t13013 = t3659*t13011;
  t13016 = t11243 + t12738 + t12930 + t13013;
  t13086 = -1.*t3609*t3659;
  t13087 = -1.*t3608*t3728;
  t13167 = t13086 + t13087;
  t13248 = 0.28121*t3595;
  t13255 = -1.*t13003*t3595;
  t13258 = -0.305*t3600*t3601;
  t13260 = t13248 + t13255 + t13258;
  t13288 = t3609*t13053;
  t13291 = -1.*t13016*t3728;
  t13300 = t13288 + t13291;
  t13022 = t3609*t13016;
  t13062 = t13053*t3728;
  t13063 = t13022 + t13062;
  t3924 = t3623*t3604;
  t4218 = t3608*t3609*t4116;
  t8176 = -1.*t3659*t4116*t3728;
  t8386 = t4218 + t8176;
  t8390 = t3606*t8386;
  t8659 = t3924 + t8390;
  t13287 = t13260*t3604;
  t13301 = t3606*t13300;
  t13303 = t13287 + t13301;
  t13310 = t3606*t13260;
  t13311 = -1.*t3604*t13300;
  t13315 = t13310 + t13311;
  t13321 = t3609*t3659*t4116;
  t13329 = t3608*t4116*t3728;
  t13330 = t13321 + t13329;
  t8670 = t3608*t3609;
  t9691 = -1.*t3659*t3728;
  t10151 = t8670 + t9691;
  t13082 = -1.*t10151*t13063;
  t13335 = t13330*t13063;
  t3605 = t3603*t3604;
  t3781 = t3606*t3754;
  t3787 = t3605 + t3781;
  t13339 = t3606*t3623;
  t13356 = -1.*t3604*t8386;
  t13365 = t13339 + t13356;
  t13484 = -1.*t13330*t13063;
  t13672 = t3818*t13063;
  t13718 = -1.*t13260*t3623;
  t13729 = t13260*t3603;
  t13871 = t10151*t13063;
  t13892 = -1.*t3818*t13063;
  p_output1[0]=t3787;
  p_output1[1]=t3791*t3818 - 1.*t3834*t3896;
  p_output1[2]=t3818*t3834 + t3791*t3896;
  p_output1[3]=(t13082 + t13167*t13315*t3604 - 1.*t13167*t13303*t3606)*t8659 + t13167*t3606*(t13335 + t13315*t13365 + t13303*t8659);
  p_output1[4]=(t13082 - 1.*t13167*t13300)*t13330 + t10151*(t13335 + t13260*t3623 + t13300*t8386);
  p_output1[5]=t3623*(-1.*t13016*t3608 + t13053*t3659);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3601 - 1.*t13003*t3601 - 0.305*t3594*t3601;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13167*t3606;
  p_output1[19]=t10151*t3791 + t13167*t3604*t3834;
  p_output1[20]=-1.*t13167*t3604*t3791 + t10151*t3834;
  p_output1[21]=(t13672 + t13303*t3787 + t13315*t3896)*t8659 + t3787*(-1.*t13315*t13365 + t13484 - 1.*t13303*t8659);
  p_output1[22]=t13330*(t13672 + t13729 + t13300*t3754) + t3818*(t13484 + t13718 - 1.*t13300*t8386);
  p_output1[23]=t3623*(t13729 + t13053*t3608*t3623 + t13016*t3623*t3659) + t3603*(t13718 - 1.*t13053*t3608*t4116 - 1.*t13016*t3659*t4116);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3623*(t13729 + t13011*t3623) + t3603*(t13718 - 1.*t13011*t4116);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8659;
  p_output1[37]=t13330*t3791 - 1.*t13365*t3834;
  p_output1[38]=t13365*t3791 + t13330*t3834;
  p_output1[39]=(t13871 - 1.*t13167*t13315*t3604 + t13167*t13303*t3606)*t3787 + t13167*t3606*(t13892 - 1.*t13303*t3787 - 1.*t13315*t3896);
  p_output1[40]=t10151*(t13892 - 1.*t13260*t3603 - 1.*t13300*t3754) + (t13167*t13300 + t13871)*t3818;
  p_output1[41]=t3603*(t13016*t3608 - 1.*t13053*t3659);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3603 - 0.15121*t4116;
  p_output1[49]=0.28121*t3594 - 1.*t13003*t3594 + 0.305*Power(t3601,2);
  p_output1[50]=-0.305;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
