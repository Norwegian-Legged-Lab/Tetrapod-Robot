/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:56 GMT+01:00
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
  double t191;
  double t208;
  double t363;
  double t396;
  double t217;
  double t364;
  double t610;
  double t891;
  double t3796;
  double t3868;
  double t3861;
  double t3877;
  double t3878;
  double t3883;
  double t3895;
  double t3911;
  double t3859;
  double t3882;
  double t3912;
  double t3914;
  double t4240;
  double t4241;
  double t4242;
  double t4244;
  double t4251;
  double t4253;
  double t4239;
  double t4243;
  double t4254;
  double t4255;
  double t1084;
  double t1297;
  double t1625;
  double t1866;
  double t1916;
  double t2038;
  double t2237;
  double t2458;
  double t2716;
  double t3026;
  double t3070;
  double t3120;
  double t3315;
  double t3449;
  double t3648;
  double t3684;
  double t3704;
  double t3765;
  double t4441;
  double t4442;
  double t4445;
  double t3916;
  double t3927;
  double t3965;
  double t3982;
  double t4025;
  double t4054;
  double t4068;
  double t4106;
  double t4116;
  double t4139;
  double t4151;
  double t4159;
  double t4172;
  double t4179;
  double t4200;
  double t4209;
  double t4218;
  double t4233;
  double t4535;
  double t4543;
  double t4544;
  double t4260;
  double t4277;
  double t4308;
  double t4315;
  double t4321;
  double t4332;
  double t4336;
  double t4345;
  double t4351;
  double t4358;
  double t4362;
  double t4370;
  double t4377;
  double t4385;
  double t4390;
  double t4402;
  double t4424;
  double t4434;
  double t4633;
  double t4634;
  double t4635;
  t191 = Cos(var1[4]);
  t208 = Cos(var1[5]);
  t363 = Sin(var1[4]);
  t396 = Sin(var1[5]);
  t217 = 0.010249*t191*t208;
  t364 = 0.003864*t363;
  t610 = -0.010249*t191*t396;
  t891 = var1[0] + t217 + t364 + t610;
  t3796 = Sin(var1[3]);
  t3868 = Cos(var1[3]);
  t3861 = t208*t3796*t363;
  t3877 = t3868*t396;
  t3878 = t3861 + t3877;
  t3883 = t3868*t208;
  t3895 = -1.*t3796*t363*t396;
  t3911 = t3883 + t3895;
  t3859 = -0.003864*t191*t3796;
  t3882 = 0.010249*t3878;
  t3912 = 0.010249*t3911;
  t3914 = var1[1] + t3859 + t3882 + t3912;
  t4240 = -1.*t3868*t208*t363;
  t4241 = t3796*t396;
  t4242 = t4240 + t4241;
  t4244 = t208*t3796;
  t4251 = t3868*t363*t396;
  t4253 = t4244 + t4251;
  t4239 = 0.003864*t3868*t191;
  t4243 = 0.010249*t4242;
  t4254 = 0.010249*t4253;
  t4255 = var1[2] + t4239 + t4243 + t4254;
  t1084 = 0.008361*t363;
  t1297 = 0.011952*t363;
  t1625 = 0.014247*t363;
  t1866 = 0.014999*t363;
  t1916 = 0.014125*t363;
  t2038 = 0.011721*t363;
  t2237 = 0.008046*t363;
  t2458 = 0.0035*t363;
  t2716 = -0.001426*t363;
  t3026 = -0.006197*t363;
  t3070 = -0.010297*t363;
  t3120 = -0.013281*t363;
  t3315 = -0.014825*t363;
  t3449 = -0.014763*t363;
  t3648 = -0.013101*t363;
  t3684 = -0.01002*t363;
  t3704 = -0.005853*t363;
  t3765 = -0.001051*t363;
  t4441 = 0.161459*t191*t208;
  t4442 = 0.140961*t191*t396;
  t4445 = var1[0] + t4441 + t364 + t4442;
  t3916 = -0.008361*t191*t3796;
  t3927 = -0.011952*t191*t3796;
  t3965 = -0.014247*t191*t3796;
  t3982 = -0.014999*t191*t3796;
  t4025 = -0.014125*t191*t3796;
  t4054 = -0.011721*t191*t3796;
  t4068 = -0.008046*t191*t3796;
  t4106 = -0.0035*t191*t3796;
  t4116 = 0.001426*t191*t3796;
  t4139 = 0.006197*t191*t3796;
  t4151 = 0.010297*t191*t3796;
  t4159 = 0.013281*t191*t3796;
  t4172 = 0.014825*t191*t3796;
  t4179 = 0.014763*t191*t3796;
  t4200 = 0.013101*t191*t3796;
  t4209 = 0.01002*t191*t3796;
  t4218 = 0.005853*t191*t3796;
  t4233 = 0.001051*t191*t3796;
  t4535 = 0.161459*t3878;
  t4543 = -0.140961*t3911;
  t4544 = var1[1] + t3859 + t4535 + t4543;
  t4260 = 0.008361*t3868*t191;
  t4277 = 0.011952*t3868*t191;
  t4308 = 0.014247*t3868*t191;
  t4315 = 0.014999*t3868*t191;
  t4321 = 0.014125*t3868*t191;
  t4332 = 0.011721*t3868*t191;
  t4336 = 0.008046*t3868*t191;
  t4345 = 0.0035*t3868*t191;
  t4351 = -0.001426*t3868*t191;
  t4358 = -0.006197*t3868*t191;
  t4362 = -0.010297*t3868*t191;
  t4370 = -0.013281*t3868*t191;
  t4377 = -0.014825*t3868*t191;
  t4385 = -0.014763*t3868*t191;
  t4390 = -0.013101*t3868*t191;
  t4402 = -0.01002*t3868*t191;
  t4424 = -0.005853*t3868*t191;
  t4434 = -0.001051*t3868*t191;
  t4633 = 0.161459*t4242;
  t4634 = -0.140961*t4253;
  t4635 = var1[2] + t4239 + t4633 + t4634;
  p_output1[0]=t891;
  p_output1[1]=t1084 + 0.008806*t191*t208 - 0.008806*t191*t396 + var1[0];
  p_output1[2]=t1297 + 0.006409*t191*t208 - 0.006409*t191*t396 + var1[0];
  p_output1[3]=t1625 + 0.003318*t191*t208 - 0.003318*t191*t396 + var1[0];
  p_output1[4]=t1866 - 0.000133*t191*t208 + 0.000133*t191*t396 + var1[0];
  p_output1[5]=t1916 - 0.00357*t191*t208 + 0.00357*t191*t396 + var1[0];
  p_output1[6]=t2038 - 0.006619*t191*t208 + 0.006619*t191*t396 + var1[0];
  p_output1[7]=-0.008952*t191*t208 + t2237 + 0.008952*t191*t396 + var1[0];
  p_output1[8]=-0.010314*t191*t208 + t2458 + 0.010314*t191*t396 + var1[0];
  p_output1[9]=-0.010559*t191*t208 + t2716 + 0.010559*t191*t396 + var1[0];
  p_output1[10]=-0.009659*t191*t208 + t3026 + 0.009659*t191*t396 + var1[0];
  p_output1[11]=-0.007713*t191*t208 + t3070 + 0.007713*t191*t396 + var1[0];
  p_output1[12]=-0.004931*t191*t208 + t3120 + 0.004931*t191*t396 + var1[0];
  p_output1[13]=-0.001614*t191*t208 + t3315 + 0.001614*t191*t396 + var1[0];
  p_output1[14]=0.001877*t191*t208 + t3449 - 0.001877*t191*t396 + var1[0];
  p_output1[15]=0.005165*t191*t208 + t3648 - 0.005165*t191*t396 + var1[0];
  p_output1[16]=0.007893*t191*t208 + t3684 - 0.007893*t191*t396 + var1[0];
  p_output1[17]=0.009766*t191*t208 + t3704 - 0.009766*t191*t396 + var1[0];
  p_output1[18]=0.010581*t191*t208 + t3765 - 0.010581*t191*t396 + var1[0];
  p_output1[19]=t891;
  p_output1[20]=t3914;
  p_output1[21]=0.008806*t3878 + 0.008806*t3911 + t3916 + var1[1];
  p_output1[22]=0.006409*t3878 + 0.006409*t3911 + t3927 + var1[1];
  p_output1[23]=0.003318*t3878 + 0.003318*t3911 + t3965 + var1[1];
  p_output1[24]=-0.000133*t3878 - 0.000133*t3911 + t3982 + var1[1];
  p_output1[25]=-0.00357*t3878 - 0.00357*t3911 + t4025 + var1[1];
  p_output1[26]=-0.006619*t3878 - 0.006619*t3911 + t4054 + var1[1];
  p_output1[27]=-0.008952*t3878 - 0.008952*t3911 + t4068 + var1[1];
  p_output1[28]=-0.010314*t3878 - 0.010314*t3911 + t4106 + var1[1];
  p_output1[29]=-0.010559*t3878 - 0.010559*t3911 + t4116 + var1[1];
  p_output1[30]=-0.009659*t3878 - 0.009659*t3911 + t4139 + var1[1];
  p_output1[31]=-0.007713*t3878 - 0.007713*t3911 + t4151 + var1[1];
  p_output1[32]=-0.004931*t3878 - 0.004931*t3911 + t4159 + var1[1];
  p_output1[33]=-0.001614*t3878 - 0.001614*t3911 + t4172 + var1[1];
  p_output1[34]=0.001877*t3878 + 0.001877*t3911 + t4179 + var1[1];
  p_output1[35]=0.005165*t3878 + 0.005165*t3911 + t4200 + var1[1];
  p_output1[36]=0.007893*t3878 + 0.007893*t3911 + t4209 + var1[1];
  p_output1[37]=0.009766*t3878 + 0.009766*t3911 + t4218 + var1[1];
  p_output1[38]=0.010581*t3878 + 0.010581*t3911 + t4233 + var1[1];
  p_output1[39]=t3914;
  p_output1[40]=t4255;
  p_output1[41]=0.008806*t4242 + 0.008806*t4253 + t4260 + var1[2];
  p_output1[42]=0.006409*t4242 + 0.006409*t4253 + t4277 + var1[2];
  p_output1[43]=0.003318*t4242 + 0.003318*t4253 + t4308 + var1[2];
  p_output1[44]=-0.000133*t4242 - 0.000133*t4253 + t4315 + var1[2];
  p_output1[45]=-0.00357*t4242 - 0.00357*t4253 + t4321 + var1[2];
  p_output1[46]=-0.006619*t4242 - 0.006619*t4253 + t4332 + var1[2];
  p_output1[47]=-0.008952*t4242 - 0.008952*t4253 + t4336 + var1[2];
  p_output1[48]=-0.010314*t4242 - 0.010314*t4253 + t4345 + var1[2];
  p_output1[49]=-0.010559*t4242 - 0.010559*t4253 + t4351 + var1[2];
  p_output1[50]=-0.009659*t4242 - 0.009659*t4253 + t4358 + var1[2];
  p_output1[51]=-0.007713*t4242 - 0.007713*t4253 + t4362 + var1[2];
  p_output1[52]=-0.004931*t4242 - 0.004931*t4253 + t4370 + var1[2];
  p_output1[53]=-0.001614*t4242 - 0.001614*t4253 + t4377 + var1[2];
  p_output1[54]=0.001877*t4242 + 0.001877*t4253 + t4385 + var1[2];
  p_output1[55]=0.005165*t4242 + 0.005165*t4253 + t4390 + var1[2];
  p_output1[56]=0.007893*t4242 + 0.007893*t4253 + t4402 + var1[2];
  p_output1[57]=0.009766*t4242 + 0.009766*t4253 + t4424 + var1[2];
  p_output1[58]=0.010581*t4242 + 0.010581*t4253 + t4434 + var1[2];
  p_output1[59]=t4255;
  p_output1[60]=t4445;
  p_output1[61]=t1084 + 0.160016*t191*t208 + 0.142404*t191*t396 + var1[0];
  p_output1[62]=t1297 + 0.157619*t191*t208 + 0.144801*t191*t396 + var1[0];
  p_output1[63]=t1625 + 0.154528*t191*t208 + 0.147892*t191*t396 + var1[0];
  p_output1[64]=t1866 + 0.151077*t191*t208 + 0.151343*t191*t396 + var1[0];
  p_output1[65]=t1916 + 0.14764*t191*t208 + 0.15478*t191*t396 + var1[0];
  p_output1[66]=t2038 + 0.144591*t191*t208 + 0.157829*t191*t396 + var1[0];
  p_output1[67]=0.142258*t191*t208 + t2237 + 0.160162*t191*t396 + var1[0];
  p_output1[68]=0.140896*t191*t208 + t2458 + 0.161524*t191*t396 + var1[0];
  p_output1[69]=0.140651*t191*t208 + t2716 + 0.161769*t191*t396 + var1[0];
  p_output1[70]=0.141551*t191*t208 + t3026 + 0.160869*t191*t396 + var1[0];
  p_output1[71]=0.143497*t191*t208 + t3070 + 0.158923*t191*t396 + var1[0];
  p_output1[72]=0.146279*t191*t208 + t3120 + 0.156141*t191*t396 + var1[0];
  p_output1[73]=0.149596*t191*t208 + t3315 + 0.152824*t191*t396 + var1[0];
  p_output1[74]=0.153087*t191*t208 + t3449 + 0.149333*t191*t396 + var1[0];
  p_output1[75]=0.156375*t191*t208 + t3648 + 0.146045*t191*t396 + var1[0];
  p_output1[76]=0.159103*t191*t208 + t3684 + 0.143317*t191*t396 + var1[0];
  p_output1[77]=0.160976*t191*t208 + t3704 + 0.141444*t191*t396 + var1[0];
  p_output1[78]=0.161791*t191*t208 + t3765 + 0.140629*t191*t396 + var1[0];
  p_output1[79]=t4445;
  p_output1[80]=t4544;
  p_output1[81]=0.160016*t3878 - 0.142404*t3911 + t3916 + var1[1];
  p_output1[82]=0.157619*t3878 - 0.144801*t3911 + t3927 + var1[1];
  p_output1[83]=0.154528*t3878 - 0.147892*t3911 + t3965 + var1[1];
  p_output1[84]=0.151077*t3878 - 0.151343*t3911 + t3982 + var1[1];
  p_output1[85]=0.14764*t3878 - 0.15478*t3911 + t4025 + var1[1];
  p_output1[86]=0.144591*t3878 - 0.157829*t3911 + t4054 + var1[1];
  p_output1[87]=0.142258*t3878 - 0.160162*t3911 + t4068 + var1[1];
  p_output1[88]=0.140896*t3878 - 0.161524*t3911 + t4106 + var1[1];
  p_output1[89]=0.140651*t3878 - 0.161769*t3911 + t4116 + var1[1];
  p_output1[90]=0.141551*t3878 - 0.160869*t3911 + t4139 + var1[1];
  p_output1[91]=0.143497*t3878 - 0.158923*t3911 + t4151 + var1[1];
  p_output1[92]=0.146279*t3878 - 0.156141*t3911 + t4159 + var1[1];
  p_output1[93]=0.149596*t3878 - 0.152824*t3911 + t4172 + var1[1];
  p_output1[94]=0.153087*t3878 - 0.149333*t3911 + t4179 + var1[1];
  p_output1[95]=0.156375*t3878 - 0.146045*t3911 + t4200 + var1[1];
  p_output1[96]=0.159103*t3878 - 0.143317*t3911 + t4209 + var1[1];
  p_output1[97]=0.160976*t3878 - 0.141444*t3911 + t4218 + var1[1];
  p_output1[98]=0.161791*t3878 - 0.140629*t3911 + t4233 + var1[1];
  p_output1[99]=t4544;
  p_output1[100]=t4635;
  p_output1[101]=0.160016*t4242 - 0.142404*t4253 + t4260 + var1[2];
  p_output1[102]=0.157619*t4242 - 0.144801*t4253 + t4277 + var1[2];
  p_output1[103]=0.154528*t4242 - 0.147892*t4253 + t4308 + var1[2];
  p_output1[104]=0.151077*t4242 - 0.151343*t4253 + t4315 + var1[2];
  p_output1[105]=0.14764*t4242 - 0.15478*t4253 + t4321 + var1[2];
  p_output1[106]=0.144591*t4242 - 0.157829*t4253 + t4332 + var1[2];
  p_output1[107]=0.142258*t4242 - 0.160162*t4253 + t4336 + var1[2];
  p_output1[108]=0.140896*t4242 - 0.161524*t4253 + t4345 + var1[2];
  p_output1[109]=0.140651*t4242 - 0.161769*t4253 + t4351 + var1[2];
  p_output1[110]=0.141551*t4242 - 0.160869*t4253 + t4358 + var1[2];
  p_output1[111]=0.143497*t4242 - 0.158923*t4253 + t4362 + var1[2];
  p_output1[112]=0.146279*t4242 - 0.156141*t4253 + t4370 + var1[2];
  p_output1[113]=0.149596*t4242 - 0.152824*t4253 + t4377 + var1[2];
  p_output1[114]=0.153087*t4242 - 0.149333*t4253 + t4385 + var1[2];
  p_output1[115]=0.156375*t4242 - 0.146045*t4253 + t4390 + var1[2];
  p_output1[116]=0.159103*t4242 - 0.143317*t4253 + t4402 + var1[2];
  p_output1[117]=0.160976*t4242 - 0.141444*t4253 + t4424 + var1[2];
  p_output1[118]=0.161791*t4242 - 0.140629*t4253 + t4434 + var1[2];
  p_output1[119]=t4635;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_base_link_to_fr_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_fr_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
