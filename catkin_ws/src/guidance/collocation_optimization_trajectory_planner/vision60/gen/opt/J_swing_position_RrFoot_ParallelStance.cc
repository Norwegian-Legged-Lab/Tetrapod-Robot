/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:58 GMT+02:00
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
  double t11442;
  double t11933;
  double t11802;
  double t11908;
  double t11996;
  double t11406;
  double t11441;
  double t12241;
  double t12281;
  double t12282;
  double t12287;
  double t12335;
  double t11909;
  double t12081;
  double t12093;
  double t11759;
  double t12338;
  double t12353;
  double t12354;
  double t12395;
  double t12404;
  double t12422;
  double t12424;
  double t12433;
  double t12445;
  double t12447;
  double t12462;
  double t11760;
  double t11796;
  double t12270;
  double t12279;
  double t12735;
  double t12740;
  double t12763;
  double t12435;
  double t12442;
  double t12830;
  double t12833;
  double t12841;
  double t12907;
  double t12908;
  double t12914;
  double t13280;
  double t13282;
  double t13296;
  double t13342;
  double t13349;
  double t13351;
  double t13356;
  double t13357;
  double t13368;
  double t13380;
  double t13382;
  double t13386;
  double t13478;
  double t13483;
  double t13523;
  double t13571;
  double t13572;
  double t13590;
  double t13748;
  double t13757;
  double t13760;
  double t13769;
  double t13901;
  double t14129;
  double t14174;
  double t14183;
  double t14476;
  double t18194;
  double t18882;
  double t23144;
  t11442 = Sin(var1[3]);
  t11933 = Cos(var1[3]);
  t11802 = Cos(var1[5]);
  t11908 = Sin(var1[4]);
  t11996 = Sin(var1[5]);
  t11406 = Cos(var1[4]);
  t11441 = Sin(var1[15]);
  t12241 = Cos(var1[15]);
  t12281 = t11933*t11802;
  t12282 = -1.*t11442*t11908*t11996;
  t12287 = t12281 + t12282;
  t12335 = Sin(var1[16]);
  t11909 = t11802*t11442*t11908;
  t12081 = t11933*t11996;
  t12093 = t11909 + t12081;
  t11759 = Cos(var1[16]);
  t12338 = -1.*t12241*t11406*t11442;
  t12353 = -1.*t11441*t12287;
  t12354 = t12338 + t12353;
  t12395 = Sin(var1[17]);
  t12404 = -1.*t12335*t12093;
  t12422 = t11759*t12354;
  t12424 = t12404 + t12422;
  t12433 = Cos(var1[17]);
  t12445 = t11759*t12093;
  t12447 = t12335*t12354;
  t12462 = t12445 + t12447;
  t11760 = -1.*t11759;
  t11796 = 1. + t11760;
  t12270 = -1.*t12241;
  t12279 = 1. + t12270;
  t12735 = -1.*t12241*t11933*t11908;
  t12740 = -1.*t11933*t11406*t11441*t11996;
  t12763 = t12735 + t12740;
  t12435 = -1.*t12433;
  t12442 = 1. + t12435;
  t12830 = t11933*t11406*t11802*t12335;
  t12833 = t11759*t12763;
  t12841 = t12830 + t12833;
  t12907 = -1.*t11759*t11933*t11406*t11802;
  t12908 = t12335*t12763;
  t12914 = t12907 + t12908;
  t13280 = t11933*t11802*t11908;
  t13282 = -1.*t11442*t11996;
  t13296 = t13280 + t13282;
  t13342 = t11802*t11442;
  t13349 = t11933*t11908*t11996;
  t13351 = t13342 + t13349;
  t13356 = -1.*t11441*t12335*t13296;
  t13357 = t11759*t13351;
  t13368 = t13356 + t13357;
  t13380 = -1.*t11759*t11441*t13296;
  t13382 = -1.*t12335*t13351;
  t13386 = t13380 + t13382;
  t13478 = -1.*t11933*t11406*t11441;
  t13483 = -1.*t12241*t13351;
  t13523 = t13478 + t13483;
  t13571 = t12241*t11933*t11406;
  t13572 = -1.*t11441*t13351;
  t13590 = t13571 + t13572;
  t13748 = -1.*t11933*t11802*t11908;
  t13757 = t11442*t11996;
  t13760 = t13748 + t13757;
  t13769 = -1.*t12335*t13760;
  t13901 = t11759*t13590;
  t14129 = t13769 + t13901;
  t14174 = -1.*t11759*t13760;
  t14183 = -1.*t12335*t13590;
  t14476 = t14174 + t14183;
  t18194 = t11759*t13760;
  t18882 = t12335*t13590;
  t23144 = t18194 + t18882;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t11406*t11441*t11442 - 0.325*t11796*t12093 - 0.1575*t12279*t12287 - 0.2255*(-1.*t11406*t11441*t11442 + t12241*t12287) + 0.325*t12335*t12354 - 0.575*t12395*t12424 - 0.575*t12442*t12462 - 0.0641*(t12424*t12433 + t12395*t12462) - 0.295*(-1.*t12395*t12424 + t12433*t12462);
  p_output1[2]=0.325*t11406*t11796*t11802*t11933 - 0.1575*t11441*t11908*t11933 - 0.2255*(-1.*t11441*t11908*t11933 + t11406*t11933*t11996*t12241) - 0.1575*t11406*t11933*t11996*t12279 + 0.325*t12335*t12763 - 0.575*t12395*t12841 - 0.575*t12442*t12914 - 0.0641*(t12433*t12841 + t12395*t12914) - 0.295*(-1.*t12395*t12841 + t12433*t12914);
  p_output1[3]=-0.2255*t12241*t13296 - 0.1575*t12279*t13296 - 0.325*t11441*t12335*t13296 - 0.325*t11796*t13351 - 0.575*t12442*t13368 - 0.575*t12395*t13386 - 0.295*(t12433*t13368 - 1.*t12395*t13386) - 0.0641*(t12395*t13368 + t12433*t13386);
  p_output1[4]=0.1575*t11406*t11933*t12241 - 0.1575*t11441*t13351 + 0.325*t12335*t13523 - 0.575*t11759*t12395*t13523 - 0.575*t12335*t12442*t13523 - 0.0641*(t12335*t12395*t13523 + t11759*t12433*t13523) - 0.295*(-1.*t11759*t12395*t13523 + t12335*t12433*t13523) - 0.2255*t13590;
  p_output1[5]=0.325*t11759*t13590 - 0.325*t12335*t13760 - 0.575*t12442*t14129 - 0.575*t12395*t14476 - 0.295*(t12433*t14129 - 1.*t12395*t14476) - 0.0641*(t12395*t14129 + t12433*t14476);
  p_output1[6]=-0.575*t12433*t14129 - 0.575*t12395*t23144 - 0.295*(-1.*t12433*t14129 - 1.*t12395*t23144) - 0.0641*(-1.*t12395*t14129 + t12433*t23144);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
