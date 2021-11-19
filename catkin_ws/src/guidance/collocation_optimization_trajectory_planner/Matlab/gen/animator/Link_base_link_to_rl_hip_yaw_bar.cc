/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:32 GMT+01:00
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
  double t65;
  double t128;
  double t200;
  double t261;
  double t185;
  double t246;
  double t325;
  double t343;
  double t1676;
  double t1695;
  double t1690;
  double t1704;
  double t1729;
  double t1733;
  double t1749;
  double t1751;
  double t1679;
  double t1731;
  double t1765;
  double t1770;
  double t2385;
  double t2396;
  double t2425;
  double t2463;
  double t2465;
  double t2475;
  double t2347;
  double t2435;
  double t2486;
  double t2524;
  double t361;
  double t480;
  double t588;
  double t654;
  double t727;
  double t817;
  double t1057;
  double t1084;
  double t1135;
  double t1260;
  double t1307;
  double t1326;
  double t1404;
  double t1480;
  double t1542;
  double t1564;
  double t1603;
  double t1655;
  double t3130;
  double t3132;
  double t3133;
  double t1790;
  double t1929;
  double t1947;
  double t1966;
  double t1994;
  double t2010;
  double t2029;
  double t2041;
  double t2054;
  double t2065;
  double t2076;
  double t2090;
  double t2115;
  double t2143;
  double t2162;
  double t2184;
  double t2201;
  double t2256;
  double t3278;
  double t3289;
  double t3290;
  double t2620;
  double t2706;
  double t2716;
  double t2733;
  double t2742;
  double t2789;
  double t2855;
  double t2877;
  double t2909;
  double t2951;
  double t2975;
  double t2987;
  double t2998;
  double t3031;
  double t3062;
  double t3077;
  double t3093;
  double t3121;
  double t3491;
  double t3493;
  double t3494;
  t65 = Cos(var1[4]);
  t128 = Cos(var1[5]);
  t200 = Sin(var1[4]);
  t261 = Sin(var1[5]);
  t185 = -0.007186*t65*t128;
  t246 = -0.011033*t200;
  t325 = 0.007186*t65*t261;
  t343 = var1[0] + t185 + t246 + t325;
  t1676 = Sin(var1[3]);
  t1695 = Cos(var1[3]);
  t1690 = t128*t1676*t200;
  t1704 = t1695*t261;
  t1729 = t1690 + t1704;
  t1733 = t1695*t128;
  t1749 = -1.*t1676*t200*t261;
  t1751 = t1733 + t1749;
  t1679 = 0.011033*t65*t1676;
  t1731 = -0.007186*t1729;
  t1765 = -0.007186*t1751;
  t1770 = var1[1] + t1679 + t1731 + t1765;
  t2385 = -1.*t1695*t128*t200;
  t2396 = t1676*t261;
  t2425 = t2385 + t2396;
  t2463 = t128*t1676;
  t2465 = t1695*t200*t261;
  t2475 = t2463 + t2465;
  t2347 = -0.011033*t1695*t65;
  t2435 = -0.007186*t2425;
  t2486 = -0.007186*t2475;
  t2524 = var1[2] + t2347 + t2435 + t2486;
  t361 = -0.007135*t200;
  t480 = -0.002464*t200;
  t588 = 0.002474*t200;
  t654 = 0.007143*t200;
  t727 = 0.011039*t200;
  t817 = 0.013738*t200;
  t1057 = 0.014949*t200;
  t1084 = 0.01454*t200;
  t1135 = 0.012555*t200;
  t1260 = 0.00921*t200;
  t1307 = 0.004866*t200;
  t1326 = -5.e-6*t200;
  t1404 = -0.004875*t200;
  t1480 = -0.009217*t200;
  t1542 = -0.01256*t200;
  t1564 = -0.014542*t200;
  t1603 = -0.014948*t200;
  t1655 = -0.013735*t200;
  t3130 = -0.158396*t65*t128;
  t3132 = -0.144024*t65*t261;
  t3133 = var1[0] + t3130 + t246 + t3132;
  t1790 = 0.007135*t65*t1676;
  t1929 = 0.002464*t65*t1676;
  t1947 = -0.002474*t65*t1676;
  t1966 = -0.007143*t65*t1676;
  t1994 = -0.011039*t65*t1676;
  t2010 = -0.013738*t65*t1676;
  t2029 = -0.014949*t65*t1676;
  t2041 = -0.01454*t65*t1676;
  t2054 = -0.012555*t65*t1676;
  t2065 = -0.00921*t65*t1676;
  t2076 = -0.004866*t65*t1676;
  t2090 = 5.e-6*t65*t1676;
  t2115 = 0.004875*t65*t1676;
  t2143 = 0.009217*t65*t1676;
  t2162 = 0.01256*t65*t1676;
  t2184 = 0.014542*t65*t1676;
  t2201 = 0.014948*t65*t1676;
  t2256 = 0.013735*t65*t1676;
  t3278 = -0.158396*t1729;
  t3289 = 0.144024*t1751;
  t3290 = var1[1] + t1679 + t3278 + t3289;
  t2620 = -0.007135*t1695*t65;
  t2706 = -0.002464*t1695*t65;
  t2716 = 0.002474*t1695*t65;
  t2733 = 0.007143*t1695*t65;
  t2742 = 0.011039*t1695*t65;
  t2789 = 0.013738*t1695*t65;
  t2855 = 0.014949*t1695*t65;
  t2877 = 0.01454*t1695*t65;
  t2909 = 0.012555*t1695*t65;
  t2951 = 0.00921*t1695*t65;
  t2975 = 0.004866*t1695*t65;
  t2987 = -5.e-6*t1695*t65;
  t2998 = -0.004875*t1695*t65;
  t3031 = -0.009217*t1695*t65;
  t3062 = -0.01256*t1695*t65;
  t3077 = -0.014542*t1695*t65;
  t3093 = -0.014948*t1695*t65;
  t3121 = -0.013735*t1695*t65;
  t3491 = -0.158396*t2425;
  t3493 = 0.144024*t2475;
  t3494 = var1[2] + t2347 + t3491 + t3493;
  p_output1[0]=t343;
  p_output1[1]=t361 - 0.00933*t128*t65 + 0.00933*t261*t65 + var1[0];
  p_output1[2]=t480 - 0.010462*t128*t65 + 0.010462*t261*t65 + var1[0];
  p_output1[3]=t588 - 0.010461*t128*t65 + 0.010461*t261*t65 + var1[0];
  p_output1[4]=-0.009327*t128*t65 + 0.009327*t261*t65 + t654 + var1[0];
  p_output1[5]=-0.007181*t128*t65 + 0.007181*t261*t65 + t727 + var1[0];
  p_output1[6]=-0.004258*t128*t65 + 0.004258*t261*t65 + t817 + var1[0];
  p_output1[7]=t1057 - 0.000873*t128*t65 + 0.000873*t261*t65 + var1[0];
  p_output1[8]=t1084 + 0.002607*t128*t65 - 0.002607*t261*t65 + var1[0];
  p_output1[9]=t1135 + 0.005804*t128*t65 - 0.005804*t261*t65 + var1[0];
  p_output1[10]=t1260 + 0.008372*t128*t65 - 0.008372*t261*t65 + var1[0];
  p_output1[11]=t1307 + 0.010033*t128*t65 - 0.010033*t261*t65 + var1[0];
  p_output1[12]=t1326 + 0.010607*t128*t65 - 0.010607*t261*t65 + var1[0];
  p_output1[13]=t1404 + 0.010031*t128*t65 - 0.010031*t261*t65 + var1[0];
  p_output1[14]=t1480 + 0.008368*t128*t65 - 0.008368*t261*t65 + var1[0];
  p_output1[15]=t1542 + 0.005798*t128*t65 - 0.005798*t261*t65 + var1[0];
  p_output1[16]=t1564 + 0.002601*t128*t65 - 0.002601*t261*t65 + var1[0];
  p_output1[17]=t1603 - 0.000879*t128*t65 + 0.000879*t261*t65 + var1[0];
  p_output1[18]=t1655 - 0.004264*t128*t65 + 0.004264*t261*t65 + var1[0];
  p_output1[19]=t343;
  p_output1[20]=t1770;
  p_output1[21]=-0.00933*t1729 - 0.00933*t1751 + t1790 + var1[1];
  p_output1[22]=-0.010462*t1729 - 0.010462*t1751 + t1929 + var1[1];
  p_output1[23]=-0.010461*t1729 - 0.010461*t1751 + t1947 + var1[1];
  p_output1[24]=-0.009327*t1729 - 0.009327*t1751 + t1966 + var1[1];
  p_output1[25]=-0.007181*t1729 - 0.007181*t1751 + t1994 + var1[1];
  p_output1[26]=-0.004258*t1729 - 0.004258*t1751 + t2010 + var1[1];
  p_output1[27]=-0.000873*t1729 - 0.000873*t1751 + t2029 + var1[1];
  p_output1[28]=0.002607*t1729 + 0.002607*t1751 + t2041 + var1[1];
  p_output1[29]=0.005804*t1729 + 0.005804*t1751 + t2054 + var1[1];
  p_output1[30]=0.008372*t1729 + 0.008372*t1751 + t2065 + var1[1];
  p_output1[31]=0.010033*t1729 + 0.010033*t1751 + t2076 + var1[1];
  p_output1[32]=0.010607*t1729 + 0.010607*t1751 + t2090 + var1[1];
  p_output1[33]=0.010031*t1729 + 0.010031*t1751 + t2115 + var1[1];
  p_output1[34]=0.008368*t1729 + 0.008368*t1751 + t2143 + var1[1];
  p_output1[35]=0.005798*t1729 + 0.005798*t1751 + t2162 + var1[1];
  p_output1[36]=0.002601*t1729 + 0.002601*t1751 + t2184 + var1[1];
  p_output1[37]=-0.000879*t1729 - 0.000879*t1751 + t2201 + var1[1];
  p_output1[38]=-0.004264*t1729 - 0.004264*t1751 + t2256 + var1[1];
  p_output1[39]=t1770;
  p_output1[40]=t2524;
  p_output1[41]=-0.00933*t2425 - 0.00933*t2475 + t2620 + var1[2];
  p_output1[42]=-0.010462*t2425 - 0.010462*t2475 + t2706 + var1[2];
  p_output1[43]=-0.010461*t2425 - 0.010461*t2475 + t2716 + var1[2];
  p_output1[44]=-0.009327*t2425 - 0.009327*t2475 + t2733 + var1[2];
  p_output1[45]=-0.007181*t2425 - 0.007181*t2475 + t2742 + var1[2];
  p_output1[46]=-0.004258*t2425 - 0.004258*t2475 + t2789 + var1[2];
  p_output1[47]=-0.000873*t2425 - 0.000873*t2475 + t2855 + var1[2];
  p_output1[48]=0.002607*t2425 + 0.002607*t2475 + t2877 + var1[2];
  p_output1[49]=0.005804*t2425 + 0.005804*t2475 + t2909 + var1[2];
  p_output1[50]=0.008372*t2425 + 0.008372*t2475 + t2951 + var1[2];
  p_output1[51]=0.010033*t2425 + 0.010033*t2475 + t2975 + var1[2];
  p_output1[52]=0.010607*t2425 + 0.010607*t2475 + t2987 + var1[2];
  p_output1[53]=0.010031*t2425 + 0.010031*t2475 + t2998 + var1[2];
  p_output1[54]=0.008368*t2425 + 0.008368*t2475 + t3031 + var1[2];
  p_output1[55]=0.005798*t2425 + 0.005798*t2475 + t3062 + var1[2];
  p_output1[56]=0.002601*t2425 + 0.002601*t2475 + t3077 + var1[2];
  p_output1[57]=-0.000879*t2425 - 0.000879*t2475 + t3093 + var1[2];
  p_output1[58]=-0.004264*t2425 - 0.004264*t2475 + t3121 + var1[2];
  p_output1[59]=t2524;
  p_output1[60]=t3133;
  p_output1[61]=t361 - 0.16054*t128*t65 - 0.14188*t261*t65 + var1[0];
  p_output1[62]=t480 - 0.161672*t128*t65 - 0.140748*t261*t65 + var1[0];
  p_output1[63]=t588 - 0.161671*t128*t65 - 0.140749*t261*t65 + var1[0];
  p_output1[64]=-0.160537*t128*t65 - 0.141883*t261*t65 + t654 + var1[0];
  p_output1[65]=-0.158391*t128*t65 - 0.144029*t261*t65 + t727 + var1[0];
  p_output1[66]=-0.155468*t128*t65 - 0.146952*t261*t65 + t817 + var1[0];
  p_output1[67]=t1057 - 0.152083*t128*t65 - 0.150337*t261*t65 + var1[0];
  p_output1[68]=t1084 - 0.148603*t128*t65 - 0.153817*t261*t65 + var1[0];
  p_output1[69]=t1135 - 0.145406*t128*t65 - 0.157014*t261*t65 + var1[0];
  p_output1[70]=t1260 - 0.142838*t128*t65 - 0.159582*t261*t65 + var1[0];
  p_output1[71]=t1307 - 0.141177*t128*t65 - 0.161243*t261*t65 + var1[0];
  p_output1[72]=t1326 - 0.140603*t128*t65 - 0.161817*t261*t65 + var1[0];
  p_output1[73]=t1404 - 0.141179*t128*t65 - 0.161241*t261*t65 + var1[0];
  p_output1[74]=t1480 - 0.142842*t128*t65 - 0.159578*t261*t65 + var1[0];
  p_output1[75]=t1542 - 0.145412*t128*t65 - 0.157008*t261*t65 + var1[0];
  p_output1[76]=t1564 - 0.148609*t128*t65 - 0.153811*t261*t65 + var1[0];
  p_output1[77]=t1603 - 0.152089*t128*t65 - 0.150331*t261*t65 + var1[0];
  p_output1[78]=t1655 - 0.155474*t128*t65 - 0.146946*t261*t65 + var1[0];
  p_output1[79]=t3133;
  p_output1[80]=t3290;
  p_output1[81]=-0.16054*t1729 + 0.14188*t1751 + t1790 + var1[1];
  p_output1[82]=-0.161672*t1729 + 0.140748*t1751 + t1929 + var1[1];
  p_output1[83]=-0.161671*t1729 + 0.140749*t1751 + t1947 + var1[1];
  p_output1[84]=-0.160537*t1729 + 0.141883*t1751 + t1966 + var1[1];
  p_output1[85]=-0.158391*t1729 + 0.144029*t1751 + t1994 + var1[1];
  p_output1[86]=-0.155468*t1729 + 0.146952*t1751 + t2010 + var1[1];
  p_output1[87]=-0.152083*t1729 + 0.150337*t1751 + t2029 + var1[1];
  p_output1[88]=-0.148603*t1729 + 0.153817*t1751 + t2041 + var1[1];
  p_output1[89]=-0.145406*t1729 + 0.157014*t1751 + t2054 + var1[1];
  p_output1[90]=-0.142838*t1729 + 0.159582*t1751 + t2065 + var1[1];
  p_output1[91]=-0.141177*t1729 + 0.161243*t1751 + t2076 + var1[1];
  p_output1[92]=-0.140603*t1729 + 0.161817*t1751 + t2090 + var1[1];
  p_output1[93]=-0.141179*t1729 + 0.161241*t1751 + t2115 + var1[1];
  p_output1[94]=-0.142842*t1729 + 0.159578*t1751 + t2143 + var1[1];
  p_output1[95]=-0.145412*t1729 + 0.157008*t1751 + t2162 + var1[1];
  p_output1[96]=-0.148609*t1729 + 0.153811*t1751 + t2184 + var1[1];
  p_output1[97]=-0.152089*t1729 + 0.150331*t1751 + t2201 + var1[1];
  p_output1[98]=-0.155474*t1729 + 0.146946*t1751 + t2256 + var1[1];
  p_output1[99]=t3290;
  p_output1[100]=t3494;
  p_output1[101]=-0.16054*t2425 + 0.14188*t2475 + t2620 + var1[2];
  p_output1[102]=-0.161672*t2425 + 0.140748*t2475 + t2706 + var1[2];
  p_output1[103]=-0.161671*t2425 + 0.140749*t2475 + t2716 + var1[2];
  p_output1[104]=-0.160537*t2425 + 0.141883*t2475 + t2733 + var1[2];
  p_output1[105]=-0.158391*t2425 + 0.144029*t2475 + t2742 + var1[2];
  p_output1[106]=-0.155468*t2425 + 0.146952*t2475 + t2789 + var1[2];
  p_output1[107]=-0.152083*t2425 + 0.150337*t2475 + t2855 + var1[2];
  p_output1[108]=-0.148603*t2425 + 0.153817*t2475 + t2877 + var1[2];
  p_output1[109]=-0.145406*t2425 + 0.157014*t2475 + t2909 + var1[2];
  p_output1[110]=-0.142838*t2425 + 0.159582*t2475 + t2951 + var1[2];
  p_output1[111]=-0.141177*t2425 + 0.161243*t2475 + t2975 + var1[2];
  p_output1[112]=-0.140603*t2425 + 0.161817*t2475 + t2987 + var1[2];
  p_output1[113]=-0.141179*t2425 + 0.161241*t2475 + t2998 + var1[2];
  p_output1[114]=-0.142842*t2425 + 0.159578*t2475 + t3031 + var1[2];
  p_output1[115]=-0.145412*t2425 + 0.157008*t2475 + t3062 + var1[2];
  p_output1[116]=-0.148609*t2425 + 0.153811*t2475 + t3077 + var1[2];
  p_output1[117]=-0.152089*t2425 + 0.150331*t2475 + t3093 + var1[2];
  p_output1[118]=-0.155474*t2425 + 0.146946*t2475 + t3121 + var1[2];
  p_output1[119]=t3494;
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

#include "Link_base_link_to_rl_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_rl_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
