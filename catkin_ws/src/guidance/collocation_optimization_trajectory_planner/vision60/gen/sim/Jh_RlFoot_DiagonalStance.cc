/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:28 GMT+02:00
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
  double t10886;
  double t7719;
  double t9629;
  double t11535;
  double t10885;
  double t11735;
  double t11761;
  double t14790;
  double t11765;
  double t243;
  double t14050;
  double t14791;
  double t14765;
  double t14772;
  double t14774;
  double t14208;
  double t14786;
  double t14792;
  double t14793;
  double t20690;
  double t20848;
  double t20646;
  double t20647;
  double t20648;
  double t20660;
  double t20670;
  double t20679;
  double t20841;
  double t20845;
  double t20846;
  double t20853;
  double t20854;
  double t20858;
  double t20876;
  double t20877;
  double t20879;
  double t20900;
  double t20908;
  double t20909;
  double t20915;
  double t20922;
  double t20923;
  double t20639;
  double t20683;
  double t20686;
  double t21141;
  double t21142;
  double t21143;
  double t21145;
  double t21146;
  double t21147;
  double t21148;
  double t21149;
  double t21150;
  double t14831;
  double t14835;
  double t17799;
  double t21140;
  double t21144;
  double t21151;
  double t21152;
  double t21156;
  double t21157;
  double t21158;
  double t21159;
  double t21160;
  double t21161;
  double t21131;
  double t21135;
  double t21137;
  double t21139;
  double t21153;
  double t21154;
  double t21165;
  double t21166;
  double t21167;
  double t21169;
  double t21170;
  double t21172;
  double t21155;
  double t21162;
  double t21163;
  double t21168;
  double t21174;
  double t21175;
  double t21183;
  double t21184;
  double t21186;
  double t12083;
  double t14803;
  double t14813;
  double t21164;
  double t21191;
  double t21197;
  double t21202;
  double t21208;
  double t21213;
  double t21222;
  double t21228;
  double t21360;
  double t21237;
  double t21368;
  double t21373;
  double t21407;
  double t21399;
  t10886 = Cos(var1[10]);
  t7719 = Cos(var1[11]);
  t9629 = Sin(var1[10]);
  t11535 = Sin(var1[11]);
  t10885 = t7719*t9629;
  t11735 = -1.*t10886*t11535;
  t11761 = t10885 + t11735;
  t14790 = Sin(var1[9]);
  t11765 = Sin(var1[4]);
  t243 = Cos(var1[9]);
  t14050 = Cos(var1[4]);
  t14791 = Sin(var1[5]);
  t14765 = t10886*t7719;
  t14772 = t9629*t11535;
  t14774 = t14765 + t14772;
  t14208 = Cos(var1[5]);
  t14786 = t14208*t14774;
  t14792 = t14790*t11761*t14791;
  t14793 = t14786 + t14792;
  t20690 = Cos(var1[3]);
  t20848 = Sin(var1[3]);
  t20646 = -1.*t7719*t9629;
  t20647 = t10886*t11535;
  t20648 = t20646 + t20647;
  t20660 = t14208*t20648;
  t20670 = t14790*t14774*t14791;
  t20679 = t20660 + t20670;
  t20841 = -1.*t14208*t14790*t11761;
  t20845 = t14774*t14791;
  t20846 = t20841 + t20845;
  t20853 = t243*t14050*t11761;
  t20854 = -1.*t11765*t14793;
  t20858 = t20853 + t20854;
  t20876 = t14050*t14790;
  t20877 = t243*t11765*t14791;
  t20879 = t20876 + t20877;
  t20900 = -1.*t14208*t14790*t14774;
  t20908 = t20648*t14791;
  t20909 = t20900 + t20908;
  t20915 = t243*t14050*t14774;
  t20922 = -1.*t11765*t20679;
  t20923 = t20915 + t20922;
  t20639 = t243*t14774*t11765;
  t20683 = t14050*t20679;
  t20686 = t20639 + t20683;
  t21141 = -0.0641*t7719;
  t21142 = -0.28*t11535;
  t21143 = t21141 + t21142;
  t21145 = -1.*t7719;
  t21146 = 1. + t21145;
  t21147 = -0.575*t21146;
  t21148 = -0.295*t7719;
  t21149 = -0.0641*t11535;
  t21150 = t21147 + t21148 + t21149;
  t14831 = t14790*t11765;
  t14835 = -1.*t243*t14050*t14791;
  t17799 = t14831 + t14835;
  t21140 = 0.325*t9629;
  t21144 = t10886*t21143;
  t21151 = t9629*t21150;
  t21152 = t21140 + t21144 + t21151;
  t21156 = -1.*t10886;
  t21157 = 1. + t21156;
  t21158 = -0.325*t21157;
  t21159 = -1.*t9629*t21143;
  t21160 = t10886*t21150;
  t21161 = t21158 + t21159 + t21160;
  t21131 = -1.*t243;
  t21135 = 1. + t21131;
  t21137 = 0.1575*t21135;
  t21139 = 0.2255*t243;
  t21153 = -1.*t14790*t21152;
  t21154 = t21137 + t21139 + t21153;
  t21165 = 0.068*t14790;
  t21166 = t243*t21152;
  t21167 = t21165 + t21166;
  t21169 = t14208*t21161;
  t21170 = -1.*t21154*t14791;
  t21172 = t21169 + t21170;
  t21155 = t14208*t21154;
  t21162 = t21161*t14791;
  t21163 = t21155 + t21162;
  t21168 = t21167*t11765;
  t21174 = t14050*t21172;
  t21175 = t21168 + t21174;
  t21183 = t14050*t21167;
  t21184 = -1.*t11765*t21172;
  t21186 = t21183 + t21184;
  t12083 = t243*t11761*t11765;
  t14803 = t14050*t14793;
  t14813 = t12083 + t14803;
  t21164 = -1.*t243*t14208*t21163;
  t21191 = t21163*t20909;
  t21197 = t21163*t20846;
  t21202 = -1.*t21163*t20909;
  t21208 = t243*t14208*t21163;
  t21213 = -1.*t21163*t20846;
  t21222 = -1.*t14790*t21167;
  t21228 = t243*t21167*t14774;
  t21360 = -1.*t243*t21167*t14774;
  t21237 = t243*t21167*t11761;
  t21368 = t14790*t21167;
  t21373 = -1.*t243*t21167*t11761;
  t21407 = t21161*t14774;
  t21399 = -1.*t21161*t20648;
  p_output1[0]=t14813;
  p_output1[1]=t17799;
  p_output1[2]=t20686;
  p_output1[3]=t20690*t20846 - 1.*t20848*t20858;
  p_output1[4]=-1.*t20848*t20879 + t14208*t20690*t243;
  p_output1[5]=t20690*t20909 - 1.*t20848*t20923;
  p_output1[6]=t20846*t20848 + t20690*t20858;
  p_output1[7]=t20690*t20879 + t14208*t20848*t243;
  p_output1[8]=t20848*t20909 + t20690*t20923;
  p_output1[9]=t20686*(t21164 - 1.*t17799*t21175 - 1.*t20879*t21186) + t17799*(t20686*t21175 + t20923*t21186 + t21191);
  p_output1[10]=t20686*(t14813*t21175 + t20858*t21186 + t21197) + t14813*(-1.*t20686*t21175 - 1.*t20923*t21186 + t21202);
  p_output1[11]=t14813*(t17799*t21175 + t20879*t21186 + t21208) + t17799*(-1.*t14813*t21175 - 1.*t20858*t21186 + t21213);
  p_output1[12]=t14208*(t20679*t21172 + t21191 + t21228)*t243 + t20909*(t21164 + t21222 + t14791*t21172*t243);
  p_output1[13]=t20909*(t14793*t21172 + t21197 + t21237) + t20846*(-1.*t20679*t21172 + t21202 + t21360);
  p_output1[14]=t14208*(-1.*t14793*t21172 + t21213 + t21373)*t243 + t20846*(t21208 + t21368 - 1.*t14791*t21172*t243);
  p_output1[15]=t14790*(-1.*t14774*t14790*t21154 + t20648*t21161 + t21228) + t14774*t243*(t21222 - 1.*t21154*t243);
  p_output1[16]=t11761*(t14774*t14790*t21154 + t21360 + t21399)*t243 + t14774*(-1.*t11761*t14790*t21154 + t21237 + t21407)*t243;
  p_output1[17]=t14790*(t11761*t14790*t21154 - 1.*t14774*t21161 + t21373) + t11761*t243*(t21368 + t21154*t243);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t11761 - 0.2255*t20648;
  p_output1[28]=t14774*(-1.*t14774*t21152 + t21399) + t20648*(t11761*t21152 + t21407);
  p_output1[29]=0.068*t14774;
  p_output1[30]=-0.325*t11535 - 1.*t11535*t21150 - 1.*t21143*t7719;
  p_output1[31]=0;
  p_output1[32]=-1.*t11535*t21143 + 0.325*t7719 + t21150*t7719;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
