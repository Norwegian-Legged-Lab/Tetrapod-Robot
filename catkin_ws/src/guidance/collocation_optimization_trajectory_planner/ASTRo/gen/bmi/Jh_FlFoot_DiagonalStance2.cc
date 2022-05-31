/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:41 GMT+02:00
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
  double t35028;
  double t30809;
  double t34450;
  double t35070;
  double t35385;
  double t35389;
  double t35390;
  double t35192;
  double t35383;
  double t35394;
  double t35369;
  double t35395;
  double t3866;
  double t35625;
  double t35626;
  double t35627;
  double t35020;
  double t35108;
  double t35124;
  double t35392;
  double t35403;
  double t35432;
  double t35740;
  double t35443;
  double t35444;
  double t35455;
  double t35704;
  double t35639;
  double t35643;
  double t35645;
  double t35708;
  double t35718;
  double t35719;
  double t35742;
  double t35847;
  double t35866;
  double t35871;
  double t35872;
  double t35873;
  double t35878;
  double t35882;
  double t35886;
  double t35888;
  double t35889;
  double t35890;
  double t35534;
  double t35650;
  double t35659;
  double t35909;
  double t35911;
  double t35912;
  double t35913;
  double t35915;
  double t35916;
  double t35919;
  double t35920;
  double t35921;
  double t35922;
  double t35926;
  double t35931;
  double t35932;
  double t35933;
  double t35934;
  double t35952;
  double t35977;
  double t35978;
  double t35979;
  double t35980;
  double t35984;
  double t35985;
  double t35988;
  double t35989;
  double t35991;
  double t35993;
  double t35994;
  double t35966;
  double t35981;
  double t35982;
  double t35990;
  double t35995;
  double t35996;
  double t35999;
  double t36000;
  double t36001;
  double t35174;
  double t35434;
  double t35437;
  double t35983;
  double t36005;
  double t36022;
  double t36040;
  double t36056;
  double t36066;
  double t36087;
  double t36091;
  t35028 = Cos(var1[7]);
  t30809 = Cos(var1[8]);
  t34450 = Sin(var1[7]);
  t35070 = Sin(var1[8]);
  t35385 = t35028*t30809;
  t35389 = t34450*t35070;
  t35390 = t35385 + t35389;
  t35192 = Cos(var1[4]);
  t35383 = Cos(var1[6]);
  t35394 = Sin(var1[5]);
  t35369 = Cos(var1[5]);
  t35395 = Sin(var1[6]);
  t3866 = Sin(var1[4]);
  t35625 = t30809*t34450;
  t35626 = -1.*t35028*t35070;
  t35627 = t35625 + t35626;
  t35020 = -1.*t30809*t34450;
  t35108 = t35028*t35070;
  t35124 = t35020 + t35108;
  t35392 = t35369*t35383*t35390;
  t35403 = -1.*t35394*t35395*t35390;
  t35432 = t35392 + t35403;
  t35740 = Sin(var1[3]);
  t35443 = -1.*t35383*t35394;
  t35444 = -1.*t35369*t35395;
  t35455 = t35443 + t35444;
  t35704 = Cos(var1[3]);
  t35639 = t35369*t35383*t35627;
  t35643 = -1.*t35394*t35395*t35627;
  t35645 = t35639 + t35643;
  t35708 = t35383*t35394*t35390;
  t35718 = t35369*t35395*t35390;
  t35719 = t35708 + t35718;
  t35742 = t35192*t35124;
  t35847 = -1.*t3866*t35432;
  t35866 = t35742 + t35847;
  t35871 = t35369*t35383;
  t35872 = -1.*t35394*t35395;
  t35873 = t35871 + t35872;
  t35878 = t35383*t35394*t35627;
  t35882 = t35369*t35395*t35627;
  t35886 = t35878 + t35882;
  t35888 = t35192*t35390;
  t35889 = -1.*t3866*t35645;
  t35890 = t35888 + t35889;
  t35534 = t3866*t35390;
  t35650 = t35192*t35645;
  t35659 = t35534 + t35650;
  t35909 = -1.*t35383;
  t35911 = 1. + t35909;
  t35912 = 0.15121*t35911;
  t35913 = -1.*t35028;
  t35915 = 1. + t35913;
  t35916 = 0.28121*t35915;
  t35919 = -1.*t30809;
  t35920 = 1. + t35919;
  t35921 = 0.50321*t35920;
  t35922 = 0.19821*t30809;
  t35926 = t35921 + t35922;
  t35931 = t35028*t35926;
  t35932 = -0.305*t34450*t35070;
  t35933 = t35916 + t35931 + t35932;
  t35934 = t35383*t35933;
  t35952 = t35912 + t35934;
  t35977 = 0.15121*t35383;
  t35978 = -0.15121*t35395;
  t35979 = t35395*t35933;
  t35980 = t35912 + t35977 + t35978 + t35979;
  t35984 = 0.28121*t34450;
  t35985 = -1.*t35926*t34450;
  t35988 = -0.305*t35028*t35070;
  t35989 = t35984 + t35985 + t35988;
  t35991 = t35369*t35952;
  t35993 = -1.*t35394*t35980;
  t35994 = t35991 + t35993;
  t35966 = t35394*t35952;
  t35981 = t35369*t35980;
  t35982 = t35966 + t35981;
  t35990 = t3866*t35989;
  t35995 = t35192*t35994;
  t35996 = t35990 + t35995;
  t35999 = t35192*t35989;
  t36000 = -1.*t3866*t35994;
  t36001 = t35999 + t36000;
  t35174 = t3866*t35124;
  t35434 = t35192*t35432;
  t35437 = t35174 + t35434;
  t35983 = -1.*t35873*t35982;
  t36005 = t35886*t35982;
  t36022 = -1.*t35886*t35982;
  t36040 = t35719*t35982;
  t36056 = t35873*t35982;
  t36066 = -1.*t35719*t35982;
  t36087 = -1.*t35989*t35390;
  t36091 = t35989*t35124;
  p_output1[0]=t35437;
  p_output1[1]=t35192*t35455;
  p_output1[2]=t35659;
  p_output1[3]=t35704*t35719 - 1.*t35740*t35866;
  p_output1[4]=t35704*t35873 + t35455*t35740*t3866;
  p_output1[5]=t35704*t35886 - 1.*t35740*t35890;
  p_output1[6]=t35719*t35740 + t35704*t35866;
  p_output1[7]=t35740*t35873 - 1.*t35455*t35704*t3866;
  p_output1[8]=t35740*t35886 + t35704*t35890;
  p_output1[9]=t35192*t35455*(t35659*t35996 + t35890*t36001 + t36005) + t35659*(t35983 - 1.*t35192*t35455*t35996 + t35455*t36001*t3866);
  p_output1[10]=t35437*(-1.*t35659*t35996 - 1.*t35890*t36001 + t36022) + t35659*(t35437*t35996 + t35866*t36001 + t36040);
  p_output1[11]=t35192*t35455*(-1.*t35437*t35996 - 1.*t35866*t36001 + t36066) + t35437*(t35192*t35455*t35996 + t36056 - 1.*t35455*t36001*t3866);
  p_output1[12]=t35886*(t35983 - 1.*t35455*t35994) + t35873*(t35390*t35989 + t35645*t35994 + t36005);
  p_output1[13]=t35719*(-1.*t35645*t35994 + t36022 + t36087) + t35886*(t35432*t35994 + t36040 + t36091);
  p_output1[14]=t35719*(t35455*t35994 + t36056) + t35873*(-1.*t35124*t35989 - 1.*t35432*t35994 + t36066);
  p_output1[15]=t35390*(t35395*t35952 - 1.*t35383*t35980);
  p_output1[16]=t35124*(-1.*t35383*t35627*t35952 - 1.*t35395*t35627*t35980 + t36087) + t35390*(t35383*t35390*t35952 + t35390*t35395*t35980 + t36091);
  p_output1[17]=t35124*(-1.*t35395*t35952 + t35383*t35980);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t35124*(-1.*t35627*t35933 + t36087) + t35390*(t35390*t35933 + t36091);
  p_output1[20]=0.15121*t35124 + 0.15121*t35627;
  p_output1[21]=0.28121*t35070 - 0.305*t30809*t35070 - 1.*t35070*t35926;
  p_output1[22]=0;
  p_output1[23]=0.28121*t30809 + 0.305*Power(t35070,2) - 1.*t30809*t35926;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
