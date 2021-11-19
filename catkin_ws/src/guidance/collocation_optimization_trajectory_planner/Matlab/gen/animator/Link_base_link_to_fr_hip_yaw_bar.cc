/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:25 GMT+01:00
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
  double t421;
  double t774;
  double t1484;
  double t1494;
  double t981;
  double t1491;
  double t1497;
  double t1504;
  double t2290;
  double t2299;
  double t2297;
  double t2302;
  double t2304;
  double t2309;
  double t2312;
  double t2320;
  double t2295;
  double t2307;
  double t2322;
  double t2323;
  double t2666;
  double t2667;
  double t2670;
  double t2676;
  double t2681;
  double t2684;
  double t2656;
  double t2672;
  double t2690;
  double t2693;
  double t1515;
  double t1531;
  double t1631;
  double t1727;
  double t1787;
  double t1803;
  double t1837;
  double t1846;
  double t1877;
  double t1977;
  double t2044;
  double t2071;
  double t2080;
  double t2097;
  double t2113;
  double t2157;
  double t2221;
  double t2283;
  double t2889;
  double t2898;
  double t2899;
  double t2330;
  double t2358;
  double t2387;
  double t2400;
  double t2407;
  double t2413;
  double t2430;
  double t2439;
  double t2454;
  double t2469;
  double t2495;
  double t2553;
  double t2571;
  double t2583;
  double t2592;
  double t2613;
  double t2625;
  double t2639;
  double t3106;
  double t3107;
  double t3111;
  double t2694;
  double t2701;
  double t2711;
  double t2721;
  double t2728;
  double t2735;
  double t2744;
  double t2757;
  double t2768;
  double t2783;
  double t2800;
  double t2815;
  double t2827;
  double t2847;
  double t2854;
  double t2860;
  double t2868;
  double t2880;
  double t3295;
  double t3300;
  double t3302;
  t421 = Cos(var1[4]);
  t774 = Cos(var1[5]);
  t1484 = Sin(var1[4]);
  t1494 = Sin(var1[5]);
  t981 = -0.00663*t421*t774;
  t1491 = -0.011709*t1484;
  t1497 = 0.00663*t421*t1494;
  t1504 = var1[0] + t981 + t1491 + t1497;
  t2290 = Sin(var1[3]);
  t2299 = Cos(var1[3]);
  t2297 = t774*t2290*t1484;
  t2302 = t2299*t1494;
  t2304 = t2297 + t2302;
  t2309 = t2299*t774;
  t2312 = -1.*t2290*t1484*t1494;
  t2320 = t2309 + t2312;
  t2295 = 0.011709*t421*t2290;
  t2307 = -0.00663*t2304;
  t2322 = -0.00663*t2320;
  t2323 = var1[1] + t2295 + t2307 + t2322;
  t2666 = -1.*t2299*t774*t1484;
  t2667 = t2290*t1494;
  t2670 = t2666 + t2667;
  t2676 = t774*t2290;
  t2681 = t2299*t1484*t1494;
  t2684 = t2676 + t2681;
  t2656 = -0.011709*t2299*t421;
  t2672 = -0.00663*t2670;
  t2690 = -0.00663*t2684;
  t2693 = var1[2] + t2656 + t2672 + t2690;
  t1515 = -0.014119*t1484;
  t1531 = -0.014999*t1484;
  t1631 = -0.014253*t1484;
  t1727 = -0.011963*t1484;
  t1787 = -0.008377*t1484;
  t1803 = -0.003883*t1484;
  t1837 = 0.001032*t1484;
  t1846 = 0.005835*t1484;
  t1877 = 0.010006*t1484;
  t1977 = 0.013092*t1484;
  t2044 = 0.01476*t1484;
  t2071 = 0.014828*t1484;
  t2080 = 0.01329*t1484;
  t2097 = 0.010311*t1484;
  t2113 = 0.006215*t1484;
  t2157 = 0.001445*t1484;
  t2221 = -0.003481*t1484;
  t2283 = -0.00803*t1484;
  t2889 = 0.14458*t421*t774;
  t2898 = 0.15784*t421*t1494;
  t2899 = var1[0] + t2889 + t1491 + t2898;
  t2330 = 0.014119*t421*t2290;
  t2358 = 0.014999*t421*t2290;
  t2387 = 0.014253*t421*t2290;
  t2400 = 0.011963*t421*t2290;
  t2407 = 0.008377*t421*t2290;
  t2413 = 0.003883*t421*t2290;
  t2430 = -0.001032*t421*t2290;
  t2439 = -0.005835*t421*t2290;
  t2454 = -0.010006*t421*t2290;
  t2469 = -0.013092*t421*t2290;
  t2495 = -0.01476*t421*t2290;
  t2553 = -0.014828*t421*t2290;
  t2571 = -0.01329*t421*t2290;
  t2583 = -0.010311*t421*t2290;
  t2592 = -0.006215*t421*t2290;
  t2613 = -0.001445*t421*t2290;
  t2625 = 0.003481*t421*t2290;
  t2639 = 0.00803*t421*t2290;
  t3106 = 0.14458*t2304;
  t3107 = -0.15784*t2320;
  t3111 = var1[1] + t2295 + t3106 + t3107;
  t2694 = -0.014119*t2299*t421;
  t2701 = -0.014999*t2299*t421;
  t2711 = -0.014253*t2299*t421;
  t2721 = -0.011963*t2299*t421;
  t2728 = -0.008377*t2299*t421;
  t2735 = -0.003883*t2299*t421;
  t2744 = 0.001032*t2299*t421;
  t2757 = 0.005835*t2299*t421;
  t2768 = 0.010006*t2299*t421;
  t2783 = 0.013092*t2299*t421;
  t2800 = 0.01476*t2299*t421;
  t2815 = 0.014828*t2299*t421;
  t2827 = 0.01329*t2299*t421;
  t2847 = 0.010311*t2299*t421;
  t2854 = 0.006215*t2299*t421;
  t2860 = 0.001445*t2299*t421;
  t2868 = -0.003481*t2299*t421;
  t2880 = -0.00803*t2299*t421;
  t3295 = 0.14458*t2670;
  t3300 = -0.15784*t2684;
  t3302 = var1[2] + t2656 + t3295 + t3300;
  p_output1[0]=t1504;
  p_output1[1]=t1515 + 0.003582*t1494*t421 - 0.003582*t421*t774 + var1[0];
  p_output1[2]=t1531 + 0.000147*t1494*t421 - 0.000147*t421*t774 + var1[0];
  p_output1[3]=t1631 - 0.003305*t1494*t421 + 0.003305*t421*t774 + var1[0];
  p_output1[4]=t1727 - 0.006398*t1494*t421 + 0.006398*t421*t774 + var1[0];
  p_output1[5]=t1787 - 0.008798*t1494*t421 + 0.008798*t421*t774 + var1[0];
  p_output1[6]=t1803 - 0.010245*t1494*t421 + 0.010245*t421*t774 + var1[0];
  p_output1[7]=t1837 - 0.010581*t1494*t421 + 0.010581*t421*t774 + var1[0];
  p_output1[8]=t1846 - 0.009771*t1494*t421 + 0.009771*t421*t774 + var1[0];
  p_output1[9]=t1877 - 0.007902*t1494*t421 + 0.007902*t421*t774 + var1[0];
  p_output1[10]=t1977 - 0.005177*t1494*t421 + 0.005177*t421*t774 + var1[0];
  p_output1[11]=t2044 - 0.00189*t1494*t421 + 0.00189*t421*t774 + var1[0];
  p_output1[12]=t2071 + 0.001601*t1494*t421 - 0.001601*t421*t774 + var1[0];
  p_output1[13]=t2080 + 0.004919*t1494*t421 - 0.004919*t421*t774 + var1[0];
  p_output1[14]=t2097 + 0.007704*t1494*t421 - 0.007704*t421*t774 + var1[0];
  p_output1[15]=t2113 + 0.009653*t1494*t421 - 0.009653*t421*t774 + var1[0];
  p_output1[16]=t2157 + 0.010557*t1494*t421 - 0.010557*t421*t774 + var1[0];
  p_output1[17]=t2221 + 0.010317*t1494*t421 - 0.010317*t421*t774 + var1[0];
  p_output1[18]=t2283 + 0.008959*t1494*t421 - 0.008959*t421*t774 + var1[0];
  p_output1[19]=t1504;
  p_output1[20]=t2323;
  p_output1[21]=-0.003582*t2304 - 0.003582*t2320 + t2330 + var1[1];
  p_output1[22]=-0.000147*t2304 - 0.000147*t2320 + t2358 + var1[1];
  p_output1[23]=0.003305*t2304 + 0.003305*t2320 + t2387 + var1[1];
  p_output1[24]=0.006398*t2304 + 0.006398*t2320 + t2400 + var1[1];
  p_output1[25]=0.008798*t2304 + 0.008798*t2320 + t2407 + var1[1];
  p_output1[26]=0.010245*t2304 + 0.010245*t2320 + t2413 + var1[1];
  p_output1[27]=0.010581*t2304 + 0.010581*t2320 + t2430 + var1[1];
  p_output1[28]=0.009771*t2304 + 0.009771*t2320 + t2439 + var1[1];
  p_output1[29]=0.007902*t2304 + 0.007902*t2320 + t2454 + var1[1];
  p_output1[30]=0.005177*t2304 + 0.005177*t2320 + t2469 + var1[1];
  p_output1[31]=0.00189*t2304 + 0.00189*t2320 + t2495 + var1[1];
  p_output1[32]=-0.001601*t2304 - 0.001601*t2320 + t2553 + var1[1];
  p_output1[33]=-0.004919*t2304 - 0.004919*t2320 + t2571 + var1[1];
  p_output1[34]=-0.007704*t2304 - 0.007704*t2320 + t2583 + var1[1];
  p_output1[35]=-0.009653*t2304 - 0.009653*t2320 + t2592 + var1[1];
  p_output1[36]=-0.010557*t2304 - 0.010557*t2320 + t2613 + var1[1];
  p_output1[37]=-0.010317*t2304 - 0.010317*t2320 + t2625 + var1[1];
  p_output1[38]=-0.008959*t2304 - 0.008959*t2320 + t2639 + var1[1];
  p_output1[39]=t2323;
  p_output1[40]=t2693;
  p_output1[41]=-0.003582*t2670 - 0.003582*t2684 + t2694 + var1[2];
  p_output1[42]=-0.000147*t2670 - 0.000147*t2684 + t2701 + var1[2];
  p_output1[43]=0.003305*t2670 + 0.003305*t2684 + t2711 + var1[2];
  p_output1[44]=0.006398*t2670 + 0.006398*t2684 + t2721 + var1[2];
  p_output1[45]=0.008798*t2670 + 0.008798*t2684 + t2728 + var1[2];
  p_output1[46]=0.010245*t2670 + 0.010245*t2684 + t2735 + var1[2];
  p_output1[47]=0.010581*t2670 + 0.010581*t2684 + t2744 + var1[2];
  p_output1[48]=0.009771*t2670 + 0.009771*t2684 + t2757 + var1[2];
  p_output1[49]=0.007902*t2670 + 0.007902*t2684 + t2768 + var1[2];
  p_output1[50]=0.005177*t2670 + 0.005177*t2684 + t2783 + var1[2];
  p_output1[51]=0.00189*t2670 + 0.00189*t2684 + t2800 + var1[2];
  p_output1[52]=-0.001601*t2670 - 0.001601*t2684 + t2815 + var1[2];
  p_output1[53]=-0.004919*t2670 - 0.004919*t2684 + t2827 + var1[2];
  p_output1[54]=-0.007704*t2670 - 0.007704*t2684 + t2847 + var1[2];
  p_output1[55]=-0.009653*t2670 - 0.009653*t2684 + t2854 + var1[2];
  p_output1[56]=-0.010557*t2670 - 0.010557*t2684 + t2860 + var1[2];
  p_output1[57]=-0.010317*t2670 - 0.010317*t2684 + t2868 + var1[2];
  p_output1[58]=-0.008959*t2670 - 0.008959*t2684 + t2880 + var1[2];
  p_output1[59]=t2693;
  p_output1[60]=t2899;
  p_output1[61]=t1515 + 0.154792*t1494*t421 + 0.147628*t421*t774 + var1[0];
  p_output1[62]=t1531 + 0.151357*t1494*t421 + 0.151063*t421*t774 + var1[0];
  p_output1[63]=t1631 + 0.147905*t1494*t421 + 0.154515*t421*t774 + var1[0];
  p_output1[64]=t1727 + 0.144812*t1494*t421 + 0.157608*t421*t774 + var1[0];
  p_output1[65]=t1787 + 0.142412*t1494*t421 + 0.160008*t421*t774 + var1[0];
  p_output1[66]=t1803 + 0.140965*t1494*t421 + 0.161455*t421*t774 + var1[0];
  p_output1[67]=t1837 + 0.140629*t1494*t421 + 0.161791*t421*t774 + var1[0];
  p_output1[68]=t1846 + 0.141439*t1494*t421 + 0.160981*t421*t774 + var1[0];
  p_output1[69]=t1877 + 0.143308*t1494*t421 + 0.159112*t421*t774 + var1[0];
  p_output1[70]=t1977 + 0.146033*t1494*t421 + 0.156387*t421*t774 + var1[0];
  p_output1[71]=t2044 + 0.14932*t1494*t421 + 0.1531*t421*t774 + var1[0];
  p_output1[72]=t2071 + 0.152811*t1494*t421 + 0.149609*t421*t774 + var1[0];
  p_output1[73]=t2080 + 0.156129*t1494*t421 + 0.146291*t421*t774 + var1[0];
  p_output1[74]=t2097 + 0.158914*t1494*t421 + 0.143506*t421*t774 + var1[0];
  p_output1[75]=t2113 + 0.160863*t1494*t421 + 0.141557*t421*t774 + var1[0];
  p_output1[76]=t2157 + 0.161767*t1494*t421 + 0.140653*t421*t774 + var1[0];
  p_output1[77]=t2221 + 0.161527*t1494*t421 + 0.140893*t421*t774 + var1[0];
  p_output1[78]=t2283 + 0.160169*t1494*t421 + 0.142251*t421*t774 + var1[0];
  p_output1[79]=t2899;
  p_output1[80]=t3111;
  p_output1[81]=0.147628*t2304 - 0.154792*t2320 + t2330 + var1[1];
  p_output1[82]=0.151063*t2304 - 0.151357*t2320 + t2358 + var1[1];
  p_output1[83]=0.154515*t2304 - 0.147905*t2320 + t2387 + var1[1];
  p_output1[84]=0.157608*t2304 - 0.144812*t2320 + t2400 + var1[1];
  p_output1[85]=0.160008*t2304 - 0.142412*t2320 + t2407 + var1[1];
  p_output1[86]=0.161455*t2304 - 0.140965*t2320 + t2413 + var1[1];
  p_output1[87]=0.161791*t2304 - 0.140629*t2320 + t2430 + var1[1];
  p_output1[88]=0.160981*t2304 - 0.141439*t2320 + t2439 + var1[1];
  p_output1[89]=0.159112*t2304 - 0.143308*t2320 + t2454 + var1[1];
  p_output1[90]=0.156387*t2304 - 0.146033*t2320 + t2469 + var1[1];
  p_output1[91]=0.1531*t2304 - 0.14932*t2320 + t2495 + var1[1];
  p_output1[92]=0.149609*t2304 - 0.152811*t2320 + t2553 + var1[1];
  p_output1[93]=0.146291*t2304 - 0.156129*t2320 + t2571 + var1[1];
  p_output1[94]=0.143506*t2304 - 0.158914*t2320 + t2583 + var1[1];
  p_output1[95]=0.141557*t2304 - 0.160863*t2320 + t2592 + var1[1];
  p_output1[96]=0.140653*t2304 - 0.161767*t2320 + t2613 + var1[1];
  p_output1[97]=0.140893*t2304 - 0.161527*t2320 + t2625 + var1[1];
  p_output1[98]=0.142251*t2304 - 0.160169*t2320 + t2639 + var1[1];
  p_output1[99]=t3111;
  p_output1[100]=t3302;
  p_output1[101]=0.147628*t2670 - 0.154792*t2684 + t2694 + var1[2];
  p_output1[102]=0.151063*t2670 - 0.151357*t2684 + t2701 + var1[2];
  p_output1[103]=0.154515*t2670 - 0.147905*t2684 + t2711 + var1[2];
  p_output1[104]=0.157608*t2670 - 0.144812*t2684 + t2721 + var1[2];
  p_output1[105]=0.160008*t2670 - 0.142412*t2684 + t2728 + var1[2];
  p_output1[106]=0.161455*t2670 - 0.140965*t2684 + t2735 + var1[2];
  p_output1[107]=0.161791*t2670 - 0.140629*t2684 + t2744 + var1[2];
  p_output1[108]=0.160981*t2670 - 0.141439*t2684 + t2757 + var1[2];
  p_output1[109]=0.159112*t2670 - 0.143308*t2684 + t2768 + var1[2];
  p_output1[110]=0.156387*t2670 - 0.146033*t2684 + t2783 + var1[2];
  p_output1[111]=0.1531*t2670 - 0.14932*t2684 + t2800 + var1[2];
  p_output1[112]=0.149609*t2670 - 0.152811*t2684 + t2815 + var1[2];
  p_output1[113]=0.146291*t2670 - 0.156129*t2684 + t2827 + var1[2];
  p_output1[114]=0.143506*t2670 - 0.158914*t2684 + t2847 + var1[2];
  p_output1[115]=0.141557*t2670 - 0.160863*t2684 + t2854 + var1[2];
  p_output1[116]=0.140653*t2670 - 0.161767*t2684 + t2860 + var1[2];
  p_output1[117]=0.140893*t2670 - 0.161527*t2684 + t2868 + var1[2];
  p_output1[118]=0.142251*t2670 - 0.160169*t2684 + t2880 + var1[2];
  p_output1[119]=t3302;
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
