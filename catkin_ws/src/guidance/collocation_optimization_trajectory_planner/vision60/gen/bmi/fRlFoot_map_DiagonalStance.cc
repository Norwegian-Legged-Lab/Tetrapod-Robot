/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:54:52 GMT+02:00
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
  double t3756;
  double t3753;
  double t3754;
  double t3757;
  double t3755;
  double t3824;
  double t3854;
  double t3877;
  double t3889;
  double t3881;
  double t3885;
  double t3886;
  double t3890;
  double t3746;
  double t3873;
  double t3856;
  double t3888;
  double t3892;
  double t3893;
  double t3916;
  double t3908;
  double t3913;
  double t3914;
  double t3900;
  double t3919;
  double t3920;
  double t3921;
  double t3960;
  double t3962;
  double t3965;
  double t3973;
  double t3983;
  double t3988;
  double t3989;
  double t3990;
  double t3995;
  double t3959;
  double t3969;
  double t3996;
  double t3997;
  double t4002;
  double t4003;
  double t4004;
  double t4007;
  double t4008;
  double t4009;
  double t3951;
  double t3953;
  double t3955;
  double t3958;
  double t3998;
  double t4000;
  double t4024;
  double t4025;
  double t4027;
  double t4029;
  double t4030;
  double t4032;
  double t4015;
  double t4019;
  double t4023;
  double t4001;
  double t4010;
  double t4013;
  double t3939;
  double t3940;
  double t3941;
  double t4028;
  double t4033;
  double t4034;
  double t3935;
  double t3942;
  double t3943;
  double t3944;
  double t3946;
  double t3950;
  double t4042;
  double t4046;
  double t4047;
  double t4051;
  double t4052;
  double t4053;
  double t4014;
  double t4054;
  double t4063;
  double t4067;
  double t4037;
  double t4040;
  double t4041;
  double t3857;
  double t3894;
  double t3895;
  double t4056;
  double t4057;
  double t4058;
  double t4103;
  double t4110;
  double t4120;
  double t4116;
  double t4130;
  double t4125;
  double t4160;
  double t4171;
  double t4186;
  double t4196;
  t3756 = Cos(var1[10]);
  t3753 = Cos(var1[11]);
  t3754 = Sin(var1[10]);
  t3757 = Sin(var1[11]);
  t3755 = t3753*t3754;
  t3824 = -1.*t3756*t3757;
  t3854 = t3755 + t3824;
  t3877 = Cos(var1[5]);
  t3889 = Sin(var1[9]);
  t3881 = t3756*t3753;
  t3885 = t3754*t3757;
  t3886 = t3881 + t3885;
  t3890 = Sin(var1[5]);
  t3746 = Cos(var1[9]);
  t3873 = Cos(var1[4]);
  t3856 = Sin(var1[4]);
  t3888 = t3877*t3886;
  t3892 = t3889*t3854*t3890;
  t3893 = t3888 + t3892;
  t3916 = Sin(var1[3]);
  t3908 = -1.*t3877*t3889*t3854;
  t3913 = t3886*t3890;
  t3914 = t3908 + t3913;
  t3900 = Cos(var1[3]);
  t3919 = t3746*t3873*t3854;
  t3920 = -1.*t3856*t3893;
  t3921 = t3919 + t3920;
  t3960 = -0.0641*t3753;
  t3962 = -0.28*t3757;
  t3965 = t3960 + t3962;
  t3973 = -1.*t3753;
  t3983 = 1. + t3973;
  t3988 = -0.575*t3983;
  t3989 = -0.295*t3753;
  t3990 = -0.0641*t3757;
  t3995 = t3988 + t3989 + t3990;
  t3959 = 0.325*t3754;
  t3969 = t3756*t3965;
  t3996 = t3754*t3995;
  t3997 = t3959 + t3969 + t3996;
  t4002 = -1.*t3756;
  t4003 = 1. + t4002;
  t4004 = -0.325*t4003;
  t4007 = -1.*t3754*t3965;
  t4008 = t3756*t3995;
  t4009 = t4004 + t4007 + t4008;
  t3951 = -1.*t3746;
  t3953 = 1. + t3951;
  t3955 = 0.1575*t3953;
  t3958 = 0.2255*t3746;
  t3998 = -1.*t3889*t3997;
  t4000 = t3955 + t3958 + t3998;
  t4024 = 0.068*t3889;
  t4025 = t3746*t3997;
  t4027 = t4024 + t4025;
  t4029 = t3877*t4009;
  t4030 = -1.*t4000*t3890;
  t4032 = t4029 + t4030;
  t4015 = t3889*t3856;
  t4019 = -1.*t3746*t3873*t3890;
  t4023 = t4015 + t4019;
  t4001 = t3877*t4000;
  t4010 = t4009*t3890;
  t4013 = t4001 + t4010;
  t3939 = -1.*t3753*t3754;
  t3940 = t3756*t3757;
  t3941 = t3939 + t3940;
  t4028 = t4027*t3856;
  t4033 = t3873*t4032;
  t4034 = t4028 + t4033;
  t3935 = t3746*t3886*t3856;
  t3942 = t3877*t3941;
  t3943 = t3889*t3886*t3890;
  t3944 = t3942 + t3943;
  t3946 = t3873*t3944;
  t3950 = t3935 + t3946;
  t4042 = t3873*t4027;
  t4046 = -1.*t3856*t4032;
  t4047 = t4042 + t4046;
  t4051 = -1.*t3877*t3889*t3886;
  t4052 = t3941*t3890;
  t4053 = t4051 + t4052;
  t4014 = -1.*t3746*t3877*t4013;
  t4054 = t4013*t4053;
  t4063 = -1.*t3889*t4027;
  t4067 = t3746*t4027*t3886;
  t4037 = t3873*t3889;
  t4040 = t3746*t3856*t3890;
  t4041 = t4037 + t4040;
  t3857 = t3746*t3854*t3856;
  t3894 = t3873*t3893;
  t3895 = t3857 + t3894;
  t4056 = t3746*t3873*t3886;
  t4057 = -1.*t3856*t3944;
  t4058 = t4056 + t4057;
  t4103 = t4013*t3914;
  t4110 = -1.*t4013*t4053;
  t4120 = -1.*t3746*t4027*t3886;
  t4116 = t3746*t4027*t3854;
  t4130 = t4009*t3886;
  t4125 = -1.*t4009*t3941;
  t4160 = t3746*t3877*t4013;
  t4171 = -1.*t4013*t3914;
  t4186 = t3889*t4027;
  t4196 = -1.*t3746*t4027*t3854;
  p_output1[0]=t3895;
  p_output1[1]=t3900*t3914 - 1.*t3916*t3921;
  p_output1[2]=t3914*t3916 + t3900*t3921;
  p_output1[3]=t3950*(t4014 - 1.*t4023*t4034 - 1.*t4041*t4047) + t4023*(t3950*t4034 + t4054 + t4047*t4058);
  p_output1[4]=t4053*(t4014 + t3746*t3890*t4032 + t4063) + t3746*t3877*(t3944*t4032 + t4054 + t4067);
  p_output1[5]=t3746*t3886*(-1.*t3746*t4000 + t4063) + t3889*(-1.*t3886*t3889*t4000 + t3941*t4009 + t4067);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t3854 - 0.2255*t3941;
  p_output1[10]=-0.325*t3757 - 1.*t3753*t3965 - 1.*t3757*t3995;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4023;
  p_output1[19]=t3746*t3877*t3900 - 1.*t3916*t4041;
  p_output1[20]=t3746*t3877*t3916 + t3900*t4041;
  p_output1[21]=t3950*(t3895*t4034 + t3921*t4047 + t4103) + t3895*(-1.*t3950*t4034 - 1.*t4047*t4058 + t4110);
  p_output1[22]=t4053*(t3893*t4032 + t4103 + t4116) + t3914*(-1.*t3944*t4032 + t4110 + t4120);
  p_output1[23]=t3746*t3854*(t3886*t3889*t4000 + t4120 + t4125) + t3746*t3886*(-1.*t3854*t3889*t4000 + t4116 + t4130);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t3886*(-1.*t3886*t3997 + t4125) + t3941*(t3854*t3997 + t4130);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3950;
  p_output1[37]=t3900*t4053 - 1.*t3916*t4058;
  p_output1[38]=t3916*t4053 + t3900*t4058;
  p_output1[39]=t3895*(t4023*t4034 + t4041*t4047 + t4160) + t4023*(-1.*t3895*t4034 - 1.*t3921*t4047 + t4171);
  p_output1[40]=t3914*(-1.*t3746*t3890*t4032 + t4160 + t4186) + t3746*t3877*(-1.*t3893*t4032 + t4171 + t4196);
  p_output1[41]=t3746*t3854*(t3746*t4000 + t4186) + t3889*(t3854*t3889*t4000 - 1.*t3886*t4009 + t4196);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t3886;
  p_output1[46]=0.325*t3753 - 1.*t3757*t3965 + t3753*t3995;
  p_output1[47]=-0.28;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
