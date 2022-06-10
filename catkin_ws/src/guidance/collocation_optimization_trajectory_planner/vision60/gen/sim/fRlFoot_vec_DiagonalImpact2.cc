/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:37 GMT+02:00
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
  double t4598;
  double t1239;
  double t4627;
  double t4702;
  double t4673;
  double t4682;
  double t4706;
  double t1226;
  double t4700;
  double t4721;
  double t4745;
  double t4629;
  double t4761;
  double t4765;
  double t4770;
  double t4754;
  double t5730;
  double t5745;
  double t4772;
  double t4773;
  double t4828;
  double t4954;
  double t4955;
  double t4958;
  double t4960;
  double t5408;
  double t5676;
  double t5748;
  double t5783;
  double t5799;
  double t5829;
  double t5833;
  double t5835;
  double t5840;
  double t5841;
  double t5846;
  double t5862;
  double t5866;
  double t5868;
  double t5872;
  double t5878;
  double t5879;
  double t4751;
  double t4829;
  double t4915;
  double t6314;
  double t6324;
  double t7347;
  double t10941;
  double t10942;
  double t10944;
  double t10945;
  double t10947;
  double t11040;
  double t4375;
  double t4633;
  double t4670;
  double t6307;
  double t10936;
  double t11052;
  double t11053;
  double t11069;
  double t11071;
  double t11073;
  double t11077;
  double t11078;
  double t11079;
  double t6229;
  double t6233;
  double t6263;
  double t6266;
  double t11055;
  double t11063;
  double t11085;
  double t11086;
  double t11088;
  double t11090;
  double t11091;
  double t11092;
  double t11068;
  double t11081;
  double t11083;
  double t11089;
  double t11094;
  double t11095;
  double t11100;
  double t11101;
  double t11105;
  double t4919;
  double t5684;
  double t5689;
  double t11084;
  double t11110;
  double t11123;
  double t11131;
  double t11146;
  double t11155;
  double t11201;
  double t11205;
  double t11163;
  double t11167;
  double t11190;
  double t11178;
  double t11251;
  double t11243;
  t4598 = Cos(var1[9]);
  t1239 = Sin(var1[4]);
  t4627 = Cos(var1[4]);
  t4702 = Cos(var1[10]);
  t4673 = Cos(var1[11]);
  t4682 = Sin(var1[10]);
  t4706 = Sin(var1[11]);
  t1226 = Sin(var1[9]);
  t4700 = t4673*t4682;
  t4721 = -1.*t4702*t4706;
  t4745 = t4700 + t4721;
  t4629 = Sin(var1[5]);
  t4761 = t4702*t4673;
  t4765 = t4682*t4706;
  t4770 = t4761 + t4765;
  t4754 = Cos(var1[5]);
  t5730 = Cos(var1[3]);
  t5745 = Sin(var1[3]);
  t4772 = t4754*t4770;
  t4773 = t1226*t4745*t4629;
  t4828 = t4772 + t4773;
  t4954 = -1.*t4673*t4682;
  t4955 = t4702*t4706;
  t4958 = t4954 + t4955;
  t4960 = t4754*t4958;
  t5408 = t1226*t4770*t4629;
  t5676 = t4960 + t5408;
  t5748 = t4627*t1226;
  t5783 = t4598*t1239*t4629;
  t5799 = t5748 + t5783;
  t5829 = -1.*t4754*t1226*t4745;
  t5833 = t4770*t4629;
  t5835 = t5829 + t5833;
  t5840 = t4598*t4627*t4745;
  t5841 = -1.*t1239*t4828;
  t5846 = t5840 + t5841;
  t5862 = -1.*t4754*t1226*t4770;
  t5866 = t4958*t4629;
  t5868 = t5862 + t5866;
  t5872 = t4598*t4627*t4770;
  t5878 = -1.*t1239*t5676;
  t5879 = t5872 + t5878;
  t4751 = t4598*t4745*t1239;
  t4829 = t4627*t4828;
  t4915 = t4751 + t4829;
  t6314 = -0.0641*t4673;
  t6324 = -0.28*t4706;
  t7347 = t6314 + t6324;
  t10941 = -1.*t4673;
  t10942 = 1. + t10941;
  t10944 = -0.575*t10942;
  t10945 = -0.295*t4673;
  t10947 = -0.0641*t4706;
  t11040 = t10944 + t10945 + t10947;
  t4375 = t1226*t1239;
  t4633 = -1.*t4598*t4627*t4629;
  t4670 = t4375 + t4633;
  t6307 = 0.325*t4682;
  t10936 = t4702*t7347;
  t11052 = t4682*t11040;
  t11053 = t6307 + t10936 + t11052;
  t11069 = -1.*t4702;
  t11071 = 1. + t11069;
  t11073 = -0.325*t11071;
  t11077 = -1.*t4682*t7347;
  t11078 = t4702*t11040;
  t11079 = t11073 + t11077 + t11078;
  t6229 = -1.*t4598;
  t6233 = 1. + t6229;
  t6263 = 0.1575*t6233;
  t6266 = 0.2255*t4598;
  t11055 = -1.*t1226*t11053;
  t11063 = t6263 + t6266 + t11055;
  t11085 = 0.068*t1226;
  t11086 = t4598*t11053;
  t11088 = t11085 + t11086;
  t11090 = t4754*t11079;
  t11091 = -1.*t11063*t4629;
  t11092 = t11090 + t11091;
  t11068 = t4754*t11063;
  t11081 = t11079*t4629;
  t11083 = t11068 + t11081;
  t11089 = t11088*t1239;
  t11094 = t4627*t11092;
  t11095 = t11089 + t11094;
  t11100 = t4627*t11088;
  t11101 = -1.*t1239*t11092;
  t11105 = t11100 + t11101;
  t4919 = t4598*t4770*t1239;
  t5684 = t4627*t5676;
  t5689 = t4919 + t5684;
  t11084 = t4598*t4754*t11083;
  t11110 = -1.*t11083*t5835;
  t11123 = t11083*t5835;
  t11131 = -1.*t11083*t5868;
  t11146 = -1.*t4598*t4754*t11083;
  t11155 = t11083*t5868;
  t11201 = -1.*t1226*t11088;
  t11205 = t4598*t11088*t4770;
  t11163 = t1226*t11088;
  t11167 = -1.*t4598*t11088*t4745;
  t11190 = -1.*t4598*t11088*t4770;
  t11178 = t4598*t11088*t4745;
  t11251 = t11079*t4770;
  t11243 = -1.*t11079*t4958;
  p_output1[0]=t4915*var2[0] + t4670*var2[1] + t5689*var2[2];
  p_output1[1]=(t5730*t5835 - 1.*t5745*t5846)*var2[0] + (t4598*t4754*t5730 - 1.*t5745*t5799)*var2[1] + (t5730*t5868 - 1.*t5745*t5879)*var2[2];
  p_output1[2]=(t5745*t5835 + t5730*t5846)*var2[0] + (t4598*t4754*t5745 + t5730*t5799)*var2[1] + (t5745*t5868 + t5730*t5879)*var2[2];
  p_output1[3]=(t5689*(t11146 - 1.*t11095*t4670 - 1.*t11105*t5799) + t4670*(t11155 + t11095*t5689 + t11105*t5879))*var2[0] + (t5689*(t11123 + t11095*t4915 + t11105*t5846) + t4915*(t11131 - 1.*t11095*t5689 - 1.*t11105*t5879))*var2[1] + (t4915*(t11084 + t11095*t4670 + t11105*t5799) + t4670*(t11110 - 1.*t11095*t4915 - 1.*t11105*t5846))*var2[2];
  p_output1[4]=(t4598*t4754*(t11155 + t11205 + t11092*t5676) + (t11146 + t11201 + t11092*t4598*t4629)*t5868)*var2[0] + ((t11131 + t11190 - 1.*t11092*t5676)*t5835 + (t11123 + t11178 + t11092*t4828)*t5868)*var2[1] + (t4598*t4754*(t11110 + t11167 - 1.*t11092*t4828) + (t11084 + t11163 - 1.*t11092*t4598*t4629)*t5835)*var2[2];
  p_output1[5]=(t4598*(t11201 - 1.*t11063*t4598)*t4770 + t1226*(t11205 - 1.*t11063*t1226*t4770 + t11079*t4958))*var2[0] + (t4598*(t11178 + t11251 - 1.*t11063*t1226*t4745)*t4770 + t4598*t4745*(t11190 + t11243 + t11063*t1226*t4770))*var2[1] + (t4598*(t11163 + t11063*t4598)*t4745 + t1226*(t11167 + t11063*t1226*t4745 - 1.*t11079*t4770))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t4745 - 0.2255*t4958)*var2[0] + (t4770*(t11243 - 1.*t11053*t4770) + (t11251 + t11053*t4745)*t4958)*var2[1] + 0.068*t4770*var2[2];
  p_output1[10]=(-0.325*t4706 - 1.*t11040*t4706 - 1.*t4673*t7347)*var2[0] + (0.325*t4673 + t11040*t4673 - 1.*t4706*t7347)*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
