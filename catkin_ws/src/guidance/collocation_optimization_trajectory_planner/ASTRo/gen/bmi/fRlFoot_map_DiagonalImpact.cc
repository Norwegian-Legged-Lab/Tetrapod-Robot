/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:03:41 GMT+02:00
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
  double t6060;
  double t6014;
  double t6058;
  double t6062;
  double t6136;
  double t6137;
  double t6138;
  double t6135;
  double t6140;
  double t6131;
  double t6141;
  double t6126;
  double t6059;
  double t6063;
  double t6120;
  double t6124;
  double t6139;
  double t6142;
  double t6143;
  double t6151;
  double t6147;
  double t6148;
  double t6149;
  double t6146;
  double t6152;
  double t6153;
  double t6154;
  double t6175;
  double t6176;
  double t6181;
  double t6182;
  double t6183;
  double t6184;
  double t6185;
  double t6186;
  double t6187;
  double t6188;
  double t6189;
  double t6190;
  double t6191;
  double t6195;
  double t6196;
  double t6197;
  double t6178;
  double t6179;
  double t6180;
  double t6192;
  double t6193;
  double t6201;
  double t6202;
  double t6203;
  double t6205;
  double t6206;
  double t6207;
  double t6208;
  double t6211;
  double t6212;
  double t6213;
  double t6194;
  double t6198;
  double t6199;
  double t6160;
  double t6161;
  double t6163;
  double t6164;
  double t6165;
  double t6166;
  double t6168;
  double t6169;
  double t6170;
  double t6210;
  double t6214;
  double t6215;
  double t6217;
  double t6218;
  double t6219;
  double t6223;
  double t6224;
  double t6225;
  double t6171;
  double t6172;
  double t6174;
  double t6200;
  double t6226;
  double t6125;
  double t6144;
  double t6145;
  double t6228;
  double t6229;
  double t6230;
  double t6261;
  double t6266;
  double t6272;
  double t6276;
  double t6303;
  double t6308;
  t6060 = Cos(var1[10]);
  t6014 = Cos(var1[11]);
  t6058 = Sin(var1[10]);
  t6062 = Sin(var1[11]);
  t6136 = -1.*t6060*t6014;
  t6137 = -1.*t6058*t6062;
  t6138 = t6136 + t6137;
  t6135 = Cos(var1[5]);
  t6140 = Sin(var1[9]);
  t6131 = Cos(var1[9]);
  t6141 = Sin(var1[5]);
  t6126 = Cos(var1[4]);
  t6059 = -1.*t6014*t6058;
  t6063 = t6060*t6062;
  t6120 = t6059 + t6063;
  t6124 = Sin(var1[4]);
  t6139 = t6131*t6135*t6138;
  t6142 = -1.*t6140*t6138*t6141;
  t6143 = t6139 + t6142;
  t6151 = Sin(var1[3]);
  t6147 = t6135*t6140*t6138;
  t6148 = t6131*t6138*t6141;
  t6149 = t6147 + t6148;
  t6146 = Cos(var1[3]);
  t6152 = t6126*t6120;
  t6153 = -1.*t6124*t6143;
  t6154 = t6152 + t6153;
  t6175 = -1.*t6131;
  t6176 = 1. + t6175;
  t6181 = -1.*t6060;
  t6182 = 1. + t6181;
  t6183 = -0.28121*t6182;
  t6184 = -1.*t6014;
  t6185 = 1. + t6184;
  t6186 = -0.50321*t6185;
  t6187 = -0.19821*t6014;
  t6188 = t6186 + t6187;
  t6189 = t6060*t6188;
  t6190 = 0.305*t6058*t6062;
  t6191 = t6183 + t6189 + t6190;
  t6195 = -0.15121*t6176;
  t6196 = t6131*t6191;
  t6197 = t6195 + t6196;
  t6178 = 0.15121*t6176;
  t6179 = 0.15121*t6131;
  t6180 = 0.15121*t6140;
  t6192 = t6140*t6191;
  t6193 = t6178 + t6179 + t6180 + t6192;
  t6201 = t6135*t6140;
  t6202 = t6131*t6141;
  t6203 = t6201 + t6202;
  t6205 = 0.28121*t6058;
  t6206 = t6188*t6058;
  t6207 = -0.305*t6060*t6062;
  t6208 = t6205 + t6206 + t6207;
  t6211 = t6135*t6197;
  t6212 = -1.*t6193*t6141;
  t6213 = t6211 + t6212;
  t6194 = t6135*t6193;
  t6198 = t6197*t6141;
  t6199 = t6194 + t6198;
  t6160 = t6060*t6014;
  t6161 = t6058*t6062;
  t6163 = t6160 + t6161;
  t6164 = t6163*t6124;
  t6165 = t6131*t6135*t6120;
  t6166 = -1.*t6140*t6120*t6141;
  t6168 = t6165 + t6166;
  t6169 = t6126*t6168;
  t6170 = t6164 + t6169;
  t6210 = t6208*t6124;
  t6214 = t6126*t6213;
  t6215 = t6210 + t6214;
  t6217 = t6126*t6208;
  t6218 = -1.*t6124*t6213;
  t6219 = t6217 + t6218;
  t6223 = t6135*t6140*t6120;
  t6224 = t6131*t6120*t6141;
  t6225 = t6223 + t6224;
  t6171 = -1.*t6131*t6135;
  t6172 = t6140*t6141;
  t6174 = t6171 + t6172;
  t6200 = -1.*t6174*t6199;
  t6226 = t6225*t6199;
  t6125 = t6120*t6124;
  t6144 = t6126*t6143;
  t6145 = t6125 + t6144;
  t6228 = t6126*t6163;
  t6229 = -1.*t6124*t6168;
  t6230 = t6228 + t6229;
  t6261 = -1.*t6225*t6199;
  t6266 = t6149*t6199;
  t6272 = -1.*t6208*t6163;
  t6276 = t6208*t6120;
  t6303 = t6174*t6199;
  t6308 = -1.*t6149*t6199;
  p_output1[0]=t6145;
  p_output1[1]=t6146*t6149 - 1.*t6151*t6154;
  p_output1[2]=t6149*t6151 + t6146*t6154;
  p_output1[3]=t6170*(t6200 - 1.*t6126*t6203*t6215 + t6124*t6203*t6219) + t6126*t6203*(t6170*t6215 + t6226 + t6219*t6230);
  p_output1[4]=(t6200 - 1.*t6203*t6213)*t6225 + t6174*(t6163*t6208 + t6168*t6213 + t6226);
  p_output1[5]=t6163*(t6131*t6193 - 1.*t6140*t6197);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t6138 + 0.15121*t6163;
  p_output1[10]=0.28121*t6062 - 0.305*t6014*t6062 + t6062*t6188;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6126*t6203;
  p_output1[19]=t6146*t6174 + t6124*t6151*t6203;
  p_output1[20]=t6151*t6174 - 1.*t6124*t6146*t6203;
  p_output1[21]=t6145*(-1.*t6170*t6215 - 1.*t6219*t6230 + t6261) + t6170*(t6145*t6215 + t6154*t6219 + t6266);
  p_output1[22]=t6149*(-1.*t6168*t6213 + t6261 + t6272) + t6225*(t6143*t6213 + t6266 + t6276);
  p_output1[23]=t6120*(-1.*t6120*t6140*t6193 - 1.*t6120*t6131*t6197 + t6272) + t6163*(t6138*t6140*t6193 + t6131*t6138*t6197 + t6276);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t6120*(-1.*t6120*t6191 + t6272) + t6163*(t6138*t6191 + t6276);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6170;
  p_output1[37]=t6146*t6225 - 1.*t6151*t6230;
  p_output1[38]=t6151*t6225 + t6146*t6230;
  p_output1[39]=t6145*(t6126*t6203*t6215 - 1.*t6124*t6203*t6219 + t6303) + t6126*t6203*(-1.*t6145*t6215 - 1.*t6154*t6219 + t6308);
  p_output1[40]=t6149*(t6203*t6213 + t6303) + t6174*(-1.*t6120*t6208 - 1.*t6143*t6213 + t6308);
  p_output1[41]=t6120*(-1.*t6131*t6193 + t6140*t6197);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t6014 + 0.305*Power(t6062,2) + t6014*t6188;
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
