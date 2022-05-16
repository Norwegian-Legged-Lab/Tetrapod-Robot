/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:44 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t397;
  double t399;
  double t403;
  double t667;
  double t740;
  double t884;
  double t391;
  double t1799;
  double t38;
  double t381;
  double t2169;
  double t3042;
  double t3215;
  double t3582;
  double t3670;
  double t3696;
  double t3698;
  double t3751;
  double t4333;
  double t4674;
  double t4749;
  double t4891;
  double t1483;
  double t1698;
  double t480;
  double t866;
  double t2217;
  double t2544;
  double t3679;
  double t3693;
  double t5376;
  double t5379;
  double t5396;
  double t9728;
  double t5406;
  double t5418;
  double t5442;
  double t5468;
  double t5473;
  double t5483;
  double t5490;
  double t5501;
  double t5876;
  double t6874;
  double t8969;
  double t11235;
  double t11623;
  double t11964;
  double t12112;
  double t12374;
  double t14847;
  double t15322;
  double t15331;
  double t15345;
  double t15953;
  double t16202;
  double t16256;
  double t17493;
  double t17913;
  double t17871;
  double t17981;
  double t18157;
  double t18177;
  double t18178;
  double t18325;
  double t18559;
  double t18562;
  double t18577;
  double t18741;
  double t18753;
  double t18769;
  double t19083;
  double t19124;
  double t19369;
  double t19918;
  double t19919;
  double t19924;
  double t20029;
  double t20190;
  double t20267;
  double t20302;
  double t20305;
  double t20936;
  double t22345;
  double t22357;
  double t22361;
  double t22392;
  double t22457;
  double t22466;
  double t22563;
  double t22566;
  double t22574;
  double t9759;
  double t9832;
  double t10600;
  double t23164;
  double t23165;
  double t23166;
  double t23214;
  double t23219;
  double t22854;
  double t23267;
  double t23272;
  double t23273;
  double t23298;
  double t23299;
  double t23301;
  double t23305;
  double t23306;
  double t23307;
  double t23422;
  double t23427;
  double t23433;
  double t23552;
  double t23554;
  double t23567;
  double t23574;
  double t23598;
  double t23622;
  double t23687;
  double t23697;
  double t23701;
  double t23727;
  double t23771;
  double t23773;
  double t23780;
  double t23846;
  double t23870;
  double t24622;
  double t24626;
  double t24762;
  double t24814;
  double t24828;
  double t24044;
  double t24935;
  double t24957;
  double t24962;
  double t24989;
  double t24996;
  double t25021;
  double t25032;
  double t25058;
  double t25137;
  double t25138;
  double t25140;
  t397 = Cos(var1[12]);
  t399 = -1.*t397;
  t403 = 1. + t399;
  t667 = Sin(var1[12]);
  t740 = -0.15121*t667;
  t884 = Sin(var1[4]);
  t391 = Cos(var1[5]);
  t1799 = Sin(var1[5]);
  t38 = Cos(var1[4]);
  t381 = Sin(var1[13]);
  t2169 = Cos(var1[13]);
  t3042 = -1.*t397*t391*t884;
  t3215 = t667*t884*t1799;
  t3582 = t3042 + t3215;
  t3670 = Cos(var1[14]);
  t3696 = -1.*t38*t381;
  t3698 = t2169*t3582;
  t3751 = t3696 + t3698;
  t4333 = Sin(var1[14]);
  t4674 = t2169*t38;
  t4749 = t381*t3582;
  t4891 = t4674 + t4749;
  t1483 = -0.15121*t403;
  t1698 = t1483 + t740;
  t480 = 0.15121*t403;
  t866 = t480 + t740;
  t2217 = -1.*t2169;
  t2544 = 1. + t2217;
  t3679 = -1.*t3670;
  t3693 = 1. + t3679;
  t5376 = -1.*t38*t391*t667;
  t5379 = -1.*t397*t38*t1799;
  t5396 = t5376 + t5379;
  t9728 = -0.15121*t397;
  t5406 = 0.28121*t2544*t5396;
  t5418 = 0.50321*t2169*t3693*t5396;
  t5442 = -0.50321*t381*t4333*t5396;
  t5468 = -1.*t397*t38*t391;
  t5473 = t38*t667*t1799;
  t5483 = t5468 + t5473;
  t5490 = -0.15121*t5483;
  t5501 = t2169*t3670*t5396;
  t5876 = t381*t4333*t5396;
  t6874 = t5501 + t5876;
  t8969 = 0.23321*t6874;
  t11235 = t397*t38*t391;
  t11623 = -1.*t38*t667*t1799;
  t11964 = t11235 + t11623;
  t12112 = -1.*t381*t884;
  t12374 = t2169*t11964;
  t14847 = t12112 + t12374;
  t15322 = -1.*t2169*t884;
  t15331 = -1.*t381*t11964;
  t15345 = t15322 + t15331;
  t15953 = t2169*t884;
  t16202 = t381*t11964;
  t16256 = t15953 + t16202;
  t17493 = Cos(var1[3]);
  t17913 = Sin(var1[3]);
  t17871 = t17493*t391*t884;
  t17981 = -1.*t17913*t1799;
  t18157 = t17871 + t17981;
  t18177 = -1.*t391*t17913;
  t18178 = -1.*t17493*t884*t1799;
  t18325 = t18177 + t18178;
  t18559 = t397*t18157;
  t18562 = t667*t18325;
  t18577 = t18559 + t18562;
  t18741 = t17493*t38*t381;
  t18753 = t2169*t18577;
  t18769 = t18741 + t18753;
  t19083 = -1.*t2169*t17493*t38;
  t19124 = t381*t18577;
  t19369 = t19083 + t19124;
  t19918 = t397*t38*t391*t17913;
  t19919 = -1.*t38*t667*t17913*t1799;
  t19924 = t19918 + t19919;
  t20029 = -1.*t381*t17913*t884;
  t20190 = t2169*t19924;
  t20267 = t20029 + t20190;
  t20302 = t2169*t17913*t884;
  t20305 = t381*t19924;
  t20936 = t20302 + t20305;
  t22345 = -1.*t391*t17913*t884;
  t22357 = -1.*t17493*t1799;
  t22361 = t22345 + t22357;
  t22392 = t17493*t391;
  t22457 = -1.*t17913*t884*t1799;
  t22466 = t22392 + t22457;
  t22563 = t667*t22361;
  t22566 = t397*t22466;
  t22574 = t22563 + t22566;
  t9759 = 0.15121*t667;
  t9832 = t9728 + t9759;
  t10600 = t9728 + t740;
  t23164 = t391*t17913*t884;
  t23165 = t17493*t1799;
  t23166 = t23164 + t23165;
  t23214 = -1.*t667*t23166;
  t23219 = t23214 + t22566;
  t22854 = -1.*t667*t22466;
  t23267 = t397*t23166;
  t23272 = t667*t22466;
  t23273 = t23267 + t23272;
  t23298 = t38*t381*t17913;
  t23299 = t2169*t23273;
  t23301 = t23298 + t23299;
  t23305 = t2169*t38*t17913;
  t23306 = -1.*t381*t23273;
  t23307 = t23305 + t23306;
  t23422 = -1.*t2169*t38*t17913;
  t23427 = t381*t23273;
  t23433 = t23422 + t23427;
  t23552 = -1.*t397*t17493*t38*t391;
  t23554 = t17493*t38*t667*t1799;
  t23567 = t23552 + t23554;
  t23574 = t17493*t381*t884;
  t23598 = t2169*t23567;
  t23622 = t23574 + t23598;
  t23687 = -1.*t2169*t17493*t884;
  t23697 = t381*t23567;
  t23701 = t23687 + t23697;
  t23727 = t391*t17913;
  t23771 = t17493*t884*t1799;
  t23773 = t23727 + t23771;
  t23780 = t667*t18157;
  t23846 = t397*t23773;
  t23870 = t23780 + t23846;
  t24622 = -1.*t17493*t391*t884;
  t24626 = t17913*t1799;
  t24762 = t24622 + t24626;
  t24814 = -1.*t667*t24762;
  t24828 = t24814 + t23846;
  t24044 = -1.*t667*t23773;
  t24935 = t397*t24762;
  t24957 = t667*t23773;
  t24962 = t24935 + t24957;
  t24989 = -1.*t17493*t38*t381;
  t24996 = t2169*t24962;
  t25021 = t24989 + t24996;
  t25032 = -1.*t381*t24962;
  t25058 = t19083 + t25032;
  t25137 = t2169*t17493*t38;
  t25138 = t381*t24962;
  t25140 = t25137 + t25138;
  p_output1[0]=1.;
  p_output1[1]=0.28121*t2544*t3582 + 0.50321*t3693*t3751 + 0.28121*t38*t381 - 0.50321*t4333*t4891 + 0.23321*(t3670*t3751 + t4333*t4891) + t1698*t1799*t884 - 1.*t391*t866*t884 - 0.15121*(t1799*t397*t884 + t391*t667*t884);
  p_output1[2]=-1.*t1698*t38*t391 + t5406 + t5418 + t5442 + t5490 - 1.*t1799*t38*t866 + t8969;
  p_output1[3]=-1.*t10600*t1799*t38 + t5406 + t5418 + t5442 + t5490 + t8969 + t38*t391*t9832;
  p_output1[4]=0.50321*t15345*t3693 + 0.28121*t11964*t381 - 0.50321*t14847*t4333 + 0.23321*(t15345*t3670 + t14847*t4333) + 0.28121*t2169*t884;
  p_output1[5]=-0.50321*t16256*t3670 + 0.50321*t14847*t4333 + 0.23321*(t16256*t3670 - 1.*t14847*t4333);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1698*t18325 + 0.28121*t18577*t2544 + 0.50321*t18769*t3693 - 0.28121*t17493*t38*t381 - 0.50321*t19369*t4333 + 0.23321*(t18769*t3670 + t19369*t4333) - 0.15121*(t18325*t397 - 1.*t18157*t667) + t18157*t866;
  p_output1[9]=0.28121*t19924*t2544 + 0.50321*t20267*t3693 - 1.*t1698*t17913*t1799*t38 - 0.50321*t20936*t4333 + 0.23321*(t20267*t3670 + t20936*t4333) - 0.15121*(-1.*t17913*t1799*t38*t397 - 1.*t17913*t38*t391*t667) + t17913*t38*t391*t866 + 0.28121*t17913*t381*t884;
  p_output1[10]=t1698*t22361 + 0.28121*t22574*t2544 + 0.50321*t2169*t22574*t3693 - 0.15121*(t22854 + t22361*t397) - 0.50321*t22574*t381*t4333 + 0.23321*(t2169*t22574*t3670 + t22574*t381*t4333) + t22466*t866;
  p_output1[11]=t10600*t22466 + 0.28121*t23219*t2544 + 0.50321*t2169*t23219*t3693 - 0.15121*(t22854 - 1.*t23166*t397) - 0.50321*t23219*t381*t4333 + 0.23321*(t2169*t23219*t3670 + t23219*t381*t4333) + t23166*t9832;
  p_output1[12]=0.50321*t23307*t3693 - 0.28121*t17913*t2169*t38 + 0.28121*t23273*t381 - 0.50321*t23301*t4333 + 0.23321*(t23307*t3670 + t23301*t4333);
  p_output1[13]=-0.50321*t23433*t3670 + 0.50321*t23301*t4333 + 0.23321*(t23433*t3670 - 1.*t23301*t4333);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1698*t22466 - 0.15121*t23219 + 0.28121*t23273*t2544 + 0.50321*t23301*t3693 - 0.28121*t17913*t38*t381 - 0.50321*t23433*t4333 + 0.23321*(t23301*t3670 + t23433*t4333) + t23166*t866;
  p_output1[17]=0.28121*t23567*t2544 + 0.50321*t23622*t3693 + t1698*t17493*t1799*t38 - 0.50321*t23701*t4333 + 0.23321*(t23622*t3670 + t23701*t4333) - 0.15121*(t17493*t1799*t38*t397 + t17493*t38*t391*t667) - 1.*t17493*t38*t391*t866 - 0.28121*t17493*t381*t884;
  p_output1[18]=t1698*t18157 - 0.15121*(t18559 + t24044) + 0.28121*t23870*t2544 + 0.50321*t2169*t23870*t3693 - 0.50321*t23870*t381*t4333 + 0.23321*(t2169*t23870*t3670 + t23870*t381*t4333) + t23773*t866;
  p_output1[19]=t10600*t23773 + 0.28121*t24828*t2544 + 0.50321*t2169*t24828*t3693 - 0.15121*(t24044 - 1.*t24762*t397) - 0.50321*t24828*t381*t4333 + 0.23321*(t2169*t24828*t3670 + t24828*t381*t4333) + t24762*t9832;
  p_output1[20]=0.50321*t25058*t3693 + 0.28121*t17493*t2169*t38 + 0.28121*t24962*t381 - 0.50321*t25021*t4333 + 0.23321*(t25058*t3670 + t25021*t4333);
  p_output1[21]=-0.50321*t25140*t3670 + 0.50321*t25021*t4333 + 0.23321*(t25140*t3670 - 1.*t25021*t4333);
  p_output1[22]=-1.;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
