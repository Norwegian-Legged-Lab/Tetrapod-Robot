/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:11 GMT+02:00
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
  double t646;
  double t108;
  double t405;
  double t684;
  double t1413;
  double t1418;
  double t1528;
  double t1315;
  double t1402;
  double t1578;
  double t1359;
  double t1717;
  double t722;
  double t2599;
  double t2780;
  double t2781;
  double t453;
  double t703;
  double t711;
  double t1573;
  double t1731;
  double t1823;
  double t3322;
  double t2121;
  double t2142;
  double t2193;
  double t3137;
  double t2796;
  double t2827;
  double t2833;
  double t3203;
  double t3232;
  double t3235;
  double t3333;
  double t3394;
  double t3453;
  double t3500;
  double t3536;
  double t3542;
  double t3625;
  double t3646;
  double t3650;
  double t3693;
  double t3707;
  double t3757;
  double t2419;
  double t3056;
  double t3127;
  double t4015;
  double t4023;
  double t4106;
  double t4121;
  double t4248;
  double t4253;
  double t4268;
  double t4313;
  double t4336;
  double t4361;
  double t4372;
  double t4409;
  double t4413;
  double t4694;
  double t4698;
  double t4702;
  double t4025;
  double t4032;
  double t4036;
  double t4414;
  double t4476;
  double t4794;
  double t4807;
  double t4817;
  double t4824;
  double t4831;
  double t4843;
  double t4844;
  double t4578;
  double t4709;
  double t4762;
  double t4825;
  double t4849;
  double t4914;
  double t4937;
  double t4940;
  double t4950;
  double t1027;
  double t2049;
  double t2108;
  double t4783;
  double t4997;
  double t5149;
  double t5303;
  double t5382;
  double t5403;
  double t5835;
  double t5953;
  t646 = Cos(var1[13]);
  t108 = Cos(var1[14]);
  t405 = Sin(var1[13]);
  t684 = Sin(var1[14]);
  t1413 = t646*t108;
  t1418 = t405*t684;
  t1528 = t1413 + t1418;
  t1315 = Cos(var1[4]);
  t1402 = Cos(var1[5]);
  t1578 = Sin(var1[12]);
  t1359 = Cos(var1[12]);
  t1717 = Sin(var1[5]);
  t722 = Sin(var1[4]);
  t2599 = t108*t405;
  t2780 = -1.*t646*t684;
  t2781 = t2599 + t2780;
  t453 = -1.*t108*t405;
  t703 = t646*t684;
  t711 = t453 + t703;
  t1573 = t1359*t1402*t1528;
  t1731 = -1.*t1578*t1528*t1717;
  t1823 = t1573 + t1731;
  t3322 = Sin(var1[3]);
  t2121 = -1.*t1402*t1578;
  t2142 = -1.*t1359*t1717;
  t2193 = t2121 + t2142;
  t3137 = Cos(var1[3]);
  t2796 = t1359*t1402*t2781;
  t2827 = -1.*t1578*t2781*t1717;
  t2833 = t2796 + t2827;
  t3203 = t1402*t1578*t1528;
  t3232 = t1359*t1528*t1717;
  t3235 = t3203 + t3232;
  t3333 = t1315*t711;
  t3394 = -1.*t722*t1823;
  t3453 = t3333 + t3394;
  t3500 = t1359*t1402;
  t3536 = -1.*t1578*t1717;
  t3542 = t3500 + t3536;
  t3625 = t1402*t1578*t2781;
  t3646 = t1359*t2781*t1717;
  t3650 = t3625 + t3646;
  t3693 = t1315*t1528;
  t3707 = -1.*t722*t2833;
  t3757 = t3693 + t3707;
  t2419 = t1528*t722;
  t3056 = t1315*t2833;
  t3127 = t2419 + t3056;
  t4015 = -1.*t1359;
  t4023 = 1. + t4015;
  t4106 = -1.*t646;
  t4121 = 1. + t4106;
  t4248 = 0.28121*t4121;
  t4253 = -1.*t108;
  t4268 = 1. + t4253;
  t4313 = 0.50321*t4268;
  t4336 = 0.19821*t108;
  t4361 = t4313 + t4336;
  t4372 = t646*t4361;
  t4409 = -0.305*t405*t684;
  t4413 = t4248 + t4372 + t4409;
  t4694 = 0.15121*t4023;
  t4698 = t1359*t4413;
  t4702 = t4694 + t4698;
  t4025 = -0.15121*t4023;
  t4032 = -0.15121*t1359;
  t4036 = -0.15121*t1578;
  t4414 = t1578*t4413;
  t4476 = t4025 + t4032 + t4036 + t4414;
  t4794 = 0.28121*t405;
  t4807 = -1.*t4361*t405;
  t4817 = -0.305*t646*t684;
  t4824 = t4794 + t4807 + t4817;
  t4831 = t1402*t4702;
  t4843 = -1.*t4476*t1717;
  t4844 = t4831 + t4843;
  t4578 = t1402*t4476;
  t4709 = t4702*t1717;
  t4762 = t4578 + t4709;
  t4825 = t4824*t722;
  t4849 = t1315*t4844;
  t4914 = t4825 + t4849;
  t4937 = t1315*t4824;
  t4940 = -1.*t722*t4844;
  t4950 = t4937 + t4940;
  t1027 = t711*t722;
  t2049 = t1315*t1823;
  t2108 = t1027 + t2049;
  t4783 = -1.*t3542*t4762;
  t4997 = t3650*t4762;
  t5149 = -1.*t3650*t4762;
  t5303 = t3235*t4762;
  t5382 = t3542*t4762;
  t5403 = -1.*t3235*t4762;
  t5835 = -1.*t4824*t1528;
  t5953 = t4824*t711;
  p_output1[0]=t2108;
  p_output1[1]=t1315*t2193;
  p_output1[2]=t3127;
  p_output1[3]=t3137*t3235 - 1.*t3322*t3453;
  p_output1[4]=t3137*t3542 + t2193*t3322*t722;
  p_output1[5]=t3137*t3650 - 1.*t3322*t3757;
  p_output1[6]=t3235*t3322 + t3137*t3453;
  p_output1[7]=t3322*t3542 - 1.*t2193*t3137*t722;
  p_output1[8]=t3322*t3650 + t3137*t3757;
  p_output1[9]=t1315*t2193*(t3127*t4914 + t3757*t4950 + t4997) + t3127*(t4783 - 1.*t1315*t2193*t4914 + t2193*t4950*t722);
  p_output1[10]=t2108*(-1.*t3127*t4914 - 1.*t3757*t4950 + t5149) + t3127*(t2108*t4914 + t3453*t4950 + t5303);
  p_output1[11]=t1315*t2193*(-1.*t2108*t4914 - 1.*t3453*t4950 + t5403) + t2108*(t1315*t2193*t4914 + t5382 - 1.*t2193*t4950*t722);
  p_output1[12]=t3650*(t4783 - 1.*t2193*t4844) + t3542*(t1528*t4824 + t2833*t4844 + t4997);
  p_output1[13]=t3235*(-1.*t2833*t4844 + t5149 + t5835) + t3650*(t1823*t4844 + t5303 + t5953);
  p_output1[14]=t3235*(t2193*t4844 + t5382) + t3542*(-1.*t1823*t4844 + t5403 - 1.*t4824*t711);
  p_output1[15]=t1528*(-1.*t1359*t4476 + t1578*t4702);
  p_output1[16]=t1528*(t1528*t1578*t4476 + t1359*t1528*t4702 + t5953) + (-1.*t1578*t2781*t4476 - 1.*t1359*t2781*t4702 + t5835)*t711;
  p_output1[17]=(t1359*t4476 - 1.*t1578*t4702)*t711;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t1528*(t1528*t4413 + t5953) + (-1.*t2781*t4413 + t5835)*t711;
  p_output1[38]=-0.15121*t2781 - 0.15121*t711;
  p_output1[39]=0.28121*t684 - 0.305*t108*t684 - 1.*t4361*t684;
  p_output1[40]=0;
  p_output1[41]=0.28121*t108 - 1.*t108*t4361 + 0.305*Power(t684,2);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
