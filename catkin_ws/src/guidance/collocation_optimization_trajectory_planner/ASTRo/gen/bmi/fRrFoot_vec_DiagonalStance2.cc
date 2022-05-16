/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:33 GMT+02:00
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
  double t4957;
  double t45611;
  double t24727;
  double t45662;
  double t45692;
  double t45659;
  double t45697;
  double t42177;
  double t45761;
  double t45763;
  double t45776;
  double t45646;
  double t45718;
  double t45813;
  double t45814;
  double t45815;
  double t44675;
  double t45648;
  double t45650;
  double t45953;
  double t45951;
  double t45677;
  double t45704;
  double t45716;
  double t45781;
  double t45793;
  double t45794;
  double t45817;
  double t45820;
  double t45821;
  double t45954;
  double t45955;
  double t45956;
  double t45966;
  double t45970;
  double t45972;
  double t45976;
  double t45977;
  double t45979;
  double t45990;
  double t45992;
  double t45993;
  double t45999;
  double t46000;
  double t46001;
  double t45743;
  double t45795;
  double t45796;
  double t46036;
  double t46037;
  double t46039;
  double t46043;
  double t46044;
  double t46045;
  double t46046;
  double t46049;
  double t46050;
  double t46051;
  double t46052;
  double t46053;
  double t46057;
  double t46058;
  double t46065;
  double t46066;
  double t46040;
  double t46041;
  double t46059;
  double t46060;
  double t46081;
  double t46085;
  double t46086;
  double t46088;
  double t46092;
  double t46095;
  double t46096;
  double t46061;
  double t46071;
  double t46076;
  double t46090;
  double t46097;
  double t46107;
  double t46117;
  double t46118;
  double t46121;
  double t45806;
  double t45929;
  double t45936;
  double t46077;
  double t46140;
  double t46161;
  double t46174;
  double t46194;
  double t46205;
  double t46278;
  double t46284;
  t4957 = Cos(var1[4]);
  t45611 = Cos(var1[15]);
  t24727 = Cos(var1[5]);
  t45662 = Cos(var1[17]);
  t45692 = Sin(var1[16]);
  t45659 = Cos(var1[16]);
  t45697 = Sin(var1[17]);
  t42177 = Sin(var1[15]);
  t45761 = -1.*t45662*t45692;
  t45763 = t45659*t45697;
  t45776 = t45761 + t45763;
  t45646 = Sin(var1[5]);
  t45718 = Sin(var1[4]);
  t45813 = -1.*t45659*t45662;
  t45814 = -1.*t45692*t45697;
  t45815 = t45813 + t45814;
  t44675 = t24727*t42177;
  t45648 = t45611*t45646;
  t45650 = t44675 + t45648;
  t45953 = Cos(var1[3]);
  t45951 = Sin(var1[3]);
  t45677 = t45659*t45662;
  t45704 = t45692*t45697;
  t45716 = t45677 + t45704;
  t45781 = t45611*t24727*t45776;
  t45793 = -1.*t42177*t45776*t45646;
  t45794 = t45781 + t45793;
  t45817 = t45611*t24727*t45815;
  t45820 = -1.*t42177*t45815*t45646;
  t45821 = t45817 + t45820;
  t45954 = -1.*t45611*t24727;
  t45955 = t42177*t45646;
  t45956 = t45954 + t45955;
  t45966 = t24727*t42177*t45776;
  t45970 = t45611*t45776*t45646;
  t45972 = t45966 + t45970;
  t45976 = t4957*t45716;
  t45977 = -1.*t45718*t45794;
  t45979 = t45976 + t45977;
  t45990 = t24727*t42177*t45815;
  t45992 = t45611*t45815*t45646;
  t45993 = t45990 + t45992;
  t45999 = t4957*t45776;
  t46000 = -1.*t45718*t45821;
  t46001 = t45999 + t46000;
  t45743 = t45716*t45718;
  t45795 = t4957*t45794;
  t45796 = t45743 + t45795;
  t46036 = -1.*t45611;
  t46037 = 1. + t46036;
  t46039 = -0.15121*t46037;
  t46043 = -1.*t45659;
  t46044 = 1. + t46043;
  t46045 = -0.28121*t46044;
  t46046 = -1.*t45662;
  t46049 = 1. + t46046;
  t46050 = -0.50321*t46049;
  t46051 = -0.23321*t45662;
  t46052 = t46050 + t46051;
  t46053 = t45659*t46052;
  t46057 = 0.27*t45692*t45697;
  t46058 = t46045 + t46053 + t46057;
  t46065 = t45611*t46058;
  t46066 = t46039 + t46065;
  t46040 = -0.15121*t45611;
  t46041 = 0.15121*t42177;
  t46059 = t42177*t46058;
  t46060 = t46039 + t46040 + t46041 + t46059;
  t46081 = 0.28121*t45692;
  t46085 = t46052*t45692;
  t46086 = -0.27*t45659*t45697;
  t46088 = t46081 + t46085 + t46086;
  t46092 = t24727*t46066;
  t46095 = -1.*t46060*t45646;
  t46096 = t46092 + t46095;
  t46061 = t24727*t46060;
  t46071 = t46066*t45646;
  t46076 = t46061 + t46071;
  t46090 = t46088*t45718;
  t46097 = t4957*t46096;
  t46107 = t46090 + t46097;
  t46117 = t4957*t46088;
  t46118 = -1.*t45718*t46096;
  t46121 = t46117 + t46118;
  t45806 = t45776*t45718;
  t45929 = t4957*t45821;
  t45936 = t45806 + t45929;
  t46077 = -1.*t45956*t46076;
  t46140 = t45972*t46076;
  t46161 = t45956*t46076;
  t46174 = -1.*t45993*t46076;
  t46194 = -1.*t45972*t46076;
  t46205 = t45993*t46076;
  t46278 = -1.*t46088*t45716;
  t46284 = t46088*t45776;
  p_output1[0]=t45936*var2[0] + t45650*t4957*var2[1] + t45796*var2[2];
  p_output1[1]=(t45953*t45993 - 1.*t45951*t46001)*var2[0] + (t45650*t45718*t45951 + t45953*t45956)*var2[1] + (t45953*t45972 - 1.*t45951*t45979)*var2[2];
  p_output1[2]=(t45951*t45993 + t45953*t46001)*var2[0] + (-1.*t45650*t45718*t45953 + t45951*t45956)*var2[1] + (t45951*t45972 + t45953*t45979)*var2[2];
  p_output1[3]=(t45650*(t45796*t46107 + t45979*t46121 + t46140)*t4957 + t45796*(t46077 + t45650*t45718*t46121 - 1.*t45650*t46107*t4957))*var2[0] + (t45936*(-1.*t45796*t46107 - 1.*t45979*t46121 + t46194) + t45796*(t45936*t46107 + t46001*t46121 + t46205))*var2[1] + (t45650*(-1.*t45936*t46107 - 1.*t46001*t46121 + t46174)*t4957 + t45936*(-1.*t45650*t45718*t46121 + t46161 + t45650*t46107*t4957))*var2[2];
  p_output1[4]=(t45972*(t46077 - 1.*t45650*t46096) + t45956*(t45716*t46088 + t45794*t46096 + t46140))*var2[0] + (t45993*(-1.*t45794*t46096 + t46194 + t46278) + t45972*(t45821*t46096 + t46205 + t46284))*var2[1] + (t45993*(t45650*t46096 + t46161) + t45956*(-1.*t45776*t46088 - 1.*t45821*t46096 + t46174))*var2[2];
  p_output1[5]=t45716*(t45611*t46060 - 1.*t42177*t46066)*var2[0] + (t45776*(-1.*t42177*t45776*t46060 - 1.*t45611*t45776*t46066 + t46278) + t45716*(t42177*t45815*t46060 + t45611*t45815*t46066 + t46284))*var2[1] + t45776*(-1.*t45611*t46060 + t42177*t46066)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t45716 - 0.15121*t45815)*var2[0] + (-0.15121 + t45776*(-1.*t45776*t46058 + t46278) + t45716*(t45815*t46058 + t46284))*var2[1];
  p_output1[16]=(0.28121*t45697 - 0.27*t45662*t45697 + t45697*t46052)*var2[0] + (0.28121*t45662 + 0.27*Power(t45697,2) + t45662*t46052)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
