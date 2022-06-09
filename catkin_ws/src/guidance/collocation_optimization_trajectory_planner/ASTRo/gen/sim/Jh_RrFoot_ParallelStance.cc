/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:30 GMT+02:00
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
  double t12200;
  double t1945;
  double t12171;
  double t12201;
  double t12381;
  double t12386;
  double t12388;
  double t12356;
  double t12380;
  double t12391;
  double t12379;
  double t12393;
  double t12204;
  double t12183;
  double t12202;
  double t12203;
  double t12389;
  double t12408;
  double t12425;
  double t12638;
  double t12430;
  double t12431;
  double t12456;
  double t12596;
  double t12471;
  double t12478;
  double t12479;
  double t12485;
  double t12486;
  double t12488;
  double t12606;
  double t12607;
  double t12615;
  double t12654;
  double t12671;
  double t12678;
  double t12697;
  double t12703;
  double t12704;
  double t12712;
  double t12713;
  double t12714;
  double t12718;
  double t12719;
  double t12722;
  double t12482;
  double t12492;
  double t12510;
  double t12760;
  double t12763;
  double t12765;
  double t12783;
  double t12788;
  double t12795;
  double t12804;
  double t12811;
  double t12813;
  double t12818;
  double t12832;
  double t12833;
  double t12834;
  double t12839;
  double t12860;
  double t12863;
  double t12767;
  double t12770;
  double t12849;
  double t12858;
  double t12872;
  double t12874;
  double t12875;
  double t12876;
  double t12880;
  double t12890;
  double t12896;
  double t12859;
  double t12865;
  double t12867;
  double t12879;
  double t12897;
  double t12902;
  double t12907;
  double t12913;
  double t12916;
  double t12237;
  double t12426;
  double t12429;
  double t12870;
  double t12929;
  double t12947;
  double t12954;
  double t12998;
  double t13004;
  double t13038;
  double t13045;
  t12200 = Cos(var1[16]);
  t1945 = Cos(var1[17]);
  t12171 = Sin(var1[16]);
  t12201 = Sin(var1[17]);
  t12381 = -1.*t12200*t1945;
  t12386 = -1.*t12171*t12201;
  t12388 = t12381 + t12386;
  t12356 = Cos(var1[4]);
  t12380 = Cos(var1[5]);
  t12391 = Sin(var1[15]);
  t12379 = Cos(var1[15]);
  t12393 = Sin(var1[5]);
  t12204 = Sin(var1[4]);
  t12183 = -1.*t1945*t12171;
  t12202 = t12200*t12201;
  t12203 = t12183 + t12202;
  t12389 = t12379*t12380*t12388;
  t12408 = -1.*t12391*t12388*t12393;
  t12425 = t12389 + t12408;
  t12638 = Sin(var1[3]);
  t12430 = t12380*t12391;
  t12431 = t12379*t12393;
  t12456 = t12430 + t12431;
  t12596 = Cos(var1[3]);
  t12471 = t12200*t1945;
  t12478 = t12171*t12201;
  t12479 = t12471 + t12478;
  t12485 = t12379*t12380*t12203;
  t12486 = -1.*t12391*t12203*t12393;
  t12488 = t12485 + t12486;
  t12606 = t12380*t12391*t12388;
  t12607 = t12379*t12388*t12393;
  t12615 = t12606 + t12607;
  t12654 = t12356*t12203;
  t12671 = -1.*t12204*t12425;
  t12678 = t12654 + t12671;
  t12697 = -1.*t12379*t12380;
  t12703 = t12391*t12393;
  t12704 = t12697 + t12703;
  t12712 = t12380*t12391*t12203;
  t12713 = t12379*t12203*t12393;
  t12714 = t12712 + t12713;
  t12718 = t12356*t12479;
  t12719 = -1.*t12204*t12488;
  t12722 = t12718 + t12719;
  t12482 = t12479*t12204;
  t12492 = t12356*t12488;
  t12510 = t12482 + t12492;
  t12760 = -1.*t12379;
  t12763 = 1. + t12760;
  t12765 = -0.15121*t12763;
  t12783 = -1.*t12200;
  t12788 = 1. + t12783;
  t12795 = -0.28121*t12788;
  t12804 = -1.*t1945;
  t12811 = 1. + t12804;
  t12813 = -0.50321*t12811;
  t12818 = -0.19821*t1945;
  t12832 = t12813 + t12818;
  t12833 = t12200*t12832;
  t12834 = 0.305*t12171*t12201;
  t12839 = t12795 + t12833 + t12834;
  t12860 = t12379*t12839;
  t12863 = t12765 + t12860;
  t12767 = -0.15121*t12379;
  t12770 = 0.15121*t12391;
  t12849 = t12391*t12839;
  t12858 = t12765 + t12767 + t12770 + t12849;
  t12872 = 0.28121*t12171;
  t12874 = t12832*t12171;
  t12875 = -0.305*t12200*t12201;
  t12876 = t12872 + t12874 + t12875;
  t12880 = t12380*t12863;
  t12890 = -1.*t12858*t12393;
  t12896 = t12880 + t12890;
  t12859 = t12380*t12858;
  t12865 = t12863*t12393;
  t12867 = t12859 + t12865;
  t12879 = t12876*t12204;
  t12897 = t12356*t12896;
  t12902 = t12879 + t12897;
  t12907 = t12356*t12876;
  t12913 = -1.*t12204*t12896;
  t12916 = t12907 + t12913;
  t12237 = t12203*t12204;
  t12426 = t12356*t12425;
  t12429 = t12237 + t12426;
  t12870 = -1.*t12704*t12867;
  t12929 = t12714*t12867;
  t12947 = -1.*t12714*t12867;
  t12954 = t12615*t12867;
  t12998 = t12704*t12867;
  t13004 = -1.*t12615*t12867;
  t13038 = -1.*t12876*t12479;
  t13045 = t12876*t12203;
  p_output1[0]=t12429;
  p_output1[1]=t12356*t12456;
  p_output1[2]=t12510;
  p_output1[3]=t12596*t12615 - 1.*t12638*t12678;
  p_output1[4]=t12204*t12456*t12638 + t12596*t12704;
  p_output1[5]=t12596*t12714 - 1.*t12638*t12722;
  p_output1[6]=t12615*t12638 + t12596*t12678;
  p_output1[7]=-1.*t12204*t12456*t12596 + t12638*t12704;
  p_output1[8]=t12638*t12714 + t12596*t12722;
  p_output1[9]=t12510*(t12870 - 1.*t12356*t12456*t12902 + t12204*t12456*t12916) + t12356*t12456*(t12510*t12902 + t12722*t12916 + t12929);
  p_output1[10]=t12429*(-1.*t12510*t12902 - 1.*t12722*t12916 + t12947) + t12510*(t12429*t12902 + t12678*t12916 + t12954);
  p_output1[11]=t12429*(t12356*t12456*t12902 - 1.*t12204*t12456*t12916 + t12998) + t12356*t12456*(-1.*t12429*t12902 - 1.*t12678*t12916 + t13004);
  p_output1[12]=t12714*(t12870 - 1.*t12456*t12896) + t12704*(t12479*t12876 + t12488*t12896 + t12929);
  p_output1[13]=t12615*(-1.*t12488*t12896 + t12947 + t13038) + t12714*(t12425*t12896 + t12954 + t13045);
  p_output1[14]=t12615*(t12456*t12896 + t12998) + t12704*(-1.*t12203*t12876 - 1.*t12425*t12896 + t13004);
  p_output1[15]=t12479*(t12379*t12858 - 1.*t12391*t12863);
  p_output1[16]=t12203*(-1.*t12203*t12391*t12858 - 1.*t12203*t12379*t12863 + t13038) + t12479*(t12388*t12391*t12858 + t12379*t12388*t12863 + t13045);
  p_output1[17]=t12203*(-1.*t12379*t12858 + t12391*t12863);
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
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t12388 - 0.15121*t12479;
  p_output1[46]=-0.15121 + t12203*(-1.*t12203*t12839 + t13038) + t12479*(t12388*t12839 + t13045);
  p_output1[47]=0;
  p_output1[48]=0.28121*t12201 + t12201*t12832 - 0.305*t12201*t1945;
  p_output1[49]=0;
  p_output1[50]=0.305*Power(t12201,2) + 0.28121*t1945 + t12832*t1945;
  p_output1[51]=0;
  p_output1[52]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
