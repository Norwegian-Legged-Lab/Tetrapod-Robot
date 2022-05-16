/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:45 GMT+02:00
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
  double t3893;
  double t133;
  double t904;
  double t4017;
  double t23404;
  double t25847;
  double t32577;
  double t21516;
  double t23402;
  double t35153;
  double t21560;
  double t35154;
  double t21381;
  double t1245;
  double t4666;
  double t19067;
  double t34149;
  double t35265;
  double t35376;
  double t36345;
  double t35654;
  double t35663;
  double t35934;
  double t36303;
  double t36024;
  double t36025;
  double t36026;
  double t36035;
  double t36269;
  double t36297;
  double t36307;
  double t36309;
  double t36310;
  double t36372;
  double t36375;
  double t36533;
  double t36570;
  double t36588;
  double t36590;
  double t36597;
  double t36599;
  double t36600;
  double t36603;
  double t36604;
  double t36610;
  double t36030;
  double t36300;
  double t36301;
  double t36788;
  double t36790;
  double t36801;
  double t36806;
  double t36807;
  double t36808;
  double t36809;
  double t36813;
  double t36815;
  double t36832;
  double t36833;
  double t36834;
  double t36835;
  double t36840;
  double t36841;
  double t36845;
  double t36794;
  double t36799;
  double t36800;
  double t36837;
  double t36838;
  double t36849;
  double t36850;
  double t36853;
  double t36854;
  double t36856;
  double t36857;
  double t36859;
  double t36839;
  double t36846;
  double t36847;
  double t36855;
  double t36862;
  double t36869;
  double t36875;
  double t36876;
  double t36878;
  double t21477;
  double t35512;
  double t35643;
  double t36848;
  double t36946;
  double t36958;
  double t36967;
  double t37080;
  double t37105;
  double t37357;
  double t37377;
  t3893 = Cos(var1[10]);
  t133 = Cos(var1[11]);
  t904 = Sin(var1[10]);
  t4017 = Sin(var1[11]);
  t23404 = -1.*t3893*t133;
  t25847 = -1.*t904*t4017;
  t32577 = t23404 + t25847;
  t21516 = Cos(var1[4]);
  t23402 = Cos(var1[5]);
  t35153 = Sin(var1[9]);
  t21560 = Cos(var1[9]);
  t35154 = Sin(var1[5]);
  t21381 = Sin(var1[4]);
  t1245 = -1.*t133*t904;
  t4666 = t3893*t4017;
  t19067 = t1245 + t4666;
  t34149 = t21560*t23402*t32577;
  t35265 = -1.*t35153*t32577*t35154;
  t35376 = t34149 + t35265;
  t36345 = Sin(var1[3]);
  t35654 = t23402*t35153;
  t35663 = t21560*t35154;
  t35934 = t35654 + t35663;
  t36303 = Cos(var1[3]);
  t36024 = t3893*t133;
  t36025 = t904*t4017;
  t36026 = t36024 + t36025;
  t36035 = t21560*t23402*t19067;
  t36269 = -1.*t35153*t19067*t35154;
  t36297 = t36035 + t36269;
  t36307 = t23402*t35153*t32577;
  t36309 = t21560*t32577*t35154;
  t36310 = t36307 + t36309;
  t36372 = t21516*t19067;
  t36375 = -1.*t21381*t35376;
  t36533 = t36372 + t36375;
  t36570 = -1.*t21560*t23402;
  t36588 = t35153*t35154;
  t36590 = t36570 + t36588;
  t36597 = t23402*t35153*t19067;
  t36599 = t21560*t19067*t35154;
  t36600 = t36597 + t36599;
  t36603 = t21516*t36026;
  t36604 = -1.*t21381*t36297;
  t36610 = t36603 + t36604;
  t36030 = t36026*t21381;
  t36300 = t21516*t36297;
  t36301 = t36030 + t36300;
  t36788 = -1.*t21560;
  t36790 = 1. + t36788;
  t36801 = -1.*t3893;
  t36806 = 1. + t36801;
  t36807 = -0.28121*t36806;
  t36808 = -1.*t133;
  t36809 = 1. + t36808;
  t36813 = -0.50321*t36809;
  t36815 = -0.23321*t133;
  t36832 = t36813 + t36815;
  t36833 = t3893*t36832;
  t36834 = 0.27*t904*t4017;
  t36835 = t36807 + t36833 + t36834;
  t36840 = -0.15121*t36790;
  t36841 = t21560*t36835;
  t36845 = t36840 + t36841;
  t36794 = 0.15121*t36790;
  t36799 = 0.15121*t21560;
  t36800 = 0.15121*t35153;
  t36837 = t35153*t36835;
  t36838 = t36794 + t36799 + t36800 + t36837;
  t36849 = 0.28121*t904;
  t36850 = t36832*t904;
  t36853 = -0.27*t3893*t4017;
  t36854 = t36849 + t36850 + t36853;
  t36856 = t23402*t36845;
  t36857 = -1.*t36838*t35154;
  t36859 = t36856 + t36857;
  t36839 = t23402*t36838;
  t36846 = t36845*t35154;
  t36847 = t36839 + t36846;
  t36855 = t36854*t21381;
  t36862 = t21516*t36859;
  t36869 = t36855 + t36862;
  t36875 = t21516*t36854;
  t36876 = -1.*t21381*t36859;
  t36878 = t36875 + t36876;
  t21477 = t19067*t21381;
  t35512 = t21516*t35376;
  t35643 = t21477 + t35512;
  t36848 = -1.*t36590*t36847;
  t36946 = t36600*t36847;
  t36958 = -1.*t36600*t36847;
  t36967 = t36310*t36847;
  t37080 = t36590*t36847;
  t37105 = -1.*t36310*t36847;
  t37357 = -1.*t36854*t36026;
  t37377 = t36854*t19067;
  p_output1[0]=t35643;
  p_output1[1]=t21516*t35934;
  p_output1[2]=t36301;
  p_output1[3]=t36303*t36310 - 1.*t36345*t36533;
  p_output1[4]=t21381*t35934*t36345 + t36303*t36590;
  p_output1[5]=t36303*t36600 - 1.*t36345*t36610;
  p_output1[6]=t36310*t36345 + t36303*t36533;
  p_output1[7]=-1.*t21381*t35934*t36303 + t36345*t36590;
  p_output1[8]=t36345*t36600 + t36303*t36610;
  p_output1[9]=t36301*(t36848 - 1.*t21516*t35934*t36869 + t21381*t35934*t36878) + t21516*t35934*(t36301*t36869 + t36610*t36878 + t36946);
  p_output1[10]=t35643*(-1.*t36301*t36869 - 1.*t36610*t36878 + t36958) + t36301*(t35643*t36869 + t36533*t36878 + t36967);
  p_output1[11]=t35643*(t21516*t35934*t36869 - 1.*t21381*t35934*t36878 + t37080) + t21516*t35934*(-1.*t35643*t36869 - 1.*t36533*t36878 + t37105);
  p_output1[12]=t36600*(t36848 - 1.*t35934*t36859) + t36590*(t36026*t36854 + t36297*t36859 + t36946);
  p_output1[13]=t36310*(-1.*t36297*t36859 + t36958 + t37357) + t36600*(t35376*t36859 + t36967 + t37377);
  p_output1[14]=t36310*(t35934*t36859 + t37080) + t36590*(-1.*t19067*t36854 - 1.*t35376*t36859 + t37105);
  p_output1[15]=t36026*(t21560*t36838 - 1.*t35153*t36845);
  p_output1[16]=t19067*(-1.*t19067*t35153*t36838 - 1.*t19067*t21560*t36845 + t37357) + t36026*(t32577*t35153*t36838 + t21560*t32577*t36845 + t37377);
  p_output1[17]=t19067*(-1.*t21560*t36838 + t35153*t36845);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t32577 + 0.15121*t36026;
  p_output1[28]=-0.15121 + t19067*(-1.*t19067*t36835 + t37357) + t36026*(t32577*t36835 + t37377);
  p_output1[29]=0;
  p_output1[30]=0.28121*t4017 - 0.27*t133*t4017 + t36832*t4017;
  p_output1[31]=0;
  p_output1[32]=0.28121*t133 + t133*t36832 + 0.27*Power(t4017,2);
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
