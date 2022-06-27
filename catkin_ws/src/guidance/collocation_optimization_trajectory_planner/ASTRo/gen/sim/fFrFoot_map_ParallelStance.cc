/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:36 GMT+02:00
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
  double t1043;
  double t1001;
  double t1027;
  double t3317;
  double t3513;
  double t3526;
  double t3561;
  double t3489;
  double t3585;
  double t3481;
  double t3676;
  double t3474;
  double t1030;
  double t3331;
  double t3355;
  double t3357;
  double t3582;
  double t3701;
  double t3705;
  double t4849;
  double t3898;
  double t3899;
  double t4844;
  double t3779;
  double t4863;
  double t4867;
  double t4962;
  double t5070;
  double t5363;
  double t7518;
  double t8306;
  double t8322;
  double t9923;
  double t10122;
  double t10269;
  double t10560;
  double t10693;
  double t11728;
  double t11763;
  double t11779;
  double t11833;
  double t11882;
  double t11937;
  double t12485;
  double t12689;
  double t12893;
  double t8368;
  double t9676;
  double t9706;
  double t12166;
  double t12265;
  double t13016;
  double t13448;
  double t13471;
  double t13484;
  double t13513;
  double t13514;
  double t13529;
  double t13564;
  double t13566;
  double t13662;
  double t12398;
  double t12938;
  double t12987;
  double t5069;
  double t7582;
  double t7586;
  double t7733;
  double t7806;
  double t7817;
  double t13554;
  double t13805;
  double t13985;
  double t14346;
  double t14449;
  double t14597;
  double t14841;
  double t14979;
  double t14992;
  double t7826;
  double t7990;
  double t8058;
  double t13005;
  double t15132;
  double t3452;
  double t3708;
  double t3778;
  double t16081;
  double t16161;
  double t16186;
  double t16891;
  double t16934;
  double t16994;
  double t17079;
  double t17288;
  double t17296;
  t1043 = Cos(var1[13]);
  t1001 = Cos(var1[14]);
  t1027 = Sin(var1[13]);
  t3317 = Sin(var1[14]);
  t3513 = t1043*t1001;
  t3526 = t1027*t3317;
  t3561 = t3513 + t3526;
  t3489 = Cos(var1[5]);
  t3585 = Sin(var1[12]);
  t3481 = Cos(var1[12]);
  t3676 = Sin(var1[5]);
  t3474 = Cos(var1[4]);
  t1030 = -1.*t1001*t1027;
  t3331 = t1043*t3317;
  t3355 = t1030 + t3331;
  t3357 = Sin(var1[4]);
  t3582 = t3481*t3489*t3561;
  t3701 = -1.*t3585*t3561*t3676;
  t3705 = t3582 + t3701;
  t4849 = Sin(var1[3]);
  t3898 = t3489*t3585*t3561;
  t3899 = t3481*t3561*t3676;
  t4844 = t3898 + t3899;
  t3779 = Cos(var1[3]);
  t4863 = t3474*t3355;
  t4867 = -1.*t3357*t3705;
  t4962 = t4863 + t4867;
  t5070 = t1001*t1027;
  t5363 = -1.*t1043*t3317;
  t7518 = t5070 + t5363;
  t8306 = -1.*t3481;
  t8322 = 1. + t8306;
  t9923 = -1.*t1043;
  t10122 = 1. + t9923;
  t10269 = 0.28121*t10122;
  t10560 = -1.*t1001;
  t10693 = 1. + t10560;
  t11728 = 0.50321*t10693;
  t11763 = 0.19821*t1001;
  t11779 = t11728 + t11763;
  t11833 = t1043*t11779;
  t11882 = -0.305*t1027*t3317;
  t11937 = t10269 + t11833 + t11882;
  t12485 = 0.15121*t8322;
  t12689 = t3481*t11937;
  t12893 = t12485 + t12689;
  t8368 = -0.15121*t8322;
  t9676 = -0.15121*t3481;
  t9706 = -0.15121*t3585;
  t12166 = t3585*t11937;
  t12265 = t8368 + t9676 + t9706 + t12166;
  t13016 = -1.*t3489*t3585;
  t13448 = -1.*t3481*t3676;
  t13471 = t13016 + t13448;
  t13484 = 0.28121*t1027;
  t13513 = -1.*t11779*t1027;
  t13514 = -0.305*t1043*t3317;
  t13529 = t13484 + t13513 + t13514;
  t13564 = t3489*t12893;
  t13566 = -1.*t12265*t3676;
  t13662 = t13564 + t13566;
  t12398 = t3489*t12265;
  t12938 = t12893*t3676;
  t12987 = t12398 + t12938;
  t5069 = t3561*t3357;
  t7582 = t3481*t3489*t7518;
  t7586 = -1.*t3585*t7518*t3676;
  t7733 = t7582 + t7586;
  t7806 = t3474*t7733;
  t7817 = t5069 + t7806;
  t13554 = t13529*t3357;
  t13805 = t3474*t13662;
  t13985 = t13554 + t13805;
  t14346 = t3474*t13529;
  t14449 = -1.*t3357*t13662;
  t14597 = t14346 + t14449;
  t14841 = t3489*t3585*t7518;
  t14979 = t3481*t7518*t3676;
  t14992 = t14841 + t14979;
  t7826 = t3481*t3489;
  t7990 = -1.*t3585*t3676;
  t8058 = t7826 + t7990;
  t13005 = -1.*t8058*t12987;
  t15132 = t14992*t12987;
  t3452 = t3355*t3357;
  t3708 = t3474*t3705;
  t3778 = t3452 + t3708;
  t16081 = t3474*t3561;
  t16161 = -1.*t3357*t7733;
  t16186 = t16081 + t16161;
  t16891 = -1.*t14992*t12987;
  t16934 = t4844*t12987;
  t16994 = -1.*t13529*t3561;
  t17079 = t13529*t3355;
  t17288 = t8058*t12987;
  t17296 = -1.*t4844*t12987;
  p_output1[0]=t3778;
  p_output1[1]=t3779*t4844 - 1.*t4849*t4962;
  p_output1[2]=t4844*t4849 + t3779*t4962;
  p_output1[3]=(t13005 + t13471*t14597*t3357 - 1.*t13471*t13985*t3474)*t7817 + t13471*t3474*(t15132 + t14597*t16186 + t13985*t7817);
  p_output1[4]=(t13005 - 1.*t13471*t13662)*t14992 + (t15132 + t13529*t3561 + t13662*t7733)*t8058;
  p_output1[5]=t3561*(-1.*t12265*t3481 + t12893*t3585);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3317 - 0.305*t1001*t3317 - 1.*t11779*t3317;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13471*t3474;
  p_output1[19]=t13471*t3357*t4849 + t3779*t8058;
  p_output1[20]=-1.*t13471*t3357*t3779 + t4849*t8058;
  p_output1[21]=(t16934 + t13985*t3778 + t14597*t4962)*t7817 + t3778*(-1.*t14597*t16186 + t16891 - 1.*t13985*t7817);
  p_output1[22]=t14992*(t16934 + t17079 + t13662*t3705) + t4844*(t16891 + t16994 - 1.*t13662*t7733);
  p_output1[23]=t3561*(t17079 + t12893*t3481*t3561 + t12265*t3561*t3585) + t3355*(t16994 - 1.*t12893*t3481*t7518 - 1.*t12265*t3585*t7518);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3561*(t17079 + t11937*t3561) + t3355*(t16994 - 1.*t11937*t7518);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7817;
  p_output1[37]=t14992*t3779 - 1.*t16186*t4849;
  p_output1[38]=t16186*t3779 + t14992*t4849;
  p_output1[39]=(t17288 - 1.*t13471*t14597*t3357 + t13471*t13985*t3474)*t3778 + t13471*t3474*(t17296 - 1.*t13985*t3778 - 1.*t14597*t4962);
  p_output1[40]=(t13471*t13662 + t17288)*t4844 + (t17296 - 1.*t13529*t3355 - 1.*t13662*t3705)*t8058;
  p_output1[41]=t3355*(t12265*t3481 - 1.*t12893*t3585);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3355 - 0.15121*t7518;
  p_output1[49]=0.28121*t1001 - 1.*t1001*t11779 + 0.305*Power(t3317,2);
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
