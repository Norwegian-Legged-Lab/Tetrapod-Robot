/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:46 GMT+01:00
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
  double t256;
  double t399;
  double t461;
  double t1127;
  double t401;
  double t792;
  double t1314;
  double t1446;
  double t3775;
  double t3784;
  double t3782;
  double t3793;
  double t3801;
  double t3814;
  double t3817;
  double t3826;
  double t3781;
  double t3811;
  double t3835;
  double t3838;
  double t4041;
  double t4042;
  double t4050;
  double t4055;
  double t4058;
  double t4059;
  double t4040;
  double t4054;
  double t4071;
  double t4073;
  double t4219;
  double t4221;
  double t4226;
  double t4227;
  double t4361;
  double t4362;
  double t4363;
  double t4364;
  double t4506;
  double t4507;
  double t4509;
  double t4510;
  t256 = Cos(var1[4]);
  t399 = Cos(var1[5]);
  t461 = Sin(var1[4]);
  t1127 = Sin(var1[5]);
  t401 = 0.010868*t256*t399;
  t792 = -0.000146*t461;
  t1314 = -0.010337*t256*t1127;
  t1446 = var1[0] + t401 + t792 + t1314;
  t3775 = Sin(var1[3]);
  t3784 = Cos(var1[3]);
  t3782 = t399*t3775*t461;
  t3793 = t3784*t1127;
  t3801 = t3782 + t3793;
  t3814 = t3784*t399;
  t3817 = -1.*t3775*t461*t1127;
  t3826 = t3814 + t3817;
  t3781 = 0.000146*t256*t3775;
  t3811 = 0.010868*t3801;
  t3835 = 0.010337*t3826;
  t3838 = var1[1] + t3781 + t3811 + t3835;
  t4041 = -1.*t3784*t399*t461;
  t4042 = t3775*t1127;
  t4050 = t4041 + t4042;
  t4055 = t399*t3775;
  t4058 = t3784*t461*t1127;
  t4059 = t4055 + t4058;
  t4040 = -0.000146*t3784*t256;
  t4054 = 0.010868*t4050;
  t4071 = 0.010337*t4059;
  t4073 = var1[2] + t4040 + t4054 + t4071;
  t4219 = 0.012698*t256*t399;
  t4221 = -0.024174*t461;
  t4226 = -0.008073*t256*t1127;
  t4227 = var1[0] + t4219 + t4221 + t4226;
  t4361 = 0.024174*t256*t3775;
  t4362 = 0.012698*t3801;
  t4363 = 0.008073*t3826;
  t4364 = var1[1] + t4361 + t4362 + t4363;
  t4506 = -0.024174*t3784*t256;
  t4507 = 0.012698*t4050;
  t4509 = 0.008073*t4059;
  t4510 = var1[2] + t4506 + t4507 + t4509;
  p_output1[0]=t1446;
  p_output1[1]=-0.006278*t1127*t256 + 0.013616*t256*t399 + 0.000445*t461 + var1[0];
  p_output1[2]=-0.001538*t1127*t256 + 0.014888*t256*t399 + 0.000989*t461 + var1[0];
  p_output1[3]=0.003369*t1127*t256 + 0.014547*t256*t399 + 0.001425*t461 + var1[0];
  p_output1[4]=0.007911*t1127*t256 + 0.01263*t256*t399 + 0.001707*t461 + var1[0];
  p_output1[5]=0.011595*t1127*t256 + 0.009344*t256*t399 + 0.001804*t461 + var1[0];
  p_output1[6]=0.014023*t1127*t256 + 0.005045*t256*t399 + 0.001706*t461 + var1[0];
  p_output1[7]=0.014931*t1127*t256 + 0.0002*t256*t399 + 0.001422*t461 + var1[0];
  p_output1[8]=0.014221*t1127*t256 - 0.004667*t256*t399 + 0.000985*t461 + var1[0];
  p_output1[9]=0.011971*t1127*t256 - 0.009028*t256*t399 + 0.00044*t461 + var1[0];
  p_output1[10]=0.008422*t1127*t256 - 0.012411*t256*t399 - 0.000152*t461 + var1[0];
  p_output1[11]=0.003962*t1127*t256 - 0.014449*t256*t399 - 0.000727*t461 + var1[0];
  p_output1[12]=-0.000928*t1127*t256 - 0.014921*t256*t399 - 0.001224*t461 + var1[0];
  p_output1[13]=-0.005718*t1127*t256 - 0.013776*t256*t399 - 0.001588*t461 + var1[0];
  p_output1[14]=-0.009888*t1127*t256 - 0.011139*t256*t399 - 0.00178*t461 + var1[0];
  p_output1[15]=-0.012986*t1127*t256 - 0.007294*t256*t399 - 0.001779*t461 + var1[0];
  p_output1[16]=-0.014677*t1127*t256 - 0.002659*t256*t399 - 0.001585*t461 + var1[0];
  p_output1[17]=-0.014778*t1127*t256 + 0.002265*t256*t399 - 0.00122*t461 + var1[0];
  p_output1[18]=-0.013277*t1127*t256 + 0.006943*t256*t399 - 0.000722*t461 + var1[0];
  p_output1[19]=t1446;
  p_output1[20]=t3838;
  p_output1[21]=-0.000445*t256*t3775 + 0.013616*t3801 + 0.006278*t3826 + var1[1];
  p_output1[22]=-0.000989*t256*t3775 + 0.014888*t3801 + 0.001538*t3826 + var1[1];
  p_output1[23]=-0.001425*t256*t3775 + 0.014547*t3801 - 0.003369*t3826 + var1[1];
  p_output1[24]=-0.001707*t256*t3775 + 0.01263*t3801 - 0.007911*t3826 + var1[1];
  p_output1[25]=-0.001804*t256*t3775 + 0.009344*t3801 - 0.011595*t3826 + var1[1];
  p_output1[26]=-0.001706*t256*t3775 + 0.005045*t3801 - 0.014023*t3826 + var1[1];
  p_output1[27]=-0.001422*t256*t3775 + 0.0002*t3801 - 0.014931*t3826 + var1[1];
  p_output1[28]=-0.000985*t256*t3775 - 0.004667*t3801 - 0.014221*t3826 + var1[1];
  p_output1[29]=-0.00044*t256*t3775 - 0.009028*t3801 - 0.011971*t3826 + var1[1];
  p_output1[30]=0.000152*t256*t3775 - 0.012411*t3801 - 0.008422*t3826 + var1[1];
  p_output1[31]=0.000727*t256*t3775 - 0.014449*t3801 - 0.003962*t3826 + var1[1];
  p_output1[32]=0.001224*t256*t3775 - 0.014921*t3801 + 0.000928*t3826 + var1[1];
  p_output1[33]=0.001588*t256*t3775 - 0.013776*t3801 + 0.005718*t3826 + var1[1];
  p_output1[34]=0.00178*t256*t3775 - 0.011139*t3801 + 0.009888*t3826 + var1[1];
  p_output1[35]=0.001779*t256*t3775 - 0.007294*t3801 + 0.012986*t3826 + var1[1];
  p_output1[36]=0.001585*t256*t3775 - 0.002659*t3801 + 0.014677*t3826 + var1[1];
  p_output1[37]=0.00122*t256*t3775 + 0.002265*t3801 + 0.014778*t3826 + var1[1];
  p_output1[38]=0.000722*t256*t3775 + 0.006943*t3801 + 0.013277*t3826 + var1[1];
  p_output1[39]=t3838;
  p_output1[40]=t4073;
  p_output1[41]=0.000445*t256*t3784 + 0.013616*t4050 + 0.006278*t4059 + var1[2];
  p_output1[42]=0.000989*t256*t3784 + 0.014888*t4050 + 0.001538*t4059 + var1[2];
  p_output1[43]=0.001425*t256*t3784 + 0.014547*t4050 - 0.003369*t4059 + var1[2];
  p_output1[44]=0.001707*t256*t3784 + 0.01263*t4050 - 0.007911*t4059 + var1[2];
  p_output1[45]=0.001804*t256*t3784 + 0.009344*t4050 - 0.011595*t4059 + var1[2];
  p_output1[46]=0.001706*t256*t3784 + 0.005045*t4050 - 0.014023*t4059 + var1[2];
  p_output1[47]=0.001422*t256*t3784 + 0.0002*t4050 - 0.014931*t4059 + var1[2];
  p_output1[48]=0.000985*t256*t3784 - 0.004667*t4050 - 0.014221*t4059 + var1[2];
  p_output1[49]=0.00044*t256*t3784 - 0.009028*t4050 - 0.011971*t4059 + var1[2];
  p_output1[50]=-0.000152*t256*t3784 - 0.012411*t4050 - 0.008422*t4059 + var1[2];
  p_output1[51]=-0.000727*t256*t3784 - 0.014449*t4050 - 0.003962*t4059 + var1[2];
  p_output1[52]=-0.001224*t256*t3784 - 0.014921*t4050 + 0.000928*t4059 + var1[2];
  p_output1[53]=-0.001588*t256*t3784 - 0.013776*t4050 + 0.005718*t4059 + var1[2];
  p_output1[54]=-0.00178*t256*t3784 - 0.011139*t4050 + 0.009888*t4059 + var1[2];
  p_output1[55]=-0.001779*t256*t3784 - 0.007294*t4050 + 0.012986*t4059 + var1[2];
  p_output1[56]=-0.001585*t256*t3784 - 0.002659*t4050 + 0.014677*t4059 + var1[2];
  p_output1[57]=-0.00122*t256*t3784 + 0.002265*t4050 + 0.014778*t4059 + var1[2];
  p_output1[58]=-0.000722*t256*t3784 + 0.006943*t4050 + 0.013277*t4059 + var1[2];
  p_output1[59]=t4073;
  p_output1[60]=t4227;
  p_output1[61]=-0.004014*t1127*t256 + 0.015446*t256*t399 - 0.023583*t461 + var1[0];
  p_output1[62]=0.000726*t1127*t256 + 0.016718*t256*t399 - 0.023039*t461 + var1[0];
  p_output1[63]=0.005633*t1127*t256 + 0.016377*t256*t399 - 0.022603*t461 + var1[0];
  p_output1[64]=0.010175*t1127*t256 + 0.01446*t256*t399 - 0.022321*t461 + var1[0];
  p_output1[65]=0.013859*t1127*t256 + 0.011174*t256*t399 - 0.022224*t461 + var1[0];
  p_output1[66]=0.016287*t1127*t256 + 0.006875*t256*t399 - 0.022322*t461 + var1[0];
  p_output1[67]=0.017195*t1127*t256 + 0.00203*t256*t399 - 0.022606*t461 + var1[0];
  p_output1[68]=0.016485*t1127*t256 - 0.002837*t256*t399 - 0.023043*t461 + var1[0];
  p_output1[69]=0.014235*t1127*t256 - 0.007198*t256*t399 - 0.023588*t461 + var1[0];
  p_output1[70]=0.010686*t1127*t256 - 0.010581*t256*t399 - 0.02418*t461 + var1[0];
  p_output1[71]=0.006226*t1127*t256 - 0.012619*t256*t399 - 0.024755*t461 + var1[0];
  p_output1[72]=0.001336*t1127*t256 - 0.013091*t256*t399 - 0.025252*t461 + var1[0];
  p_output1[73]=-0.003454*t1127*t256 - 0.011946*t256*t399 - 0.025616*t461 + var1[0];
  p_output1[74]=-0.007624*t1127*t256 - 0.009309*t256*t399 - 0.025808*t461 + var1[0];
  p_output1[75]=-0.010722*t1127*t256 - 0.005464*t256*t399 - 0.025807*t461 + var1[0];
  p_output1[76]=-0.012413*t1127*t256 - 0.000829*t256*t399 - 0.025613*t461 + var1[0];
  p_output1[77]=-0.012514*t1127*t256 + 0.004095*t256*t399 - 0.025248*t461 + var1[0];
  p_output1[78]=-0.011013*t1127*t256 + 0.008773*t256*t399 - 0.02475*t461 + var1[0];
  p_output1[79]=t4227;
  p_output1[80]=t4364;
  p_output1[81]=0.023583*t256*t3775 + 0.015446*t3801 + 0.004014*t3826 + var1[1];
  p_output1[82]=0.023039*t256*t3775 + 0.016718*t3801 - 0.000726*t3826 + var1[1];
  p_output1[83]=0.022603*t256*t3775 + 0.016377*t3801 - 0.005633*t3826 + var1[1];
  p_output1[84]=0.022321*t256*t3775 + 0.01446*t3801 - 0.010175*t3826 + var1[1];
  p_output1[85]=0.022224*t256*t3775 + 0.011174*t3801 - 0.013859*t3826 + var1[1];
  p_output1[86]=0.022322*t256*t3775 + 0.006875*t3801 - 0.016287*t3826 + var1[1];
  p_output1[87]=0.022606*t256*t3775 + 0.00203*t3801 - 0.017195*t3826 + var1[1];
  p_output1[88]=0.023043*t256*t3775 - 0.002837*t3801 - 0.016485*t3826 + var1[1];
  p_output1[89]=0.023588*t256*t3775 - 0.007198*t3801 - 0.014235*t3826 + var1[1];
  p_output1[90]=0.02418*t256*t3775 - 0.010581*t3801 - 0.010686*t3826 + var1[1];
  p_output1[91]=0.024755*t256*t3775 - 0.012619*t3801 - 0.006226*t3826 + var1[1];
  p_output1[92]=0.025252*t256*t3775 - 0.013091*t3801 - 0.001336*t3826 + var1[1];
  p_output1[93]=0.025616*t256*t3775 - 0.011946*t3801 + 0.003454*t3826 + var1[1];
  p_output1[94]=0.025808*t256*t3775 - 0.009309*t3801 + 0.007624*t3826 + var1[1];
  p_output1[95]=0.025807*t256*t3775 - 0.005464*t3801 + 0.010722*t3826 + var1[1];
  p_output1[96]=0.025613*t256*t3775 - 0.000829*t3801 + 0.012413*t3826 + var1[1];
  p_output1[97]=0.025248*t256*t3775 + 0.004095*t3801 + 0.012514*t3826 + var1[1];
  p_output1[98]=0.02475*t256*t3775 + 0.008773*t3801 + 0.011013*t3826 + var1[1];
  p_output1[99]=t4364;
  p_output1[100]=t4510;
  p_output1[101]=-0.023583*t256*t3784 + 0.015446*t4050 + 0.004014*t4059 + var1[2];
  p_output1[102]=-0.023039*t256*t3784 + 0.016718*t4050 - 0.000726*t4059 + var1[2];
  p_output1[103]=-0.022603*t256*t3784 + 0.016377*t4050 - 0.005633*t4059 + var1[2];
  p_output1[104]=-0.022321*t256*t3784 + 0.01446*t4050 - 0.010175*t4059 + var1[2];
  p_output1[105]=-0.022224*t256*t3784 + 0.011174*t4050 - 0.013859*t4059 + var1[2];
  p_output1[106]=-0.022322*t256*t3784 + 0.006875*t4050 - 0.016287*t4059 + var1[2];
  p_output1[107]=-0.022606*t256*t3784 + 0.00203*t4050 - 0.017195*t4059 + var1[2];
  p_output1[108]=-0.023043*t256*t3784 - 0.002837*t4050 - 0.016485*t4059 + var1[2];
  p_output1[109]=-0.023588*t256*t3784 - 0.007198*t4050 - 0.014235*t4059 + var1[2];
  p_output1[110]=-0.02418*t256*t3784 - 0.010581*t4050 - 0.010686*t4059 + var1[2];
  p_output1[111]=-0.024755*t256*t3784 - 0.012619*t4050 - 0.006226*t4059 + var1[2];
  p_output1[112]=-0.025252*t256*t3784 - 0.013091*t4050 - 0.001336*t4059 + var1[2];
  p_output1[113]=-0.025616*t256*t3784 - 0.011946*t4050 + 0.003454*t4059 + var1[2];
  p_output1[114]=-0.025808*t256*t3784 - 0.009309*t4050 + 0.007624*t4059 + var1[2];
  p_output1[115]=-0.025807*t256*t3784 - 0.005464*t4050 + 0.010722*t4059 + var1[2];
  p_output1[116]=-0.025613*t256*t3784 - 0.000829*t4050 + 0.012413*t4059 + var1[2];
  p_output1[117]=-0.025248*t256*t3784 + 0.004095*t4050 + 0.012514*t4059 + var1[2];
  p_output1[118]=-0.02475*t256*t3784 + 0.008773*t4050 + 0.011013*t4059 + var1[2];
  p_output1[119]=t4510;
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

#include "TorsoBar_bar.hh"

namespace SymFunction
{

void TorsoBar_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
