/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:43 GMT+02:00
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
  double t20858;
  double t14774;
  double t14790;
  double t21161;
  double t20648;
  double t23214;
  double t25941;
  double t25994;
  double t26066;
  double t25995;
  double t26041;
  double t26050;
  double t26071;
  double t11761;
  double t25990;
  double t25947;
  double t26056;
  double t26075;
  double t26076;
  double t26088;
  double t26082;
  double t26084;
  double t26086;
  double t26080;
  double t26089;
  double t26090;
  double t26091;
  double t26112;
  double t26113;
  double t26114;
  double t26117;
  double t26118;
  double t26119;
  double t26120;
  double t26121;
  double t26123;
  double t26110;
  double t26115;
  double t26124;
  double t26125;
  double t26130;
  double t26132;
  double t26133;
  double t26134;
  double t26135;
  double t26137;
  double t26106;
  double t26107;
  double t26108;
  double t26109;
  double t26127;
  double t26128;
  double t26144;
  double t26145;
  double t26146;
  double t26148;
  double t26149;
  double t26150;
  double t26141;
  double t26142;
  double t26143;
  double t26129;
  double t26138;
  double t26139;
  double t26098;
  double t26099;
  double t26100;
  double t26147;
  double t26151;
  double t26152;
  double t26097;
  double t26101;
  double t26102;
  double t26103;
  double t26104;
  double t26105;
  double t26159;
  double t26160;
  double t26161;
  double t26166;
  double t26167;
  double t26169;
  double t26140;
  double t26170;
  double t26179;
  double t26183;
  double t26154;
  double t26156;
  double t26157;
  double t25948;
  double t26077;
  double t26079;
  double t26172;
  double t26173;
  double t26174;
  double t26209;
  double t26214;
  double t26224;
  double t26220;
  double t26234;
  double t26229;
  double t26251;
  double t26256;
  double t26262;
  double t26266;
  t20858 = Cos(var1[16]);
  t14774 = Cos(var1[17]);
  t14790 = Sin(var1[16]);
  t21161 = Sin(var1[17]);
  t20648 = t14774*t14790;
  t23214 = -1.*t20858*t21161;
  t25941 = t20648 + t23214;
  t25994 = Cos(var1[5]);
  t26066 = Sin(var1[15]);
  t25995 = t20858*t14774;
  t26041 = t14790*t21161;
  t26050 = t25995 + t26041;
  t26071 = Sin(var1[5]);
  t11761 = Cos(var1[15]);
  t25990 = Cos(var1[4]);
  t25947 = Sin(var1[4]);
  t26056 = t25994*t26050;
  t26075 = t26066*t25941*t26071;
  t26076 = t26056 + t26075;
  t26088 = Sin(var1[3]);
  t26082 = -1.*t25994*t26066*t25941;
  t26084 = t26050*t26071;
  t26086 = t26082 + t26084;
  t26080 = Cos(var1[3]);
  t26089 = t11761*t25990*t25941;
  t26090 = -1.*t25947*t26076;
  t26091 = t26089 + t26090;
  t26112 = -0.0641*t14774;
  t26113 = -0.28*t21161;
  t26114 = t26112 + t26113;
  t26117 = -1.*t14774;
  t26118 = 1. + t26117;
  t26119 = -0.575*t26118;
  t26120 = -0.295*t14774;
  t26121 = -0.0641*t21161;
  t26123 = t26119 + t26120 + t26121;
  t26110 = 0.325*t14790;
  t26115 = t20858*t26114;
  t26124 = t14790*t26123;
  t26125 = t26110 + t26115 + t26124;
  t26130 = -1.*t20858;
  t26132 = 1. + t26130;
  t26133 = -0.325*t26132;
  t26134 = -1.*t14790*t26114;
  t26135 = t20858*t26123;
  t26137 = t26133 + t26134 + t26135;
  t26106 = -1.*t11761;
  t26107 = 1. + t26106;
  t26108 = -0.1575*t26107;
  t26109 = -0.2255*t11761;
  t26127 = -1.*t26066*t26125;
  t26128 = t26108 + t26109 + t26127;
  t26144 = -0.068*t26066;
  t26145 = t11761*t26125;
  t26146 = t26144 + t26145;
  t26148 = t25994*t26137;
  t26149 = -1.*t26128*t26071;
  t26150 = t26148 + t26149;
  t26141 = t26066*t25947;
  t26142 = -1.*t11761*t25990*t26071;
  t26143 = t26141 + t26142;
  t26129 = t25994*t26128;
  t26138 = t26137*t26071;
  t26139 = t26129 + t26138;
  t26098 = -1.*t14774*t14790;
  t26099 = t20858*t21161;
  t26100 = t26098 + t26099;
  t26147 = t26146*t25947;
  t26151 = t25990*t26150;
  t26152 = t26147 + t26151;
  t26097 = t11761*t26050*t25947;
  t26101 = t25994*t26100;
  t26102 = t26066*t26050*t26071;
  t26103 = t26101 + t26102;
  t26104 = t25990*t26103;
  t26105 = t26097 + t26104;
  t26159 = t25990*t26146;
  t26160 = -1.*t25947*t26150;
  t26161 = t26159 + t26160;
  t26166 = -1.*t25994*t26066*t26050;
  t26167 = t26100*t26071;
  t26169 = t26166 + t26167;
  t26140 = -1.*t11761*t25994*t26139;
  t26170 = t26139*t26169;
  t26179 = -1.*t26066*t26146;
  t26183 = t11761*t26146*t26050;
  t26154 = t25990*t26066;
  t26156 = t11761*t25947*t26071;
  t26157 = t26154 + t26156;
  t25948 = t11761*t25941*t25947;
  t26077 = t25990*t26076;
  t26079 = t25948 + t26077;
  t26172 = t11761*t25990*t26050;
  t26173 = -1.*t25947*t26103;
  t26174 = t26172 + t26173;
  t26209 = t26139*t26086;
  t26214 = -1.*t26139*t26169;
  t26224 = -1.*t11761*t26146*t26050;
  t26220 = t11761*t26146*t25941;
  t26234 = t26137*t26050;
  t26229 = -1.*t26137*t26100;
  t26251 = t11761*t25994*t26139;
  t26256 = -1.*t26139*t26086;
  t26262 = t26066*t26146;
  t26266 = -1.*t11761*t26146*t25941;
  p_output1[0]=t26079;
  p_output1[1]=t26080*t26086 - 1.*t26088*t26091;
  p_output1[2]=t26086*t26088 + t26080*t26091;
  p_output1[3]=t26105*(t26140 - 1.*t26143*t26152 - 1.*t26157*t26161) + t26143*(t26105*t26152 + t26170 + t26161*t26174);
  p_output1[4]=t26169*(t26140 + t11761*t26071*t26150 + t26179) + t11761*t25994*(t26103*t26150 + t26170 + t26183);
  p_output1[5]=t11761*t26050*(-1.*t11761*t26128 + t26179) + t26066*(-1.*t26050*t26066*t26128 + t26100*t26137 + t26183);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t25941 + 0.2255*t26100;
  p_output1[16]=-0.325*t21161 - 1.*t14774*t26114 - 1.*t21161*t26123;
  p_output1[17]=-0.0641;
  p_output1[18]=t26143;
  p_output1[19]=t11761*t25994*t26080 - 1.*t26088*t26157;
  p_output1[20]=t11761*t25994*t26088 + t26080*t26157;
  p_output1[21]=t26105*(t26079*t26152 + t26091*t26161 + t26209) + t26079*(-1.*t26105*t26152 - 1.*t26161*t26174 + t26214);
  p_output1[22]=t26169*(t26076*t26150 + t26209 + t26220) + t26086*(-1.*t26103*t26150 + t26214 + t26224);
  p_output1[23]=t11761*t25941*(t26050*t26066*t26128 + t26224 + t26229) + t11761*t26050*(-1.*t25941*t26066*t26128 + t26220 + t26234);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t26050*(-1.*t26050*t26125 + t26229) + t26100*(t25941*t26125 + t26234);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t26105;
  p_output1[37]=t26080*t26169 - 1.*t26088*t26174;
  p_output1[38]=t26088*t26169 + t26080*t26174;
  p_output1[39]=t26079*(t26143*t26152 + t26157*t26161 + t26251) + t26143*(-1.*t26079*t26152 - 1.*t26091*t26161 + t26256);
  p_output1[40]=t26086*(-1.*t11761*t26071*t26150 + t26251 + t26262) + t11761*t25994*(-1.*t26076*t26150 + t26256 + t26266);
  p_output1[41]=t11761*t25941*(t11761*t26128 + t26262) + t26066*(t25941*t26066*t26128 - 1.*t26050*t26137 + t26266);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t26050;
  p_output1[52]=0.325*t14774 - 1.*t21161*t26114 + t14774*t26123;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
