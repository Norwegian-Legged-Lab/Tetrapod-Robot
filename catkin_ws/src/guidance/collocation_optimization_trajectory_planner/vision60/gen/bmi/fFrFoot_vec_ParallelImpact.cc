/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:16 GMT+02:00
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
  double t6024;
  double t6022;
  double t6025;
  double t6106;
  double t6096;
  double t6101;
  double t6107;
  double t6017;
  double t6105;
  double t6108;
  double t6110;
  double t6026;
  double t6114;
  double t6115;
  double t6116;
  double t6112;
  double t6134;
  double t6136;
  double t6117;
  double t6118;
  double t6119;
  double t6124;
  double t6125;
  double t6126;
  double t6127;
  double t6128;
  double t6129;
  double t6137;
  double t6138;
  double t6140;
  double t6145;
  double t6146;
  double t6147;
  double t6149;
  double t6151;
  double t6152;
  double t6157;
  double t6158;
  double t6160;
  double t6162;
  double t6163;
  double t6165;
  double t6111;
  double t6120;
  double t6121;
  double t6190;
  double t6191;
  double t6193;
  double t6195;
  double t6197;
  double t6198;
  double t6199;
  double t6200;
  double t6201;
  double t6023;
  double t6085;
  double t6094;
  double t6189;
  double t6194;
  double t6202;
  double t6203;
  double t6207;
  double t6208;
  double t6209;
  double t6210;
  double t6211;
  double t6212;
  double t6184;
  double t6185;
  double t6187;
  double t6188;
  double t6204;
  double t6205;
  double t6216;
  double t6217;
  double t6218;
  double t6220;
  double t6221;
  double t6222;
  double t6206;
  double t6213;
  double t6214;
  double t6219;
  double t6223;
  double t6224;
  double t6226;
  double t6227;
  double t6228;
  double t6123;
  double t6130;
  double t6131;
  double t6215;
  double t6232;
  double t6239;
  double t6244;
  double t6251;
  double t6256;
  double t6284;
  double t6288;
  double t6264;
  double t6268;
  double t6278;
  double t6274;
  double t6318;
  double t6313;
  t6024 = Cos(var1[12]);
  t6022 = Sin(var1[4]);
  t6025 = Cos(var1[4]);
  t6106 = Cos(var1[13]);
  t6096 = Cos(var1[14]);
  t6101 = Sin(var1[13]);
  t6107 = Sin(var1[14]);
  t6017 = Sin(var1[12]);
  t6105 = t6096*t6101;
  t6108 = -1.*t6106*t6107;
  t6110 = t6105 + t6108;
  t6026 = Sin(var1[5]);
  t6114 = t6106*t6096;
  t6115 = t6101*t6107;
  t6116 = t6114 + t6115;
  t6112 = Cos(var1[5]);
  t6134 = Cos(var1[3]);
  t6136 = Sin(var1[3]);
  t6117 = t6112*t6116;
  t6118 = t6017*t6110*t6026;
  t6119 = t6117 + t6118;
  t6124 = -1.*t6096*t6101;
  t6125 = t6106*t6107;
  t6126 = t6124 + t6125;
  t6127 = t6112*t6126;
  t6128 = t6017*t6116*t6026;
  t6129 = t6127 + t6128;
  t6137 = t6025*t6017;
  t6138 = t6024*t6022*t6026;
  t6140 = t6137 + t6138;
  t6145 = -1.*t6112*t6017*t6110;
  t6146 = t6116*t6026;
  t6147 = t6145 + t6146;
  t6149 = t6024*t6025*t6110;
  t6151 = -1.*t6022*t6119;
  t6152 = t6149 + t6151;
  t6157 = -1.*t6112*t6017*t6116;
  t6158 = t6126*t6026;
  t6160 = t6157 + t6158;
  t6162 = t6024*t6025*t6116;
  t6163 = -1.*t6022*t6129;
  t6165 = t6162 + t6163;
  t6111 = t6024*t6110*t6022;
  t6120 = t6025*t6119;
  t6121 = t6111 + t6120;
  t6190 = -0.0641*t6096;
  t6191 = -0.28*t6107;
  t6193 = t6190 + t6191;
  t6195 = -1.*t6096;
  t6197 = 1. + t6195;
  t6198 = 0.075*t6197;
  t6199 = 0.355*t6096;
  t6200 = -0.0641*t6107;
  t6201 = t6198 + t6199 + t6200;
  t6023 = t6017*t6022;
  t6085 = -1.*t6024*t6025*t6026;
  t6094 = t6023 + t6085;
  t6189 = -0.325*t6101;
  t6194 = t6106*t6193;
  t6202 = t6101*t6201;
  t6203 = t6189 + t6194 + t6202;
  t6207 = -1.*t6106;
  t6208 = 1. + t6207;
  t6209 = 0.325*t6208;
  t6210 = -1.*t6101*t6193;
  t6211 = t6106*t6201;
  t6212 = t6209 + t6210 + t6211;
  t6184 = -1.*t6024;
  t6185 = 1. + t6184;
  t6187 = -0.1575*t6185;
  t6188 = -0.2255*t6024;
  t6204 = -1.*t6017*t6203;
  t6205 = t6187 + t6188 + t6204;
  t6216 = -0.068*t6017;
  t6217 = t6024*t6203;
  t6218 = t6216 + t6217;
  t6220 = t6112*t6212;
  t6221 = -1.*t6205*t6026;
  t6222 = t6220 + t6221;
  t6206 = t6112*t6205;
  t6213 = t6212*t6026;
  t6214 = t6206 + t6213;
  t6219 = t6218*t6022;
  t6223 = t6025*t6222;
  t6224 = t6219 + t6223;
  t6226 = t6025*t6218;
  t6227 = -1.*t6022*t6222;
  t6228 = t6226 + t6227;
  t6123 = t6024*t6116*t6022;
  t6130 = t6025*t6129;
  t6131 = t6123 + t6130;
  t6215 = t6024*t6112*t6214;
  t6232 = -1.*t6214*t6147;
  t6239 = t6214*t6147;
  t6244 = -1.*t6214*t6160;
  t6251 = -1.*t6024*t6112*t6214;
  t6256 = t6214*t6160;
  t6284 = -1.*t6017*t6218;
  t6288 = t6024*t6218*t6116;
  t6264 = t6017*t6218;
  t6268 = -1.*t6024*t6218*t6110;
  t6278 = -1.*t6024*t6218*t6116;
  t6274 = t6024*t6218*t6110;
  t6318 = t6212*t6116;
  t6313 = -1.*t6212*t6126;
  p_output1[0]=t6121*var2[0] + t6094*var2[1] + t6131*var2[2];
  p_output1[1]=(t6134*t6147 - 1.*t6136*t6152)*var2[0] + (t6024*t6112*t6134 - 1.*t6136*t6140)*var2[1] + (t6134*t6160 - 1.*t6136*t6165)*var2[2];
  p_output1[2]=(t6136*t6147 + t6134*t6152)*var2[0] + (t6024*t6112*t6136 + t6134*t6140)*var2[1] + (t6136*t6160 + t6134*t6165)*var2[2];
  p_output1[3]=(t6131*(-1.*t6094*t6224 - 1.*t6140*t6228 + t6251) + t6094*(t6131*t6224 + t6165*t6228 + t6256))*var2[0] + (t6131*(t6121*t6224 + t6152*t6228 + t6239) + t6121*(-1.*t6131*t6224 - 1.*t6165*t6228 + t6244))*var2[1] + (t6121*(t6215 + t6094*t6224 + t6140*t6228) + t6094*(-1.*t6121*t6224 - 1.*t6152*t6228 + t6232))*var2[2];
  p_output1[4]=(t6160*(t6024*t6026*t6222 + t6251 + t6284) + t6024*t6112*(t6129*t6222 + t6256 + t6288))*var2[0] + (t6160*(t6119*t6222 + t6239 + t6274) + t6147*(-1.*t6129*t6222 + t6244 + t6278))*var2[1] + (t6147*(t6215 - 1.*t6024*t6026*t6222 + t6264) + t6024*t6112*(-1.*t6119*t6222 + t6232 + t6268))*var2[2];
  p_output1[5]=(t6024*t6116*(-1.*t6024*t6205 + t6284) + t6017*(-1.*t6017*t6116*t6205 + t6126*t6212 + t6288))*var2[0] + (t6024*t6110*(t6017*t6116*t6205 + t6278 + t6313) + t6024*t6116*(-1.*t6017*t6110*t6205 + t6274 + t6318))*var2[1] + (t6024*t6110*(t6024*t6205 + t6264) + t6017*(t6017*t6110*t6205 - 1.*t6116*t6212 + t6268))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t6110 + 0.2255*t6126)*var2[0] + (t6116*(-1.*t6116*t6203 + t6313) + t6126*(t6110*t6203 + t6318))*var2[1] - 0.068*t6116*var2[2];
  p_output1[13]=(0.325*t6107 - 1.*t6096*t6193 - 1.*t6107*t6201)*var2[0] + (-0.325*t6096 - 1.*t6107*t6193 + t6096*t6201)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
