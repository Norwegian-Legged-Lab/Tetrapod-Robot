/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:18 GMT+02:00
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
  double t1211;
  double t1176;
  double t1190;
  double t1242;
  double t1203;
  double t1406;
  double t1763;
  double t1941;
  double t2000;
  double t1970;
  double t1977;
  double t1983;
  double t2006;
  double t1079;
  double t1890;
  double t1785;
  double t1993;
  double t2068;
  double t2089;
  double t2165;
  double t2144;
  double t2154;
  double t2161;
  double t2143;
  double t2196;
  double t2200;
  double t2201;
  double t2660;
  double t2674;
  double t2695;
  double t2709;
  double t2722;
  double t2753;
  double t2806;
  double t2810;
  double t2823;
  double t2644;
  double t2697;
  double t2866;
  double t2878;
  double t2916;
  double t2921;
  double t2932;
  double t3041;
  double t3083;
  double t3095;
  double t2289;
  double t2305;
  double t2308;
  double t2637;
  double t2883;
  double t2886;
  double t3158;
  double t3161;
  double t3167;
  double t3256;
  double t3273;
  double t3274;
  double t3145;
  double t3149;
  double t3157;
  double t2906;
  double t3102;
  double t3104;
  double t2261;
  double t2264;
  double t2273;
  double t3222;
  double t3290;
  double t3293;
  double t2251;
  double t2274;
  double t2275;
  double t2278;
  double t2282;
  double t2284;
  double t3378;
  double t3394;
  double t3415;
  double t3460;
  double t3465;
  double t3466;
  double t3114;
  double t3467;
  double t3501;
  double t3532;
  double t3304;
  double t3307;
  double t3332;
  double t1820;
  double t2103;
  double t2117;
  double t3471;
  double t3475;
  double t3476;
  double t4023;
  double t4140;
  double t4238;
  double t4158;
  double t4301;
  double t4274;
  double t4468;
  double t4486;
  double t4505;
  double t4601;
  t1211 = Cos(var1[10]);
  t1176 = Cos(var1[11]);
  t1190 = Sin(var1[10]);
  t1242 = Sin(var1[11]);
  t1203 = t1176*t1190;
  t1406 = -1.*t1211*t1242;
  t1763 = t1203 + t1406;
  t1941 = Cos(var1[5]);
  t2000 = Sin(var1[9]);
  t1970 = t1211*t1176;
  t1977 = t1190*t1242;
  t1983 = t1970 + t1977;
  t2006 = Sin(var1[5]);
  t1079 = Cos(var1[9]);
  t1890 = Cos(var1[4]);
  t1785 = Sin(var1[4]);
  t1993 = t1941*t1983;
  t2068 = t2000*t1763*t2006;
  t2089 = t1993 + t2068;
  t2165 = Sin(var1[3]);
  t2144 = -1.*t1941*t2000*t1763;
  t2154 = t1983*t2006;
  t2161 = t2144 + t2154;
  t2143 = Cos(var1[3]);
  t2196 = t1079*t1890*t1763;
  t2200 = -1.*t1785*t2089;
  t2201 = t2196 + t2200;
  t2660 = -0.0641*t1176;
  t2674 = -0.28*t1242;
  t2695 = t2660 + t2674;
  t2709 = -1.*t1176;
  t2722 = 1. + t2709;
  t2753 = -0.575*t2722;
  t2806 = -0.295*t1176;
  t2810 = -0.0641*t1242;
  t2823 = t2753 + t2806 + t2810;
  t2644 = 0.325*t1190;
  t2697 = t1211*t2695;
  t2866 = t1190*t2823;
  t2878 = t2644 + t2697 + t2866;
  t2916 = -1.*t1211;
  t2921 = 1. + t2916;
  t2932 = -0.325*t2921;
  t3041 = -1.*t1190*t2695;
  t3083 = t1211*t2823;
  t3095 = t2932 + t3041 + t3083;
  t2289 = -1.*t1079;
  t2305 = 1. + t2289;
  t2308 = 0.1575*t2305;
  t2637 = 0.2255*t1079;
  t2883 = -1.*t2000*t2878;
  t2886 = t2308 + t2637 + t2883;
  t3158 = 0.068*t2000;
  t3161 = t1079*t2878;
  t3167 = t3158 + t3161;
  t3256 = t1941*t3095;
  t3273 = -1.*t2886*t2006;
  t3274 = t3256 + t3273;
  t3145 = t2000*t1785;
  t3149 = -1.*t1079*t1890*t2006;
  t3157 = t3145 + t3149;
  t2906 = t1941*t2886;
  t3102 = t3095*t2006;
  t3104 = t2906 + t3102;
  t2261 = -1.*t1176*t1190;
  t2264 = t1211*t1242;
  t2273 = t2261 + t2264;
  t3222 = t3167*t1785;
  t3290 = t1890*t3274;
  t3293 = t3222 + t3290;
  t2251 = t1079*t1983*t1785;
  t2274 = t1941*t2273;
  t2275 = t2000*t1983*t2006;
  t2278 = t2274 + t2275;
  t2282 = t1890*t2278;
  t2284 = t2251 + t2282;
  t3378 = t1890*t3167;
  t3394 = -1.*t1785*t3274;
  t3415 = t3378 + t3394;
  t3460 = -1.*t1941*t2000*t1983;
  t3465 = t2273*t2006;
  t3466 = t3460 + t3465;
  t3114 = -1.*t1079*t1941*t3104;
  t3467 = t3104*t3466;
  t3501 = -1.*t2000*t3167;
  t3532 = t1079*t3167*t1983;
  t3304 = t1890*t2000;
  t3307 = t1079*t1785*t2006;
  t3332 = t3304 + t3307;
  t1820 = t1079*t1763*t1785;
  t2103 = t1890*t2089;
  t2117 = t1820 + t2103;
  t3471 = t1079*t1890*t1983;
  t3475 = -1.*t1785*t2278;
  t3476 = t3471 + t3475;
  t4023 = t3104*t2161;
  t4140 = -1.*t3104*t3466;
  t4238 = -1.*t1079*t3167*t1983;
  t4158 = t1079*t3167*t1763;
  t4301 = t3095*t1983;
  t4274 = -1.*t3095*t2273;
  t4468 = t1079*t1941*t3104;
  t4486 = -1.*t3104*t2161;
  t4505 = t2000*t3167;
  t4601 = -1.*t1079*t3167*t1763;
  p_output1[0]=t2117;
  p_output1[1]=t2143*t2161 - 1.*t2165*t2201;
  p_output1[2]=t2161*t2165 + t2143*t2201;
  p_output1[3]=t2284*(t3114 - 1.*t3157*t3293 - 1.*t3332*t3415) + t3157*(t2284*t3293 + t3467 + t3415*t3476);
  p_output1[4]=t3466*(t3114 + t1079*t2006*t3274 + t3501) + t1079*t1941*(t2278*t3274 + t3467 + t3532);
  p_output1[5]=t1079*t1983*(-1.*t1079*t2886 + t3501) + t2000*(-1.*t1983*t2000*t2886 + t2273*t3095 + t3532);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t1763 - 0.2255*t2273;
  p_output1[10]=-0.325*t1242 - 1.*t1176*t2695 - 1.*t1242*t2823;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3157;
  p_output1[19]=t1079*t1941*t2143 - 1.*t2165*t3332;
  p_output1[20]=t1079*t1941*t2165 + t2143*t3332;
  p_output1[21]=t2284*(t2117*t3293 + t2201*t3415 + t4023) + t2117*(-1.*t2284*t3293 - 1.*t3415*t3476 + t4140);
  p_output1[22]=t3466*(t2089*t3274 + t4023 + t4158) + t2161*(-1.*t2278*t3274 + t4140 + t4238);
  p_output1[23]=t1079*t1763*(t1983*t2000*t2886 + t4238 + t4274) + t1079*t1983*(-1.*t1763*t2000*t2886 + t4158 + t4301);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t1983*(-1.*t1983*t2878 + t4274) + t2273*(t1763*t2878 + t4301);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2284;
  p_output1[37]=t2143*t3466 - 1.*t2165*t3476;
  p_output1[38]=t2165*t3466 + t2143*t3476;
  p_output1[39]=t2117*(t3157*t3293 + t3332*t3415 + t4468) + t3157*(-1.*t2117*t3293 - 1.*t2201*t3415 + t4486);
  p_output1[40]=t2161*(-1.*t1079*t2006*t3274 + t4468 + t4505) + t1079*t1941*(-1.*t2089*t3274 + t4486 + t4601);
  p_output1[41]=t1079*t1763*(t1079*t2886 + t4505) + t2000*(t1763*t2000*t2886 - 1.*t1983*t3095 + t4601);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t1983;
  p_output1[46]=0.325*t1176 - 1.*t1242*t2695 + t1176*t2823;
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
