/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:38 GMT+02:00
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
  double t7058;
  double t6998;
  double t7060;
  double t7085;
  double t7077;
  double t7082;
  double t7092;
  double t2702;
  double t7083;
  double t7100;
  double t7102;
  double t7062;
  double t7107;
  double t7108;
  double t7109;
  double t7106;
  double t7205;
  double t7207;
  double t7110;
  double t7111;
  double t7112;
  double t7117;
  double t7118;
  double t7121;
  double t7175;
  double t7179;
  double t7187;
  double t7209;
  double t7213;
  double t7217;
  double t7228;
  double t7229;
  double t7230;
  double t7232;
  double t7233;
  double t7235;
  double t7244;
  double t7245;
  double t7247;
  double t7250;
  double t7251;
  double t7255;
  double t7103;
  double t7113;
  double t7114;
  double t7288;
  double t7289;
  double t7290;
  double t7292;
  double t7293;
  double t7294;
  double t7295;
  double t7296;
  double t7297;
  double t7047;
  double t7070;
  double t7071;
  double t7287;
  double t7291;
  double t7298;
  double t7299;
  double t7304;
  double t7305;
  double t7306;
  double t7307;
  double t7309;
  double t7310;
  double t7283;
  double t7284;
  double t7285;
  double t7286;
  double t7301;
  double t7302;
  double t7315;
  double t7316;
  double t7317;
  double t7320;
  double t7321;
  double t7322;
  double t7303;
  double t7311;
  double t7312;
  double t7318;
  double t7324;
  double t7325;
  double t7327;
  double t7328;
  double t7329;
  double t7116;
  double t7188;
  double t7197;
  double t7314;
  double t7333;
  double t7340;
  double t7348;
  double t7361;
  double t7375;
  double t7420;
  double t7426;
  double t7386;
  double t7397;
  double t7414;
  double t7404;
  double t7463;
  double t7457;
  t7058 = Cos(var1[15]);
  t6998 = Sin(var1[4]);
  t7060 = Cos(var1[4]);
  t7085 = Cos(var1[16]);
  t7077 = Cos(var1[17]);
  t7082 = Sin(var1[16]);
  t7092 = Sin(var1[17]);
  t2702 = Sin(var1[15]);
  t7083 = t7077*t7082;
  t7100 = -1.*t7085*t7092;
  t7102 = t7083 + t7100;
  t7062 = Sin(var1[5]);
  t7107 = t7085*t7077;
  t7108 = t7082*t7092;
  t7109 = t7107 + t7108;
  t7106 = Cos(var1[5]);
  t7205 = Cos(var1[3]);
  t7207 = Sin(var1[3]);
  t7110 = t7106*t7109;
  t7111 = t2702*t7102*t7062;
  t7112 = t7110 + t7111;
  t7117 = -1.*t7077*t7082;
  t7118 = t7085*t7092;
  t7121 = t7117 + t7118;
  t7175 = t7106*t7121;
  t7179 = t2702*t7109*t7062;
  t7187 = t7175 + t7179;
  t7209 = t7060*t2702;
  t7213 = t7058*t6998*t7062;
  t7217 = t7209 + t7213;
  t7228 = -1.*t7106*t2702*t7102;
  t7229 = t7109*t7062;
  t7230 = t7228 + t7229;
  t7232 = t7058*t7060*t7102;
  t7233 = -1.*t6998*t7112;
  t7235 = t7232 + t7233;
  t7244 = -1.*t7106*t2702*t7109;
  t7245 = t7121*t7062;
  t7247 = t7244 + t7245;
  t7250 = t7058*t7060*t7109;
  t7251 = -1.*t6998*t7187;
  t7255 = t7250 + t7251;
  t7103 = t7058*t7102*t6998;
  t7113 = t7060*t7112;
  t7114 = t7103 + t7113;
  t7288 = -0.0641*t7077;
  t7289 = -0.28*t7092;
  t7290 = t7288 + t7289;
  t7292 = -1.*t7077;
  t7293 = 1. + t7292;
  t7294 = -0.575*t7293;
  t7295 = -0.295*t7077;
  t7296 = -0.0641*t7092;
  t7297 = t7294 + t7295 + t7296;
  t7047 = t2702*t6998;
  t7070 = -1.*t7058*t7060*t7062;
  t7071 = t7047 + t7070;
  t7287 = 0.325*t7082;
  t7291 = t7085*t7290;
  t7298 = t7082*t7297;
  t7299 = t7287 + t7291 + t7298;
  t7304 = -1.*t7085;
  t7305 = 1. + t7304;
  t7306 = -0.325*t7305;
  t7307 = -1.*t7082*t7290;
  t7309 = t7085*t7297;
  t7310 = t7306 + t7307 + t7309;
  t7283 = -1.*t7058;
  t7284 = 1. + t7283;
  t7285 = -0.1575*t7284;
  t7286 = -0.2255*t7058;
  t7301 = -1.*t2702*t7299;
  t7302 = t7285 + t7286 + t7301;
  t7315 = -0.068*t2702;
  t7316 = t7058*t7299;
  t7317 = t7315 + t7316;
  t7320 = t7106*t7310;
  t7321 = -1.*t7302*t7062;
  t7322 = t7320 + t7321;
  t7303 = t7106*t7302;
  t7311 = t7310*t7062;
  t7312 = t7303 + t7311;
  t7318 = t7317*t6998;
  t7324 = t7060*t7322;
  t7325 = t7318 + t7324;
  t7327 = t7060*t7317;
  t7328 = -1.*t6998*t7322;
  t7329 = t7327 + t7328;
  t7116 = t7058*t7109*t6998;
  t7188 = t7060*t7187;
  t7197 = t7116 + t7188;
  t7314 = t7058*t7106*t7312;
  t7333 = -1.*t7312*t7230;
  t7340 = t7312*t7230;
  t7348 = -1.*t7312*t7247;
  t7361 = -1.*t7058*t7106*t7312;
  t7375 = t7312*t7247;
  t7420 = -1.*t2702*t7317;
  t7426 = t7058*t7317*t7109;
  t7386 = t2702*t7317;
  t7397 = -1.*t7058*t7317*t7102;
  t7414 = -1.*t7058*t7317*t7109;
  t7404 = t7058*t7317*t7102;
  t7463 = t7310*t7109;
  t7457 = -1.*t7310*t7121;
  p_output1[0]=t7114*var2[0] + t7071*var2[1] + t7197*var2[2];
  p_output1[1]=(t7205*t7230 - 1.*t7207*t7235)*var2[0] + (t7058*t7106*t7205 - 1.*t7207*t7217)*var2[1] + (t7205*t7247 - 1.*t7207*t7255)*var2[2];
  p_output1[2]=(t7207*t7230 + t7205*t7235)*var2[0] + (t7058*t7106*t7207 + t7205*t7217)*var2[1] + (t7207*t7247 + t7205*t7255)*var2[2];
  p_output1[3]=(t7197*(-1.*t7071*t7325 - 1.*t7217*t7329 + t7361) + t7071*(t7197*t7325 + t7255*t7329 + t7375))*var2[0] + (t7197*(t7114*t7325 + t7235*t7329 + t7340) + t7114*(-1.*t7197*t7325 - 1.*t7255*t7329 + t7348))*var2[1] + (t7114*(t7314 + t7071*t7325 + t7217*t7329) + t7071*(-1.*t7114*t7325 - 1.*t7235*t7329 + t7333))*var2[2];
  p_output1[4]=(t7247*(t7058*t7062*t7322 + t7361 + t7420) + t7058*t7106*(t7187*t7322 + t7375 + t7426))*var2[0] + (t7247*(t7112*t7322 + t7340 + t7404) + t7230*(-1.*t7187*t7322 + t7348 + t7414))*var2[1] + (t7230*(t7314 - 1.*t7058*t7062*t7322 + t7386) + t7058*t7106*(-1.*t7112*t7322 + t7333 + t7397))*var2[2];
  p_output1[5]=(t7058*t7109*(-1.*t7058*t7302 + t7420) + t2702*(-1.*t2702*t7109*t7302 + t7121*t7310 + t7426))*var2[0] + (t7058*t7102*(t2702*t7109*t7302 + t7414 + t7457) + t7058*t7109*(-1.*t2702*t7102*t7302 + t7404 + t7463))*var2[1] + (t7058*t7102*(t7058*t7302 + t7386) + t2702*(t2702*t7102*t7302 - 1.*t7109*t7310 + t7397))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t7102 + 0.2255*t7121)*var2[0] + (t7109*(-1.*t7109*t7299 + t7457) + t7121*(t7102*t7299 + t7463))*var2[1] - 0.068*t7109*var2[2];
  p_output1[16]=(-0.325*t7092 - 1.*t7077*t7290 - 1.*t7092*t7297)*var2[0] + (0.325*t7077 - 1.*t7092*t7290 + t7077*t7297)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
