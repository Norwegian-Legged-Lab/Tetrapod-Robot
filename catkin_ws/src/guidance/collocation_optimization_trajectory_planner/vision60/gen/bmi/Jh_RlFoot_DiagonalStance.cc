/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:39 GMT+02:00
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
  double t10717;
  double t7610;
  double t8017;
  double t10722;
  double t10716;
  double t10727;
  double t10736;
  double t34173;
  double t10754;
  double t2957;
  double t24875;
  double t34252;
  double t33426;
  double t33585;
  double t33586;
  double t30731;
  double t34001;
  double t35138;
  double t35142;
  double t43463;
  double t43760;
  double t43194;
  double t43199;
  double t43215;
  double t43224;
  double t43355;
  double t43393;
  double t43464;
  double t43486;
  double t43491;
  double t43772;
  double t43789;
  double t43799;
  double t43902;
  double t43904;
  double t43905;
  double t43930;
  double t43942;
  double t43943;
  double t43949;
  double t43950;
  double t43962;
  double t43190;
  double t43452;
  double t43462;
  double t43990;
  double t43995;
  double t43996;
  double t44002;
  double t44003;
  double t44004;
  double t44013;
  double t44014;
  double t44018;
  double t37903;
  double t42551;
  double t43164;
  double t43989;
  double t44001;
  double t44019;
  double t44020;
  double t44024;
  double t44029;
  double t44034;
  double t44036;
  double t44037;
  double t44046;
  double t43976;
  double t43986;
  double t43987;
  double t43988;
  double t44021;
  double t44022;
  double t44059;
  double t44060;
  double t44061;
  double t44067;
  double t44069;
  double t44070;
  double t44023;
  double t44054;
  double t44056;
  double t44062;
  double t44071;
  double t44072;
  double t44077;
  double t44078;
  double t44079;
  double t10795;
  double t36671;
  double t36672;
  double t44058;
  double t44084;
  double t44091;
  double t44096;
  double t44105;
  double t44119;
  double t44125;
  double t44129;
  double t44139;
  double t44134;
  double t44145;
  double t44149;
  double t44178;
  double t44173;
  t10717 = Cos(var1[10]);
  t7610 = Cos(var1[11]);
  t8017 = Sin(var1[10]);
  t10722 = Sin(var1[11]);
  t10716 = t7610*t8017;
  t10727 = -1.*t10717*t10722;
  t10736 = t10716 + t10727;
  t34173 = Sin(var1[9]);
  t10754 = Sin(var1[4]);
  t2957 = Cos(var1[9]);
  t24875 = Cos(var1[4]);
  t34252 = Sin(var1[5]);
  t33426 = t10717*t7610;
  t33585 = t8017*t10722;
  t33586 = t33426 + t33585;
  t30731 = Cos(var1[5]);
  t34001 = t30731*t33586;
  t35138 = t34173*t10736*t34252;
  t35142 = t34001 + t35138;
  t43463 = Cos(var1[3]);
  t43760 = Sin(var1[3]);
  t43194 = -1.*t7610*t8017;
  t43199 = t10717*t10722;
  t43215 = t43194 + t43199;
  t43224 = t30731*t43215;
  t43355 = t34173*t33586*t34252;
  t43393 = t43224 + t43355;
  t43464 = -1.*t30731*t34173*t10736;
  t43486 = t33586*t34252;
  t43491 = t43464 + t43486;
  t43772 = t2957*t24875*t10736;
  t43789 = -1.*t10754*t35142;
  t43799 = t43772 + t43789;
  t43902 = t24875*t34173;
  t43904 = t2957*t10754*t34252;
  t43905 = t43902 + t43904;
  t43930 = -1.*t30731*t34173*t33586;
  t43942 = t43215*t34252;
  t43943 = t43930 + t43942;
  t43949 = t2957*t24875*t33586;
  t43950 = -1.*t10754*t43393;
  t43962 = t43949 + t43950;
  t43190 = t2957*t33586*t10754;
  t43452 = t24875*t43393;
  t43462 = t43190 + t43452;
  t43990 = -0.0641*t7610;
  t43995 = -0.28*t10722;
  t43996 = t43990 + t43995;
  t44002 = -1.*t7610;
  t44003 = 1. + t44002;
  t44004 = -0.575*t44003;
  t44013 = -0.295*t7610;
  t44014 = -0.0641*t10722;
  t44018 = t44004 + t44013 + t44014;
  t37903 = t34173*t10754;
  t42551 = -1.*t2957*t24875*t34252;
  t43164 = t37903 + t42551;
  t43989 = 0.325*t8017;
  t44001 = t10717*t43996;
  t44019 = t8017*t44018;
  t44020 = t43989 + t44001 + t44019;
  t44024 = -1.*t10717;
  t44029 = 1. + t44024;
  t44034 = -0.325*t44029;
  t44036 = -1.*t8017*t43996;
  t44037 = t10717*t44018;
  t44046 = t44034 + t44036 + t44037;
  t43976 = -1.*t2957;
  t43986 = 1. + t43976;
  t43987 = 0.1575*t43986;
  t43988 = 0.2255*t2957;
  t44021 = -1.*t34173*t44020;
  t44022 = t43987 + t43988 + t44021;
  t44059 = 0.068*t34173;
  t44060 = t2957*t44020;
  t44061 = t44059 + t44060;
  t44067 = t30731*t44046;
  t44069 = -1.*t44022*t34252;
  t44070 = t44067 + t44069;
  t44023 = t30731*t44022;
  t44054 = t44046*t34252;
  t44056 = t44023 + t44054;
  t44062 = t44061*t10754;
  t44071 = t24875*t44070;
  t44072 = t44062 + t44071;
  t44077 = t24875*t44061;
  t44078 = -1.*t10754*t44070;
  t44079 = t44077 + t44078;
  t10795 = t2957*t10736*t10754;
  t36671 = t24875*t35142;
  t36672 = t10795 + t36671;
  t44058 = -1.*t2957*t30731*t44056;
  t44084 = t44056*t43943;
  t44091 = t44056*t43491;
  t44096 = -1.*t44056*t43943;
  t44105 = t2957*t30731*t44056;
  t44119 = -1.*t44056*t43491;
  t44125 = -1.*t34173*t44061;
  t44129 = t2957*t44061*t33586;
  t44139 = -1.*t2957*t44061*t33586;
  t44134 = t2957*t44061*t10736;
  t44145 = t34173*t44061;
  t44149 = -1.*t2957*t44061*t10736;
  t44178 = t44046*t33586;
  t44173 = -1.*t44046*t43215;
  p_output1[0]=t36672;
  p_output1[1]=t43164;
  p_output1[2]=t43462;
  p_output1[3]=t43463*t43491 - 1.*t43760*t43799;
  p_output1[4]=t2957*t30731*t43463 - 1.*t43760*t43905;
  p_output1[5]=t43463*t43943 - 1.*t43760*t43962;
  p_output1[6]=t43491*t43760 + t43463*t43799;
  p_output1[7]=t2957*t30731*t43760 + t43463*t43905;
  p_output1[8]=t43760*t43943 + t43463*t43962;
  p_output1[9]=t43462*(t44058 - 1.*t43164*t44072 - 1.*t43905*t44079) + t43164*(t43462*t44072 + t43962*t44079 + t44084);
  p_output1[10]=t43462*(t36672*t44072 + t43799*t44079 + t44091) + t36672*(-1.*t43462*t44072 - 1.*t43962*t44079 + t44096);
  p_output1[11]=t36672*(t43164*t44072 + t43905*t44079 + t44105) + t43164*(-1.*t36672*t44072 - 1.*t43799*t44079 + t44119);
  p_output1[12]=t43943*(t44058 + t2957*t34252*t44070 + t44125) + t2957*t30731*(t43393*t44070 + t44084 + t44129);
  p_output1[13]=t43943*(t35142*t44070 + t44091 + t44134) + t43491*(-1.*t43393*t44070 + t44096 + t44139);
  p_output1[14]=t43491*(-1.*t2957*t34252*t44070 + t44105 + t44145) + t2957*t30731*(-1.*t35142*t44070 + t44119 + t44149);
  p_output1[15]=t2957*t33586*(-1.*t2957*t44022 + t44125) + t34173*(-1.*t33586*t34173*t44022 + t43215*t44046 + t44129);
  p_output1[16]=t10736*t2957*(t33586*t34173*t44022 + t44139 + t44173) + t2957*t33586*(-1.*t10736*t34173*t44022 + t44134 + t44178);
  p_output1[17]=t10736*t2957*(t2957*t44022 + t44145) + t34173*(t10736*t34173*t44022 - 1.*t33586*t44046 + t44149);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t10736 - 0.2255*t43215;
  p_output1[28]=t33586*(-1.*t33586*t44020 + t44173) + t43215*(t10736*t44020 + t44178);
  p_output1[29]=0.068*t33586;
  p_output1[30]=-0.325*t10722 - 1.*t10722*t44018 - 1.*t43996*t7610;
  p_output1[31]=0;
  p_output1[32]=-1.*t10722*t43996 + 0.325*t7610 + t44018*t7610;
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
