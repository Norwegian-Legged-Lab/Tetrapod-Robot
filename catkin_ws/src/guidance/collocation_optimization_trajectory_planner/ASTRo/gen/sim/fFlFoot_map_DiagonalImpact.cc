/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:21 GMT+02:00
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
  double t9959;
  double t5005;
  double t5111;
  double t10049;
  double t18015;
  double t18018;
  double t18019;
  double t18006;
  double t18036;
  double t18001;
  double t18039;
  double t17955;
  double t5113;
  double t15918;
  double t17895;
  double t1961;
  double t18030;
  double t18040;
  double t18046;
  double t18061;
  double t18056;
  double t18057;
  double t18058;
  double t18055;
  double t18062;
  double t18063;
  double t18064;
  double t18111;
  double t18115;
  double t18116;
  double t18127;
  double t18129;
  double t18130;
  double t18132;
  double t18133;
  double t18134;
  double t18135;
  double t18136;
  double t18137;
  double t18139;
  double t18140;
  double t18141;
  double t18142;
  double t18144;
  double t18145;
  double t18146;
  double t18148;
  double t18149;
  double t18150;
  double t18151;
  double t18155;
  double t18156;
  double t18157;
  double t18158;
  double t18159;
  double t18160;
  double t18161;
  double t18163;
  double t18164;
  double t18165;
  double t18147;
  double t18152;
  double t18153;
  double t18071;
  double t18117;
  double t18119;
  double t18120;
  double t18121;
  double t18122;
  double t18162;
  double t18166;
  double t18167;
  double t18170;
  double t18171;
  double t18172;
  double t18177;
  double t18178;
  double t18179;
  double t18123;
  double t18124;
  double t18126;
  double t18154;
  double t18180;
  double t17945;
  double t18052;
  double t18053;
  double t18182;
  double t18183;
  double t18184;
  double t18212;
  double t18217;
  double t18224;
  double t18229;
  double t18262;
  double t18267;
  t9959 = Cos(var1[7]);
  t5005 = Cos(var1[8]);
  t5111 = Sin(var1[7]);
  t10049 = Sin(var1[8]);
  t18015 = t9959*t5005;
  t18018 = t5111*t10049;
  t18019 = t18015 + t18018;
  t18006 = Cos(var1[6]);
  t18036 = Sin(var1[5]);
  t18001 = Cos(var1[5]);
  t18039 = Sin(var1[6]);
  t17955 = Cos(var1[4]);
  t5113 = -1.*t5005*t5111;
  t15918 = t9959*t10049;
  t17895 = t5113 + t15918;
  t1961 = Sin(var1[4]);
  t18030 = t18001*t18006*t18019;
  t18040 = -1.*t18036*t18039*t18019;
  t18046 = t18030 + t18040;
  t18061 = Sin(var1[3]);
  t18056 = t18006*t18036*t18019;
  t18057 = t18001*t18039*t18019;
  t18058 = t18056 + t18057;
  t18055 = Cos(var1[3]);
  t18062 = t17955*t17895;
  t18063 = -1.*t1961*t18046;
  t18064 = t18062 + t18063;
  t18111 = t5005*t5111;
  t18115 = -1.*t9959*t10049;
  t18116 = t18111 + t18115;
  t18127 = -1.*t18006;
  t18129 = 1. + t18127;
  t18130 = 0.15121*t18129;
  t18132 = -1.*t9959;
  t18133 = 1. + t18132;
  t18134 = 0.28121*t18133;
  t18135 = -1.*t5005;
  t18136 = 1. + t18135;
  t18137 = 0.50321*t18136;
  t18139 = 0.19821*t5005;
  t18140 = t18137 + t18139;
  t18141 = t9959*t18140;
  t18142 = -0.305*t5111*t10049;
  t18144 = t18134 + t18141 + t18142;
  t18145 = t18006*t18144;
  t18146 = t18130 + t18145;
  t18148 = 0.15121*t18006;
  t18149 = -0.15121*t18039;
  t18150 = t18039*t18144;
  t18151 = t18130 + t18148 + t18149 + t18150;
  t18155 = -1.*t18006*t18036;
  t18156 = -1.*t18001*t18039;
  t18157 = t18155 + t18156;
  t18158 = 0.28121*t5111;
  t18159 = -1.*t18140*t5111;
  t18160 = -0.305*t9959*t10049;
  t18161 = t18158 + t18159 + t18160;
  t18163 = t18001*t18146;
  t18164 = -1.*t18036*t18151;
  t18165 = t18163 + t18164;
  t18147 = t18036*t18146;
  t18152 = t18001*t18151;
  t18153 = t18147 + t18152;
  t18071 = t1961*t18019;
  t18117 = t18001*t18006*t18116;
  t18119 = -1.*t18036*t18039*t18116;
  t18120 = t18117 + t18119;
  t18121 = t17955*t18120;
  t18122 = t18071 + t18121;
  t18162 = t1961*t18161;
  t18166 = t17955*t18165;
  t18167 = t18162 + t18166;
  t18170 = t17955*t18161;
  t18171 = -1.*t1961*t18165;
  t18172 = t18170 + t18171;
  t18177 = t18006*t18036*t18116;
  t18178 = t18001*t18039*t18116;
  t18179 = t18177 + t18178;
  t18123 = t18001*t18006;
  t18124 = -1.*t18036*t18039;
  t18126 = t18123 + t18124;
  t18154 = -1.*t18126*t18153;
  t18180 = t18179*t18153;
  t17945 = t1961*t17895;
  t18052 = t17955*t18046;
  t18053 = t17945 + t18052;
  t18182 = t17955*t18019;
  t18183 = -1.*t1961*t18120;
  t18184 = t18182 + t18183;
  t18212 = -1.*t18179*t18153;
  t18217 = t18058*t18153;
  t18224 = -1.*t18161*t18019;
  t18229 = t18161*t17895;
  t18262 = t18126*t18153;
  t18267 = -1.*t18058*t18153;
  p_output1[0]=t18053;
  p_output1[1]=t18055*t18058 - 1.*t18061*t18064;
  p_output1[2]=t18058*t18061 + t18055*t18064;
  p_output1[3]=t17955*t18157*(t18122*t18167 + t18180 + t18172*t18184) + t18122*(t18154 - 1.*t17955*t18157*t18167 + t18157*t18172*t1961);
  p_output1[4]=(t18154 - 1.*t18157*t18165)*t18179 + t18126*(t18019*t18161 + t18120*t18165 + t18180);
  p_output1[5]=t18019*(t18039*t18146 - 1.*t18006*t18151);
  p_output1[6]=0;
  p_output1[7]=0.28121*t10049 - 1.*t10049*t18140 - 0.305*t10049*t5005;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t17955*t18157;
  p_output1[19]=t18055*t18126 + t18061*t18157*t1961;
  p_output1[20]=t18061*t18126 - 1.*t18055*t18157*t1961;
  p_output1[21]=t18053*(-1.*t18122*t18167 - 1.*t18172*t18184 + t18212) + t18122*(t18053*t18167 + t18064*t18172 + t18217);
  p_output1[22]=t18058*(-1.*t18120*t18165 + t18212 + t18224) + t18179*(t18046*t18165 + t18217 + t18229);
  p_output1[23]=t17895*(-1.*t18006*t18116*t18146 - 1.*t18039*t18116*t18151 + t18224) + t18019*(t18006*t18019*t18146 + t18019*t18039*t18151 + t18229);
  p_output1[24]=-0.15121 + t17895*(-1.*t18116*t18144 + t18224) + t18019*(t18019*t18144 + t18229);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t18122;
  p_output1[37]=t18055*t18179 - 1.*t18061*t18184;
  p_output1[38]=t18061*t18179 + t18055*t18184;
  p_output1[39]=t17955*t18157*(-1.*t18053*t18167 - 1.*t18064*t18172 + t18267) + t18053*(t17955*t18157*t18167 + t18262 - 1.*t18157*t18172*t1961);
  p_output1[40]=t18058*(t18157*t18165 + t18262) + t18126*(-1.*t17895*t18161 - 1.*t18046*t18165 + t18267);
  p_output1[41]=t17895*(-1.*t18039*t18146 + t18006*t18151);
  p_output1[42]=0.15121*t17895 + 0.15121*t18116;
  p_output1[43]=0.305*Power(t10049,2) + 0.28121*t5005 - 1.*t18140*t5005;
  p_output1[44]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
