/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:13 GMT+01:00
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
  double t96;
  double t210;
  double t272;
  double t297;
  double t222;
  double t274;
  double t351;
  double t399;
  double t1680;
  double t1920;
  double t1744;
  double t1927;
  double t1946;
  double t1976;
  double t1977;
  double t1989;
  double t1733;
  double t1963;
  double t1991;
  double t2015;
  double t2612;
  double t2623;
  double t2625;
  double t2641;
  double t2644;
  double t2654;
  double t2592;
  double t2627;
  double t2655;
  double t2657;
  double t435;
  double t512;
  double t622;
  double t767;
  double t812;
  double t896;
  double t1018;
  double t1064;
  double t1112;
  double t1158;
  double t1217;
  double t1261;
  double t1293;
  double t1370;
  double t1411;
  double t1498;
  double t1559;
  double t1636;
  double t3386;
  double t3388;
  double t3392;
  double t2022;
  double t2035;
  double t2064;
  double t2074;
  double t2110;
  double t2176;
  double t2212;
  double t2240;
  double t2272;
  double t2288;
  double t2303;
  double t2326;
  double t2343;
  double t2416;
  double t2462;
  double t2484;
  double t2530;
  double t2554;
  double t3852;
  double t3864;
  double t3873;
  double t2663;
  double t2717;
  double t2764;
  double t2805;
  double t2835;
  double t2888;
  double t2932;
  double t2990;
  double t3079;
  double t3108;
  double t3137;
  double t3197;
  double t3270;
  double t3293;
  double t3316;
  double t3341;
  double t3359;
  double t3372;
  double t4117;
  double t4119;
  double t4128;
  t96 = Cos(var1[4]);
  t210 = Cos(var1[5]);
  t272 = Sin(var1[4]);
  t297 = Sin(var1[5]);
  t222 = -0.010036*t96*t210;
  t274 = -0.004853*t272;
  t351 = 0.010036*t96*t297;
  t399 = var1[0] + t222 + t274 + t351;
  t1680 = Sin(var1[3]);
  t1920 = Cos(var1[3]);
  t1744 = t210*t1680*t272;
  t1927 = t1920*t297;
  t1946 = t1744 + t1927;
  t1976 = t1920*t210;
  t1977 = -1.*t1680*t272*t297;
  t1989 = t1976 + t1977;
  t1733 = 0.004853*t96*t1680;
  t1963 = -0.010036*t1946;
  t1991 = -0.010036*t1989;
  t2015 = var1[1] + t1733 + t1963 + t1991;
  t2612 = -1.*t1920*t210*t272;
  t2623 = t1680*t297;
  t2625 = t2612 + t2623;
  t2641 = t210*t1680;
  t2644 = t1920*t272*t297;
  t2654 = t2641 + t2644;
  t2592 = -0.004853*t1920*t96;
  t2627 = -0.010036*t2625;
  t2655 = -0.010036*t2654;
  t2657 = var1[2] + t2592 + t2627 + t2655;
  t435 = 0.000018*t272;
  t512 = 0.004888*t272;
  t622 = 0.009228*t272;
  t767 = 0.012567*t272;
  t812 = 0.014545*t272;
  t896 = 0.014947*t272;
  t1018 = 0.013729*t272;
  t1064 = 0.011023*t272;
  t1112 = 0.007123*t272;
  t1158 = 0.002451*t272;
  t1217 = -0.002487*t272;
  t1261 = -0.007155*t272;
  t1293 = -0.011048*t272;
  t1370 = -0.013744*t272;
  t1411 = -0.01495*t272;
  t1498 = -0.014537*t272;
  t1559 = -0.012547*t272;
  t1636 = -0.009199*t272;
  t3386 = -0.161246*t96*t210;
  t3388 = -0.141174*t96*t297;
  t3392 = var1[0] + t3386 + t274 + t3388;
  t2022 = -0.000018*t96*t1680;
  t2035 = -0.004888*t96*t1680;
  t2064 = -0.009228*t96*t1680;
  t2074 = -0.012567*t96*t1680;
  t2110 = -0.014545*t96*t1680;
  t2176 = -0.014947*t96*t1680;
  t2212 = -0.013729*t96*t1680;
  t2240 = -0.011023*t96*t1680;
  t2272 = -0.007123*t96*t1680;
  t2288 = -0.002451*t96*t1680;
  t2303 = 0.002487*t96*t1680;
  t2326 = 0.007155*t96*t1680;
  t2343 = 0.011048*t96*t1680;
  t2416 = 0.013744*t96*t1680;
  t2462 = 0.01495*t96*t1680;
  t2484 = 0.014537*t96*t1680;
  t2530 = 0.012547*t96*t1680;
  t2554 = 0.009199*t96*t1680;
  t3852 = -0.161246*t1946;
  t3864 = 0.141174*t1989;
  t3873 = var1[1] + t1733 + t3852 + t3864;
  t2663 = 0.000018*t1920*t96;
  t2717 = 0.004888*t1920*t96;
  t2764 = 0.009228*t1920*t96;
  t2805 = 0.012567*t1920*t96;
  t2835 = 0.014545*t1920*t96;
  t2888 = 0.014947*t1920*t96;
  t2932 = 0.013729*t1920*t96;
  t2990 = 0.011023*t1920*t96;
  t3079 = 0.007123*t1920*t96;
  t3108 = 0.002451*t1920*t96;
  t3137 = -0.002487*t1920*t96;
  t3197 = -0.007155*t1920*t96;
  t3270 = -0.011048*t1920*t96;
  t3293 = -0.013744*t1920*t96;
  t3316 = -0.01495*t1920*t96;
  t3341 = -0.014537*t1920*t96;
  t3359 = -0.012547*t1920*t96;
  t3372 = -0.009199*t1920*t96;
  t4117 = -0.161246*t2625;
  t4119 = 0.141174*t2654;
  t4128 = var1[2] + t2592 + t4117 + t4119;
  p_output1[0]=t399;
  p_output1[1]=t435 - 0.010607*t210*t96 + 0.010607*t297*t96 + var1[0];
  p_output1[2]=t512 - 0.010028*t210*t96 + 0.010028*t297*t96 + var1[0];
  p_output1[3]=t622 - 0.008362*t210*t96 + 0.008362*t297*t96 + var1[0];
  p_output1[4]=t767 - 0.00579*t210*t96 + 0.00579*t297*t96 + var1[0];
  p_output1[5]=t812 - 0.002591*t210*t96 + 0.002591*t297*t96 + var1[0];
  p_output1[6]=t896 + 0.000889*t210*t96 - 0.000889*t297*t96 + var1[0];
  p_output1[7]=t1018 + 0.004272*t210*t96 - 0.004272*t297*t96 + var1[0];
  p_output1[8]=t1064 + 0.007193*t210*t96 - 0.007193*t297*t96 + var1[0];
  p_output1[9]=t1112 + 0.009334*t210*t96 - 0.009334*t297*t96 + var1[0];
  p_output1[10]=t1158 + 0.010464*t210*t96 - 0.010464*t297*t96 + var1[0];
  p_output1[11]=t1217 + 0.01046*t210*t96 - 0.01046*t297*t96 + var1[0];
  p_output1[12]=t1261 + 0.009322*t210*t96 - 0.009322*t297*t96 + var1[0];
  p_output1[13]=t1293 + 0.007174*t210*t96 - 0.007174*t297*t96 + var1[0];
  p_output1[14]=t1370 + 0.004249*t210*t96 - 0.004249*t297*t96 + var1[0];
  p_output1[15]=t1411 + 0.000863*t210*t96 - 0.000863*t297*t96 + var1[0];
  p_output1[16]=t1498 - 0.002616*t210*t96 + 0.002616*t297*t96 + var1[0];
  p_output1[17]=t1559 - 0.005812*t210*t96 + 0.005812*t297*t96 + var1[0];
  p_output1[18]=t1636 - 0.008378*t210*t96 + 0.008378*t297*t96 + var1[0];
  p_output1[19]=t399;
  p_output1[20]=t2015;
  p_output1[21]=-0.010607*t1946 - 0.010607*t1989 + t2022 + var1[1];
  p_output1[22]=-0.010028*t1946 - 0.010028*t1989 + t2035 + var1[1];
  p_output1[23]=-0.008362*t1946 - 0.008362*t1989 + t2064 + var1[1];
  p_output1[24]=-0.00579*t1946 - 0.00579*t1989 + t2074 + var1[1];
  p_output1[25]=-0.002591*t1946 - 0.002591*t1989 + t2110 + var1[1];
  p_output1[26]=0.000889*t1946 + 0.000889*t1989 + t2176 + var1[1];
  p_output1[27]=0.004272*t1946 + 0.004272*t1989 + t2212 + var1[1];
  p_output1[28]=0.007193*t1946 + 0.007193*t1989 + t2240 + var1[1];
  p_output1[29]=0.009334*t1946 + 0.009334*t1989 + t2272 + var1[1];
  p_output1[30]=0.010464*t1946 + 0.010464*t1989 + t2288 + var1[1];
  p_output1[31]=0.01046*t1946 + 0.01046*t1989 + t2303 + var1[1];
  p_output1[32]=0.009322*t1946 + 0.009322*t1989 + t2326 + var1[1];
  p_output1[33]=0.007174*t1946 + 0.007174*t1989 + t2343 + var1[1];
  p_output1[34]=0.004249*t1946 + 0.004249*t1989 + t2416 + var1[1];
  p_output1[35]=0.000863*t1946 + 0.000863*t1989 + t2462 + var1[1];
  p_output1[36]=-0.002616*t1946 - 0.002616*t1989 + t2484 + var1[1];
  p_output1[37]=-0.005812*t1946 - 0.005812*t1989 + t2530 + var1[1];
  p_output1[38]=-0.008378*t1946 - 0.008378*t1989 + t2554 + var1[1];
  p_output1[39]=t2015;
  p_output1[40]=t2657;
  p_output1[41]=-0.010607*t2625 - 0.010607*t2654 + t2663 + var1[2];
  p_output1[42]=-0.010028*t2625 - 0.010028*t2654 + t2717 + var1[2];
  p_output1[43]=-0.008362*t2625 - 0.008362*t2654 + t2764 + var1[2];
  p_output1[44]=-0.00579*t2625 - 0.00579*t2654 + t2805 + var1[2];
  p_output1[45]=-0.002591*t2625 - 0.002591*t2654 + t2835 + var1[2];
  p_output1[46]=0.000889*t2625 + 0.000889*t2654 + t2888 + var1[2];
  p_output1[47]=0.004272*t2625 + 0.004272*t2654 + t2932 + var1[2];
  p_output1[48]=0.007193*t2625 + 0.007193*t2654 + t2990 + var1[2];
  p_output1[49]=0.009334*t2625 + 0.009334*t2654 + t3079 + var1[2];
  p_output1[50]=0.010464*t2625 + 0.010464*t2654 + t3108 + var1[2];
  p_output1[51]=0.01046*t2625 + 0.01046*t2654 + t3137 + var1[2];
  p_output1[52]=0.009322*t2625 + 0.009322*t2654 + t3197 + var1[2];
  p_output1[53]=0.007174*t2625 + 0.007174*t2654 + t3270 + var1[2];
  p_output1[54]=0.004249*t2625 + 0.004249*t2654 + t3293 + var1[2];
  p_output1[55]=0.000863*t2625 + 0.000863*t2654 + t3316 + var1[2];
  p_output1[56]=-0.002616*t2625 - 0.002616*t2654 + t3341 + var1[2];
  p_output1[57]=-0.005812*t2625 - 0.005812*t2654 + t3359 + var1[2];
  p_output1[58]=-0.008378*t2625 - 0.008378*t2654 + t3372 + var1[2];
  p_output1[59]=t2657;
  p_output1[60]=t3392;
  p_output1[61]=t435 - 0.161817*t210*t96 - 0.140603*t297*t96 + var1[0];
  p_output1[62]=t512 - 0.161238*t210*t96 - 0.141182*t297*t96 + var1[0];
  p_output1[63]=t622 - 0.159572*t210*t96 - 0.142848*t297*t96 + var1[0];
  p_output1[64]=t767 - 0.157*t210*t96 - 0.14542*t297*t96 + var1[0];
  p_output1[65]=t812 - 0.153801*t210*t96 - 0.148619*t297*t96 + var1[0];
  p_output1[66]=t896 - 0.150321*t210*t96 - 0.152099*t297*t96 + var1[0];
  p_output1[67]=t1018 - 0.146938*t210*t96 - 0.155482*t297*t96 + var1[0];
  p_output1[68]=t1064 - 0.144017*t210*t96 - 0.158403*t297*t96 + var1[0];
  p_output1[69]=t1112 - 0.141876*t210*t96 - 0.160544*t297*t96 + var1[0];
  p_output1[70]=t1158 - 0.140746*t210*t96 - 0.161674*t297*t96 + var1[0];
  p_output1[71]=t1217 - 0.14075*t210*t96 - 0.16167*t297*t96 + var1[0];
  p_output1[72]=t1261 - 0.141888*t210*t96 - 0.160532*t297*t96 + var1[0];
  p_output1[73]=t1293 - 0.144036*t210*t96 - 0.158384*t297*t96 + var1[0];
  p_output1[74]=t1370 - 0.146961*t210*t96 - 0.155459*t297*t96 + var1[0];
  p_output1[75]=t1411 - 0.150347*t210*t96 - 0.152073*t297*t96 + var1[0];
  p_output1[76]=t1498 - 0.153826*t210*t96 - 0.148594*t297*t96 + var1[0];
  p_output1[77]=t1559 - 0.157022*t210*t96 - 0.145398*t297*t96 + var1[0];
  p_output1[78]=t1636 - 0.159588*t210*t96 - 0.142832*t297*t96 + var1[0];
  p_output1[79]=t3392;
  p_output1[80]=t3873;
  p_output1[81]=-0.161817*t1946 + 0.140603*t1989 + t2022 + var1[1];
  p_output1[82]=-0.161238*t1946 + 0.141182*t1989 + t2035 + var1[1];
  p_output1[83]=-0.159572*t1946 + 0.142848*t1989 + t2064 + var1[1];
  p_output1[84]=-0.157*t1946 + 0.14542*t1989 + t2074 + var1[1];
  p_output1[85]=-0.153801*t1946 + 0.148619*t1989 + t2110 + var1[1];
  p_output1[86]=-0.150321*t1946 + 0.152099*t1989 + t2176 + var1[1];
  p_output1[87]=-0.146938*t1946 + 0.155482*t1989 + t2212 + var1[1];
  p_output1[88]=-0.144017*t1946 + 0.158403*t1989 + t2240 + var1[1];
  p_output1[89]=-0.141876*t1946 + 0.160544*t1989 + t2272 + var1[1];
  p_output1[90]=-0.140746*t1946 + 0.161674*t1989 + t2288 + var1[1];
  p_output1[91]=-0.14075*t1946 + 0.16167*t1989 + t2303 + var1[1];
  p_output1[92]=-0.141888*t1946 + 0.160532*t1989 + t2326 + var1[1];
  p_output1[93]=-0.144036*t1946 + 0.158384*t1989 + t2343 + var1[1];
  p_output1[94]=-0.146961*t1946 + 0.155459*t1989 + t2416 + var1[1];
  p_output1[95]=-0.150347*t1946 + 0.152073*t1989 + t2462 + var1[1];
  p_output1[96]=-0.153826*t1946 + 0.148594*t1989 + t2484 + var1[1];
  p_output1[97]=-0.157022*t1946 + 0.145398*t1989 + t2530 + var1[1];
  p_output1[98]=-0.159588*t1946 + 0.142832*t1989 + t2554 + var1[1];
  p_output1[99]=t3873;
  p_output1[100]=t4128;
  p_output1[101]=-0.161817*t2625 + 0.140603*t2654 + t2663 + var1[2];
  p_output1[102]=-0.161238*t2625 + 0.141182*t2654 + t2717 + var1[2];
  p_output1[103]=-0.159572*t2625 + 0.142848*t2654 + t2764 + var1[2];
  p_output1[104]=-0.157*t2625 + 0.14542*t2654 + t2805 + var1[2];
  p_output1[105]=-0.153801*t2625 + 0.148619*t2654 + t2835 + var1[2];
  p_output1[106]=-0.150321*t2625 + 0.152099*t2654 + t2888 + var1[2];
  p_output1[107]=-0.146938*t2625 + 0.155482*t2654 + t2932 + var1[2];
  p_output1[108]=-0.144017*t2625 + 0.158403*t2654 + t2990 + var1[2];
  p_output1[109]=-0.141876*t2625 + 0.160544*t2654 + t3079 + var1[2];
  p_output1[110]=-0.140746*t2625 + 0.161674*t2654 + t3108 + var1[2];
  p_output1[111]=-0.14075*t2625 + 0.16167*t2654 + t3137 + var1[2];
  p_output1[112]=-0.141888*t2625 + 0.160532*t2654 + t3197 + var1[2];
  p_output1[113]=-0.144036*t2625 + 0.158384*t2654 + t3270 + var1[2];
  p_output1[114]=-0.146961*t2625 + 0.155459*t2654 + t3293 + var1[2];
  p_output1[115]=-0.150347*t2625 + 0.152073*t2654 + t3316 + var1[2];
  p_output1[116]=-0.153826*t2625 + 0.148594*t2654 + t3341 + var1[2];
  p_output1[117]=-0.157022*t2625 + 0.145398*t2654 + t3359 + var1[2];
  p_output1[118]=-0.159588*t2625 + 0.142832*t2654 + t3372 + var1[2];
  p_output1[119]=t4128;
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
