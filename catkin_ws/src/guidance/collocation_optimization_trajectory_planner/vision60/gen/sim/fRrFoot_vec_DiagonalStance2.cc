/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:19 GMT+02:00
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
  double t9300;
  double t8159;
  double t21184;
  double t23896;
  double t23885;
  double t23892;
  double t23903;
  double t3350;
  double t23893;
  double t23916;
  double t23917;
  double t23785;
  double t23930;
  double t23931;
  double t23932;
  double t23925;
  double t24067;
  double t24070;
  double t23933;
  double t23934;
  double t23936;
  double t23942;
  double t23943;
  double t23944;
  double t23945;
  double t23946;
  double t23947;
  double t24076;
  double t24077;
  double t24080;
  double t24087;
  double t24088;
  double t24090;
  double t24098;
  double t24102;
  double t24106;
  double t24119;
  double t24120;
  double t24122;
  double t24125;
  double t24126;
  double t24127;
  double t23920;
  double t23937;
  double t23938;
  double t24172;
  double t24173;
  double t24174;
  double t24176;
  double t24177;
  double t24178;
  double t24179;
  double t24180;
  double t24181;
  double t8230;
  double t23868;
  double t23882;
  double t24169;
  double t24175;
  double t24182;
  double t24183;
  double t24187;
  double t24188;
  double t24189;
  double t24190;
  double t24191;
  double t24192;
  double t24161;
  double t24162;
  double t24166;
  double t24167;
  double t24184;
  double t24185;
  double t24200;
  double t24202;
  double t24203;
  double t24208;
  double t24209;
  double t24212;
  double t24186;
  double t24193;
  double t24194;
  double t24206;
  double t24213;
  double t24214;
  double t24216;
  double t24217;
  double t24218;
  double t23940;
  double t23952;
  double t24047;
  double t24198;
  double t24222;
  double t24231;
  double t24238;
  double t24245;
  double t24250;
  double t24294;
  double t24309;
  double t24261;
  double t24265;
  double t24285;
  double t24281;
  double t24358;
  double t24351;
  t9300 = Cos(var1[15]);
  t8159 = Sin(var1[4]);
  t21184 = Cos(var1[4]);
  t23896 = Cos(var1[16]);
  t23885 = Cos(var1[17]);
  t23892 = Sin(var1[16]);
  t23903 = Sin(var1[17]);
  t3350 = Sin(var1[15]);
  t23893 = t23885*t23892;
  t23916 = -1.*t23896*t23903;
  t23917 = t23893 + t23916;
  t23785 = Sin(var1[5]);
  t23930 = t23896*t23885;
  t23931 = t23892*t23903;
  t23932 = t23930 + t23931;
  t23925 = Cos(var1[5]);
  t24067 = Cos(var1[3]);
  t24070 = Sin(var1[3]);
  t23933 = t23925*t23932;
  t23934 = t3350*t23917*t23785;
  t23936 = t23933 + t23934;
  t23942 = -1.*t23885*t23892;
  t23943 = t23896*t23903;
  t23944 = t23942 + t23943;
  t23945 = t23925*t23944;
  t23946 = t3350*t23932*t23785;
  t23947 = t23945 + t23946;
  t24076 = t21184*t3350;
  t24077 = t9300*t8159*t23785;
  t24080 = t24076 + t24077;
  t24087 = -1.*t23925*t3350*t23917;
  t24088 = t23932*t23785;
  t24090 = t24087 + t24088;
  t24098 = t9300*t21184*t23917;
  t24102 = -1.*t8159*t23936;
  t24106 = t24098 + t24102;
  t24119 = -1.*t23925*t3350*t23932;
  t24120 = t23944*t23785;
  t24122 = t24119 + t24120;
  t24125 = t9300*t21184*t23932;
  t24126 = -1.*t8159*t23947;
  t24127 = t24125 + t24126;
  t23920 = t9300*t23917*t8159;
  t23937 = t21184*t23936;
  t23938 = t23920 + t23937;
  t24172 = -0.0641*t23885;
  t24173 = -0.28*t23903;
  t24174 = t24172 + t24173;
  t24176 = -1.*t23885;
  t24177 = 1. + t24176;
  t24178 = -0.575*t24177;
  t24179 = -0.295*t23885;
  t24180 = -0.0641*t23903;
  t24181 = t24178 + t24179 + t24180;
  t8230 = t3350*t8159;
  t23868 = -1.*t9300*t21184*t23785;
  t23882 = t8230 + t23868;
  t24169 = 0.325*t23892;
  t24175 = t23896*t24174;
  t24182 = t23892*t24181;
  t24183 = t24169 + t24175 + t24182;
  t24187 = -1.*t23896;
  t24188 = 1. + t24187;
  t24189 = -0.325*t24188;
  t24190 = -1.*t23892*t24174;
  t24191 = t23896*t24181;
  t24192 = t24189 + t24190 + t24191;
  t24161 = -1.*t9300;
  t24162 = 1. + t24161;
  t24166 = -0.1575*t24162;
  t24167 = -0.2255*t9300;
  t24184 = -1.*t3350*t24183;
  t24185 = t24166 + t24167 + t24184;
  t24200 = -0.068*t3350;
  t24202 = t9300*t24183;
  t24203 = t24200 + t24202;
  t24208 = t23925*t24192;
  t24209 = -1.*t24185*t23785;
  t24212 = t24208 + t24209;
  t24186 = t23925*t24185;
  t24193 = t24192*t23785;
  t24194 = t24186 + t24193;
  t24206 = t24203*t8159;
  t24213 = t21184*t24212;
  t24214 = t24206 + t24213;
  t24216 = t21184*t24203;
  t24217 = -1.*t8159*t24212;
  t24218 = t24216 + t24217;
  t23940 = t9300*t23932*t8159;
  t23952 = t21184*t23947;
  t24047 = t23940 + t23952;
  t24198 = t9300*t23925*t24194;
  t24222 = -1.*t24194*t24090;
  t24231 = t24194*t24090;
  t24238 = -1.*t24194*t24122;
  t24245 = -1.*t9300*t23925*t24194;
  t24250 = t24194*t24122;
  t24294 = -1.*t3350*t24203;
  t24309 = t9300*t24203*t23932;
  t24261 = t3350*t24203;
  t24265 = -1.*t9300*t24203*t23917;
  t24285 = -1.*t9300*t24203*t23932;
  t24281 = t9300*t24203*t23917;
  t24358 = t24192*t23932;
  t24351 = -1.*t24192*t23944;
  p_output1[0]=t23938*var2[0] + t23882*var2[1] + t24047*var2[2];
  p_output1[1]=(t24067*t24090 - 1.*t24070*t24106)*var2[0] + (-1.*t24070*t24080 + t23925*t24067*t9300)*var2[1] + (t24067*t24122 - 1.*t24070*t24127)*var2[2];
  p_output1[2]=(t24070*t24090 + t24067*t24106)*var2[0] + (t24067*t24080 + t23925*t24070*t9300)*var2[1] + (t24070*t24122 + t24067*t24127)*var2[2];
  p_output1[3]=(t24047*(-1.*t23882*t24214 - 1.*t24080*t24218 + t24245) + t23882*(t24047*t24214 + t24127*t24218 + t24250))*var2[0] + (t24047*(t23938*t24214 + t24106*t24218 + t24231) + t23938*(-1.*t24047*t24214 - 1.*t24127*t24218 + t24238))*var2[1] + (t23938*(t24198 + t23882*t24214 + t24080*t24218) + t23882*(-1.*t23938*t24214 - 1.*t24106*t24218 + t24222))*var2[2];
  p_output1[4]=(t23925*(t23947*t24212 + t24250 + t24309)*t9300 + t24122*(t24245 + t24294 + t23785*t24212*t9300))*var2[0] + (t24122*(t23936*t24212 + t24231 + t24281) + t24090*(-1.*t23947*t24212 + t24238 + t24285))*var2[1] + (t23925*(-1.*t23936*t24212 + t24222 + t24265)*t9300 + t24090*(t24198 + t24261 - 1.*t23785*t24212*t9300))*var2[2];
  p_output1[5]=(t3350*(t23944*t24192 + t24309 - 1.*t23932*t24185*t3350) + t23932*t9300*(t24294 - 1.*t24185*t9300))*var2[0] + (t23932*(t24281 + t24358 - 1.*t23917*t24185*t3350)*t9300 + t23917*(t24285 + t24351 + t23932*t24185*t3350)*t9300)*var2[1] + (t3350*(-1.*t23932*t24192 + t24265 + t23917*t24185*t3350) + t23917*t9300*(t24261 + t24185*t9300))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t23917 + 0.2255*t23944)*var2[0] + (t23932*(-1.*t23932*t24183 + t24351) + t23944*(t23917*t24183 + t24358))*var2[1] - 0.068*t23932*var2[2];
  p_output1[16]=(-0.325*t23903 - 1.*t23885*t24174 - 1.*t23903*t24181)*var2[0] + (0.325*t23885 - 1.*t23903*t24174 + t23885*t24181)*var2[2];
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
