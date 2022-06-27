/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 14:27:16 GMT+02:00
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
  double t1987;
  double t1825;
  double t1856;
  double t1991;
  double t1881;
  double t1992;
  double t2016;
  double t2152;
  double t2017;
  double t1589;
  double t2067;
  double t2153;
  double t2114;
  double t2115;
  double t2116;
  double t2080;
  double t2123;
  double t2244;
  double t2270;
  double t3052;
  double t5164;
  double t2800;
  double t2820;
  double t2871;
  double t2872;
  double t2888;
  double t3001;
  double t3317;
  double t4187;
  double t4607;
  double t5311;
  double t5340;
  double t5965;
  double t6925;
  double t6934;
  double t6941;
  double t7317;
  double t7807;
  double t8043;
  double t8591;
  double t8623;
  double t8760;
  double t2564;
  double t3002;
  double t3005;
  double t17404;
  double t17405;
  double t17407;
  double t17483;
  double t17490;
  double t17495;
  double t17496;
  double t17497;
  double t17700;
  double t2275;
  double t2286;
  double t2316;
  double t17249;
  double t17476;
  double t17704;
  double t17705;
  double t17709;
  double t17718;
  double t17722;
  double t17723;
  double t17724;
  double t17725;
  double t17237;
  double t17238;
  double t17242;
  double t17248;
  double t17706;
  double t17707;
  double t17732;
  double t17734;
  double t17735;
  double t17737;
  double t17747;
  double t17748;
  double t17708;
  double t17726;
  double t17727;
  double t17736;
  double t17749;
  double t17750;
  double t17755;
  double t17756;
  double t17761;
  double t2026;
  double t2272;
  double t2273;
  double t17728;
  double t17768;
  double t17778;
  double t17787;
  double t17921;
  double t17937;
  double t17947;
  double t17963;
  double t17983;
  double t17979;
  double t17989;
  double t17994;
  double t18015;
  double t18008;
  t1987 = Cos(var1[10]);
  t1825 = Cos(var1[11]);
  t1856 = Sin(var1[10]);
  t1991 = Sin(var1[11]);
  t1881 = t1825*t1856;
  t1992 = -1.*t1987*t1991;
  t2016 = t1881 + t1992;
  t2152 = Sin(var1[9]);
  t2017 = Sin(var1[4]);
  t1589 = Cos(var1[9]);
  t2067 = Cos(var1[4]);
  t2153 = Sin(var1[5]);
  t2114 = t1987*t1825;
  t2115 = t1856*t1991;
  t2116 = t2114 + t2115;
  t2080 = Cos(var1[5]);
  t2123 = t2080*t2116;
  t2244 = t2152*t2016*t2153;
  t2270 = t2123 + t2244;
  t3052 = Cos(var1[3]);
  t5164 = Sin(var1[3]);
  t2800 = -1.*t1825*t1856;
  t2820 = t1987*t1991;
  t2871 = t2800 + t2820;
  t2872 = t2080*t2871;
  t2888 = t2152*t2116*t2153;
  t3001 = t2872 + t2888;
  t3317 = -1.*t2080*t2152*t2016;
  t4187 = t2116*t2153;
  t4607 = t3317 + t4187;
  t5311 = t1589*t2067*t2016;
  t5340 = -1.*t2017*t2270;
  t5965 = t5311 + t5340;
  t6925 = t2067*t2152;
  t6934 = t1589*t2017*t2153;
  t6941 = t6925 + t6934;
  t7317 = -1.*t2080*t2152*t2116;
  t7807 = t2871*t2153;
  t8043 = t7317 + t7807;
  t8591 = t1589*t2067*t2116;
  t8623 = -1.*t2017*t3001;
  t8760 = t8591 + t8623;
  t2564 = t1589*t2116*t2017;
  t3002 = t2067*t3001;
  t3005 = t2564 + t3002;
  t17404 = -0.0641*t1825;
  t17405 = -0.28*t1991;
  t17407 = t17404 + t17405;
  t17483 = -1.*t1825;
  t17490 = 1. + t17483;
  t17495 = -0.575*t17490;
  t17496 = -0.295*t1825;
  t17497 = -0.0641*t1991;
  t17700 = t17495 + t17496 + t17497;
  t2275 = t2152*t2017;
  t2286 = -1.*t1589*t2067*t2153;
  t2316 = t2275 + t2286;
  t17249 = 0.325*t1856;
  t17476 = t1987*t17407;
  t17704 = t1856*t17700;
  t17705 = t17249 + t17476 + t17704;
  t17709 = -1.*t1987;
  t17718 = 1. + t17709;
  t17722 = -0.325*t17718;
  t17723 = -1.*t1856*t17407;
  t17724 = t1987*t17700;
  t17725 = t17722 + t17723 + t17724;
  t17237 = -1.*t1589;
  t17238 = 1. + t17237;
  t17242 = 0.1575*t17238;
  t17248 = 0.2255*t1589;
  t17706 = -1.*t2152*t17705;
  t17707 = t17242 + t17248 + t17706;
  t17732 = 0.068*t2152;
  t17734 = t1589*t17705;
  t17735 = t17732 + t17734;
  t17737 = t2080*t17725;
  t17747 = -1.*t17707*t2153;
  t17748 = t17737 + t17747;
  t17708 = t2080*t17707;
  t17726 = t17725*t2153;
  t17727 = t17708 + t17726;
  t17736 = t17735*t2017;
  t17749 = t2067*t17748;
  t17750 = t17736 + t17749;
  t17755 = t2067*t17735;
  t17756 = -1.*t2017*t17748;
  t17761 = t17755 + t17756;
  t2026 = t1589*t2016*t2017;
  t2272 = t2067*t2270;
  t2273 = t2026 + t2272;
  t17728 = -1.*t1589*t2080*t17727;
  t17768 = t17727*t8043;
  t17778 = t17727*t4607;
  t17787 = -1.*t17727*t8043;
  t17921 = t1589*t2080*t17727;
  t17937 = -1.*t17727*t4607;
  t17947 = -1.*t2152*t17735;
  t17963 = t1589*t17735*t2116;
  t17983 = -1.*t1589*t17735*t2116;
  t17979 = t1589*t17735*t2016;
  t17989 = t2152*t17735;
  t17994 = -1.*t1589*t17735*t2016;
  t18015 = t17725*t2116;
  t18008 = -1.*t17725*t2871;
  p_output1[0]=t2273;
  p_output1[1]=t2316;
  p_output1[2]=t3005;
  p_output1[3]=t3052*t4607 - 1.*t5164*t5965;
  p_output1[4]=t1589*t2080*t3052 - 1.*t5164*t6941;
  p_output1[5]=t3052*t8043 - 1.*t5164*t8760;
  p_output1[6]=t4607*t5164 + t3052*t5965;
  p_output1[7]=t1589*t2080*t5164 + t3052*t6941;
  p_output1[8]=t5164*t8043 + t3052*t8760;
  p_output1[9]=t3005*(t17728 - 1.*t17750*t2316 - 1.*t17761*t6941) + t2316*(t17768 + t17750*t3005 + t17761*t8760);
  p_output1[10]=t3005*(t17778 + t17750*t2273 + t17761*t5965) + t2273*(t17787 - 1.*t17750*t3005 - 1.*t17761*t8760);
  p_output1[11]=t2316*(t17937 - 1.*t17750*t2273 - 1.*t17761*t5965) + t2273*(t17921 + t17750*t2316 + t17761*t6941);
  p_output1[12]=t1589*t2080*(t17768 + t17963 + t17748*t3001) + (t17728 + t17947 + t1589*t17748*t2153)*t8043;
  p_output1[13]=(t17787 + t17983 - 1.*t17748*t3001)*t4607 + (t17778 + t17979 + t17748*t2270)*t8043;
  p_output1[14]=t1589*t2080*(t17937 + t17994 - 1.*t17748*t2270) + (t17921 + t17989 - 1.*t1589*t17748*t2153)*t4607;
  p_output1[15]=t1589*(-1.*t1589*t17707 + t17947)*t2116 + t2152*(t17963 - 1.*t17707*t2116*t2152 + t17725*t2871);
  p_output1[16]=t1589*t2116*(t17979 + t18015 - 1.*t17707*t2016*t2152) + t1589*t2016*(t17983 + t18008 + t17707*t2116*t2152);
  p_output1[17]=t1589*(t1589*t17707 + t17989)*t2016 + t2152*(t17994 - 1.*t17725*t2116 + t17707*t2016*t2152);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t2016 - 0.2255*t2871;
  p_output1[28]=t2116*(t18008 - 1.*t17705*t2116) + (t18015 + t17705*t2016)*t2871;
  p_output1[29]=0.068*t2116;
  p_output1[30]=-1.*t17407*t1825 - 0.325*t1991 - 1.*t17700*t1991;
  p_output1[31]=0;
  p_output1[32]=0.325*t1825 + t17700*t1825 - 1.*t17407*t1991;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
