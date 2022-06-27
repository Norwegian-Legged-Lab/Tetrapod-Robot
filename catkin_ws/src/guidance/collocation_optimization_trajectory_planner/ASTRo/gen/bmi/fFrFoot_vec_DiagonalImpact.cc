/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:37 GMT+02:00
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
  double t5990;
  double t5998;
  double t5995;
  double t6067;
  double t6072;
  double t6062;
  double t6073;
  double t5996;
  double t6078;
  double t6079;
  double t6080;
  double t5999;
  double t6076;
  double t6071;
  double t6074;
  double t6075;
  double t5997;
  double t6056;
  double t6060;
  double t6100;
  double t6098;
  double t6081;
  double t6082;
  double t6083;
  double t6087;
  double t6088;
  double t6089;
  double t6091;
  double t6092;
  double t6093;
  double t6102;
  double t6103;
  double t6104;
  double t6109;
  double t6110;
  double t6111;
  double t6114;
  double t6115;
  double t6117;
  double t6121;
  double t6122;
  double t6123;
  double t6125;
  double t6126;
  double t6127;
  double t6077;
  double t6084;
  double t6085;
  double t6146;
  double t6147;
  double t6152;
  double t6153;
  double t6154;
  double t6155;
  double t6156;
  double t6157;
  double t6158;
  double t6159;
  double t6160;
  double t6161;
  double t6162;
  double t6166;
  double t6167;
  double t6168;
  double t6149;
  double t6150;
  double t6151;
  double t6163;
  double t6164;
  double t6172;
  double t6173;
  double t6174;
  double t6175;
  double t6177;
  double t6178;
  double t6179;
  double t6165;
  double t6169;
  double t6170;
  double t6176;
  double t6180;
  double t6181;
  double t6183;
  double t6184;
  double t6185;
  double t6090;
  double t6094;
  double t6095;
  double t6171;
  double t6189;
  double t6196;
  double t6201;
  double t6208;
  double t6213;
  double t6239;
  double t6243;
  t5990 = Cos(var1[4]);
  t5998 = Cos(var1[12]);
  t5995 = Cos(var1[5]);
  t6067 = Cos(var1[14]);
  t6072 = Sin(var1[13]);
  t6062 = Cos(var1[13]);
  t6073 = Sin(var1[14]);
  t5996 = Sin(var1[12]);
  t6078 = t6067*t6072;
  t6079 = -1.*t6062*t6073;
  t6080 = t6078 + t6079;
  t5999 = Sin(var1[5]);
  t6076 = Sin(var1[4]);
  t6071 = t6062*t6067;
  t6074 = t6072*t6073;
  t6075 = t6071 + t6074;
  t5997 = -1.*t5995*t5996;
  t6056 = -1.*t5998*t5999;
  t6060 = t5997 + t6056;
  t6100 = Cos(var1[3]);
  t6098 = Sin(var1[3]);
  t6081 = t5998*t5995*t6080;
  t6082 = -1.*t5996*t6080*t5999;
  t6083 = t6081 + t6082;
  t6087 = -1.*t6067*t6072;
  t6088 = t6062*t6073;
  t6089 = t6087 + t6088;
  t6091 = t5998*t5995*t6075;
  t6092 = -1.*t5996*t6075*t5999;
  t6093 = t6091 + t6092;
  t6102 = t5998*t5995;
  t6103 = -1.*t5996*t5999;
  t6104 = t6102 + t6103;
  t6109 = t5995*t5996*t6080;
  t6110 = t5998*t6080*t5999;
  t6111 = t6109 + t6110;
  t6114 = t5990*t6075;
  t6115 = -1.*t6076*t6083;
  t6117 = t6114 + t6115;
  t6121 = t5995*t5996*t6075;
  t6122 = t5998*t6075*t5999;
  t6123 = t6121 + t6122;
  t6125 = t5990*t6089;
  t6126 = -1.*t6076*t6093;
  t6127 = t6125 + t6126;
  t6077 = t6075*t6076;
  t6084 = t5990*t6083;
  t6085 = t6077 + t6084;
  t6146 = -1.*t5998;
  t6147 = 1. + t6146;
  t6152 = -1.*t6062;
  t6153 = 1. + t6152;
  t6154 = 0.28121*t6153;
  t6155 = -1.*t6067;
  t6156 = 1. + t6155;
  t6157 = 0.50321*t6156;
  t6158 = 0.19821*t6067;
  t6159 = t6157 + t6158;
  t6160 = t6062*t6159;
  t6161 = -0.305*t6072*t6073;
  t6162 = t6154 + t6160 + t6161;
  t6166 = 0.15121*t6147;
  t6167 = t5998*t6162;
  t6168 = t6166 + t6167;
  t6149 = -0.15121*t6147;
  t6150 = -0.15121*t5998;
  t6151 = -0.15121*t5996;
  t6163 = t5996*t6162;
  t6164 = t6149 + t6150 + t6151 + t6163;
  t6172 = 0.28121*t6072;
  t6173 = -1.*t6159*t6072;
  t6174 = -0.305*t6062*t6073;
  t6175 = t6172 + t6173 + t6174;
  t6177 = t5995*t6168;
  t6178 = -1.*t6164*t5999;
  t6179 = t6177 + t6178;
  t6165 = t5995*t6164;
  t6169 = t6168*t5999;
  t6170 = t6165 + t6169;
  t6176 = t6175*t6076;
  t6180 = t5990*t6179;
  t6181 = t6176 + t6180;
  t6183 = t5990*t6175;
  t6184 = -1.*t6076*t6179;
  t6185 = t6183 + t6184;
  t6090 = t6089*t6076;
  t6094 = t5990*t6093;
  t6095 = t6090 + t6094;
  t6171 = -1.*t6104*t6170;
  t6189 = t6111*t6170;
  t6196 = t6104*t6170;
  t6201 = -1.*t6123*t6170;
  t6208 = -1.*t6111*t6170;
  t6213 = t6123*t6170;
  t6239 = -1.*t6175*t6075;
  t6243 = t6175*t6089;
  p_output1[0]=t6095*var2[0] + t5990*t6060*var2[1] + t6085*var2[2];
  p_output1[1]=(t6100*t6123 - 1.*t6098*t6127)*var2[0] + (t6060*t6076*t6098 + t6100*t6104)*var2[1] + (t6100*t6111 - 1.*t6098*t6117)*var2[2];
  p_output1[2]=(t6098*t6123 + t6100*t6127)*var2[0] + (-1.*t6060*t6076*t6100 + t6098*t6104)*var2[1] + (t6098*t6111 + t6100*t6117)*var2[2];
  p_output1[3]=(t6085*(t6171 - 1.*t5990*t6060*t6181 + t6060*t6076*t6185) + t5990*t6060*(t6085*t6181 + t6117*t6185 + t6189))*var2[0] + (t6095*(-1.*t6085*t6181 - 1.*t6117*t6185 + t6208) + t6085*(t6095*t6181 + t6127*t6185 + t6213))*var2[1] + (t6095*(t5990*t6060*t6181 - 1.*t6060*t6076*t6185 + t6196) + t5990*t6060*(-1.*t6095*t6181 - 1.*t6127*t6185 + t6201))*var2[2];
  p_output1[4]=(t6111*(t6171 - 1.*t6060*t6179) + t6104*(t6075*t6175 + t6083*t6179 + t6189))*var2[0] + (t6123*(-1.*t6083*t6179 + t6208 + t6239) + t6111*(t6093*t6179 + t6213 + t6243))*var2[1] + (t6123*(t6060*t6179 + t6196) + t6104*(-1.*t6089*t6175 - 1.*t6093*t6179 + t6201))*var2[2];
  p_output1[5]=t6075*(-1.*t5998*t6164 + t5996*t6168)*var2[0] + (t6089*(-1.*t5996*t6080*t6164 - 1.*t5998*t6080*t6168 + t6239) + t6075*(t5996*t6075*t6164 + t5998*t6075*t6168 + t6243))*var2[1] + t6089*(t5998*t6164 - 1.*t5996*t6168)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t6089*(-1.*t6080*t6162 + t6239) + t6075*(t6075*t6162 + t6243))*var2[1] + (-0.15121*t6080 - 0.15121*t6089)*var2[2];
  p_output1[13]=(0.28121*t6073 - 0.305*t6067*t6073 - 1.*t6073*t6159)*var2[0] + (0.28121*t6067 + 0.305*Power(t6073,2) - 1.*t6067*t6159)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
