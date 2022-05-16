/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:53:00 GMT+02:00
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
  double t54313;
  double t27204;
  double t32579;
  double t54874;
  double t55097;
  double t55102;
  double t55103;
  double t55035;
  double t55109;
  double t54992;
  double t55113;
  double t54991;
  double t44821;
  double t54875;
  double t54984;
  double t54989;
  double t55104;
  double t55114;
  double t55115;
  double t55123;
  double t55119;
  double t55120;
  double t55121;
  double t55118;
  double t55124;
  double t55125;
  double t55126;
  double t55147;
  double t55148;
  double t55153;
  double t55154;
  double t55155;
  double t55157;
  double t55158;
  double t55159;
  double t55160;
  double t55161;
  double t55163;
  double t55164;
  double t55165;
  double t55169;
  double t55170;
  double t55171;
  double t55149;
  double t55150;
  double t55151;
  double t55166;
  double t55167;
  double t55176;
  double t55177;
  double t55178;
  double t55179;
  double t55180;
  double t55181;
  double t55182;
  double t55184;
  double t55186;
  double t55187;
  double t55168;
  double t55172;
  double t55173;
  double t55132;
  double t55133;
  double t55134;
  double t55135;
  double t55136;
  double t55137;
  double t55138;
  double t55139;
  double t55142;
  double t55183;
  double t55188;
  double t55189;
  double t55192;
  double t55193;
  double t55194;
  double t55198;
  double t55199;
  double t55200;
  double t55143;
  double t55144;
  double t55145;
  double t55175;
  double t55201;
  double t54990;
  double t55116;
  double t55117;
  double t55203;
  double t55204;
  double t55205;
  double t55237;
  double t55242;
  double t55249;
  double t55253;
  double t55280;
  double t55285;
  t54313 = Cos(var1[10]);
  t27204 = Cos(var1[11]);
  t32579 = Sin(var1[10]);
  t54874 = Sin(var1[11]);
  t55097 = -1.*t54313*t27204;
  t55102 = -1.*t32579*t54874;
  t55103 = t55097 + t55102;
  t55035 = Cos(var1[5]);
  t55109 = Sin(var1[9]);
  t54992 = Cos(var1[9]);
  t55113 = Sin(var1[5]);
  t54991 = Cos(var1[4]);
  t44821 = -1.*t27204*t32579;
  t54875 = t54313*t54874;
  t54984 = t44821 + t54875;
  t54989 = Sin(var1[4]);
  t55104 = t54992*t55035*t55103;
  t55114 = -1.*t55109*t55103*t55113;
  t55115 = t55104 + t55114;
  t55123 = Sin(var1[3]);
  t55119 = t55035*t55109*t55103;
  t55120 = t54992*t55103*t55113;
  t55121 = t55119 + t55120;
  t55118 = Cos(var1[3]);
  t55124 = t54991*t54984;
  t55125 = -1.*t54989*t55115;
  t55126 = t55124 + t55125;
  t55147 = -1.*t54992;
  t55148 = 1. + t55147;
  t55153 = -1.*t54313;
  t55154 = 1. + t55153;
  t55155 = -0.28121*t55154;
  t55157 = -1.*t27204;
  t55158 = 1. + t55157;
  t55159 = -0.50321*t55158;
  t55160 = -0.23321*t27204;
  t55161 = t55159 + t55160;
  t55163 = t54313*t55161;
  t55164 = 0.27*t32579*t54874;
  t55165 = t55155 + t55163 + t55164;
  t55169 = -0.15121*t55148;
  t55170 = t54992*t55165;
  t55171 = t55169 + t55170;
  t55149 = 0.15121*t55148;
  t55150 = 0.15121*t54992;
  t55151 = 0.15121*t55109;
  t55166 = t55109*t55165;
  t55167 = t55149 + t55150 + t55151 + t55166;
  t55176 = t55035*t55109;
  t55177 = t54992*t55113;
  t55178 = t55176 + t55177;
  t55179 = 0.28121*t32579;
  t55180 = t55161*t32579;
  t55181 = -0.27*t54313*t54874;
  t55182 = t55179 + t55180 + t55181;
  t55184 = t55035*t55171;
  t55186 = -1.*t55167*t55113;
  t55187 = t55184 + t55186;
  t55168 = t55035*t55167;
  t55172 = t55171*t55113;
  t55173 = t55168 + t55172;
  t55132 = t54313*t27204;
  t55133 = t32579*t54874;
  t55134 = t55132 + t55133;
  t55135 = t55134*t54989;
  t55136 = t54992*t55035*t54984;
  t55137 = -1.*t55109*t54984*t55113;
  t55138 = t55136 + t55137;
  t55139 = t54991*t55138;
  t55142 = t55135 + t55139;
  t55183 = t55182*t54989;
  t55188 = t54991*t55187;
  t55189 = t55183 + t55188;
  t55192 = t54991*t55182;
  t55193 = -1.*t54989*t55187;
  t55194 = t55192 + t55193;
  t55198 = t55035*t55109*t54984;
  t55199 = t54992*t54984*t55113;
  t55200 = t55198 + t55199;
  t55143 = -1.*t54992*t55035;
  t55144 = t55109*t55113;
  t55145 = t55143 + t55144;
  t55175 = -1.*t55145*t55173;
  t55201 = t55200*t55173;
  t54990 = t54984*t54989;
  t55116 = t54991*t55115;
  t55117 = t54990 + t55116;
  t55203 = t54991*t55134;
  t55204 = -1.*t54989*t55138;
  t55205 = t55203 + t55204;
  t55237 = -1.*t55200*t55173;
  t55242 = t55121*t55173;
  t55249 = -1.*t55182*t55134;
  t55253 = t55182*t54984;
  t55280 = t55145*t55173;
  t55285 = -1.*t55121*t55173;
  p_output1[0]=t55117;
  p_output1[1]=t55118*t55121 - 1.*t55123*t55126;
  p_output1[2]=t55121*t55123 + t55118*t55126;
  p_output1[3]=t55142*(t55175 - 1.*t54991*t55178*t55189 + t54989*t55178*t55194) + t54991*t55178*(t55142*t55189 + t55201 + t55194*t55205);
  p_output1[4]=(t55175 - 1.*t55178*t55187)*t55200 + t55145*(t55134*t55182 + t55138*t55187 + t55201);
  p_output1[5]=t55134*(t54992*t55167 - 1.*t55109*t55171);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t55103 + 0.15121*t55134;
  p_output1[10]=0.28121*t54874 - 0.27*t27204*t54874 + t54874*t55161;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t54991*t55178;
  p_output1[19]=t55118*t55145 + t54989*t55123*t55178;
  p_output1[20]=t55123*t55145 - 1.*t54989*t55118*t55178;
  p_output1[21]=t55117*(-1.*t55142*t55189 - 1.*t55194*t55205 + t55237) + t55142*(t55117*t55189 + t55126*t55194 + t55242);
  p_output1[22]=t55121*(-1.*t55138*t55187 + t55237 + t55249) + t55200*(t55115*t55187 + t55242 + t55253);
  p_output1[23]=t54984*(-1.*t54984*t55109*t55167 - 1.*t54984*t54992*t55171 + t55249) + t55134*(t55103*t55109*t55167 + t54992*t55103*t55171 + t55253);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t54984*(-1.*t54984*t55165 + t55249) + t55134*(t55103*t55165 + t55253);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t55142;
  p_output1[37]=t55118*t55200 - 1.*t55123*t55205;
  p_output1[38]=t55123*t55200 + t55118*t55205;
  p_output1[39]=t55117*(t54991*t55178*t55189 - 1.*t54989*t55178*t55194 + t55280) + t54991*t55178*(-1.*t55117*t55189 - 1.*t55126*t55194 + t55285);
  p_output1[40]=t55121*(t55178*t55187 + t55280) + t55145*(-1.*t54984*t55182 - 1.*t55115*t55187 + t55285);
  p_output1[41]=t54984*(-1.*t54992*t55167 + t55109*t55171);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t27204 + 0.27*Power(t54874,2) + t27204*t55161;
  p_output1[47]=-0.27;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
