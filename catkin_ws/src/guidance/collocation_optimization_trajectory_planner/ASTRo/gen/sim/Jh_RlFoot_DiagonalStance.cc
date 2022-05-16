/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:17 GMT+02:00
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
  double t8333;
  double t930;
  double t3728;
  double t8650;
  double t16059;
  double t16067;
  double t16068;
  double t15844;
  double t16054;
  double t16072;
  double t16052;
  double t16075;
  double t15104;
  double t5397;
  double t15007;
  double t15009;
  double t16071;
  double t18990;
  double t19539;
  double t22514;
  double t19757;
  double t19788;
  double t20032;
  double t20628;
  double t20179;
  double t20453;
  double t20478;
  double t20490;
  double t20494;
  double t20513;
  double t20630;
  double t20632;
  double t21436;
  double t22787;
  double t22822;
  double t22823;
  double t23034;
  double t23043;
  double t23044;
  double t24303;
  double t25840;
  double t25842;
  double t26868;
  double t27807;
  double t27808;
  double t20479;
  double t20514;
  double t20600;
  double t34641;
  double t34650;
  double t34915;
  double t34926;
  double t34942;
  double t34957;
  double t34967;
  double t34973;
  double t35022;
  double t35039;
  double t35060;
  double t35061;
  double t35062;
  double t35288;
  double t35458;
  double t35459;
  double t34657;
  double t34663;
  double t34703;
  double t35069;
  double t35208;
  double t35505;
  double t35511;
  double t35527;
  double t35550;
  double t35555;
  double t35562;
  double t35563;
  double t35225;
  double t35467;
  double t35469;
  double t35553;
  double t35564;
  double t35571;
  double t35579;
  double t35582;
  double t35633;
  double t15238;
  double t19557;
  double t19708;
  double t35503;
  double t35703;
  double t36142;
  double t36212;
  double t37138;
  double t37390;
  double t37776;
  double t38030;
  t8333 = Cos(var1[10]);
  t930 = Cos(var1[11]);
  t3728 = Sin(var1[10]);
  t8650 = Sin(var1[11]);
  t16059 = -1.*t8333*t930;
  t16067 = -1.*t3728*t8650;
  t16068 = t16059 + t16067;
  t15844 = Cos(var1[4]);
  t16054 = Cos(var1[5]);
  t16072 = Sin(var1[9]);
  t16052 = Cos(var1[9]);
  t16075 = Sin(var1[5]);
  t15104 = Sin(var1[4]);
  t5397 = -1.*t930*t3728;
  t15007 = t8333*t8650;
  t15009 = t5397 + t15007;
  t16071 = t16052*t16054*t16068;
  t18990 = -1.*t16072*t16068*t16075;
  t19539 = t16071 + t18990;
  t22514 = Sin(var1[3]);
  t19757 = t16054*t16072;
  t19788 = t16052*t16075;
  t20032 = t19757 + t19788;
  t20628 = Cos(var1[3]);
  t20179 = t8333*t930;
  t20453 = t3728*t8650;
  t20478 = t20179 + t20453;
  t20490 = t16052*t16054*t15009;
  t20494 = -1.*t16072*t15009*t16075;
  t20513 = t20490 + t20494;
  t20630 = t16054*t16072*t16068;
  t20632 = t16052*t16068*t16075;
  t21436 = t20630 + t20632;
  t22787 = t15844*t15009;
  t22822 = -1.*t15104*t19539;
  t22823 = t22787 + t22822;
  t23034 = -1.*t16052*t16054;
  t23043 = t16072*t16075;
  t23044 = t23034 + t23043;
  t24303 = t16054*t16072*t15009;
  t25840 = t16052*t15009*t16075;
  t25842 = t24303 + t25840;
  t26868 = t15844*t20478;
  t27807 = -1.*t15104*t20513;
  t27808 = t26868 + t27807;
  t20479 = t20478*t15104;
  t20514 = t15844*t20513;
  t20600 = t20479 + t20514;
  t34641 = -1.*t16052;
  t34650 = 1. + t34641;
  t34915 = -1.*t8333;
  t34926 = 1. + t34915;
  t34942 = -0.28121*t34926;
  t34957 = -1.*t930;
  t34967 = 1. + t34957;
  t34973 = -0.50321*t34967;
  t35022 = -0.23321*t930;
  t35039 = t34973 + t35022;
  t35060 = t8333*t35039;
  t35061 = 0.27*t3728*t8650;
  t35062 = t34942 + t35060 + t35061;
  t35288 = -0.15121*t34650;
  t35458 = t16052*t35062;
  t35459 = t35288 + t35458;
  t34657 = 0.15121*t34650;
  t34663 = 0.15121*t16052;
  t34703 = 0.15121*t16072;
  t35069 = t16072*t35062;
  t35208 = t34657 + t34663 + t34703 + t35069;
  t35505 = 0.28121*t3728;
  t35511 = t35039*t3728;
  t35527 = -0.27*t8333*t8650;
  t35550 = t35505 + t35511 + t35527;
  t35555 = t16054*t35459;
  t35562 = -1.*t35208*t16075;
  t35563 = t35555 + t35562;
  t35225 = t16054*t35208;
  t35467 = t35459*t16075;
  t35469 = t35225 + t35467;
  t35553 = t35550*t15104;
  t35564 = t15844*t35563;
  t35571 = t35553 + t35564;
  t35579 = t15844*t35550;
  t35582 = -1.*t15104*t35563;
  t35633 = t35579 + t35582;
  t15238 = t15009*t15104;
  t19557 = t15844*t19539;
  t19708 = t15238 + t19557;
  t35503 = -1.*t23044*t35469;
  t35703 = t25842*t35469;
  t36142 = -1.*t25842*t35469;
  t36212 = t21436*t35469;
  t37138 = t23044*t35469;
  t37390 = -1.*t21436*t35469;
  t37776 = -1.*t35550*t20478;
  t38030 = t35550*t15009;
  p_output1[0]=t19708;
  p_output1[1]=t15844*t20032;
  p_output1[2]=t20600;
  p_output1[3]=t20628*t21436 - 1.*t22514*t22823;
  p_output1[4]=t15104*t20032*t22514 + t20628*t23044;
  p_output1[5]=t20628*t25842 - 1.*t22514*t27808;
  p_output1[6]=t21436*t22514 + t20628*t22823;
  p_output1[7]=-1.*t15104*t20032*t20628 + t22514*t23044;
  p_output1[8]=t22514*t25842 + t20628*t27808;
  p_output1[9]=t20600*(t35503 - 1.*t15844*t20032*t35571 + t15104*t20032*t35633) + t15844*t20032*(t20600*t35571 + t27808*t35633 + t35703);
  p_output1[10]=t19708*(-1.*t20600*t35571 - 1.*t27808*t35633 + t36142) + t20600*(t19708*t35571 + t22823*t35633 + t36212);
  p_output1[11]=t19708*(t15844*t20032*t35571 - 1.*t15104*t20032*t35633 + t37138) + t15844*t20032*(-1.*t19708*t35571 - 1.*t22823*t35633 + t37390);
  p_output1[12]=t25842*(t35503 - 1.*t20032*t35563) + t23044*(t20478*t35550 + t20513*t35563 + t35703);
  p_output1[13]=t21436*(-1.*t20513*t35563 + t36142 + t37776) + t25842*(t19539*t35563 + t36212 + t38030);
  p_output1[14]=t21436*(t20032*t35563 + t37138) + t23044*(-1.*t15009*t35550 - 1.*t19539*t35563 + t37390);
  p_output1[15]=t20478*(t16052*t35208 - 1.*t16072*t35459);
  p_output1[16]=t15009*(-1.*t15009*t16072*t35208 - 1.*t15009*t16052*t35459 + t37776) + t20478*(t16068*t16072*t35208 + t16052*t16068*t35459 + t38030);
  p_output1[17]=t15009*(-1.*t16052*t35208 + t16072*t35459);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t16068 + 0.15121*t20478;
  p_output1[28]=-0.15121 + t15009*(-1.*t15009*t35062 + t37776) + t20478*(t16068*t35062 + t38030);
  p_output1[29]=0;
  p_output1[30]=0.28121*t8650 + t35039*t8650 - 0.27*t8650*t930;
  p_output1[31]=0;
  p_output1[32]=0.27*Power(t8650,2) + 0.28121*t930 + t35039*t930;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.27;
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
