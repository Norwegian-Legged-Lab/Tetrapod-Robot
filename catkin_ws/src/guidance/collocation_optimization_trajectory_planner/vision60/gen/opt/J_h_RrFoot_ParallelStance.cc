/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:56 GMT+02:00
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
  double t22099;
  double t1640;
  double t14122;
  double t24180;
  double t24396;
  double t21964;
  double t24444;
  double t21197;
  double t24445;
  double t24502;
  double t24598;
  double t24624;
  double t24631;
  double t24664;
  double t24665;
  double t24688;
  double t25437;
  double t25462;
  double t25474;
  double t24388;
  double t24389;
  double t21258;
  double t21445;
  double t25073;
  double t25416;
  double t26985;
  double t27005;
  double t27031;
  double t27042;
  double t27047;
  double t27052;
  double t27111;
  double t27115;
  double t27117;
  double t27137;
  double t27141;
  double t27142;
  double t27296;
  double t27303;
  double t27309;
  double t27330;
  double t27335;
  double t27339;
  double t27402;
  double t27403;
  double t27406;
  double t27720;
  double t27773;
  double t28157;
  double t28204;
  double t28228;
  double t27750;
  double t28056;
  double t28097;
  double t28567;
  double t28594;
  double t28609;
  double t28635;
  double t28652;
  double t28681;
  double t28704;
  double t28709;
  double t28723;
  double t28777;
  double t28781;
  double t28782;
  double t28784;
  double t28785;
  double t28786;
  double t28788;
  double t28789;
  double t28790;
  double t28811;
  double t28812;
  double t28813;
  double t28821;
  double t28823;
  double t28826;
  double t28842;
  double t28844;
  double t28847;
  double t28857;
  double t28859;
  double t28866;
  double t28962;
  double t28963;
  double t28968;
  double t28972;
  double t28973;
  double t28974;
  double t28991;
  double t28992;
  double t28994;
  double t29002;
  double t29004;
  double t29005;
  double t29007;
  double t29008;
  double t29009;
  double t29026;
  double t29027;
  double t29028;
  double t29030;
  double t29031;
  double t29032;
  double t29015;
  double t29128;
  double t29132;
  double t29136;
  double t29145;
  double t29149;
  double t29153;
  double t29161;
  double t29169;
  double t29173;
  double t29246;
  double t29247;
  double t29248;
  double t29253;
  double t29255;
  double t29256;
  double t29259;
  double t29260;
  double t29261;
  double t28405;
  double t29301;
  double t29302;
  double t29310;
  double t29311;
  double t29312;
  double t29332;
  double t29333;
  double t29335;
  double t29338;
  double t29342;
  double t29343;
  double t29347;
  double t29348;
  double t29349;
  double t29370;
  double t29371;
  double t29375;
  t22099 = Sin(var1[4]);
  t1640 = Cos(var1[4]);
  t14122 = Sin(var1[15]);
  t24180 = Cos(var1[15]);
  t24396 = Sin(var1[5]);
  t21964 = Cos(var1[5]);
  t24444 = Sin(var1[16]);
  t21197 = Cos(var1[16]);
  t24445 = t24180*t1640;
  t24502 = -1.*t14122*t22099*t24396;
  t24598 = t24445 + t24502;
  t24624 = Sin(var1[17]);
  t24631 = t21964*t24444*t22099;
  t24664 = t21197*t24598;
  t24665 = t24631 + t24664;
  t24688 = Cos(var1[17]);
  t25437 = -1.*t21197*t21964*t22099;
  t25462 = t24444*t24598;
  t25474 = t25437 + t25462;
  t24388 = -1.*t24180;
  t24389 = 1. + t24388;
  t21258 = -1.*t21197;
  t21445 = 1. + t21258;
  t25073 = -1.*t24688;
  t25416 = 1. + t25073;
  t26985 = t1640*t21964*t14122*t24444;
  t27005 = -1.*t21197*t1640*t24396;
  t27031 = t26985 + t27005;
  t27042 = t21197*t1640*t21964*t14122;
  t27047 = t1640*t24444*t24396;
  t27052 = t27042 + t27047;
  t27111 = -1.*t14122*t22099;
  t27115 = t24180*t1640*t24396;
  t27117 = t27111 + t27115;
  t27137 = t24180*t22099;
  t27141 = t1640*t14122*t24396;
  t27142 = t27137 + t27141;
  t27296 = -1.*t1640*t21964*t24444;
  t27303 = t21197*t27142;
  t27309 = t27296 + t27303;
  t27330 = -1.*t21197*t1640*t21964;
  t27335 = -1.*t24444*t27142;
  t27339 = t27330 + t27335;
  t27402 = t21197*t1640*t21964;
  t27403 = t24444*t27142;
  t27406 = t27402 + t27403;
  t27720 = Cos(var1[3]);
  t27773 = Sin(var1[3]);
  t28157 = -1.*t21964*t27773;
  t28204 = -1.*t27720*t22099*t24396;
  t28228 = t28157 + t28204;
  t27750 = t27720*t21964*t22099;
  t28056 = -1.*t27773*t24396;
  t28097 = t27750 + t28056;
  t28567 = -1.*t24180*t27720*t1640;
  t28594 = -1.*t14122*t28228;
  t28609 = t28567 + t28594;
  t28635 = -1.*t24444*t28097;
  t28652 = t21197*t28609;
  t28681 = t28635 + t28652;
  t28704 = t21197*t28097;
  t28709 = t24444*t28609;
  t28723 = t28704 + t28709;
  t28777 = t24180*t27773*t22099;
  t28781 = t1640*t14122*t27773*t24396;
  t28782 = t28777 + t28781;
  t28784 = -1.*t1640*t21964*t24444*t27773;
  t28785 = t21197*t28782;
  t28786 = t28784 + t28785;
  t28788 = t21197*t1640*t21964*t27773;
  t28789 = t24444*t28782;
  t28790 = t28788 + t28789;
  t28811 = -1.*t21964*t27773*t22099;
  t28812 = -1.*t27720*t24396;
  t28813 = t28811 + t28812;
  t28821 = t27720*t21964;
  t28823 = -1.*t27773*t22099*t24396;
  t28826 = t28821 + t28823;
  t28842 = -1.*t14122*t24444*t28813;
  t28844 = t21197*t28826;
  t28847 = t28842 + t28844;
  t28857 = -1.*t21197*t14122*t28813;
  t28859 = -1.*t24444*t28826;
  t28866 = t28857 + t28859;
  t28962 = t1640*t14122*t27773;
  t28963 = -1.*t24180*t28826;
  t28968 = t28962 + t28963;
  t28972 = -1.*t24180*t1640*t27773;
  t28973 = -1.*t14122*t28826;
  t28974 = t28972 + t28973;
  t28991 = t21964*t27773*t22099;
  t28992 = t27720*t24396;
  t28994 = t28991 + t28992;
  t29002 = -1.*t24444*t28994;
  t29004 = t21197*t28974;
  t29005 = t29002 + t29004;
  t29007 = -1.*t21197*t28994;
  t29008 = -1.*t24444*t28974;
  t29009 = t29007 + t29008;
  t29026 = t21197*t28994;
  t29027 = t24444*t28974;
  t29028 = t29026 + t29027;
  t29030 = -1.*t24624*t29005;
  t29031 = t24688*t29028;
  t29032 = t29030 + t29031;
  t29015 = t24688*t29005;
  t29128 = -1.*t24180*t27720*t22099;
  t29132 = -1.*t27720*t1640*t14122*t24396;
  t29136 = t29128 + t29132;
  t29145 = t27720*t1640*t21964*t24444;
  t29149 = t21197*t29136;
  t29153 = t29145 + t29149;
  t29161 = -1.*t21197*t27720*t1640*t21964;
  t29169 = t24444*t29136;
  t29173 = t29161 + t29169;
  t29246 = t21964*t27773;
  t29247 = t27720*t22099*t24396;
  t29248 = t29246 + t29247;
  t29253 = -1.*t14122*t24444*t28097;
  t29255 = t21197*t29248;
  t29256 = t29253 + t29255;
  t29259 = -1.*t21197*t14122*t28097;
  t29260 = -1.*t24444*t29248;
  t29261 = t29259 + t29260;
  t28405 = -1.*t27720*t1640*t14122;
  t29301 = -1.*t24180*t29248;
  t29302 = t28405 + t29301;
  t29310 = t24180*t27720*t1640;
  t29311 = -1.*t14122*t29248;
  t29312 = t29310 + t29311;
  t29332 = -1.*t27720*t21964*t22099;
  t29333 = t27773*t24396;
  t29335 = t29332 + t29333;
  t29338 = -1.*t24444*t29335;
  t29342 = t21197*t29312;
  t29343 = t29338 + t29342;
  t29347 = -1.*t21197*t29335;
  t29348 = -1.*t24444*t29312;
  t29349 = t29347 + t29348;
  t29370 = t21197*t29335;
  t29371 = t24444*t29312;
  t29375 = t29370 + t29371;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t14122*t1640 + 0.325*t21445*t21964*t22099 - 0.1575*t22099*t24389*t24396 - 0.2255*(t14122*t1640 + t22099*t24180*t24396) + 0.325*t24444*t24598 - 0.575*t24624*t24665 - 0.575*t25416*t25474 - 0.0641*(t24665*t24688 + t24624*t25474) - 0.295*(-1.*t24624*t24665 + t24688*t25474);
  p_output1[2]=0.2255*t1640*t21964*t24180 + 0.1575*t1640*t21964*t24389 + 0.325*t1640*t21445*t24396 + 0.325*t14122*t1640*t21964*t24444 - 0.575*t25416*t27031 - 0.575*t24624*t27052 - 0.295*(t24688*t27031 - 1.*t24624*t27052) - 0.0641*(t24624*t27031 + t24688*t27052);
  p_output1[3]=0.1575*t22099*t24180 + 0.1575*t14122*t1640*t24396 + 0.325*t24444*t27117 - 0.575*t21197*t24624*t27117 - 0.575*t24444*t25416*t27117 - 0.0641*(t24444*t24624*t27117 + t21197*t24688*t27117) - 0.295*(-1.*t21197*t24624*t27117 + t24444*t24688*t27117) - 0.2255*t27142;
  p_output1[4]=-0.325*t1640*t21964*t24444 + 0.325*t21197*t27142 - 0.575*t25416*t27309 - 0.575*t24624*t27339 - 0.295*(t24688*t27309 - 1.*t24624*t27339) - 0.0641*(t24624*t27309 + t24688*t27339);
  p_output1[5]=-0.575*t24688*t27309 - 0.575*t24624*t27406 - 0.295*(-1.*t24688*t27309 - 1.*t24624*t27406) - 0.0641*(-1.*t24624*t27309 + t24688*t27406);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.1575*t14122*t1640*t27720 - 0.325*t21445*t28097 - 0.1575*t24389*t28228 - 0.2255*(t24180*t28228 + t28405) + 0.325*t24444*t28609 - 0.575*t24624*t28681 - 0.575*t25416*t28723 - 0.0641*(t24688*t28681 + t24624*t28723) - 0.295*(-1.*t24624*t28681 + t24688*t28723);
  p_output1[9]=-0.325*t1640*t21445*t21964*t27773 + 0.1575*t14122*t22099*t27773 + 0.1575*t1640*t24389*t24396*t27773 - 0.2255*(t14122*t22099*t27773 - 1.*t1640*t24180*t24396*t27773) + 0.325*t24444*t28782 - 0.575*t24624*t28786 - 0.575*t25416*t28790 - 0.0641*(t24688*t28786 + t24624*t28790) - 0.295*(-1.*t24624*t28786 + t24688*t28790);
  p_output1[10]=-0.2255*t24180*t28813 - 0.1575*t24389*t28813 - 0.325*t14122*t24444*t28813 - 0.325*t21445*t28826 - 0.575*t25416*t28847 - 0.575*t24624*t28866 - 0.295*(t24688*t28847 - 1.*t24624*t28866) - 0.0641*(t24624*t28847 + t24688*t28866);
  p_output1[11]=-0.1575*t1640*t24180*t27773 - 0.1575*t14122*t28826 + 0.325*t24444*t28968 - 0.575*t21197*t24624*t28968 - 0.575*t24444*t25416*t28968 - 0.0641*(t24444*t24624*t28968 + t21197*t24688*t28968) - 0.295*(-1.*t21197*t24624*t28968 + t24444*t24688*t28968) - 0.2255*t28974;
  p_output1[12]=0.325*t21197*t28974 - 0.325*t24444*t28994 - 0.575*t25416*t29005 - 0.575*t24624*t29009 - 0.0641*(t24624*t29005 + t24688*t29009) - 0.295*(-1.*t24624*t29009 + t29015);
  p_output1[13]=-0.575*t24688*t29005 - 0.575*t24624*t29028 - 0.295*(-1.*t24688*t29005 - 1.*t24624*t29028) - 0.0641*t29032;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t14122*t1640*t27773 - 0.1575*t24389*t28826 - 0.2255*(-1.*t14122*t1640*t27773 + t24180*t28826) + 0.325*t24444*t28974 - 0.325*t21445*t28994 - 0.575*t24624*t29005 - 0.575*t25416*t29028 - 0.0641*(t29015 + t24624*t29028) - 0.295*t29032;
  p_output1[17]=0.325*t1640*t21445*t21964*t27720 - 0.1575*t14122*t22099*t27720 - 0.1575*t1640*t24389*t24396*t27720 - 0.2255*(-1.*t14122*t22099*t27720 + t1640*t24180*t24396*t27720) + 0.325*t24444*t29136 - 0.575*t24624*t29153 - 0.575*t25416*t29173 - 0.0641*(t24688*t29153 + t24624*t29173) - 0.295*(-1.*t24624*t29153 + t24688*t29173);
  p_output1[18]=-0.2255*t24180*t28097 - 0.1575*t24389*t28097 - 0.325*t14122*t24444*t28097 - 0.325*t21445*t29248 - 0.575*t25416*t29256 - 0.575*t24624*t29261 - 0.295*(t24688*t29256 - 1.*t24624*t29261) - 0.0641*(t24624*t29256 + t24688*t29261);
  p_output1[19]=0.1575*t1640*t24180*t27720 - 0.1575*t14122*t29248 + 0.325*t24444*t29302 - 0.575*t21197*t24624*t29302 - 0.575*t24444*t25416*t29302 - 0.0641*(t24444*t24624*t29302 + t21197*t24688*t29302) - 0.295*(-1.*t21197*t24624*t29302 + t24444*t24688*t29302) - 0.2255*t29312;
  p_output1[20]=0.325*t21197*t29312 - 0.325*t24444*t29335 - 0.575*t25416*t29343 - 0.575*t24624*t29349 - 0.295*(t24688*t29343 - 1.*t24624*t29349) - 0.0641*(t24624*t29343 + t24688*t29349);
  p_output1[21]=-0.575*t24688*t29343 - 0.575*t24624*t29375 - 0.295*(-1.*t24688*t29343 - 1.*t24624*t29375) - 0.0641*(-1.*t24624*t29343 + t24688*t29375);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
