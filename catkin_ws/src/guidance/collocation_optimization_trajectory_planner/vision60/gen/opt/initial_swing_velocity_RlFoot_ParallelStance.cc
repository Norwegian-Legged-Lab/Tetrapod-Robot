/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:06 GMT+02:00
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
  double t6019;
  double t3419;
  double t2518;
  double t4904;
  double t6168;
  double t6768;
  double t6813;
  double t6820;
  double t6997;
  double t7314;
  double t7520;
  double t8096;
  double t11479;
  double t7410;
  double t7439;
  double t11872;
  double t11953;
  double t12413;
  double t12671;
  double t12690;
  double t12697;
  double t8166;
  double t8191;
  double t9164;
  double t12937;
  double t12938;
  double t12939;
  double t12978;
  double t13087;
  double t13105;
  double t13176;
  double t13177;
  double t13178;
  double t11503;
  double t11648;
  double t11473;
  double t11475;
  double t13239;
  double t13240;
  double t13244;
  double t13246;
  double t13248;
  double t13249;
  double t13277;
  double t13284;
  double t13285;
  double t13319;
  double t13329;
  double t13345;
  double t13348;
  double t13358;
  double t13363;
  double t13364;
  double t13379;
  double t13388;
  double t13407;
  double t13433;
  double t13434;
  double t13436;
  double t13437;
  double t13440;
  double t13441;
  double t13442;
  double t14063;
  double t14067;
  double t14071;
  double t14080;
  double t14081;
  double t14082;
  double t14084;
  double t14086;
  double t14087;
  double t14315;
  double t14316;
  double t14317;
  double t14296;
  double t14298;
  double t14313;
  double t14337;
  double t14338;
  double t14364;
  double t14404;
  double t14405;
  double t14406;
  double t14412;
  double t14413;
  double t14414;
  double t13446;
  double t13447;
  double t13454;
  double t15279;
  double t15317;
  double t15318;
  double t15350;
  double t15359;
  double t15368;
  double t15483;
  double t15485;
  double t15486;
  double t15546;
  double t15547;
  double t15686;
  double t16022;
  double t16033;
  double t16037;
  double t16039;
  double t16040;
  double t16044;
  double t16054;
  double t16059;
  double t16061;
  double t14319;
  double t16133;
  double t16138;
  double t16139;
  double t16143;
  double t16241;
  double t16359;
  double t16371;
  double t16372;
  double t16376;
  double t16377;
  double t16380;
  double t16256;
  double t16272;
  double t16273;
  double t16475;
  double t16476;
  double t16477;
  double t16492;
  double t16495;
  double t16497;
  double t16589;
  double t16666;
  double t16667;
  double t16741;
  double t16747;
  double t16817;
  double t15705;
  double t15706;
  double t15708;
  double t15510;
  t6019 = Sin(var1[9]);
  t3419 = Sin(var1[4]);
  t2518 = Cos(var1[9]);
  t4904 = Cos(var1[4]);
  t6168 = Sin(var1[5]);
  t6768 = Sin(var1[10]);
  t6813 = -1.*t6019*t3419;
  t6820 = t2518*t4904*t6168;
  t6997 = t6813 + t6820;
  t7314 = Cos(var1[11]);
  t7520 = Cos(var1[10]);
  t8096 = Sin(var1[11]);
  t11479 = Cos(var1[5]);
  t7410 = -1.*t7314;
  t7439 = 1. + t7410;
  t11872 = t4904*t11479*t6019*t6768;
  t11953 = -1.*t7520*t4904*t6168;
  t12413 = t11872 + t11953;
  t12671 = t7520*t4904*t11479*t6019;
  t12690 = t4904*t6768*t6168;
  t12697 = t12671 + t12690;
  t8166 = t2518*t3419;
  t8191 = t4904*t6019*t6168;
  t9164 = t8166 + t8191;
  t12937 = -1.*t4904*t11479*t6768;
  t12938 = t7520*t9164;
  t12939 = t12937 + t12938;
  t12978 = -1.*t7520*t4904*t11479;
  t13087 = -1.*t6768*t9164;
  t13105 = t12978 + t13087;
  t13176 = t7520*t4904*t11479;
  t13177 = t6768*t9164;
  t13178 = t13176 + t13177;
  t11503 = -1.*t7520;
  t11648 = 1. + t11503;
  t11473 = -1.*t2518;
  t11475 = 1. + t11473;
  t13239 = t2518*t4904;
  t13240 = -1.*t6019*t3419*t6168;
  t13244 = t13239 + t13240;
  t13246 = t11479*t6768*t3419;
  t13248 = t7520*t13244;
  t13249 = t13246 + t13248;
  t13277 = -1.*t7520*t11479*t3419;
  t13284 = t6768*t13244;
  t13285 = t13277 + t13284;
  t13319 = Sin(var1[3]);
  t13329 = t2518*t13319*t3419;
  t13345 = t4904*t6019*t13319*t6168;
  t13348 = t13329 + t13345;
  t13358 = -1.*t4904*t11479*t6768*t13319;
  t13363 = t7520*t13348;
  t13364 = t13358 + t13363;
  t13379 = t7520*t4904*t11479*t13319;
  t13388 = t6768*t13348;
  t13407 = t13379 + t13388;
  t13433 = Cos(var1[3]);
  t13434 = t13433*t11479;
  t13436 = -1.*t13319*t3419*t6168;
  t13437 = t13434 + t13436;
  t13440 = t4904*t6019*t13319;
  t13441 = -1.*t2518*t13437;
  t13442 = t13440 + t13441;
  t14063 = -1.*t11479*t13319*t3419;
  t14067 = -1.*t13433*t6168;
  t14071 = t14063 + t14067;
  t14080 = -1.*t6019*t6768*t14071;
  t14081 = t7520*t13437;
  t14082 = t14080 + t14081;
  t14084 = -1.*t7520*t6019*t14071;
  t14086 = -1.*t6768*t13437;
  t14087 = t14084 + t14086;
  t14315 = -1.*t11479*t13319;
  t14316 = -1.*t13433*t3419*t6168;
  t14317 = t14315 + t14316;
  t14296 = t13433*t11479*t3419;
  t14298 = -1.*t13319*t6168;
  t14313 = t14296 + t14298;
  t14337 = -1.*t2518*t13433*t4904;
  t14338 = -1.*t6019*t14317;
  t14364 = t14337 + t14338;
  t14404 = -1.*t6768*t14313;
  t14405 = t7520*t14364;
  t14406 = t14404 + t14405;
  t14412 = t7520*t14313;
  t14413 = t6768*t14364;
  t14414 = t14412 + t14413;
  t13446 = -1.*t2518*t4904*t13319;
  t13447 = -1.*t6019*t13437;
  t13454 = t13446 + t13447;
  t15279 = t11479*t13319*t3419;
  t15317 = t13433*t6168;
  t15318 = t15279 + t15317;
  t15350 = -1.*t6768*t15318;
  t15359 = t7520*t13454;
  t15368 = t15350 + t15359;
  t15483 = -1.*t7520*t15318;
  t15485 = -1.*t6768*t13454;
  t15486 = t15483 + t15485;
  t15546 = t7520*t15318;
  t15547 = t6768*t13454;
  t15686 = t15546 + t15547;
  t16022 = -1.*t2518*t13433*t3419;
  t16033 = -1.*t13433*t4904*t6019*t6168;
  t16037 = t16022 + t16033;
  t16039 = t13433*t4904*t11479*t6768;
  t16040 = t7520*t16037;
  t16044 = t16039 + t16040;
  t16054 = -1.*t7520*t13433*t4904*t11479;
  t16059 = t6768*t16037;
  t16061 = t16054 + t16059;
  t14319 = -1.*t13433*t4904*t6019;
  t16133 = t11479*t13319;
  t16138 = t13433*t3419*t6168;
  t16139 = t16133 + t16138;
  t16143 = -1.*t2518*t16139;
  t16241 = t14319 + t16143;
  t16359 = -1.*t6019*t6768*t14313;
  t16371 = t7520*t16139;
  t16372 = t16359 + t16371;
  t16376 = -1.*t7520*t6019*t14313;
  t16377 = -1.*t6768*t16139;
  t16380 = t16376 + t16377;
  t16256 = t2518*t13433*t4904;
  t16272 = -1.*t6019*t16139;
  t16273 = t16256 + t16272;
  t16475 = -1.*t13433*t11479*t3419;
  t16476 = t13319*t6168;
  t16477 = t16475 + t16476;
  t16492 = -1.*t6768*t16477;
  t16495 = t7520*t16273;
  t16497 = t16492 + t16495;
  t16589 = -1.*t7520*t16477;
  t16666 = -1.*t6768*t16273;
  t16667 = t16589 + t16666;
  t16741 = t7520*t16477;
  t16747 = t6768*t16273;
  t16817 = t16741 + t16747;
  t15705 = -1.*t8096*t15368;
  t15706 = t7314*t15686;
  t15708 = t15705 + t15706;
  t15510 = t7314*t15368;
  p_output1[0]=var2[0] + (0.325*t11479*t11648*t3419 - 0.1575*t4904*t6019 + 0.1575*t11475*t3419*t6168 + 0.2255*(t4904*t6019 + t2518*t3419*t6168) + 0.325*t13244*t6768 - 0.575*t13285*t7439 - 0.575*t13249*t8096 - 0.295*(t13285*t7314 - 1.*t13249*t8096) - 0.0641*(t13249*t7314 + t13285*t8096))*var2[4] + (-0.1575*t11475*t11479*t4904 - 0.2255*t11479*t2518*t4904 + 0.325*t11648*t4904*t6168 + 0.325*t11479*t4904*t6019*t6768 - 0.575*t12413*t7439 - 0.575*t12697*t8096 - 0.0641*(t12697*t7314 + t12413*t8096) - 0.295*(t12413*t7314 - 1.*t12697*t8096))*var2[5] + (-0.1575*t2518*t3419 - 0.1575*t4904*t6019*t6168 + 0.325*t6768*t6997 - 0.575*t6768*t6997*t7439 - 0.575*t6997*t7520*t8096 - 0.0641*(t6997*t7314*t7520 + t6768*t6997*t8096) - 0.295*(t6768*t6997*t7314 - 1.*t6997*t7520*t8096) + 0.2255*t9164)*var2[9] + (-0.325*t11479*t4904*t6768 - 0.575*t12939*t7439 - 0.575*t13105*t8096 - 0.0641*(t13105*t7314 + t12939*t8096) - 0.295*(t12939*t7314 - 1.*t13105*t8096) + 0.325*t7520*t9164)*var2[10] + (-0.575*t12939*t7314 - 0.575*t13178*t8096 - 0.0641*(t13178*t7314 - 1.*t12939*t8096) - 0.295*(-1.*t12939*t7314 - 1.*t13178*t8096))*var2[11];
  p_output1[1]=var2[1] + (-0.325*t11648*t14313 + 0.1575*t11475*t14317 + 0.2255*(t14319 + t14317*t2518) + 0.1575*t13433*t4904*t6019 + 0.325*t14364*t6768 - 0.575*t14414*t7439 - 0.575*t14406*t8096 - 0.295*(t14414*t7314 - 1.*t14406*t8096) - 0.0641*(t14406*t7314 + t14414*t8096))*var2[3] + (-0.325*t11479*t11648*t13319*t4904 - 0.1575*t13319*t3419*t6019 - 0.1575*t11475*t13319*t4904*t6168 + 0.2255*(t13319*t3419*t6019 - 1.*t13319*t2518*t4904*t6168) + 0.325*t13348*t6768 - 0.575*t13407*t7439 - 0.575*t13364*t8096 - 0.295*(t13407*t7314 - 1.*t13364*t8096) - 0.0641*(t13364*t7314 + t13407*t8096))*var2[4] + (-0.325*t11648*t13437 + 0.1575*t11475*t14071 + 0.2255*t14071*t2518 - 0.325*t14071*t6019*t6768 - 0.575*t14082*t7439 - 0.575*t14087*t8096 - 0.0641*(t14087*t7314 + t14082*t8096) - 0.295*(t14082*t7314 - 1.*t14087*t8096))*var2[5] + (0.2255*t13454 + 0.1575*t13319*t2518*t4904 + 0.1575*t13437*t6019 + 0.325*t13442*t6768 - 0.575*t13442*t6768*t7439 - 0.575*t13442*t7520*t8096 - 0.0641*(t13442*t7314*t7520 + t13442*t6768*t8096) - 0.295*(t13442*t6768*t7314 - 1.*t13442*t7520*t8096))*var2[9] + (-0.325*t15318*t6768 - 0.575*t15368*t7439 + 0.325*t13454*t7520 - 0.575*t15486*t8096 - 0.0641*(t15486*t7314 + t15368*t8096) - 0.295*(t15510 - 1.*t15486*t8096))*var2[10] + (-0.0641*t15708 - 0.575*t15368*t7314 - 0.575*t15686*t8096 - 0.295*(-1.*t15368*t7314 - 1.*t15686*t8096))*var2[11];
  p_output1[2]=var2[2] + (0.1575*t11475*t13437 - 0.325*t11648*t15318 - 0.295*t15708 + 0.1575*t13319*t4904*t6019 + 0.2255*(t13437*t2518 - 1.*t13319*t4904*t6019) + 0.325*t13454*t6768 - 0.575*t15686*t7439 - 0.575*t15368*t8096 - 0.0641*(t15510 + t15686*t8096))*var2[3] + (0.325*t11479*t11648*t13433*t4904 + 0.1575*t13433*t3419*t6019 + 0.1575*t11475*t13433*t4904*t6168 + 0.2255*(-1.*t13433*t3419*t6019 + t13433*t2518*t4904*t6168) + 0.325*t16037*t6768 - 0.575*t16061*t7439 - 0.575*t16044*t8096 - 0.295*(t16061*t7314 - 1.*t16044*t8096) - 0.0641*(t16044*t7314 + t16061*t8096))*var2[4] + (0.1575*t11475*t14313 - 0.325*t11648*t16139 + 0.2255*t14313*t2518 - 0.325*t14313*t6019*t6768 - 0.575*t16372*t7439 - 0.575*t16380*t8096 - 0.0641*(t16380*t7314 + t16372*t8096) - 0.295*(t16372*t7314 - 1.*t16380*t8096))*var2[5] + (0.2255*t16273 - 0.1575*t13433*t2518*t4904 + 0.1575*t16139*t6019 + 0.325*t16241*t6768 - 0.575*t16241*t6768*t7439 - 0.575*t16241*t7520*t8096 - 0.0641*(t16241*t7314*t7520 + t16241*t6768*t8096) - 0.295*(t16241*t6768*t7314 - 1.*t16241*t7520*t8096))*var2[9] + (-0.325*t16477*t6768 - 0.575*t16497*t7439 + 0.325*t16273*t7520 - 0.575*t16667*t8096 - 0.0641*(t16667*t7314 + t16497*t8096) - 0.295*(t16497*t7314 - 1.*t16667*t8096))*var2[10] + (-0.575*t16497*t7314 - 0.575*t16817*t8096 - 0.0641*(t16817*t7314 - 1.*t16497*t8096) - 0.295*(-1.*t16497*t7314 - 1.*t16817*t8096))*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
