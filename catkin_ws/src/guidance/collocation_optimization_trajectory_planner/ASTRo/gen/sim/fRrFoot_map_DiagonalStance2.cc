/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:58 GMT+02:00
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
  double t12563;
  double t3837;
  double t3849;
  double t12564;
  double t16152;
  double t16155;
  double t16156;
  double t16134;
  double t16168;
  double t15972;
  double t16169;
  double t15968;
  double t3900;
  double t15940;
  double t15961;
  double t15962;
  double t16163;
  double t16170;
  double t16172;
  double t16183;
  double t16177;
  double t16179;
  double t16180;
  double t16176;
  double t16184;
  double t16185;
  double t16186;
  double t16214;
  double t16215;
  double t16216;
  double t16220;
  double t16221;
  double t16223;
  double t16225;
  double t16226;
  double t16227;
  double t16229;
  double t16230;
  double t16231;
  double t16233;
  double t16234;
  double t16238;
  double t16239;
  double t16217;
  double t16219;
  double t16235;
  double t16236;
  double t16243;
  double t16244;
  double t16245;
  double t16246;
  double t16248;
  double t16261;
  double t16268;
  double t16276;
  double t16278;
  double t16279;
  double t16237;
  double t16240;
  double t16241;
  double t16195;
  double t16196;
  double t16201;
  double t16202;
  double t16203;
  double t16205;
  double t16206;
  double t16208;
  double t16209;
  double t16272;
  double t16280;
  double t16281;
  double t16296;
  double t16297;
  double t16298;
  double t16305;
  double t16306;
  double t16307;
  double t16210;
  double t16211;
  double t16213;
  double t16242;
  double t16311;
  double t15966;
  double t16174;
  double t16175;
  double t16318;
  double t16325;
  double t16328;
  double t16394;
  double t16404;
  double t16412;
  double t16416;
  double t16452;
  double t16459;
  t12563 = Cos(var1[16]);
  t3837 = Cos(var1[17]);
  t3849 = Sin(var1[16]);
  t12564 = Sin(var1[17]);
  t16152 = -1.*t12563*t3837;
  t16155 = -1.*t3849*t12564;
  t16156 = t16152 + t16155;
  t16134 = Cos(var1[5]);
  t16168 = Sin(var1[15]);
  t15972 = Cos(var1[15]);
  t16169 = Sin(var1[5]);
  t15968 = Cos(var1[4]);
  t3900 = -1.*t3837*t3849;
  t15940 = t12563*t12564;
  t15961 = t3900 + t15940;
  t15962 = Sin(var1[4]);
  t16163 = t15972*t16134*t16156;
  t16170 = -1.*t16168*t16156*t16169;
  t16172 = t16163 + t16170;
  t16183 = Sin(var1[3]);
  t16177 = t16134*t16168*t16156;
  t16179 = t15972*t16156*t16169;
  t16180 = t16177 + t16179;
  t16176 = Cos(var1[3]);
  t16184 = t15968*t15961;
  t16185 = -1.*t15962*t16172;
  t16186 = t16184 + t16185;
  t16214 = -1.*t15972;
  t16215 = 1. + t16214;
  t16216 = -0.15121*t16215;
  t16220 = -1.*t12563;
  t16221 = 1. + t16220;
  t16223 = -0.28121*t16221;
  t16225 = -1.*t3837;
  t16226 = 1. + t16225;
  t16227 = -0.50321*t16226;
  t16229 = -0.19821*t3837;
  t16230 = t16227 + t16229;
  t16231 = t12563*t16230;
  t16233 = 0.305*t3849*t12564;
  t16234 = t16223 + t16231 + t16233;
  t16238 = t15972*t16234;
  t16239 = t16216 + t16238;
  t16217 = -0.15121*t15972;
  t16219 = 0.15121*t16168;
  t16235 = t16168*t16234;
  t16236 = t16216 + t16217 + t16219 + t16235;
  t16243 = t16134*t16168;
  t16244 = t15972*t16169;
  t16245 = t16243 + t16244;
  t16246 = 0.28121*t3849;
  t16248 = t16230*t3849;
  t16261 = -0.305*t12563*t12564;
  t16268 = t16246 + t16248 + t16261;
  t16276 = t16134*t16239;
  t16278 = -1.*t16236*t16169;
  t16279 = t16276 + t16278;
  t16237 = t16134*t16236;
  t16240 = t16239*t16169;
  t16241 = t16237 + t16240;
  t16195 = t12563*t3837;
  t16196 = t3849*t12564;
  t16201 = t16195 + t16196;
  t16202 = t16201*t15962;
  t16203 = t15972*t16134*t15961;
  t16205 = -1.*t16168*t15961*t16169;
  t16206 = t16203 + t16205;
  t16208 = t15968*t16206;
  t16209 = t16202 + t16208;
  t16272 = t16268*t15962;
  t16280 = t15968*t16279;
  t16281 = t16272 + t16280;
  t16296 = t15968*t16268;
  t16297 = -1.*t15962*t16279;
  t16298 = t16296 + t16297;
  t16305 = t16134*t16168*t15961;
  t16306 = t15972*t15961*t16169;
  t16307 = t16305 + t16306;
  t16210 = -1.*t15972*t16134;
  t16211 = t16168*t16169;
  t16213 = t16210 + t16211;
  t16242 = -1.*t16213*t16241;
  t16311 = t16307*t16241;
  t15966 = t15961*t15962;
  t16174 = t15968*t16172;
  t16175 = t15966 + t16174;
  t16318 = t15968*t16201;
  t16325 = -1.*t15962*t16206;
  t16328 = t16318 + t16325;
  t16394 = -1.*t16307*t16241;
  t16404 = t16180*t16241;
  t16412 = -1.*t16268*t16201;
  t16416 = t16268*t15961;
  t16452 = t16213*t16241;
  t16459 = -1.*t16180*t16241;
  p_output1[0]=t16175;
  p_output1[1]=t16176*t16180 - 1.*t16183*t16186;
  p_output1[2]=t16180*t16183 + t16176*t16186;
  p_output1[3]=t16209*(t16242 - 1.*t15968*t16245*t16281 + t15962*t16245*t16298) + t15968*t16245*(t16209*t16281 + t16311 + t16298*t16328);
  p_output1[4]=(t16242 - 1.*t16245*t16279)*t16307 + t16213*(t16201*t16268 + t16206*t16279 + t16311);
  p_output1[5]=t16201*(t15972*t16236 - 1.*t16168*t16239);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t16156 - 0.15121*t16201;
  p_output1[16]=0.28121*t12564 + t12564*t16230 - 0.305*t12564*t3837;
  p_output1[17]=0;
  p_output1[18]=t15968*t16245;
  p_output1[19]=t16176*t16213 + t15962*t16183*t16245;
  p_output1[20]=t16183*t16213 - 1.*t15962*t16176*t16245;
  p_output1[21]=t16175*(-1.*t16209*t16281 - 1.*t16298*t16328 + t16394) + t16209*(t16175*t16281 + t16186*t16298 + t16404);
  p_output1[22]=t16180*(-1.*t16206*t16279 + t16394 + t16412) + t16307*(t16172*t16279 + t16404 + t16416);
  p_output1[23]=t15961*(-1.*t15961*t16168*t16236 - 1.*t15961*t15972*t16239 + t16412) + t16201*(t16156*t16168*t16236 + t15972*t16156*t16239 + t16416);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t15961*(-1.*t15961*t16234 + t16412) + t16201*(t16156*t16234 + t16416);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16209;
  p_output1[37]=t16176*t16307 - 1.*t16183*t16328;
  p_output1[38]=t16183*t16307 + t16176*t16328;
  p_output1[39]=t16175*(t15968*t16245*t16281 - 1.*t15962*t16245*t16298 + t16452) + t15968*t16245*(-1.*t16175*t16281 - 1.*t16186*t16298 + t16459);
  p_output1[40]=t16180*(t16245*t16279 + t16452) + t16213*(-1.*t15961*t16268 - 1.*t16172*t16279 + t16459);
  p_output1[41]=t15961*(-1.*t15972*t16236 + t16168*t16239);
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
  p_output1[52]=0.305*Power(t12564,2) + 0.28121*t3837 + t16230*t3837;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
