/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:01 GMT+02:00
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
  double t1277;
  double t14;
  double t461;
  double t1347;
  double t2512;
  double t3044;
  double t3054;
  double t1941;
  double t2466;
  double t3283;
  double t2284;
  double t4116;
  double t1568;
  double t4983;
  double t5267;
  double t5668;
  double t893;
  double t1352;
  double t1388;
  double t3221;
  double t4287;
  double t4317;
  double t6579;
  double t4452;
  double t4498;
  double t4564;
  double t6011;
  double t5736;
  double t5777;
  double t5872;
  double t6060;
  double t6195;
  double t6325;
  double t6597;
  double t6626;
  double t6761;
  double t8539;
  double t8756;
  double t9271;
  double t9631;
  double t9644;
  double t9645;
  double t9830;
  double t9950;
  double t10240;
  double t4869;
  double t5874;
  double t5974;
  double t10367;
  double t10380;
  double t10425;
  double t10428;
  double t10430;
  double t10432;
  double t10433;
  double t10436;
  double t10458;
  double t10486;
  double t10489;
  double t10505;
  double t10510;
  double t10595;
  double t10616;
  double t10620;
  double t10386;
  double t10416;
  double t10420;
  double t10517;
  double t10549;
  double t10640;
  double t10646;
  double t10649;
  double t10652;
  double t10659;
  double t10666;
  double t10674;
  double t10574;
  double t10624;
  double t10627;
  double t10658;
  double t10689;
  double t10695;
  double t10700;
  double t10710;
  double t10718;
  double t1667;
  double t4381;
  double t4403;
  double t10629;
  double t10727;
  double t10790;
  double t10813;
  double t10867;
  double t10887;
  double t10984;
  double t11005;
  t1277 = Cos(var1[13]);
  t14 = Cos(var1[14]);
  t461 = Sin(var1[13]);
  t1347 = Sin(var1[14]);
  t2512 = t1277*t14;
  t3044 = t461*t1347;
  t3054 = t2512 + t3044;
  t1941 = Cos(var1[4]);
  t2466 = Cos(var1[5]);
  t3283 = Sin(var1[12]);
  t2284 = Cos(var1[12]);
  t4116 = Sin(var1[5]);
  t1568 = Sin(var1[4]);
  t4983 = t14*t461;
  t5267 = -1.*t1277*t1347;
  t5668 = t4983 + t5267;
  t893 = -1.*t14*t461;
  t1352 = t1277*t1347;
  t1388 = t893 + t1352;
  t3221 = t2284*t2466*t3054;
  t4287 = -1.*t3283*t3054*t4116;
  t4317 = t3221 + t4287;
  t6579 = Sin(var1[3]);
  t4452 = -1.*t2466*t3283;
  t4498 = -1.*t2284*t4116;
  t4564 = t4452 + t4498;
  t6011 = Cos(var1[3]);
  t5736 = t2284*t2466*t5668;
  t5777 = -1.*t3283*t5668*t4116;
  t5872 = t5736 + t5777;
  t6060 = t2466*t3283*t3054;
  t6195 = t2284*t3054*t4116;
  t6325 = t6060 + t6195;
  t6597 = t1941*t1388;
  t6626 = -1.*t1568*t4317;
  t6761 = t6597 + t6626;
  t8539 = t2284*t2466;
  t8756 = -1.*t3283*t4116;
  t9271 = t8539 + t8756;
  t9631 = t2466*t3283*t5668;
  t9644 = t2284*t5668*t4116;
  t9645 = t9631 + t9644;
  t9830 = t1941*t3054;
  t9950 = -1.*t1568*t5872;
  t10240 = t9830 + t9950;
  t4869 = t3054*t1568;
  t5874 = t1941*t5872;
  t5974 = t4869 + t5874;
  t10367 = -1.*t2284;
  t10380 = 1. + t10367;
  t10425 = -1.*t1277;
  t10428 = 1. + t10425;
  t10430 = 0.28121*t10428;
  t10432 = -1.*t14;
  t10433 = 1. + t10432;
  t10436 = 0.50321*t10433;
  t10458 = 0.19821*t14;
  t10486 = t10436 + t10458;
  t10489 = t1277*t10486;
  t10505 = -0.305*t461*t1347;
  t10510 = t10430 + t10489 + t10505;
  t10595 = 0.15121*t10380;
  t10616 = t2284*t10510;
  t10620 = t10595 + t10616;
  t10386 = -0.15121*t10380;
  t10416 = -0.15121*t2284;
  t10420 = -0.15121*t3283;
  t10517 = t3283*t10510;
  t10549 = t10386 + t10416 + t10420 + t10517;
  t10640 = 0.28121*t461;
  t10646 = -1.*t10486*t461;
  t10649 = -0.305*t1277*t1347;
  t10652 = t10640 + t10646 + t10649;
  t10659 = t2466*t10620;
  t10666 = -1.*t10549*t4116;
  t10674 = t10659 + t10666;
  t10574 = t2466*t10549;
  t10624 = t10620*t4116;
  t10627 = t10574 + t10624;
  t10658 = t10652*t1568;
  t10689 = t1941*t10674;
  t10695 = t10658 + t10689;
  t10700 = t1941*t10652;
  t10710 = -1.*t1568*t10674;
  t10718 = t10700 + t10710;
  t1667 = t1388*t1568;
  t4381 = t1941*t4317;
  t4403 = t1667 + t4381;
  t10629 = -1.*t9271*t10627;
  t10727 = t9645*t10627;
  t10790 = -1.*t9645*t10627;
  t10813 = t6325*t10627;
  t10867 = t9271*t10627;
  t10887 = -1.*t6325*t10627;
  t10984 = -1.*t10652*t3054;
  t11005 = t10652*t1388;
  p_output1[0]=t4403;
  p_output1[1]=t1941*t4564;
  p_output1[2]=t5974;
  p_output1[3]=t6011*t6325 - 1.*t6579*t6761;
  p_output1[4]=t1568*t4564*t6579 + t6011*t9271;
  p_output1[5]=-1.*t10240*t6579 + t6011*t9645;
  p_output1[6]=t6325*t6579 + t6011*t6761;
  p_output1[7]=-1.*t1568*t4564*t6011 + t6579*t9271;
  p_output1[8]=t10240*t6011 + t6579*t9645;
  p_output1[9]=(t10629 + t10718*t1568*t4564 - 1.*t10695*t1941*t4564)*t5974 + t1941*t4564*(t10240*t10718 + t10727 + t10695*t5974);
  p_output1[10]=t4403*(-1.*t10240*t10718 + t10790 - 1.*t10695*t5974) + t5974*(t10813 + t10695*t4403 + t10718*t6761);
  p_output1[11]=t4403*(t10867 - 1.*t10718*t1568*t4564 + t10695*t1941*t4564) + t1941*t4564*(t10887 - 1.*t10695*t4403 - 1.*t10718*t6761);
  p_output1[12]=(t10727 + t10652*t3054 + t10674*t5872)*t9271 + (t10629 - 1.*t10674*t4564)*t9645;
  p_output1[13]=(t10790 + t10984 - 1.*t10674*t5872)*t6325 + (t10813 + t11005 + t10674*t4317)*t9645;
  p_output1[14]=(t10867 + t10674*t4564)*t6325 + (t10887 - 1.*t10652*t1388 - 1.*t10674*t4317)*t9271;
  p_output1[15]=t3054*(-1.*t10549*t2284 + t10620*t3283);
  p_output1[16]=t3054*(t11005 + t10620*t2284*t3054 + t10549*t3054*t3283) + t1388*(t10984 - 1.*t10620*t2284*t5668 - 1.*t10549*t3283*t5668);
  p_output1[17]=t1388*(t10549*t2284 - 1.*t10620*t3283);
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
  p_output1[37]=-0.15121 + t3054*(t11005 + t10510*t3054) + t1388*(t10984 - 1.*t10510*t5668);
  p_output1[38]=-0.15121*t1388 - 0.15121*t5668;
  p_output1[39]=0.28121*t1347 - 1.*t10486*t1347 - 0.305*t1347*t14;
  p_output1[40]=0;
  p_output1[41]=0.305*Power(t1347,2) + 0.28121*t14 - 1.*t10486*t14;
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

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
