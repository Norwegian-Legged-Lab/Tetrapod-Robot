/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:59:02 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t6061;
  double t6099;
  double t6086;
  double t6119;
  double t6124;
  double t6118;
  double t6128;
  double t6096;
  double t6133;
  double t6134;
  double t6135;
  double t6105;
  double t6131;
  double t6144;
  double t6145;
  double t6182;
  double t6097;
  double t6107;
  double t6108;
  double t6197;
  double t6194;
  double t6120;
  double t6129;
  double t6130;
  double t6136;
  double t6137;
  double t6138;
  double t6186;
  double t6187;
  double t6188;
  double t6198;
  double t6199;
  double t6200;
  double t6205;
  double t6206;
  double t6207;
  double t6210;
  double t6211;
  double t6212;
  double t6217;
  double t6218;
  double t6219;
  double t6221;
  double t6222;
  double t6223;
  double t6132;
  double t6139;
  double t6140;
  double t6242;
  double t6244;
  double t6248;
  double t6249;
  double t6250;
  double t6251;
  double t6252;
  double t6253;
  double t6254;
  double t6255;
  double t6256;
  double t6257;
  double t6258;
  double t6262;
  double t6263;
  double t6264;
  double t6245;
  double t6246;
  double t6247;
  double t6259;
  double t6260;
  double t6268;
  double t6269;
  double t6270;
  double t6271;
  double t6273;
  double t6274;
  double t6275;
  double t6261;
  double t6265;
  double t6266;
  double t6272;
  double t6276;
  double t6277;
  double t6279;
  double t6280;
  double t6281;
  double t6142;
  double t6190;
  double t6191;
  double t6267;
  double t6285;
  double t6292;
  double t6297;
  double t6304;
  double t6309;
  double t6335;
  double t6339;
  t6061 = Cos(var1[4]);
  t6099 = Cos(var1[9]);
  t6086 = Cos(var1[5]);
  t6119 = Cos(var1[11]);
  t6124 = Sin(var1[10]);
  t6118 = Cos(var1[10]);
  t6128 = Sin(var1[11]);
  t6096 = Sin(var1[9]);
  t6133 = -1.*t6119*t6124;
  t6134 = t6118*t6128;
  t6135 = t6133 + t6134;
  t6105 = Sin(var1[5]);
  t6131 = Sin(var1[4]);
  t6144 = -1.*t6118*t6119;
  t6145 = -1.*t6124*t6128;
  t6182 = t6144 + t6145;
  t6097 = t6086*t6096;
  t6107 = t6099*t6105;
  t6108 = t6097 + t6107;
  t6197 = Cos(var1[3]);
  t6194 = Sin(var1[3]);
  t6120 = t6118*t6119;
  t6129 = t6124*t6128;
  t6130 = t6120 + t6129;
  t6136 = t6099*t6086*t6135;
  t6137 = -1.*t6096*t6135*t6105;
  t6138 = t6136 + t6137;
  t6186 = t6099*t6086*t6182;
  t6187 = -1.*t6096*t6182*t6105;
  t6188 = t6186 + t6187;
  t6198 = -1.*t6099*t6086;
  t6199 = t6096*t6105;
  t6200 = t6198 + t6199;
  t6205 = t6086*t6096*t6135;
  t6206 = t6099*t6135*t6105;
  t6207 = t6205 + t6206;
  t6210 = t6061*t6130;
  t6211 = -1.*t6131*t6138;
  t6212 = t6210 + t6211;
  t6217 = t6086*t6096*t6182;
  t6218 = t6099*t6182*t6105;
  t6219 = t6217 + t6218;
  t6221 = t6061*t6135;
  t6222 = -1.*t6131*t6188;
  t6223 = t6221 + t6222;
  t6132 = t6130*t6131;
  t6139 = t6061*t6138;
  t6140 = t6132 + t6139;
  t6242 = -1.*t6099;
  t6244 = 1. + t6242;
  t6248 = -1.*t6118;
  t6249 = 1. + t6248;
  t6250 = -0.28121*t6249;
  t6251 = -1.*t6119;
  t6252 = 1. + t6251;
  t6253 = -0.50321*t6252;
  t6254 = -0.19821*t6119;
  t6255 = t6253 + t6254;
  t6256 = t6118*t6255;
  t6257 = 0.305*t6124*t6128;
  t6258 = t6250 + t6256 + t6257;
  t6262 = -0.15121*t6244;
  t6263 = t6099*t6258;
  t6264 = t6262 + t6263;
  t6245 = 0.15121*t6244;
  t6246 = 0.15121*t6099;
  t6247 = 0.15121*t6096;
  t6259 = t6096*t6258;
  t6260 = t6245 + t6246 + t6247 + t6259;
  t6268 = 0.28121*t6124;
  t6269 = t6255*t6124;
  t6270 = -0.305*t6118*t6128;
  t6271 = t6268 + t6269 + t6270;
  t6273 = t6086*t6264;
  t6274 = -1.*t6260*t6105;
  t6275 = t6273 + t6274;
  t6261 = t6086*t6260;
  t6265 = t6264*t6105;
  t6266 = t6261 + t6265;
  t6272 = t6271*t6131;
  t6276 = t6061*t6275;
  t6277 = t6272 + t6276;
  t6279 = t6061*t6271;
  t6280 = -1.*t6131*t6275;
  t6281 = t6279 + t6280;
  t6142 = t6135*t6131;
  t6190 = t6061*t6188;
  t6191 = t6142 + t6190;
  t6267 = -1.*t6200*t6266;
  t6285 = t6207*t6266;
  t6292 = t6200*t6266;
  t6297 = -1.*t6219*t6266;
  t6304 = -1.*t6207*t6266;
  t6309 = t6219*t6266;
  t6335 = -1.*t6271*t6130;
  t6339 = t6271*t6135;
  p_output1[0]=t6191*var2[0] + t6061*t6108*var2[1] + t6140*var2[2];
  p_output1[1]=(t6197*t6219 - 1.*t6194*t6223)*var2[0] + (t6108*t6131*t6194 + t6197*t6200)*var2[1] + (t6197*t6207 - 1.*t6194*t6212)*var2[2];
  p_output1[2]=(t6194*t6219 + t6197*t6223)*var2[0] + (-1.*t6108*t6131*t6197 + t6194*t6200)*var2[1] + (t6194*t6207 + t6197*t6212)*var2[2];
  p_output1[3]=(t6140*(t6267 - 1.*t6061*t6108*t6277 + t6108*t6131*t6281) + t6061*t6108*(t6140*t6277 + t6212*t6281 + t6285))*var2[0] + (t6191*(-1.*t6140*t6277 - 1.*t6212*t6281 + t6304) + t6140*(t6191*t6277 + t6223*t6281 + t6309))*var2[1] + (t6191*(t6061*t6108*t6277 - 1.*t6108*t6131*t6281 + t6292) + t6061*t6108*(-1.*t6191*t6277 - 1.*t6223*t6281 + t6297))*var2[2];
  p_output1[4]=(t6207*(t6267 - 1.*t6108*t6275) + t6200*(t6130*t6271 + t6138*t6275 + t6285))*var2[0] + (t6219*(-1.*t6138*t6275 + t6304 + t6335) + t6207*(t6188*t6275 + t6309 + t6339))*var2[1] + (t6219*(t6108*t6275 + t6292) + t6200*(-1.*t6135*t6271 - 1.*t6188*t6275 + t6297))*var2[2];
  p_output1[5]=t6130*(t6099*t6260 - 1.*t6096*t6264)*var2[0] + (t6135*(-1.*t6096*t6135*t6260 - 1.*t6099*t6135*t6264 + t6335) + t6130*(t6096*t6182*t6260 + t6099*t6182*t6264 + t6339))*var2[1] + t6135*(-1.*t6099*t6260 + t6096*t6264)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t6130 + 0.15121*t6182)*var2[0] + (-0.15121 + t6135*(-1.*t6135*t6258 + t6335) + t6130*(t6182*t6258 + t6339))*var2[1];
  p_output1[10]=(0.28121*t6128 - 0.305*t6119*t6128 + t6128*t6255)*var2[0] + (0.28121*t6119 + 0.305*Power(t6128,2) + t6119*t6255)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
