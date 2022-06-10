/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:47 GMT+02:00
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
  double t1135;
  double t928;
  double t1108;
  double t1170;
  double t1134;
  double t1332;
  double t1335;
  double t1370;
  double t1428;
  double t1378;
  double t1379;
  double t1397;
  double t1435;
  double t843;
  double t1353;
  double t1336;
  double t1422;
  double t1442;
  double t1443;
  double t1479;
  double t1462;
  double t1463;
  double t1472;
  double t1458;
  double t1480;
  double t1486;
  double t1490;
  double t1860;
  double t1862;
  double t1867;
  double t1928;
  double t2077;
  double t2125;
  double t2270;
  double t2280;
  double t2360;
  double t1858;
  double t1913;
  double t2410;
  double t2450;
  double t3092;
  double t3217;
  double t3247;
  double t4310;
  double t4532;
  double t4818;
  double t1839;
  double t1842;
  double t1856;
  double t1857;
  double t2665;
  double t2784;
  double t10722;
  double t10831;
  double t10864;
  double t10914;
  double t10932;
  double t10934;
  double t7615;
  double t8535;
  double t10633;
  double t2958;
  double t4819;
  double t5288;
  double t1703;
  double t1706;
  double t1707;
  double t10887;
  double t10953;
  double t10966;
  double t1642;
  double t1727;
  double t1736;
  double t1771;
  double t1772;
  double t1837;
  double t11001;
  double t11009;
  double t11043;
  double t11069;
  double t11076;
  double t11163;
  double t5343;
  double t11170;
  double t11361;
  double t11406;
  double t10972;
  double t10978;
  double t10980;
  double t1341;
  double t1446;
  double t1450;
  double t11204;
  double t11223;
  double t11334;
  double t11462;
  double t11492;
  double t11542;
  double t11535;
  double t11561;
  double t11550;
  double t12081;
  double t12349;
  double t14215;
  double t14919;
  t1135 = Cos(var1[13]);
  t928 = Cos(var1[14]);
  t1108 = Sin(var1[13]);
  t1170 = Sin(var1[14]);
  t1134 = t928*t1108;
  t1332 = -1.*t1135*t1170;
  t1335 = t1134 + t1332;
  t1370 = Cos(var1[5]);
  t1428 = Sin(var1[12]);
  t1378 = t1135*t928;
  t1379 = t1108*t1170;
  t1397 = t1378 + t1379;
  t1435 = Sin(var1[5]);
  t843 = Cos(var1[12]);
  t1353 = Cos(var1[4]);
  t1336 = Sin(var1[4]);
  t1422 = t1370*t1397;
  t1442 = t1428*t1335*t1435;
  t1443 = t1422 + t1442;
  t1479 = Sin(var1[3]);
  t1462 = -1.*t1370*t1428*t1335;
  t1463 = t1397*t1435;
  t1472 = t1462 + t1463;
  t1458 = Cos(var1[3]);
  t1480 = t843*t1353*t1335;
  t1486 = -1.*t1336*t1443;
  t1490 = t1480 + t1486;
  t1860 = -0.0641*t928;
  t1862 = -0.28*t1170;
  t1867 = t1860 + t1862;
  t1928 = -1.*t928;
  t2077 = 1. + t1928;
  t2125 = 0.075*t2077;
  t2270 = 0.355*t928;
  t2280 = -0.0641*t1170;
  t2360 = t2125 + t2270 + t2280;
  t1858 = -0.325*t1108;
  t1913 = t1135*t1867;
  t2410 = t1108*t2360;
  t2450 = t1858 + t1913 + t2410;
  t3092 = -1.*t1135;
  t3217 = 1. + t3092;
  t3247 = 0.325*t3217;
  t4310 = -1.*t1108*t1867;
  t4532 = t1135*t2360;
  t4818 = t3247 + t4310 + t4532;
  t1839 = -1.*t843;
  t1842 = 1. + t1839;
  t1856 = -0.1575*t1842;
  t1857 = -0.2255*t843;
  t2665 = -1.*t1428*t2450;
  t2784 = t1856 + t1857 + t2665;
  t10722 = -0.068*t1428;
  t10831 = t843*t2450;
  t10864 = t10722 + t10831;
  t10914 = t1370*t4818;
  t10932 = -1.*t2784*t1435;
  t10934 = t10914 + t10932;
  t7615 = t1428*t1336;
  t8535 = -1.*t843*t1353*t1435;
  t10633 = t7615 + t8535;
  t2958 = t1370*t2784;
  t4819 = t4818*t1435;
  t5288 = t2958 + t4819;
  t1703 = -1.*t928*t1108;
  t1706 = t1135*t1170;
  t1707 = t1703 + t1706;
  t10887 = t10864*t1336;
  t10953 = t1353*t10934;
  t10966 = t10887 + t10953;
  t1642 = t843*t1397*t1336;
  t1727 = t1370*t1707;
  t1736 = t1428*t1397*t1435;
  t1771 = t1727 + t1736;
  t1772 = t1353*t1771;
  t1837 = t1642 + t1772;
  t11001 = t1353*t10864;
  t11009 = -1.*t1336*t10934;
  t11043 = t11001 + t11009;
  t11069 = -1.*t1370*t1428*t1397;
  t11076 = t1707*t1435;
  t11163 = t11069 + t11076;
  t5343 = -1.*t843*t1370*t5288;
  t11170 = t5288*t11163;
  t11361 = -1.*t1428*t10864;
  t11406 = t843*t10864*t1397;
  t10972 = t1353*t1428;
  t10978 = t843*t1336*t1435;
  t10980 = t10972 + t10978;
  t1341 = t843*t1335*t1336;
  t1446 = t1353*t1443;
  t1450 = t1341 + t1446;
  t11204 = t843*t1353*t1397;
  t11223 = -1.*t1336*t1771;
  t11334 = t11204 + t11223;
  t11462 = t5288*t1472;
  t11492 = -1.*t5288*t11163;
  t11542 = -1.*t843*t10864*t1397;
  t11535 = t843*t10864*t1335;
  t11561 = t4818*t1397;
  t11550 = -1.*t4818*t1707;
  t12081 = t843*t1370*t5288;
  t12349 = -1.*t5288*t1472;
  t14215 = t1428*t10864;
  t14919 = -1.*t843*t10864*t1335;
  p_output1[0]=t1450;
  p_output1[1]=t1458*t1472 - 1.*t1479*t1490;
  p_output1[2]=t1472*t1479 + t1458*t1490;
  p_output1[3]=t10633*(t11170 + t11043*t11334 + t10966*t1837) + t1837*(-1.*t10633*t10966 - 1.*t10980*t11043 + t5343);
  p_output1[4]=t1370*(t11170 + t11406 + t10934*t1771)*t843 + t11163*(t11361 + t5343 + t10934*t1435*t843);
  p_output1[5]=t1428*(t11406 - 1.*t1397*t1428*t2784 + t1707*t4818) + t1397*t843*(t11361 - 1.*t2784*t843);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t1335 + 0.2255*t1707;
  p_output1[13]=0.325*t1170 - 1.*t1170*t2360 - 1.*t1867*t928;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10633;
  p_output1[19]=-1.*t10980*t1479 + t1370*t1458*t843;
  p_output1[20]=t10980*t1458 + t1370*t1479*t843;
  p_output1[21]=(t11462 + t10966*t1450 + t11043*t1490)*t1837 + t1450*(-1.*t11043*t11334 + t11492 - 1.*t10966*t1837);
  p_output1[22]=t11163*(t11462 + t11535 + t10934*t1443) + t1472*(t11492 + t11542 - 1.*t10934*t1771);
  p_output1[23]=t1397*(t11535 + t11561 - 1.*t1335*t1428*t2784)*t843 + t1335*(t11542 + t11550 + t1397*t1428*t2784)*t843;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t1707*(t11561 + t1335*t2450) + t1397*(t11550 - 1.*t1397*t2450);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t1837;
  p_output1[37]=t11163*t1458 - 1.*t11334*t1479;
  p_output1[38]=t11334*t1458 + t11163*t1479;
  p_output1[39]=(t10633*t10966 + t10980*t11043 + t12081)*t1450 + t10633*(t12349 - 1.*t10966*t1450 - 1.*t11043*t1490);
  p_output1[40]=t1370*(t12349 - 1.*t10934*t1443 + t14919)*t843 + t1472*(t12081 + t14215 - 1.*t10934*t1435*t843);
  p_output1[41]=t1428*(t14919 + t1335*t1428*t2784 - 1.*t1397*t4818) + t1335*t843*(t14215 + t2784*t843);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t1397;
  p_output1[49]=-1.*t1170*t1867 - 0.325*t928 + t2360*t928;
  p_output1[50]=-0.28;
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
