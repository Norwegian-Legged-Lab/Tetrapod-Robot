/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:26 GMT+02:00
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
  double t3049;
  double t11508;
  double t4893;
  double t21006;
  double t21055;
  double t21005;
  double t21056;
  double t6543;
  double t21074;
  double t21080;
  double t21084;
  double t16195;
  double t21070;
  double t21094;
  double t21095;
  double t21096;
  double t9135;
  double t16995;
  double t17484;
  double t21148;
  double t21146;
  double t21049;
  double t21057;
  double t21063;
  double t21086;
  double t21087;
  double t21088;
  double t21097;
  double t21098;
  double t21099;
  double t21150;
  double t21151;
  double t21152;
  double t21158;
  double t21159;
  double t21160;
  double t21163;
  double t21164;
  double t21165;
  double t21170;
  double t21171;
  double t21172;
  double t21175;
  double t21176;
  double t21177;
  double t21071;
  double t21089;
  double t21090;
  double t21195;
  double t21196;
  double t21201;
  double t21202;
  double t21203;
  double t21205;
  double t21206;
  double t21207;
  double t21208;
  double t21209;
  double t21210;
  double t21211;
  double t21212;
  double t21216;
  double t21217;
  double t21218;
  double t21197;
  double t21198;
  double t21199;
  double t21213;
  double t21214;
  double t21222;
  double t21223;
  double t21224;
  double t21225;
  double t21227;
  double t21228;
  double t21229;
  double t21215;
  double t21219;
  double t21220;
  double t21226;
  double t21230;
  double t21231;
  double t21233;
  double t21234;
  double t21235;
  double t21093;
  double t21100;
  double t21101;
  double t21221;
  double t21239;
  double t21246;
  double t21251;
  double t21258;
  double t21263;
  double t21289;
  double t21293;
  t3049 = Cos(var1[4]);
  t11508 = Cos(var1[9]);
  t4893 = Cos(var1[5]);
  t21006 = Cos(var1[11]);
  t21055 = Sin(var1[10]);
  t21005 = Cos(var1[10]);
  t21056 = Sin(var1[11]);
  t6543 = Sin(var1[9]);
  t21074 = -1.*t21006*t21055;
  t21080 = t21005*t21056;
  t21084 = t21074 + t21080;
  t16195 = Sin(var1[5]);
  t21070 = Sin(var1[4]);
  t21094 = -1.*t21005*t21006;
  t21095 = -1.*t21055*t21056;
  t21096 = t21094 + t21095;
  t9135 = t4893*t6543;
  t16995 = t11508*t16195;
  t17484 = t9135 + t16995;
  t21148 = Cos(var1[3]);
  t21146 = Sin(var1[3]);
  t21049 = t21005*t21006;
  t21057 = t21055*t21056;
  t21063 = t21049 + t21057;
  t21086 = t11508*t4893*t21084;
  t21087 = -1.*t6543*t21084*t16195;
  t21088 = t21086 + t21087;
  t21097 = t11508*t4893*t21096;
  t21098 = -1.*t6543*t21096*t16195;
  t21099 = t21097 + t21098;
  t21150 = -1.*t11508*t4893;
  t21151 = t6543*t16195;
  t21152 = t21150 + t21151;
  t21158 = t4893*t6543*t21084;
  t21159 = t11508*t21084*t16195;
  t21160 = t21158 + t21159;
  t21163 = t3049*t21063;
  t21164 = -1.*t21070*t21088;
  t21165 = t21163 + t21164;
  t21170 = t4893*t6543*t21096;
  t21171 = t11508*t21096*t16195;
  t21172 = t21170 + t21171;
  t21175 = t3049*t21084;
  t21176 = -1.*t21070*t21099;
  t21177 = t21175 + t21176;
  t21071 = t21063*t21070;
  t21089 = t3049*t21088;
  t21090 = t21071 + t21089;
  t21195 = -1.*t11508;
  t21196 = 1. + t21195;
  t21201 = -1.*t21005;
  t21202 = 1. + t21201;
  t21203 = -0.28121*t21202;
  t21205 = -1.*t21006;
  t21206 = 1. + t21205;
  t21207 = -0.50321*t21206;
  t21208 = -0.19821*t21006;
  t21209 = t21207 + t21208;
  t21210 = t21005*t21209;
  t21211 = 0.305*t21055*t21056;
  t21212 = t21203 + t21210 + t21211;
  t21216 = -0.15121*t21196;
  t21217 = t11508*t21212;
  t21218 = t21216 + t21217;
  t21197 = 0.15121*t21196;
  t21198 = 0.15121*t11508;
  t21199 = 0.15121*t6543;
  t21213 = t6543*t21212;
  t21214 = t21197 + t21198 + t21199 + t21213;
  t21222 = 0.28121*t21055;
  t21223 = t21209*t21055;
  t21224 = -0.305*t21005*t21056;
  t21225 = t21222 + t21223 + t21224;
  t21227 = t4893*t21218;
  t21228 = -1.*t21214*t16195;
  t21229 = t21227 + t21228;
  t21215 = t4893*t21214;
  t21219 = t21218*t16195;
  t21220 = t21215 + t21219;
  t21226 = t21225*t21070;
  t21230 = t3049*t21229;
  t21231 = t21226 + t21230;
  t21233 = t3049*t21225;
  t21234 = -1.*t21070*t21229;
  t21235 = t21233 + t21234;
  t21093 = t21084*t21070;
  t21100 = t3049*t21099;
  t21101 = t21093 + t21100;
  t21221 = -1.*t21152*t21220;
  t21239 = t21160*t21220;
  t21246 = t21152*t21220;
  t21251 = -1.*t21172*t21220;
  t21258 = -1.*t21160*t21220;
  t21263 = t21172*t21220;
  t21289 = -1.*t21225*t21063;
  t21293 = t21225*t21084;
  p_output1[0]=t21101*var2[0] + t17484*t3049*var2[1] + t21090*var2[2];
  p_output1[1]=(t21148*t21172 - 1.*t21146*t21177)*var2[0] + (t17484*t21070*t21146 + t21148*t21152)*var2[1] + (t21148*t21160 - 1.*t21146*t21165)*var2[2];
  p_output1[2]=(t21146*t21172 + t21148*t21177)*var2[0] + (-1.*t17484*t21070*t21148 + t21146*t21152)*var2[1] + (t21146*t21160 + t21148*t21165)*var2[2];
  p_output1[3]=(t17484*(t21090*t21231 + t21165*t21235 + t21239)*t3049 + t21090*(t21221 + t17484*t21070*t21235 - 1.*t17484*t21231*t3049))*var2[0] + (t21101*(-1.*t21090*t21231 - 1.*t21165*t21235 + t21258) + t21090*(t21101*t21231 + t21177*t21235 + t21263))*var2[1] + (t17484*(-1.*t21101*t21231 - 1.*t21177*t21235 + t21251)*t3049 + t21101*(-1.*t17484*t21070*t21235 + t21246 + t17484*t21231*t3049))*var2[2];
  p_output1[4]=(t21160*(t21221 - 1.*t17484*t21229) + t21152*(t21063*t21225 + t21088*t21229 + t21239))*var2[0] + (t21172*(-1.*t21088*t21229 + t21258 + t21289) + t21160*(t21099*t21229 + t21263 + t21293))*var2[1] + (t21172*(t17484*t21229 + t21246) + t21152*(-1.*t21084*t21225 - 1.*t21099*t21229 + t21251))*var2[2];
  p_output1[5]=t21063*(t11508*t21214 - 1.*t21218*t6543)*var2[0] + (t21084*(-1.*t11508*t21084*t21218 + t21289 - 1.*t21084*t21214*t6543) + t21063*(t11508*t21096*t21218 + t21293 + t21096*t21214*t6543))*var2[1] + t21084*(-1.*t11508*t21214 + t21218*t6543)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t21063 + 0.15121*t21096)*var2[0] + (-0.15121 + t21084*(-1.*t21084*t21212 + t21289) + t21063*(t21096*t21212 + t21293))*var2[1];
  p_output1[10]=(0.28121*t21056 - 0.305*t21006*t21056 + t21056*t21209)*var2[0] + (0.28121*t21006 + 0.305*Power(t21056,2) + t21006*t21209)*var2[2];
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
