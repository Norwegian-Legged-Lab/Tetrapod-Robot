/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:43 GMT+01:00
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
  double t99;
  double t107;
  double t111;
  double t121;
  double t108;
  double t119;
  double t124;
  double t126;
  double t2253;
  double t2520;
  double t2512;
  double t2521;
  double t2526;
  double t2545;
  double t2694;
  double t2790;
  double t2398;
  double t2527;
  double t2794;
  double t2804;
  double t5328;
  double t5330;
  double t5440;
  double t5520;
  double t5521;
  double t5567;
  double t5283;
  double t5496;
  double t5599;
  double t5620;
  double t131;
  double t141;
  double t151;
  double t161;
  double t171;
  double t181;
  double t190;
  double t198;
  double t204;
  double t212;
  double t220;
  double t228;
  double t236;
  double t244;
  double t252;
  double t260;
  double t1172;
  double t2009;
  double t6178;
  double t6182;
  double t6190;
  double t2805;
  double t2857;
  double t2864;
  double t2950;
  double t3078;
  double t3106;
  double t3361;
  double t3715;
  double t4086;
  double t4173;
  double t4357;
  double t4384;
  double t4494;
  double t4582;
  double t4746;
  double t4897;
  double t4921;
  double t5136;
  double t6537;
  double t6538;
  double t6552;
  double t5623;
  double t5645;
  double t5672;
  double t5796;
  double t5820;
  double t5843;
  double t5869;
  double t5916;
  double t5946;
  double t5964;
  double t5982;
  double t5987;
  double t6005;
  double t6019;
  double t6045;
  double t6049;
  double t6095;
  double t6142;
  double t6854;
  double t6855;
  double t6856;
  t99 = Cos(var1[4]);
  t107 = Cos(var1[5]);
  t111 = Sin(var1[4]);
  t121 = Sin(var1[5]);
  t108 = -0.004206*t99*t107;
  t119 = -0.01377*t111;
  t124 = -0.004206*t99*t121;
  t126 = var1[0] + t108 + t119 + t124;
  t2253 = Sin(var1[3]);
  t2520 = Cos(var1[3]);
  t2512 = t107*t2253*t111;
  t2521 = t2520*t121;
  t2526 = t2512 + t2521;
  t2545 = t2520*t107;
  t2694 = -1.*t2253*t111*t121;
  t2790 = t2545 + t2694;
  t2398 = 0.01377*t99*t2253;
  t2527 = -0.004206*t2526;
  t2794 = 0.004206*t2790;
  t2804 = var1[1] + t2398 + t2527 + t2794;
  t5328 = -1.*t2520*t107*t111;
  t5330 = t2253*t121;
  t5440 = t5328 + t5330;
  t5520 = t107*t2253;
  t5521 = t2520*t111*t121;
  t5567 = t5520 + t5521;
  t5283 = -0.01377*t2520*t99;
  t5496 = -0.004206*t5440;
  t5599 = 0.004206*t5567;
  t5620 = var1[2] + t5283 + t5496 + t5599;
  t131 = -0.011093*t111;
  t141 = -0.007213*t111;
  t151 = -0.002552*t111;
  t161 = 0.002386*t111;
  t171 = 0.007065*t111;
  t181 = 0.010979*t111;
  t190 = 0.013703*t111;
  t198 = 0.014942*t111;
  t204 = 0.014561*t111;
  t212 = 0.012603*t111;
  t220 = 0.009279*t111;
  t228 = 0.00495*t111;
  t236 = 0.000084*t111;
  t244 = -0.004791*t111;
  t252 = -0.009147*t111;
  t260 = -0.012511*t111;
  t1172 = -0.01452*t111;
  t2009 = -0.014955*t111;
  t6178 = 0.147004*t99*t107;
  t6182 = -0.155416*t99*t121;
  t6190 = var1[0] + t6178 + t119 + t6182;
  t2805 = 0.011093*t99*t2253;
  t2857 = 0.007213*t99*t2253;
  t2864 = 0.002552*t99*t2253;
  t2950 = -0.002386*t99*t2253;
  t3078 = -0.007065*t99*t2253;
  t3106 = -0.010979*t99*t2253;
  t3361 = -0.013703*t99*t2253;
  t3715 = -0.014942*t99*t2253;
  t4086 = -0.014561*t99*t2253;
  t4173 = -0.012603*t99*t2253;
  t4357 = -0.009279*t99*t2253;
  t4384 = -0.00495*t99*t2253;
  t4494 = -0.000084*t99*t2253;
  t4582 = 0.004791*t99*t2253;
  t4746 = 0.009147*t99*t2253;
  t4897 = 0.012511*t99*t2253;
  t4921 = 0.01452*t99*t2253;
  t5136 = 0.014955*t99*t2253;
  t6537 = 0.147004*t2526;
  t6538 = 0.155416*t2790;
  t6552 = var1[1] + t2398 + t6537 + t6538;
  t5623 = -0.011093*t2520*t99;
  t5645 = -0.007213*t2520*t99;
  t5672 = -0.002552*t2520*t99;
  t5796 = 0.002386*t2520*t99;
  t5820 = 0.007065*t2520*t99;
  t5843 = 0.010979*t2520*t99;
  t5869 = 0.013703*t2520*t99;
  t5916 = 0.014942*t2520*t99;
  t5946 = 0.014561*t2520*t99;
  t5964 = 0.012603*t2520*t99;
  t5982 = 0.009279*t2520*t99;
  t5987 = 0.00495*t2520*t99;
  t6005 = 0.000084*t2520*t99;
  t6019 = -0.004791*t2520*t99;
  t6045 = -0.009147*t2520*t99;
  t6049 = -0.012511*t2520*t99;
  t6095 = -0.01452*t2520*t99;
  t6142 = -0.014955*t2520*t99;
  t6854 = 0.147004*t5440;
  t6855 = 0.155416*t5567;
  t6856 = var1[2] + t5283 + t6854 + t6855;
  p_output1[0]=t126;
  p_output1[1]=t131 - 0.00714*t107*t99 - 0.00714*t121*t99 + var1[0];
  p_output1[2]=t141 - 0.0093*t107*t99 - 0.0093*t121*t99 + var1[0];
  p_output1[3]=t151 - 0.010452*t107*t99 - 0.010452*t121*t99 + var1[0];
  p_output1[4]=t161 - 0.010472*t107*t99 - 0.010472*t121*t99 + var1[0];
  p_output1[5]=t171 - 0.009356*t107*t99 - 0.009356*t121*t99 + var1[0];
  p_output1[6]=t181 - 0.007227*t107*t99 - 0.007227*t121*t99 + var1[0];
  p_output1[7]=t190 - 0.004315*t107*t99 - 0.004315*t121*t99 + var1[0];
  p_output1[8]=t198 - 0.000935*t107*t99 - 0.000935*t121*t99 + var1[0];
  p_output1[9]=t204 + 0.002546*t107*t99 + 0.002546*t121*t99 + var1[0];
  p_output1[10]=t212 + 0.005751*t107*t99 + 0.005751*t121*t99 + var1[0];
  p_output1[11]=t220 + 0.008333*t107*t99 + 0.008333*t121*t99 + var1[0];
  p_output1[12]=t228 + 0.010012*t107*t99 + 0.010012*t121*t99 + var1[0];
  p_output1[13]=t236 + 0.010606*t107*t99 + 0.010606*t121*t99 + var1[0];
  p_output1[14]=t244 + 0.010051*t107*t99 + 0.010051*t121*t99 + var1[0];
  p_output1[15]=t252 + 0.008406*t107*t99 + 0.008406*t121*t99 + var1[0];
  p_output1[16]=t260 + 0.005851*t107*t99 + 0.005851*t121*t99 + var1[0];
  p_output1[17]=t1172 + 0.002661*t107*t99 + 0.002661*t121*t99 + var1[0];
  p_output1[18]=t2009 - 0.000817*t107*t99 - 0.000817*t121*t99 + var1[0];
  p_output1[19]=t126;
  p_output1[20]=t2804;
  p_output1[21]=-0.00714*t2526 + 0.00714*t2790 + t2805 + var1[1];
  p_output1[22]=-0.0093*t2526 + 0.0093*t2790 + t2857 + var1[1];
  p_output1[23]=-0.010452*t2526 + 0.010452*t2790 + t2864 + var1[1];
  p_output1[24]=-0.010472*t2526 + 0.010472*t2790 + t2950 + var1[1];
  p_output1[25]=-0.009356*t2526 + 0.009356*t2790 + t3078 + var1[1];
  p_output1[26]=-0.007227*t2526 + 0.007227*t2790 + t3106 + var1[1];
  p_output1[27]=-0.004315*t2526 + 0.004315*t2790 + t3361 + var1[1];
  p_output1[28]=-0.000935*t2526 + 0.000935*t2790 + t3715 + var1[1];
  p_output1[29]=0.002546*t2526 - 0.002546*t2790 + t4086 + var1[1];
  p_output1[30]=0.005751*t2526 - 0.005751*t2790 + t4173 + var1[1];
  p_output1[31]=0.008333*t2526 - 0.008333*t2790 + t4357 + var1[1];
  p_output1[32]=0.010012*t2526 - 0.010012*t2790 + t4384 + var1[1];
  p_output1[33]=0.010606*t2526 - 0.010606*t2790 + t4494 + var1[1];
  p_output1[34]=0.010051*t2526 - 0.010051*t2790 + t4582 + var1[1];
  p_output1[35]=0.008406*t2526 - 0.008406*t2790 + t4746 + var1[1];
  p_output1[36]=0.005851*t2526 - 0.005851*t2790 + t4897 + var1[1];
  p_output1[37]=0.002661*t2526 - 0.002661*t2790 + t4921 + var1[1];
  p_output1[38]=-0.000817*t2526 + 0.000817*t2790 + t5136 + var1[1];
  p_output1[39]=t2804;
  p_output1[40]=t5620;
  p_output1[41]=-0.00714*t5440 + 0.00714*t5567 + t5623 + var1[2];
  p_output1[42]=-0.0093*t5440 + 0.0093*t5567 + t5645 + var1[2];
  p_output1[43]=-0.010452*t5440 + 0.010452*t5567 + t5672 + var1[2];
  p_output1[44]=-0.010472*t5440 + 0.010472*t5567 + t5796 + var1[2];
  p_output1[45]=-0.009356*t5440 + 0.009356*t5567 + t5820 + var1[2];
  p_output1[46]=-0.007227*t5440 + 0.007227*t5567 + t5843 + var1[2];
  p_output1[47]=-0.004315*t5440 + 0.004315*t5567 + t5869 + var1[2];
  p_output1[48]=-0.000935*t5440 + 0.000935*t5567 + t5916 + var1[2];
  p_output1[49]=0.002546*t5440 - 0.002546*t5567 + t5946 + var1[2];
  p_output1[50]=0.005751*t5440 - 0.005751*t5567 + t5964 + var1[2];
  p_output1[51]=0.008333*t5440 - 0.008333*t5567 + t5982 + var1[2];
  p_output1[52]=0.010012*t5440 - 0.010012*t5567 + t5987 + var1[2];
  p_output1[53]=0.010606*t5440 - 0.010606*t5567 + t6005 + var1[2];
  p_output1[54]=0.010051*t5440 - 0.010051*t5567 + t6019 + var1[2];
  p_output1[55]=0.008406*t5440 - 0.008406*t5567 + t6045 + var1[2];
  p_output1[56]=0.005851*t5440 - 0.005851*t5567 + t6049 + var1[2];
  p_output1[57]=0.002661*t5440 - 0.002661*t5567 + t6095 + var1[2];
  p_output1[58]=-0.000817*t5440 + 0.000817*t5567 + t6142 + var1[2];
  p_output1[59]=t5620;
  p_output1[60]=t6190;
  p_output1[61]=t131 + 0.14407*t107*t99 - 0.15835*t121*t99 + var1[0];
  p_output1[62]=t141 + 0.14191*t107*t99 - 0.16051*t121*t99 + var1[0];
  p_output1[63]=t151 + 0.140758*t107*t99 - 0.161662*t121*t99 + var1[0];
  p_output1[64]=t161 + 0.140738*t107*t99 - 0.161682*t121*t99 + var1[0];
  p_output1[65]=t171 + 0.141854*t107*t99 - 0.160566*t121*t99 + var1[0];
  p_output1[66]=t181 + 0.143983*t107*t99 - 0.158437*t121*t99 + var1[0];
  p_output1[67]=t190 + 0.146895*t107*t99 - 0.155525*t121*t99 + var1[0];
  p_output1[68]=t198 + 0.150275*t107*t99 - 0.152145*t121*t99 + var1[0];
  p_output1[69]=t204 + 0.153756*t107*t99 - 0.148664*t121*t99 + var1[0];
  p_output1[70]=t212 + 0.156961*t107*t99 - 0.145459*t121*t99 + var1[0];
  p_output1[71]=t220 + 0.159543*t107*t99 - 0.142877*t121*t99 + var1[0];
  p_output1[72]=t228 + 0.161222*t107*t99 - 0.141198*t121*t99 + var1[0];
  p_output1[73]=t236 + 0.161816*t107*t99 - 0.140604*t121*t99 + var1[0];
  p_output1[74]=t244 + 0.161261*t107*t99 - 0.141159*t121*t99 + var1[0];
  p_output1[75]=t252 + 0.159616*t107*t99 - 0.142804*t121*t99 + var1[0];
  p_output1[76]=t260 + 0.157061*t107*t99 - 0.145359*t121*t99 + var1[0];
  p_output1[77]=t1172 + 0.153871*t107*t99 - 0.148549*t121*t99 + var1[0];
  p_output1[78]=t2009 + 0.150393*t107*t99 - 0.152027*t121*t99 + var1[0];
  p_output1[79]=t6190;
  p_output1[80]=t6552;
  p_output1[81]=0.14407*t2526 + 0.15835*t2790 + t2805 + var1[1];
  p_output1[82]=0.14191*t2526 + 0.16051*t2790 + t2857 + var1[1];
  p_output1[83]=0.140758*t2526 + 0.161662*t2790 + t2864 + var1[1];
  p_output1[84]=0.140738*t2526 + 0.161682*t2790 + t2950 + var1[1];
  p_output1[85]=0.141854*t2526 + 0.160566*t2790 + t3078 + var1[1];
  p_output1[86]=0.143983*t2526 + 0.158437*t2790 + t3106 + var1[1];
  p_output1[87]=0.146895*t2526 + 0.155525*t2790 + t3361 + var1[1];
  p_output1[88]=0.150275*t2526 + 0.152145*t2790 + t3715 + var1[1];
  p_output1[89]=0.153756*t2526 + 0.148664*t2790 + t4086 + var1[1];
  p_output1[90]=0.156961*t2526 + 0.145459*t2790 + t4173 + var1[1];
  p_output1[91]=0.159543*t2526 + 0.142877*t2790 + t4357 + var1[1];
  p_output1[92]=0.161222*t2526 + 0.141198*t2790 + t4384 + var1[1];
  p_output1[93]=0.161816*t2526 + 0.140604*t2790 + t4494 + var1[1];
  p_output1[94]=0.161261*t2526 + 0.141159*t2790 + t4582 + var1[1];
  p_output1[95]=0.159616*t2526 + 0.142804*t2790 + t4746 + var1[1];
  p_output1[96]=0.157061*t2526 + 0.145359*t2790 + t4897 + var1[1];
  p_output1[97]=0.153871*t2526 + 0.148549*t2790 + t4921 + var1[1];
  p_output1[98]=0.150393*t2526 + 0.152027*t2790 + t5136 + var1[1];
  p_output1[99]=t6552;
  p_output1[100]=t6856;
  p_output1[101]=0.14407*t5440 + 0.15835*t5567 + t5623 + var1[2];
  p_output1[102]=0.14191*t5440 + 0.16051*t5567 + t5645 + var1[2];
  p_output1[103]=0.140758*t5440 + 0.161662*t5567 + t5672 + var1[2];
  p_output1[104]=0.140738*t5440 + 0.161682*t5567 + t5796 + var1[2];
  p_output1[105]=0.141854*t5440 + 0.160566*t5567 + t5820 + var1[2];
  p_output1[106]=0.143983*t5440 + 0.158437*t5567 + t5843 + var1[2];
  p_output1[107]=0.146895*t5440 + 0.155525*t5567 + t5869 + var1[2];
  p_output1[108]=0.150275*t5440 + 0.152145*t5567 + t5916 + var1[2];
  p_output1[109]=0.153756*t5440 + 0.148664*t5567 + t5946 + var1[2];
  p_output1[110]=0.156961*t5440 + 0.145459*t5567 + t5964 + var1[2];
  p_output1[111]=0.159543*t5440 + 0.142877*t5567 + t5982 + var1[2];
  p_output1[112]=0.161222*t5440 + 0.141198*t5567 + t5987 + var1[2];
  p_output1[113]=0.161816*t5440 + 0.140604*t5567 + t6005 + var1[2];
  p_output1[114]=0.161261*t5440 + 0.141159*t5567 + t6019 + var1[2];
  p_output1[115]=0.159616*t5440 + 0.142804*t5567 + t6045 + var1[2];
  p_output1[116]=0.157061*t5440 + 0.145359*t5567 + t6049 + var1[2];
  p_output1[117]=0.153871*t5440 + 0.148549*t5567 + t6095 + var1[2];
  p_output1[118]=0.150393*t5440 + 0.152027*t5567 + t6142 + var1[2];
  p_output1[119]=t6856;
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

#include "Link_base_link_to_fl_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_fl_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
