/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:28 GMT+02:00
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
  double t8688;
  double t2677;
  double t8646;
  double t9836;
  double t11681;
  double t11702;
  double t11714;
  double t10528;
  double t11650;
  double t11718;
  double t10723;
  double t11755;
  double t9917;
  double t11965;
  double t11973;
  double t11974;
  double t8649;
  double t9873;
  double t9893;
  double t11717;
  double t11770;
  double t11778;
  double t12020;
  double t11801;
  double t11803;
  double t11804;
  double t11993;
  double t11975;
  double t11977;
  double t11987;
  double t12000;
  double t12014;
  double t12015;
  double t12023;
  double t12031;
  double t12037;
  double t12048;
  double t12049;
  double t12050;
  double t12056;
  double t12057;
  double t12059;
  double t12066;
  double t12067;
  double t12068;
  double t11957;
  double t11988;
  double t11990;
  double t12089;
  double t12090;
  double t12095;
  double t12096;
  double t12097;
  double t12099;
  double t12100;
  double t12101;
  double t12102;
  double t12108;
  double t12109;
  double t12110;
  double t12111;
  double t12120;
  double t12121;
  double t12122;
  double t12092;
  double t12093;
  double t12094;
  double t12115;
  double t12116;
  double t12134;
  double t12135;
  double t12138;
  double t12139;
  double t12142;
  double t12143;
  double t12144;
  double t12118;
  double t12123;
  double t12132;
  double t12141;
  double t12146;
  double t12148;
  double t12155;
  double t12156;
  double t12157;
  double t10089;
  double t11790;
  double t11797;
  double t12133;
  double t12162;
  double t12172;
  double t12181;
  double t12188;
  double t12197;
  double t12211;
  double t12216;
  t8688 = Cos(var1[13]);
  t2677 = Cos(var1[14]);
  t8646 = Sin(var1[13]);
  t9836 = Sin(var1[14]);
  t11681 = t8688*t2677;
  t11702 = t8646*t9836;
  t11714 = t11681 + t11702;
  t10528 = Cos(var1[4]);
  t11650 = Cos(var1[5]);
  t11718 = Sin(var1[12]);
  t10723 = Cos(var1[12]);
  t11755 = Sin(var1[5]);
  t9917 = Sin(var1[4]);
  t11965 = t2677*t8646;
  t11973 = -1.*t8688*t9836;
  t11974 = t11965 + t11973;
  t8649 = -1.*t2677*t8646;
  t9873 = t8688*t9836;
  t9893 = t8649 + t9873;
  t11717 = t10723*t11650*t11714;
  t11770 = -1.*t11718*t11714*t11755;
  t11778 = t11717 + t11770;
  t12020 = Sin(var1[3]);
  t11801 = -1.*t11650*t11718;
  t11803 = -1.*t10723*t11755;
  t11804 = t11801 + t11803;
  t11993 = Cos(var1[3]);
  t11975 = t10723*t11650*t11974;
  t11977 = -1.*t11718*t11974*t11755;
  t11987 = t11975 + t11977;
  t12000 = t11650*t11718*t11714;
  t12014 = t10723*t11714*t11755;
  t12015 = t12000 + t12014;
  t12023 = t10528*t9893;
  t12031 = -1.*t9917*t11778;
  t12037 = t12023 + t12031;
  t12048 = t10723*t11650;
  t12049 = -1.*t11718*t11755;
  t12050 = t12048 + t12049;
  t12056 = t11650*t11718*t11974;
  t12057 = t10723*t11974*t11755;
  t12059 = t12056 + t12057;
  t12066 = t10528*t11714;
  t12067 = -1.*t9917*t11987;
  t12068 = t12066 + t12067;
  t11957 = t11714*t9917;
  t11988 = t10528*t11987;
  t11990 = t11957 + t11988;
  t12089 = -1.*t10723;
  t12090 = 1. + t12089;
  t12095 = -1.*t8688;
  t12096 = 1. + t12095;
  t12097 = 0.28121*t12096;
  t12099 = -1.*t2677;
  t12100 = 1. + t12099;
  t12101 = 0.50321*t12100;
  t12102 = 0.19821*t2677;
  t12108 = t12101 + t12102;
  t12109 = t8688*t12108;
  t12110 = -0.305*t8646*t9836;
  t12111 = t12097 + t12109 + t12110;
  t12120 = 0.15121*t12090;
  t12121 = t10723*t12111;
  t12122 = t12120 + t12121;
  t12092 = -0.15121*t12090;
  t12093 = -0.15121*t10723;
  t12094 = -0.15121*t11718;
  t12115 = t11718*t12111;
  t12116 = t12092 + t12093 + t12094 + t12115;
  t12134 = 0.28121*t8646;
  t12135 = -1.*t12108*t8646;
  t12138 = -0.305*t8688*t9836;
  t12139 = t12134 + t12135 + t12138;
  t12142 = t11650*t12122;
  t12143 = -1.*t12116*t11755;
  t12144 = t12142 + t12143;
  t12118 = t11650*t12116;
  t12123 = t12122*t11755;
  t12132 = t12118 + t12123;
  t12141 = t12139*t9917;
  t12146 = t10528*t12144;
  t12148 = t12141 + t12146;
  t12155 = t10528*t12139;
  t12156 = -1.*t9917*t12144;
  t12157 = t12155 + t12156;
  t10089 = t9893*t9917;
  t11790 = t10528*t11778;
  t11797 = t10089 + t11790;
  t12133 = -1.*t12050*t12132;
  t12162 = t12059*t12132;
  t12172 = -1.*t12059*t12132;
  t12181 = t12015*t12132;
  t12188 = t12050*t12132;
  t12197 = -1.*t12015*t12132;
  t12211 = -1.*t12139*t11714;
  t12216 = t12139*t9893;
  p_output1[0]=t11797;
  p_output1[1]=t10528*t11804;
  p_output1[2]=t11990;
  p_output1[3]=t11993*t12015 - 1.*t12020*t12037;
  p_output1[4]=t11993*t12050 + t11804*t12020*t9917;
  p_output1[5]=t11993*t12059 - 1.*t12020*t12068;
  p_output1[6]=t12015*t12020 + t11993*t12037;
  p_output1[7]=t12020*t12050 - 1.*t11804*t11993*t9917;
  p_output1[8]=t12020*t12059 + t11993*t12068;
  p_output1[9]=t10528*t11804*(t11990*t12148 + t12068*t12157 + t12162) + t11990*(t12133 - 1.*t10528*t11804*t12148 + t11804*t12157*t9917);
  p_output1[10]=t11797*(-1.*t11990*t12148 - 1.*t12068*t12157 + t12172) + t11990*(t11797*t12148 + t12037*t12157 + t12181);
  p_output1[11]=t10528*t11804*(-1.*t11797*t12148 - 1.*t12037*t12157 + t12197) + t11797*(t10528*t11804*t12148 + t12188 - 1.*t11804*t12157*t9917);
  p_output1[12]=t12059*(t12133 - 1.*t11804*t12144) + t12050*(t11714*t12139 + t11987*t12144 + t12162);
  p_output1[13]=t12015*(-1.*t11987*t12144 + t12172 + t12211) + t12059*(t11778*t12144 + t12181 + t12216);
  p_output1[14]=t12015*(t11804*t12144 + t12188) + t12050*(-1.*t11778*t12144 + t12197 - 1.*t12139*t9893);
  p_output1[15]=t11714*(-1.*t10723*t12116 + t11718*t12122);
  p_output1[16]=t11714*(t11714*t11718*t12116 + t10723*t11714*t12122 + t12216) + (-1.*t11718*t11974*t12116 - 1.*t10723*t11974*t12122 + t12211)*t9893;
  p_output1[17]=(t10723*t12116 - 1.*t11718*t12122)*t9893;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t11714*(t11714*t12111 + t12216) + (-1.*t11974*t12111 + t12211)*t9893;
  p_output1[38]=-0.15121*t11974 - 0.15121*t9893;
  p_output1[39]=0.28121*t9836 - 1.*t12108*t9836 - 0.305*t2677*t9836;
  p_output1[40]=0;
  p_output1[41]=0.28121*t2677 - 1.*t12108*t2677 + 0.305*Power(t9836,2);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
