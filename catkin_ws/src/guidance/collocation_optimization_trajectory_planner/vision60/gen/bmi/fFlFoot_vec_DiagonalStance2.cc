/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:37 GMT+02:00
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
  double t6832;
  double t6842;
  double t3218;
  double t6840;
  double t6843;
  double t7003;
  double t7009;
  double t7017;
  double t7021;
  double t7022;
  double t7023;
  double t7024;
  double t7035;
  double t7037;
  double t7039;
  double t7030;
  double t7061;
  double t7063;
  double t7029;
  double t7040;
  double t7044;
  double t7049;
  double t7050;
  double t7051;
  double t7052;
  double t7053;
  double t7054;
  double t7066;
  double t7067;
  double t7068;
  double t7073;
  double t7075;
  double t7076;
  double t7078;
  double t7079;
  double t7081;
  double t7086;
  double t7087;
  double t7088;
  double t7094;
  double t7096;
  double t7097;
  double t7131;
  double t7132;
  double t7133;
  double t7136;
  double t7137;
  double t7139;
  double t7140;
  double t7141;
  double t7142;
  double t7130;
  double t7135;
  double t7143;
  double t7144;
  double t6841;
  double t6844;
  double t6976;
  double t7122;
  double t7124;
  double t7125;
  double t7128;
  double t7145;
  double t7146;
  double t7147;
  double t7148;
  double t7149;
  double t7150;
  double t7151;
  double t7155;
  double t7156;
  double t7157;
  double t7158;
  double t7161;
  double t7166;
  double t7167;
  double t7027;
  double t7045;
  double t7046;
  double t7180;
  double t7181;
  double t7182;
  double t7176;
  double t7177;
  double t7178;
  double t7159;
  double t7173;
  double t7174;
  double t7048;
  double t7055;
  double t7056;
  double t7183;
  double t7192;
  double t7208;
  double t7222;
  double t7234;
  double t7237;
  double t7279;
  double t7282;
  double t7252;
  double t7257;
  double t7269;
  double t7265;
  double t7313;
  double t7308;
  t6832 = Cos(var1[6]);
  t6842 = Sin(var1[4]);
  t3218 = Cos(var1[4]);
  t6840 = Sin(var1[5]);
  t6843 = Sin(var1[6]);
  t7003 = Cos(var1[8]);
  t7009 = Sin(var1[7]);
  t7017 = t7003*t7009;
  t7021 = Cos(var1[7]);
  t7022 = Sin(var1[8]);
  t7023 = -1.*t7021*t7022;
  t7024 = t7017 + t7023;
  t7035 = t7021*t7003;
  t7037 = t7009*t7022;
  t7039 = t7035 + t7037;
  t7030 = Cos(var1[5]);
  t7061 = Cos(var1[3]);
  t7063 = Sin(var1[3]);
  t7029 = t6840*t6843*t7024;
  t7040 = t7030*t7039;
  t7044 = t7029 + t7040;
  t7049 = -1.*t7003*t7009;
  t7050 = t7021*t7022;
  t7051 = t7049 + t7050;
  t7052 = t7030*t7051;
  t7053 = t6840*t6843*t7039;
  t7054 = t7052 + t7053;
  t7066 = t6832*t6842*t6840;
  t7067 = t3218*t6843;
  t7068 = t7066 + t7067;
  t7073 = -1.*t7030*t6843*t7024;
  t7075 = t6840*t7039;
  t7076 = t7073 + t7075;
  t7078 = t3218*t6832*t7024;
  t7079 = -1.*t6842*t7044;
  t7081 = t7078 + t7079;
  t7086 = t6840*t7051;
  t7087 = -1.*t7030*t6843*t7039;
  t7088 = t7086 + t7087;
  t7094 = t3218*t6832*t7039;
  t7096 = -1.*t6842*t7054;
  t7097 = t7094 + t7096;
  t7131 = -0.0641*t7003;
  t7132 = -0.28*t7022;
  t7133 = t7131 + t7132;
  t7136 = -1.*t7003;
  t7137 = 1. + t7136;
  t7139 = 0.075*t7137;
  t7140 = 0.355*t7003;
  t7141 = -0.0641*t7022;
  t7142 = t7139 + t7140 + t7141;
  t7130 = -0.325*t7009;
  t7135 = t7021*t7133;
  t7143 = t7009*t7142;
  t7144 = t7130 + t7135 + t7143;
  t6841 = -1.*t3218*t6832*t6840;
  t6844 = t6842*t6843;
  t6976 = t6841 + t6844;
  t7122 = -1.*t6832;
  t7124 = 1. + t7122;
  t7125 = 0.1575*t7124;
  t7128 = 0.2255*t6832;
  t7145 = -1.*t6843*t7144;
  t7146 = t7125 + t7128 + t7145;
  t7147 = -1.*t6840*t7146;
  t7148 = -1.*t7021;
  t7149 = 1. + t7148;
  t7150 = 0.325*t7149;
  t7151 = -1.*t7009*t7133;
  t7155 = t7021*t7142;
  t7156 = t7150 + t7151 + t7155;
  t7157 = t7030*t7156;
  t7158 = t7147 + t7157;
  t7161 = 0.068*t6843;
  t7166 = t6832*t7144;
  t7167 = t7161 + t7166;
  t7027 = t6832*t6842*t7024;
  t7045 = t3218*t7044;
  t7046 = t7027 + t7045;
  t7180 = t7030*t7146;
  t7181 = t6840*t7156;
  t7182 = t7180 + t7181;
  t7176 = t3218*t7158;
  t7177 = t6842*t7167;
  t7178 = t7176 + t7177;
  t7159 = -1.*t6842*t7158;
  t7173 = t3218*t7167;
  t7174 = t7159 + t7173;
  t7048 = t6832*t6842*t7039;
  t7055 = t3218*t7054;
  t7056 = t7048 + t7055;
  t7183 = t7030*t6832*t7182;
  t7192 = -1.*t7182*t7076;
  t7208 = t7182*t7076;
  t7222 = -1.*t7182*t7088;
  t7234 = -1.*t7030*t6832*t7182;
  t7237 = t7182*t7088;
  t7279 = -1.*t6843*t7167;
  t7282 = t6832*t7167*t7039;
  t7252 = t6843*t7167;
  t7257 = -1.*t6832*t7167*t7024;
  t7269 = -1.*t6832*t7167*t7039;
  t7265 = t6832*t7167*t7024;
  t7313 = t7156*t7039;
  t7308 = -1.*t7156*t7051;
  p_output1[0]=t7046*var2[0] + t6976*var2[1] + t7056*var2[2];
  p_output1[1]=(t7061*t7076 - 1.*t7063*t7081)*var2[0] + (t6832*t7030*t7061 - 1.*t7063*t7068)*var2[1] + (t7061*t7088 - 1.*t7063*t7097)*var2[2];
  p_output1[2]=(t7063*t7076 + t7061*t7081)*var2[0] + (t6832*t7030*t7063 + t7061*t7068)*var2[1] + (t7063*t7088 + t7061*t7097)*var2[2];
  p_output1[3]=(t7056*(-1.*t7068*t7174 - 1.*t6976*t7178 + t7234) + t6976*(t7097*t7174 + t7056*t7178 + t7237))*var2[0] + (t7056*(t7081*t7174 + t7046*t7178 + t7208) + t7046*(-1.*t7097*t7174 - 1.*t7056*t7178 + t7222))*var2[1] + (t7046*(t7068*t7174 + t6976*t7178 + t7183) + t6976*(-1.*t7081*t7174 - 1.*t7046*t7178 + t7192))*var2[2];
  p_output1[4]=(t7088*(t6832*t6840*t7158 + t7234 + t7279) + t6832*t7030*(t7054*t7158 + t7237 + t7282))*var2[0] + (t7088*(t7044*t7158 + t7208 + t7265) + t7076*(-1.*t7054*t7158 + t7222 + t7269))*var2[1] + (t7076*(-1.*t6832*t6840*t7158 + t7183 + t7252) + t6832*t7030*(-1.*t7044*t7158 + t7192 + t7257))*var2[2];
  p_output1[5]=(t6832*t7039*(-1.*t6832*t7146 + t7279) + t6843*(-1.*t6843*t7039*t7146 + t7051*t7156 + t7282))*var2[0] + (t6832*t7024*(t6843*t7039*t7146 + t7269 + t7308) + t6832*t7039*(-1.*t6843*t7024*t7146 + t7265 + t7313))*var2[1] + (t6832*t7024*(t6832*t7146 + t7252) + t6843*(t6843*t7024*t7146 - 1.*t7039*t7156 + t7257))*var2[2];
  p_output1[6]=(-0.1575*t7024 - 0.2255*t7051)*var2[0] + (t7039*(-1.*t7039*t7144 + t7308) + t7051*(t7024*t7144 + t7313))*var2[1] + 0.068*t7039*var2[2];
  p_output1[7]=(0.325*t7022 - 1.*t7003*t7133 - 1.*t7022*t7142)*var2[0] + (-0.325*t7003 - 1.*t7022*t7133 + t7003*t7142)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
