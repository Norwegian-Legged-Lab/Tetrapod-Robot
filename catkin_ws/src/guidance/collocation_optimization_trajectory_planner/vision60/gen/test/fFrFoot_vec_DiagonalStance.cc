/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:26 GMT+02:00
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
  double t2971;
  double t2433;
  double t3784;
  double t4375;
  double t4202;
  double t4228;
  double t6403;
  double t2405;
  double t4349;
  double t13544;
  double t17883;
  double t3926;
  double t23460;
  double t23509;
  double t23513;
  double t23457;
  double t23684;
  double t23692;
  double t23516;
  double t23521;
  double t23538;
  double t23660;
  double t23662;
  double t23663;
  double t23664;
  double t23665;
  double t23667;
  double t23700;
  double t23701;
  double t23702;
  double t23712;
  double t23722;
  double t23801;
  double t27956;
  double t27974;
  double t27975;
  double t28103;
  double t28112;
  double t28113;
  double t28120;
  double t28128;
  double t28129;
  double t23424;
  double t23550;
  double t23612;
  double t28181;
  double t28182;
  double t28183;
  double t28197;
  double t28203;
  double t28204;
  double t28208;
  double t28215;
  double t28216;
  double t2436;
  double t4105;
  double t4168;
  double t28180;
  double t28186;
  double t28217;
  double t28220;
  double t28233;
  double t28238;
  double t28240;
  double t28241;
  double t28242;
  double t28244;
  double t28164;
  double t28171;
  double t28175;
  double t28179;
  double t28222;
  double t28223;
  double t28254;
  double t28256;
  double t28260;
  double t28263;
  double t28264;
  double t28265;
  double t28231;
  double t28245;
  double t28249;
  double t28261;
  double t28269;
  double t28273;
  double t28281;
  double t28285;
  double t28286;
  double t23657;
  double t23668;
  double t23671;
  double t28250;
  double t28295;
  double t28303;
  double t28316;
  double t28331;
  double t28336;
  double t28368;
  double t28376;
  double t28348;
  double t28352;
  double t28362;
  double t28358;
  double t28414;
  double t28407;
  t2971 = Cos(var1[12]);
  t2433 = Sin(var1[4]);
  t3784 = Cos(var1[4]);
  t4375 = Cos(var1[13]);
  t4202 = Cos(var1[14]);
  t4228 = Sin(var1[13]);
  t6403 = Sin(var1[14]);
  t2405 = Sin(var1[12]);
  t4349 = t4202*t4228;
  t13544 = -1.*t4375*t6403;
  t17883 = t4349 + t13544;
  t3926 = Sin(var1[5]);
  t23460 = t4375*t4202;
  t23509 = t4228*t6403;
  t23513 = t23460 + t23509;
  t23457 = Cos(var1[5]);
  t23684 = Cos(var1[3]);
  t23692 = Sin(var1[3]);
  t23516 = t23457*t23513;
  t23521 = t2405*t17883*t3926;
  t23538 = t23516 + t23521;
  t23660 = -1.*t4202*t4228;
  t23662 = t4375*t6403;
  t23663 = t23660 + t23662;
  t23664 = t23457*t23663;
  t23665 = t2405*t23513*t3926;
  t23667 = t23664 + t23665;
  t23700 = t3784*t2405;
  t23701 = t2971*t2433*t3926;
  t23702 = t23700 + t23701;
  t23712 = -1.*t23457*t2405*t17883;
  t23722 = t23513*t3926;
  t23801 = t23712 + t23722;
  t27956 = t2971*t3784*t17883;
  t27974 = -1.*t2433*t23538;
  t27975 = t27956 + t27974;
  t28103 = -1.*t23457*t2405*t23513;
  t28112 = t23663*t3926;
  t28113 = t28103 + t28112;
  t28120 = t2971*t3784*t23513;
  t28128 = -1.*t2433*t23667;
  t28129 = t28120 + t28128;
  t23424 = t2971*t17883*t2433;
  t23550 = t3784*t23538;
  t23612 = t23424 + t23550;
  t28181 = -0.0641*t4202;
  t28182 = -0.28*t6403;
  t28183 = t28181 + t28182;
  t28197 = -1.*t4202;
  t28203 = 1. + t28197;
  t28204 = 0.075*t28203;
  t28208 = 0.355*t4202;
  t28215 = -0.0641*t6403;
  t28216 = t28204 + t28208 + t28215;
  t2436 = t2405*t2433;
  t4105 = -1.*t2971*t3784*t3926;
  t4168 = t2436 + t4105;
  t28180 = -0.325*t4228;
  t28186 = t4375*t28183;
  t28217 = t4228*t28216;
  t28220 = t28180 + t28186 + t28217;
  t28233 = -1.*t4375;
  t28238 = 1. + t28233;
  t28240 = 0.325*t28238;
  t28241 = -1.*t4228*t28183;
  t28242 = t4375*t28216;
  t28244 = t28240 + t28241 + t28242;
  t28164 = -1.*t2971;
  t28171 = 1. + t28164;
  t28175 = -0.1575*t28171;
  t28179 = -0.2255*t2971;
  t28222 = -1.*t2405*t28220;
  t28223 = t28175 + t28179 + t28222;
  t28254 = -0.068*t2405;
  t28256 = t2971*t28220;
  t28260 = t28254 + t28256;
  t28263 = t23457*t28244;
  t28264 = -1.*t28223*t3926;
  t28265 = t28263 + t28264;
  t28231 = t23457*t28223;
  t28245 = t28244*t3926;
  t28249 = t28231 + t28245;
  t28261 = t28260*t2433;
  t28269 = t3784*t28265;
  t28273 = t28261 + t28269;
  t28281 = t3784*t28260;
  t28285 = -1.*t2433*t28265;
  t28286 = t28281 + t28285;
  t23657 = t2971*t23513*t2433;
  t23668 = t3784*t23667;
  t23671 = t23657 + t23668;
  t28250 = t2971*t23457*t28249;
  t28295 = -1.*t28249*t23801;
  t28303 = t28249*t23801;
  t28316 = -1.*t28249*t28113;
  t28331 = -1.*t2971*t23457*t28249;
  t28336 = t28249*t28113;
  t28368 = -1.*t2405*t28260;
  t28376 = t2971*t28260*t23513;
  t28348 = t2405*t28260;
  t28352 = -1.*t2971*t28260*t17883;
  t28362 = -1.*t2971*t28260*t23513;
  t28358 = t2971*t28260*t17883;
  t28414 = t28244*t23513;
  t28407 = -1.*t28244*t23663;
  p_output1[0]=t23612*var2[0] + t4168*var2[1] + t23671*var2[2];
  p_output1[1]=(t23684*t23801 - 1.*t23692*t27975)*var2[0] + (-1.*t23692*t23702 + t23457*t23684*t2971)*var2[1] + (t23684*t28113 - 1.*t23692*t28129)*var2[2];
  p_output1[2]=(t23692*t23801 + t23684*t27975)*var2[0] + (t23684*t23702 + t23457*t23692*t2971)*var2[1] + (t23692*t28113 + t23684*t28129)*var2[2];
  p_output1[3]=((t23671*t28273 + t28129*t28286 + t28336)*t4168 + t23671*(-1.*t23702*t28286 + t28331 - 1.*t28273*t4168))*var2[0] + (t23671*(t23612*t28273 + t27975*t28286 + t28303) + t23612*(-1.*t23671*t28273 - 1.*t28129*t28286 + t28316))*var2[1] + ((-1.*t23612*t28273 - 1.*t27975*t28286 + t28295)*t4168 + t23612*(t28250 + t23702*t28286 + t28273*t4168))*var2[2];
  p_output1[4]=(t23457*(t23667*t28265 + t28336 + t28376)*t2971 + t28113*(t28331 + t28368 + t28265*t2971*t3926))*var2[0] + (t28113*(t23538*t28265 + t28303 + t28358) + t23801*(-1.*t23667*t28265 + t28316 + t28362))*var2[1] + (t23457*(-1.*t23538*t28265 + t28295 + t28352)*t2971 + t23801*(t28250 + t28348 - 1.*t28265*t2971*t3926))*var2[2];
  p_output1[5]=(t2405*(-1.*t23513*t2405*t28223 + t23663*t28244 + t28376) + t23513*t2971*(t28368 - 1.*t28223*t2971))*var2[0] + (t17883*(t23513*t2405*t28223 + t28362 + t28407)*t2971 + t23513*(-1.*t17883*t2405*t28223 + t28358 + t28414)*t2971)*var2[1] + (t2405*(t17883*t2405*t28223 - 1.*t23513*t28244 + t28352) + t17883*t2971*(t28348 + t28223*t2971))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t17883 + 0.2255*t23663)*var2[0] + (t23513*(-1.*t23513*t28220 + t28407) + t23663*(t17883*t28220 + t28414))*var2[1] - 0.068*t23513*var2[2];
  p_output1[13]=(-1.*t28183*t4202 + 0.325*t6403 - 1.*t28216*t6403)*var2[0] + (-0.325*t4202 + t28216*t4202 - 1.*t28183*t6403)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
