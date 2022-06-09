/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:16 GMT+02:00
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
  double t4252;
  double t3897;
  double t4183;
  double t4311;
  double t4383;
  double t4385;
  double t4404;
  double t4382;
  double t4437;
  double t4362;
  double t4438;
  double t4361;
  double t4229;
  double t4331;
  double t4335;
  double t4338;
  double t4413;
  double t4470;
  double t4485;
  double t4562;
  double t4513;
  double t4542;
  double t4544;
  double t4507;
  double t4565;
  double t4566;
  double t4568;
  double t7881;
  double t7882;
  double t7911;
  double t7915;
  double t7916;
  double t7917;
  double t7921;
  double t7922;
  double t7927;
  double t7928;
  double t7930;
  double t7931;
  double t7934;
  double t7940;
  double t7941;
  double t7943;
  double t7883;
  double t7892;
  double t7898;
  double t7935;
  double t7936;
  double t7948;
  double t7952;
  double t7953;
  double t7954;
  double t7955;
  double t7959;
  double t7965;
  double t7968;
  double t7969;
  double t7971;
  double t7937;
  double t7944;
  double t7945;
  double t4578;
  double t4580;
  double t4581;
  double t4584;
  double t4587;
  double t7692;
  double t7701;
  double t7702;
  double t7703;
  double t7966;
  double t7972;
  double t7973;
  double t7975;
  double t7977;
  double t7978;
  double t7983;
  double t7984;
  double t7985;
  double t7710;
  double t7711;
  double t7868;
  double t7946;
  double t7986;
  double t4359;
  double t4488;
  double t4494;
  double t7988;
  double t7989;
  double t7990;
  double t8026;
  double t8032;
  double t8038;
  double t8042;
  double t8111;
  double t8116;
  t4252 = Cos(var1[10]);
  t3897 = Cos(var1[11]);
  t4183 = Sin(var1[10]);
  t4311 = Sin(var1[11]);
  t4383 = -1.*t4252*t3897;
  t4385 = -1.*t4183*t4311;
  t4404 = t4383 + t4385;
  t4382 = Cos(var1[5]);
  t4437 = Sin(var1[9]);
  t4362 = Cos(var1[9]);
  t4438 = Sin(var1[5]);
  t4361 = Cos(var1[4]);
  t4229 = -1.*t3897*t4183;
  t4331 = t4252*t4311;
  t4335 = t4229 + t4331;
  t4338 = Sin(var1[4]);
  t4413 = t4362*t4382*t4404;
  t4470 = -1.*t4437*t4404*t4438;
  t4485 = t4413 + t4470;
  t4562 = Sin(var1[3]);
  t4513 = t4382*t4437*t4404;
  t4542 = t4362*t4404*t4438;
  t4544 = t4513 + t4542;
  t4507 = Cos(var1[3]);
  t4565 = t4361*t4335;
  t4566 = -1.*t4338*t4485;
  t4568 = t4565 + t4566;
  t7881 = -1.*t4362;
  t7882 = 1. + t7881;
  t7911 = -1.*t4252;
  t7915 = 1. + t7911;
  t7916 = -0.28121*t7915;
  t7917 = -1.*t3897;
  t7921 = 1. + t7917;
  t7922 = -0.50321*t7921;
  t7927 = -0.19821*t3897;
  t7928 = t7922 + t7927;
  t7930 = t4252*t7928;
  t7931 = 0.305*t4183*t4311;
  t7934 = t7916 + t7930 + t7931;
  t7940 = -0.15121*t7882;
  t7941 = t4362*t7934;
  t7943 = t7940 + t7941;
  t7883 = 0.15121*t7882;
  t7892 = 0.15121*t4362;
  t7898 = 0.15121*t4437;
  t7935 = t4437*t7934;
  t7936 = t7883 + t7892 + t7898 + t7935;
  t7948 = t4382*t4437;
  t7952 = t4362*t4438;
  t7953 = t7948 + t7952;
  t7954 = 0.28121*t4183;
  t7955 = t7928*t4183;
  t7959 = -0.305*t4252*t4311;
  t7965 = t7954 + t7955 + t7959;
  t7968 = t4382*t7943;
  t7969 = -1.*t7936*t4438;
  t7971 = t7968 + t7969;
  t7937 = t4382*t7936;
  t7944 = t7943*t4438;
  t7945 = t7937 + t7944;
  t4578 = t4252*t3897;
  t4580 = t4183*t4311;
  t4581 = t4578 + t4580;
  t4584 = t4581*t4338;
  t4587 = t4362*t4382*t4335;
  t7692 = -1.*t4437*t4335*t4438;
  t7701 = t4587 + t7692;
  t7702 = t4361*t7701;
  t7703 = t4584 + t7702;
  t7966 = t7965*t4338;
  t7972 = t4361*t7971;
  t7973 = t7966 + t7972;
  t7975 = t4361*t7965;
  t7977 = -1.*t4338*t7971;
  t7978 = t7975 + t7977;
  t7983 = t4382*t4437*t4335;
  t7984 = t4362*t4335*t4438;
  t7985 = t7983 + t7984;
  t7710 = -1.*t4362*t4382;
  t7711 = t4437*t4438;
  t7868 = t7710 + t7711;
  t7946 = -1.*t7868*t7945;
  t7986 = t7985*t7945;
  t4359 = t4335*t4338;
  t4488 = t4361*t4485;
  t4494 = t4359 + t4488;
  t7988 = t4361*t4581;
  t7989 = -1.*t4338*t7701;
  t7990 = t7988 + t7989;
  t8026 = -1.*t7985*t7945;
  t8032 = t4544*t7945;
  t8038 = -1.*t7965*t4581;
  t8042 = t7965*t4335;
  t8111 = t7868*t7945;
  t8116 = -1.*t4544*t7945;
  p_output1[0]=t4494;
  p_output1[1]=t4507*t4544 - 1.*t4562*t4568;
  p_output1[2]=t4544*t4562 + t4507*t4568;
  p_output1[3]=t7703*(t7946 - 1.*t4361*t7953*t7973 + t4338*t7953*t7978) + t4361*t7953*(t7703*t7973 + t7986 + t7978*t7990);
  p_output1[4]=(t7946 - 1.*t7953*t7971)*t7985 + t7868*(t4581*t7965 + t7701*t7971 + t7986);
  p_output1[5]=t4581*(t4362*t7936 - 1.*t4437*t7943);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t4404 + 0.15121*t4581;
  p_output1[10]=0.28121*t4311 - 0.305*t3897*t4311 + t4311*t7928;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4361*t7953;
  p_output1[19]=t4507*t7868 + t4338*t4562*t7953;
  p_output1[20]=t4562*t7868 - 1.*t4338*t4507*t7953;
  p_output1[21]=t4494*(-1.*t7703*t7973 - 1.*t7978*t7990 + t8026) + t7703*(t4494*t7973 + t4568*t7978 + t8032);
  p_output1[22]=t4544*(-1.*t7701*t7971 + t8026 + t8038) + t7985*(t4485*t7971 + t8032 + t8042);
  p_output1[23]=t4335*(-1.*t4335*t4437*t7936 - 1.*t4335*t4362*t7943 + t8038) + t4581*(t4404*t4437*t7936 + t4362*t4404*t7943 + t8042);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t4335*(-1.*t4335*t7934 + t8038) + t4581*(t4404*t7934 + t8042);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7703;
  p_output1[37]=t4507*t7985 - 1.*t4562*t7990;
  p_output1[38]=t4562*t7985 + t4507*t7990;
  p_output1[39]=t4494*(t4361*t7953*t7973 - 1.*t4338*t7953*t7978 + t8111) + t4361*t7953*(-1.*t4494*t7973 - 1.*t4568*t7978 + t8116);
  p_output1[40]=t4544*(t7953*t7971 + t8111) + t7868*(-1.*t4335*t7965 - 1.*t4485*t7971 + t8116);
  p_output1[41]=t4335*(-1.*t4362*t7936 + t4437*t7943);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t3897 + 0.305*Power(t4311,2) + t3897*t7928;
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
