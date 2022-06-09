/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:09 GMT+02:00
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
  double t4251;
  double t3222;
  double t4371;
  double t4666;
  double t4626;
  double t4652;
  double t4713;
  double t3040;
  double t4658;
  double t4843;
  double t4881;
  double t4476;
  double t4918;
  double t4981;
  double t4992;
  double t4900;
  double t6809;
  double t6812;
  double t5024;
  double t5043;
  double t5066;
  double t5246;
  double t5306;
  double t5309;
  double t6283;
  double t6764;
  double t6781;
  double t6813;
  double t6816;
  double t6817;
  double t6829;
  double t6830;
  double t6831;
  double t6846;
  double t6850;
  double t6851;
  double t6867;
  double t6868;
  double t6873;
  double t6880;
  double t6881;
  double t6884;
  double t4889;
  double t5186;
  double t5197;
  double t7063;
  double t7064;
  double t7117;
  double t7158;
  double t7159;
  double t7178;
  double t7226;
  double t7228;
  double t7235;
  double t3593;
  double t4511;
  double t4558;
  double t7058;
  double t7146;
  double t7242;
  double t7264;
  double t7281;
  double t7286;
  double t7292;
  double t7322;
  double t7329;
  double t7331;
  double t6996;
  double t7013;
  double t7016;
  double t7046;
  double t7272;
  double t7274;
  double t7372;
  double t7399;
  double t7402;
  double t7404;
  double t7410;
  double t7412;
  double t7278;
  double t7349;
  double t7367;
  double t7403;
  double t7414;
  double t7423;
  double t7425;
  double t7429;
  double t7452;
  double t5232;
  double t6790;
  double t6796;
  double t7368;
  double t7488;
  double t7550;
  double t7615;
  double t7657;
  double t7721;
  double t8366;
  double t8516;
  double t7823;
  double t7904;
  double t8168;
  double t8035;
  double t9343;
  double t9277;
  t4251 = Cos(var1[9]);
  t3222 = Sin(var1[4]);
  t4371 = Cos(var1[4]);
  t4666 = Cos(var1[10]);
  t4626 = Cos(var1[11]);
  t4652 = Sin(var1[10]);
  t4713 = Sin(var1[11]);
  t3040 = Sin(var1[9]);
  t4658 = t4626*t4652;
  t4843 = -1.*t4666*t4713;
  t4881 = t4658 + t4843;
  t4476 = Sin(var1[5]);
  t4918 = t4666*t4626;
  t4981 = t4652*t4713;
  t4992 = t4918 + t4981;
  t4900 = Cos(var1[5]);
  t6809 = Cos(var1[3]);
  t6812 = Sin(var1[3]);
  t5024 = t4900*t4992;
  t5043 = t3040*t4881*t4476;
  t5066 = t5024 + t5043;
  t5246 = -1.*t4626*t4652;
  t5306 = t4666*t4713;
  t5309 = t5246 + t5306;
  t6283 = t4900*t5309;
  t6764 = t3040*t4992*t4476;
  t6781 = t6283 + t6764;
  t6813 = t4371*t3040;
  t6816 = t4251*t3222*t4476;
  t6817 = t6813 + t6816;
  t6829 = -1.*t4900*t3040*t4881;
  t6830 = t4992*t4476;
  t6831 = t6829 + t6830;
  t6846 = t4251*t4371*t4881;
  t6850 = -1.*t3222*t5066;
  t6851 = t6846 + t6850;
  t6867 = -1.*t4900*t3040*t4992;
  t6868 = t5309*t4476;
  t6873 = t6867 + t6868;
  t6880 = t4251*t4371*t4992;
  t6881 = -1.*t3222*t6781;
  t6884 = t6880 + t6881;
  t4889 = t4251*t4881*t3222;
  t5186 = t4371*t5066;
  t5197 = t4889 + t5186;
  t7063 = -0.0641*t4626;
  t7064 = -0.28*t4713;
  t7117 = t7063 + t7064;
  t7158 = -1.*t4626;
  t7159 = 1. + t7158;
  t7178 = -0.575*t7159;
  t7226 = -0.295*t4626;
  t7228 = -0.0641*t4713;
  t7235 = t7178 + t7226 + t7228;
  t3593 = t3040*t3222;
  t4511 = -1.*t4251*t4371*t4476;
  t4558 = t3593 + t4511;
  t7058 = 0.325*t4652;
  t7146 = t4666*t7117;
  t7242 = t4652*t7235;
  t7264 = t7058 + t7146 + t7242;
  t7281 = -1.*t4666;
  t7286 = 1. + t7281;
  t7292 = -0.325*t7286;
  t7322 = -1.*t4652*t7117;
  t7329 = t4666*t7235;
  t7331 = t7292 + t7322 + t7329;
  t6996 = -1.*t4251;
  t7013 = 1. + t6996;
  t7016 = 0.1575*t7013;
  t7046 = 0.2255*t4251;
  t7272 = -1.*t3040*t7264;
  t7274 = t7016 + t7046 + t7272;
  t7372 = 0.068*t3040;
  t7399 = t4251*t7264;
  t7402 = t7372 + t7399;
  t7404 = t4900*t7331;
  t7410 = -1.*t7274*t4476;
  t7412 = t7404 + t7410;
  t7278 = t4900*t7274;
  t7349 = t7331*t4476;
  t7367 = t7278 + t7349;
  t7403 = t7402*t3222;
  t7414 = t4371*t7412;
  t7423 = t7403 + t7414;
  t7425 = t4371*t7402;
  t7429 = -1.*t3222*t7412;
  t7452 = t7425 + t7429;
  t5232 = t4251*t4992*t3222;
  t6790 = t4371*t6781;
  t6796 = t5232 + t6790;
  t7368 = t4251*t4900*t7367;
  t7488 = -1.*t7367*t6831;
  t7550 = t7367*t6831;
  t7615 = -1.*t7367*t6873;
  t7657 = -1.*t4251*t4900*t7367;
  t7721 = t7367*t6873;
  t8366 = -1.*t3040*t7402;
  t8516 = t4251*t7402*t4992;
  t7823 = t3040*t7402;
  t7904 = -1.*t4251*t7402*t4881;
  t8168 = -1.*t4251*t7402*t4992;
  t8035 = t4251*t7402*t4881;
  t9343 = t7331*t4992;
  t9277 = -1.*t7331*t5309;
  p_output1[0]=t5197*var2[0] + t4558*var2[1] + t6796*var2[2];
  p_output1[1]=(t6809*t6831 - 1.*t6812*t6851)*var2[0] + (t4251*t4900*t6809 - 1.*t6812*t6817)*var2[1] + (t6809*t6873 - 1.*t6812*t6884)*var2[2];
  p_output1[2]=(t6812*t6831 + t6809*t6851)*var2[0] + (t4251*t4900*t6812 + t6809*t6817)*var2[1] + (t6812*t6873 + t6809*t6884)*var2[2];
  p_output1[3]=(t6796*(-1.*t4558*t7423 - 1.*t6817*t7452 + t7657) + t4558*(t6796*t7423 + t6884*t7452 + t7721))*var2[0] + (t6796*(t5197*t7423 + t6851*t7452 + t7550) + t5197*(-1.*t6796*t7423 - 1.*t6884*t7452 + t7615))*var2[1] + (t5197*(t7368 + t4558*t7423 + t6817*t7452) + t4558*(-1.*t5197*t7423 - 1.*t6851*t7452 + t7488))*var2[2];
  p_output1[4]=(t6873*(t4251*t4476*t7412 + t7657 + t8366) + t4251*t4900*(t6781*t7412 + t7721 + t8516))*var2[0] + (t6873*(t5066*t7412 + t7550 + t8035) + t6831*(-1.*t6781*t7412 + t7615 + t8168))*var2[1] + (t6831*(t7368 - 1.*t4251*t4476*t7412 + t7823) + t4251*t4900*(-1.*t5066*t7412 + t7488 + t7904))*var2[2];
  p_output1[5]=(t4251*t4992*(-1.*t4251*t7274 + t8366) + t3040*(-1.*t3040*t4992*t7274 + t5309*t7331 + t8516))*var2[0] + (t4251*t4881*(t3040*t4992*t7274 + t8168 + t9277) + t4251*t4992*(-1.*t3040*t4881*t7274 + t8035 + t9343))*var2[1] + (t4251*t4881*(t4251*t7274 + t7823) + t3040*(t3040*t4881*t7274 - 1.*t4992*t7331 + t7904))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t4881 - 0.2255*t5309)*var2[0] + (t4992*(-1.*t4992*t7264 + t9277) + t5309*(t4881*t7264 + t9343))*var2[1] + 0.068*t4992*var2[2];
  p_output1[10]=(-0.325*t4713 - 1.*t4626*t7117 - 1.*t4713*t7235)*var2[0] + (0.325*t4626 - 1.*t4713*t7117 + t4626*t7235)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
