/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:36 GMT+02:00
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
  double t8798;
  double t8609;
  double t8610;
  double t8799;
  double t8792;
  double t14217;
  double t20900;
  double t22976;
  double t23226;
  double t23180;
  double t23194;
  double t23212;
  double t23229;
  double t8446;
  double t22957;
  double t22458;
  double t23225;
  double t23230;
  double t24775;
  double t24917;
  double t24892;
  double t24893;
  double t24897;
  double t24889;
  double t24921;
  double t24922;
  double t24927;
  double t24970;
  double t24973;
  double t24974;
  double t24976;
  double t24982;
  double t24983;
  double t24984;
  double t24989;
  double t24990;
  double t24968;
  double t24975;
  double t24991;
  double t24992;
  double t25000;
  double t25010;
  double t25011;
  double t25017;
  double t25023;
  double t25025;
  double t24951;
  double t24959;
  double t24960;
  double t24961;
  double t24994;
  double t24995;
  double t25037;
  double t25038;
  double t25039;
  double t25041;
  double t25042;
  double t25043;
  double t25032;
  double t25033;
  double t25035;
  double t24996;
  double t25029;
  double t25030;
  double t24938;
  double t24939;
  double t24942;
  double t25040;
  double t25045;
  double t25046;
  double t24933;
  double t24943;
  double t24944;
  double t24945;
  double t24949;
  double t24950;
  double t25052;
  double t25053;
  double t25055;
  double t25063;
  double t25064;
  double t25065;
  double t25031;
  double t25068;
  double t25108;
  double t25114;
  double t25049;
  double t25050;
  double t25051;
  double t22905;
  double t24824;
  double t24886;
  double t25080;
  double t25084;
  double t25088;
  double t25164;
  double t25173;
  double t25190;
  double t25186;
  double t25200;
  double t25195;
  double t25240;
  double t25245;
  double t25258;
  double t25276;
  t8798 = Cos(var1[10]);
  t8609 = Cos(var1[11]);
  t8610 = Sin(var1[10]);
  t8799 = Sin(var1[11]);
  t8792 = t8609*t8610;
  t14217 = -1.*t8798*t8799;
  t20900 = t8792 + t14217;
  t22976 = Cos(var1[5]);
  t23226 = Sin(var1[9]);
  t23180 = t8798*t8609;
  t23194 = t8610*t8799;
  t23212 = t23180 + t23194;
  t23229 = Sin(var1[5]);
  t8446 = Cos(var1[9]);
  t22957 = Cos(var1[4]);
  t22458 = Sin(var1[4]);
  t23225 = t22976*t23212;
  t23230 = t23226*t20900*t23229;
  t24775 = t23225 + t23230;
  t24917 = Sin(var1[3]);
  t24892 = -1.*t22976*t23226*t20900;
  t24893 = t23212*t23229;
  t24897 = t24892 + t24893;
  t24889 = Cos(var1[3]);
  t24921 = t8446*t22957*t20900;
  t24922 = -1.*t22458*t24775;
  t24927 = t24921 + t24922;
  t24970 = -0.0641*t8609;
  t24973 = -0.28*t8799;
  t24974 = t24970 + t24973;
  t24976 = -1.*t8609;
  t24982 = 1. + t24976;
  t24983 = -0.575*t24982;
  t24984 = -0.295*t8609;
  t24989 = -0.0641*t8799;
  t24990 = t24983 + t24984 + t24989;
  t24968 = 0.325*t8610;
  t24975 = t8798*t24974;
  t24991 = t8610*t24990;
  t24992 = t24968 + t24975 + t24991;
  t25000 = -1.*t8798;
  t25010 = 1. + t25000;
  t25011 = -0.325*t25010;
  t25017 = -1.*t8610*t24974;
  t25023 = t8798*t24990;
  t25025 = t25011 + t25017 + t25023;
  t24951 = -1.*t8446;
  t24959 = 1. + t24951;
  t24960 = 0.1575*t24959;
  t24961 = 0.2255*t8446;
  t24994 = -1.*t23226*t24992;
  t24995 = t24960 + t24961 + t24994;
  t25037 = 0.068*t23226;
  t25038 = t8446*t24992;
  t25039 = t25037 + t25038;
  t25041 = t22976*t25025;
  t25042 = -1.*t24995*t23229;
  t25043 = t25041 + t25042;
  t25032 = t23226*t22458;
  t25033 = -1.*t8446*t22957*t23229;
  t25035 = t25032 + t25033;
  t24996 = t22976*t24995;
  t25029 = t25025*t23229;
  t25030 = t24996 + t25029;
  t24938 = -1.*t8609*t8610;
  t24939 = t8798*t8799;
  t24942 = t24938 + t24939;
  t25040 = t25039*t22458;
  t25045 = t22957*t25043;
  t25046 = t25040 + t25045;
  t24933 = t8446*t23212*t22458;
  t24943 = t22976*t24942;
  t24944 = t23226*t23212*t23229;
  t24945 = t24943 + t24944;
  t24949 = t22957*t24945;
  t24950 = t24933 + t24949;
  t25052 = t22957*t25039;
  t25053 = -1.*t22458*t25043;
  t25055 = t25052 + t25053;
  t25063 = -1.*t22976*t23226*t23212;
  t25064 = t24942*t23229;
  t25065 = t25063 + t25064;
  t25031 = -1.*t8446*t22976*t25030;
  t25068 = t25030*t25065;
  t25108 = -1.*t23226*t25039;
  t25114 = t8446*t25039*t23212;
  t25049 = t22957*t23226;
  t25050 = t8446*t22458*t23229;
  t25051 = t25049 + t25050;
  t22905 = t8446*t20900*t22458;
  t24824 = t22957*t24775;
  t24886 = t22905 + t24824;
  t25080 = t8446*t22957*t23212;
  t25084 = -1.*t22458*t24945;
  t25088 = t25080 + t25084;
  t25164 = t25030*t24897;
  t25173 = -1.*t25030*t25065;
  t25190 = -1.*t8446*t25039*t23212;
  t25186 = t8446*t25039*t20900;
  t25200 = t25025*t23212;
  t25195 = -1.*t25025*t24942;
  t25240 = t8446*t22976*t25030;
  t25245 = -1.*t25030*t24897;
  t25258 = t23226*t25039;
  t25276 = -1.*t8446*t25039*t20900;
  p_output1[0]=t24886;
  p_output1[1]=t24889*t24897 - 1.*t24917*t24927;
  p_output1[2]=t24897*t24917 + t24889*t24927;
  p_output1[3]=t24950*(t25031 - 1.*t25035*t25046 - 1.*t25051*t25055) + t25035*(t24950*t25046 + t25068 + t25055*t25088);
  p_output1[4]=t22976*(t24945*t25043 + t25068 + t25114)*t8446 + t25065*(t25031 + t25108 + t23229*t25043*t8446);
  p_output1[5]=t23226*(-1.*t23212*t23226*t24995 + t24942*t25025 + t25114) + t23212*t8446*(t25108 - 1.*t24995*t8446);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t20900 - 0.2255*t24942;
  p_output1[10]=-1.*t24974*t8609 - 0.325*t8799 - 1.*t24990*t8799;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t25035;
  p_output1[19]=-1.*t24917*t25051 + t22976*t24889*t8446;
  p_output1[20]=t24889*t25051 + t22976*t24917*t8446;
  p_output1[21]=t24950*(t24886*t25046 + t24927*t25055 + t25164) + t24886*(-1.*t24950*t25046 - 1.*t25055*t25088 + t25173);
  p_output1[22]=t25065*(t24775*t25043 + t25164 + t25186) + t24897*(-1.*t24945*t25043 + t25173 + t25190);
  p_output1[23]=t20900*(t23212*t23226*t24995 + t25190 + t25195)*t8446 + t23212*(-1.*t20900*t23226*t24995 + t25186 + t25200)*t8446;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t23212*(-1.*t23212*t24992 + t25195) + t24942*(t20900*t24992 + t25200);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t24950;
  p_output1[37]=t24889*t25065 - 1.*t24917*t25088;
  p_output1[38]=t24917*t25065 + t24889*t25088;
  p_output1[39]=t24886*(t25035*t25046 + t25051*t25055 + t25240) + t25035*(-1.*t24886*t25046 - 1.*t24927*t25055 + t25245);
  p_output1[40]=t22976*(-1.*t24775*t25043 + t25245 + t25276)*t8446 + t24897*(t25240 + t25258 - 1.*t23229*t25043*t8446);
  p_output1[41]=t23226*(t20900*t23226*t24995 - 1.*t23212*t25025 + t25276) + t20900*t8446*(t25258 + t24995*t8446);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t23212;
  p_output1[46]=0.325*t8609 + t24990*t8609 - 1.*t24974*t8799;
  p_output1[47]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
