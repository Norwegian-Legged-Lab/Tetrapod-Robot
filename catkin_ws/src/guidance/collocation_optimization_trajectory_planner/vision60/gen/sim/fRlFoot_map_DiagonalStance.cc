/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:40 GMT+02:00
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
  double t650;
  double t357;
  double t514;
  double t651;
  double t639;
  double t665;
  double t693;
  double t1007;
  double t2545;
  double t1021;
  double t2056;
  double t2136;
  double t3656;
  double t38;
  double t842;
  double t740;
  double t2263;
  double t4203;
  double t4831;
  double t12800;
  double t6388;
  double t8107;
  double t11521;
  double t5940;
  double t12807;
  double t12810;
  double t12811;
  double t13462;
  double t13463;
  double t13465;
  double t13467;
  double t13468;
  double t13469;
  double t13470;
  double t13471;
  double t13472;
  double t13461;
  double t13466;
  double t13473;
  double t13474;
  double t13479;
  double t13482;
  double t13484;
  double t13485;
  double t13486;
  double t13487;
  double t13453;
  double t13455;
  double t13456;
  double t13460;
  double t13476;
  double t13477;
  double t13496;
  double t13498;
  double t13499;
  double t13501;
  double t13504;
  double t13505;
  double t13493;
  double t13494;
  double t13495;
  double t13478;
  double t13489;
  double t13490;
  double t13445;
  double t13446;
  double t13447;
  double t13500;
  double t13507;
  double t13508;
  double t13433;
  double t13448;
  double t13449;
  double t13450;
  double t13451;
  double t13452;
  double t13562;
  double t13578;
  double t13592;
  double t13645;
  double t13653;
  double t13654;
  double t13491;
  double t13656;
  double t13847;
  double t14759;
  double t13544;
  double t13552;
  double t13553;
  double t808;
  double t5140;
  double t5856;
  double t13686;
  double t13735;
  double t13740;
  double t21727;
  double t21733;
  double t21755;
  double t21748;
  double t21771;
  double t21760;
  double t21810;
  double t21816;
  double t21822;
  double t21827;
  t650 = Cos(var1[10]);
  t357 = Cos(var1[11]);
  t514 = Sin(var1[10]);
  t651 = Sin(var1[11]);
  t639 = t357*t514;
  t665 = -1.*t650*t651;
  t693 = t639 + t665;
  t1007 = Cos(var1[5]);
  t2545 = Sin(var1[9]);
  t1021 = t650*t357;
  t2056 = t514*t651;
  t2136 = t1021 + t2056;
  t3656 = Sin(var1[5]);
  t38 = Cos(var1[9]);
  t842 = Cos(var1[4]);
  t740 = Sin(var1[4]);
  t2263 = t1007*t2136;
  t4203 = t2545*t693*t3656;
  t4831 = t2263 + t4203;
  t12800 = Sin(var1[3]);
  t6388 = -1.*t1007*t2545*t693;
  t8107 = t2136*t3656;
  t11521 = t6388 + t8107;
  t5940 = Cos(var1[3]);
  t12807 = t38*t842*t693;
  t12810 = -1.*t740*t4831;
  t12811 = t12807 + t12810;
  t13462 = -0.0641*t357;
  t13463 = -0.28*t651;
  t13465 = t13462 + t13463;
  t13467 = -1.*t357;
  t13468 = 1. + t13467;
  t13469 = -0.575*t13468;
  t13470 = -0.295*t357;
  t13471 = -0.0641*t651;
  t13472 = t13469 + t13470 + t13471;
  t13461 = 0.325*t514;
  t13466 = t650*t13465;
  t13473 = t514*t13472;
  t13474 = t13461 + t13466 + t13473;
  t13479 = -1.*t650;
  t13482 = 1. + t13479;
  t13484 = -0.325*t13482;
  t13485 = -1.*t514*t13465;
  t13486 = t650*t13472;
  t13487 = t13484 + t13485 + t13486;
  t13453 = -1.*t38;
  t13455 = 1. + t13453;
  t13456 = 0.1575*t13455;
  t13460 = 0.2255*t38;
  t13476 = -1.*t2545*t13474;
  t13477 = t13456 + t13460 + t13476;
  t13496 = 0.068*t2545;
  t13498 = t38*t13474;
  t13499 = t13496 + t13498;
  t13501 = t1007*t13487;
  t13504 = -1.*t13477*t3656;
  t13505 = t13501 + t13504;
  t13493 = t2545*t740;
  t13494 = -1.*t38*t842*t3656;
  t13495 = t13493 + t13494;
  t13478 = t1007*t13477;
  t13489 = t13487*t3656;
  t13490 = t13478 + t13489;
  t13445 = -1.*t357*t514;
  t13446 = t650*t651;
  t13447 = t13445 + t13446;
  t13500 = t13499*t740;
  t13507 = t842*t13505;
  t13508 = t13500 + t13507;
  t13433 = t38*t2136*t740;
  t13448 = t1007*t13447;
  t13449 = t2545*t2136*t3656;
  t13450 = t13448 + t13449;
  t13451 = t842*t13450;
  t13452 = t13433 + t13451;
  t13562 = t842*t13499;
  t13578 = -1.*t740*t13505;
  t13592 = t13562 + t13578;
  t13645 = -1.*t1007*t2545*t2136;
  t13653 = t13447*t3656;
  t13654 = t13645 + t13653;
  t13491 = -1.*t38*t1007*t13490;
  t13656 = t13490*t13654;
  t13847 = -1.*t2545*t13499;
  t14759 = t38*t13499*t2136;
  t13544 = t842*t2545;
  t13552 = t38*t740*t3656;
  t13553 = t13544 + t13552;
  t808 = t38*t693*t740;
  t5140 = t842*t4831;
  t5856 = t808 + t5140;
  t13686 = t38*t842*t2136;
  t13735 = -1.*t740*t13450;
  t13740 = t13686 + t13735;
  t21727 = t13490*t11521;
  t21733 = -1.*t13490*t13654;
  t21755 = -1.*t38*t13499*t2136;
  t21748 = t38*t13499*t693;
  t21771 = t13487*t2136;
  t21760 = -1.*t13487*t13447;
  t21810 = t38*t1007*t13490;
  t21816 = -1.*t13490*t11521;
  t21822 = t2545*t13499;
  t21827 = -1.*t38*t13499*t693;
  p_output1[0]=t5856;
  p_output1[1]=-1.*t12800*t12811 + t11521*t5940;
  p_output1[2]=t11521*t12800 + t12811*t5940;
  p_output1[3]=t13452*(t13491 - 1.*t13495*t13508 - 1.*t13553*t13592) + t13495*(t13452*t13508 + t13656 + t13592*t13740);
  p_output1[4]=t1007*(t13450*t13505 + t13656 + t14759)*t38 + t13654*(t13491 + t13847 + t13505*t3656*t38);
  p_output1[5]=t2545*(t13447*t13487 + t14759 - 1.*t13477*t2136*t2545) + t2136*t38*(t13847 - 1.*t13477*t38);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.2255*t13447 - 0.1575*t693;
  p_output1[10]=-1.*t13465*t357 - 0.325*t651 - 1.*t13472*t651;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13495;
  p_output1[19]=-1.*t12800*t13553 + t1007*t38*t5940;
  p_output1[20]=t1007*t12800*t38 + t13553*t5940;
  p_output1[21]=(-1.*t13452*t13508 - 1.*t13592*t13740 + t21733)*t5856 + t13452*(t12811*t13592 + t21727 + t13508*t5856);
  p_output1[22]=t11521*(-1.*t13450*t13505 + t21733 + t21755) + t13654*(t21727 + t21748 + t13505*t4831);
  p_output1[23]=(t21755 + t21760 + t13477*t2136*t2545)*t38*t693 + t2136*t38*(t21748 + t21771 - 1.*t13477*t2545*t693);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t2136*(-1.*t13474*t2136 + t21760) + t13447*(t21771 + t13474*t693);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t13452;
  p_output1[37]=-1.*t12800*t13740 + t13654*t5940;
  p_output1[38]=t12800*t13654 + t13740*t5940;
  p_output1[39]=(t13495*t13508 + t13553*t13592 + t21810)*t5856 + t13495*(-1.*t12811*t13592 + t21816 - 1.*t13508*t5856);
  p_output1[40]=t11521*(t21810 + t21822 - 1.*t13505*t3656*t38) + t1007*t38*(t21816 + t21827 - 1.*t13505*t4831);
  p_output1[41]=t38*(t21822 + t13477*t38)*t693 + t2545*(-1.*t13487*t2136 + t21827 + t13477*t2545*t693);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t2136;
  p_output1[46]=0.325*t357 + t13472*t357 - 1.*t13465*t651;
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
