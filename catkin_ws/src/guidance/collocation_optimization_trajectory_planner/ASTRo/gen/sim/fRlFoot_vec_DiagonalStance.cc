/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:27 GMT+02:00
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
  double t7961;
  double t11316;
  double t7999;
  double t11413;
  double t11424;
  double t11408;
  double t11425;
  double t10786;
  double t11515;
  double t11520;
  double t11521;
  double t11371;
  double t11510;
  double t11541;
  double t11542;
  double t11544;
  double t11213;
  double t11379;
  double t11394;
  double t11658;
  double t11653;
  double t11417;
  double t11426;
  double t11502;
  double t11522;
  double t11526;
  double t11528;
  double t11545;
  double t11547;
  double t11625;
  double t11659;
  double t11661;
  double t11670;
  double t11690;
  double t11692;
  double t11695;
  double t11704;
  double t11706;
  double t11713;
  double t11747;
  double t11752;
  double t11754;
  double t11763;
  double t11764;
  double t11768;
  double t11514;
  double t11530;
  double t11536;
  double t11808;
  double t11810;
  double t11821;
  double t11823;
  double t11827;
  double t11855;
  double t11863;
  double t11865;
  double t11867;
  double t11868;
  double t11882;
  double t11883;
  double t11890;
  double t11901;
  double t11903;
  double t11904;
  double t11814;
  double t11815;
  double t11819;
  double t11891;
  double t11892;
  double t11922;
  double t11923;
  double t11926;
  double t11927;
  double t11930;
  double t11936;
  double t11938;
  double t11893;
  double t11919;
  double t11920;
  double t11929;
  double t11939;
  double t11941;
  double t11950;
  double t11952;
  double t11953;
  double t11540;
  double t11645;
  double t11646;
  double t11921;
  double t11961;
  double t11972;
  double t11980;
  double t11996;
  double t12010;
  double t12055;
  double t12063;
  t7961 = Cos(var1[4]);
  t11316 = Cos(var1[9]);
  t7999 = Cos(var1[5]);
  t11413 = Cos(var1[11]);
  t11424 = Sin(var1[10]);
  t11408 = Cos(var1[10]);
  t11425 = Sin(var1[11]);
  t10786 = Sin(var1[9]);
  t11515 = -1.*t11413*t11424;
  t11520 = t11408*t11425;
  t11521 = t11515 + t11520;
  t11371 = Sin(var1[5]);
  t11510 = Sin(var1[4]);
  t11541 = -1.*t11408*t11413;
  t11542 = -1.*t11424*t11425;
  t11544 = t11541 + t11542;
  t11213 = t7999*t10786;
  t11379 = t11316*t11371;
  t11394 = t11213 + t11379;
  t11658 = Cos(var1[3]);
  t11653 = Sin(var1[3]);
  t11417 = t11408*t11413;
  t11426 = t11424*t11425;
  t11502 = t11417 + t11426;
  t11522 = t11316*t7999*t11521;
  t11526 = -1.*t10786*t11521*t11371;
  t11528 = t11522 + t11526;
  t11545 = t11316*t7999*t11544;
  t11547 = -1.*t10786*t11544*t11371;
  t11625 = t11545 + t11547;
  t11659 = -1.*t11316*t7999;
  t11661 = t10786*t11371;
  t11670 = t11659 + t11661;
  t11690 = t7999*t10786*t11521;
  t11692 = t11316*t11521*t11371;
  t11695 = t11690 + t11692;
  t11704 = t7961*t11502;
  t11706 = -1.*t11510*t11528;
  t11713 = t11704 + t11706;
  t11747 = t7999*t10786*t11544;
  t11752 = t11316*t11544*t11371;
  t11754 = t11747 + t11752;
  t11763 = t7961*t11521;
  t11764 = -1.*t11510*t11625;
  t11768 = t11763 + t11764;
  t11514 = t11502*t11510;
  t11530 = t7961*t11528;
  t11536 = t11514 + t11530;
  t11808 = -1.*t11316;
  t11810 = 1. + t11808;
  t11821 = -1.*t11408;
  t11823 = 1. + t11821;
  t11827 = -0.28121*t11823;
  t11855 = -1.*t11413;
  t11863 = 1. + t11855;
  t11865 = -0.50321*t11863;
  t11867 = -0.19821*t11413;
  t11868 = t11865 + t11867;
  t11882 = t11408*t11868;
  t11883 = 0.305*t11424*t11425;
  t11890 = t11827 + t11882 + t11883;
  t11901 = -0.15121*t11810;
  t11903 = t11316*t11890;
  t11904 = t11901 + t11903;
  t11814 = 0.15121*t11810;
  t11815 = 0.15121*t11316;
  t11819 = 0.15121*t10786;
  t11891 = t10786*t11890;
  t11892 = t11814 + t11815 + t11819 + t11891;
  t11922 = 0.28121*t11424;
  t11923 = t11868*t11424;
  t11926 = -0.305*t11408*t11425;
  t11927 = t11922 + t11923 + t11926;
  t11930 = t7999*t11904;
  t11936 = -1.*t11892*t11371;
  t11938 = t11930 + t11936;
  t11893 = t7999*t11892;
  t11919 = t11904*t11371;
  t11920 = t11893 + t11919;
  t11929 = t11927*t11510;
  t11939 = t7961*t11938;
  t11941 = t11929 + t11939;
  t11950 = t7961*t11927;
  t11952 = -1.*t11510*t11938;
  t11953 = t11950 + t11952;
  t11540 = t11521*t11510;
  t11645 = t7961*t11625;
  t11646 = t11540 + t11645;
  t11921 = -1.*t11670*t11920;
  t11961 = t11695*t11920;
  t11972 = t11670*t11920;
  t11980 = -1.*t11754*t11920;
  t11996 = -1.*t11695*t11920;
  t12010 = t11754*t11920;
  t12055 = -1.*t11927*t11502;
  t12063 = t11927*t11521;
  p_output1[0]=t11646*var2[0] + t11394*t7961*var2[1] + t11536*var2[2];
  p_output1[1]=(t11658*t11754 - 1.*t11653*t11768)*var2[0] + (t11394*t11510*t11653 + t11658*t11670)*var2[1] + (t11658*t11695 - 1.*t11653*t11713)*var2[2];
  p_output1[2]=(t11653*t11754 + t11658*t11768)*var2[0] + (-1.*t11394*t11510*t11658 + t11653*t11670)*var2[1] + (t11653*t11695 + t11658*t11713)*var2[2];
  p_output1[3]=(t11394*(t11536*t11941 + t11713*t11953 + t11961)*t7961 + t11536*(t11921 + t11394*t11510*t11953 - 1.*t11394*t11941*t7961))*var2[0] + (t11646*(-1.*t11536*t11941 - 1.*t11713*t11953 + t11996) + t11536*(t11646*t11941 + t11768*t11953 + t12010))*var2[1] + (t11394*(-1.*t11646*t11941 - 1.*t11768*t11953 + t11980)*t7961 + t11646*(-1.*t11394*t11510*t11953 + t11972 + t11394*t11941*t7961))*var2[2];
  p_output1[4]=(t11695*(t11921 - 1.*t11394*t11938) + t11670*(t11502*t11927 + t11528*t11938 + t11961))*var2[0] + (t11754*(-1.*t11528*t11938 + t11996 + t12055) + t11695*(t11625*t11938 + t12010 + t12063))*var2[1] + (t11754*(t11394*t11938 + t11972) + t11670*(-1.*t11521*t11927 - 1.*t11625*t11938 + t11980))*var2[2];
  p_output1[5]=t11502*(t11316*t11892 - 1.*t10786*t11904)*var2[0] + (t11521*(-1.*t10786*t11521*t11892 - 1.*t11316*t11521*t11904 + t12055) + t11502*(t10786*t11544*t11892 + t11316*t11544*t11904 + t12063))*var2[1] + t11521*(-1.*t11316*t11892 + t10786*t11904)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t11502 + 0.15121*t11544)*var2[0] + (-0.15121 + t11521*(-1.*t11521*t11890 + t12055) + t11502*(t11544*t11890 + t12063))*var2[1];
  p_output1[10]=(0.28121*t11425 - 0.305*t11413*t11425 + t11425*t11868)*var2[0] + (0.28121*t11413 + 0.305*Power(t11425,2) + t11413*t11868)*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
