/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 22:25:19 GMT+02:00
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
  double t3371;
  double t4749;
  double t4128;
  double t4291;
  double t4784;
  double t1144;
  double t2631;
  double t5202;
  double t5620;
  double t5834;
  double t5860;
  double t6489;
  double t4565;
  double t4785;
  double t4805;
  double t3461;
  double t6494;
  double t6509;
  double t6552;
  double t7129;
  double t7245;
  double t7330;
  double t7727;
  double t8495;
  double t8523;
  double t8524;
  double t8574;
  double t3535;
  double t3771;
  double t5241;
  double t5469;
  double t9833;
  double t9836;
  double t9840;
  double t8501;
  double t8519;
  double t9865;
  double t9888;
  double t9900;
  double t9923;
  double t9937;
  double t9941;
  double t10422;
  double t10460;
  double t10472;
  double t10647;
  double t10651;
  double t10738;
  double t10744;
  double t10747;
  double t10760;
  double t11266;
  double t11525;
  double t11725;
  double t11832;
  double t11842;
  double t11928;
  double t12411;
  double t12414;
  double t12452;
  double t12686;
  double t12687;
  double t12704;
  double t12963;
  double t13205;
  double t13207;
  double t13226;
  double t13233;
  double t13235;
  double t13410;
  double t13428;
  double t13432;
  t3371 = Sin(var1[3]);
  t4749 = Cos(var1[3]);
  t4128 = Cos(var1[5]);
  t4291 = Sin(var1[4]);
  t4784 = Sin(var1[5]);
  t1144 = Cos(var1[4]);
  t2631 = Sin(var1[9]);
  t5202 = Cos(var1[9]);
  t5620 = t4749*t4128;
  t5834 = -1.*t3371*t4291*t4784;
  t5860 = t5620 + t5834;
  t6489 = Sin(var1[10]);
  t4565 = t4128*t3371*t4291;
  t4785 = t4749*t4784;
  t4805 = t4565 + t4785;
  t3461 = Cos(var1[10]);
  t6494 = -1.*t5202*t1144*t3371;
  t6509 = -1.*t2631*t5860;
  t6552 = t6494 + t6509;
  t7129 = Sin(var1[11]);
  t7245 = -1.*t6489*t4805;
  t7330 = t3461*t6552;
  t7727 = t7245 + t7330;
  t8495 = Cos(var1[11]);
  t8523 = t3461*t4805;
  t8524 = t6489*t6552;
  t8574 = t8523 + t8524;
  t3535 = -1.*t3461;
  t3771 = 1. + t3535;
  t5241 = -1.*t5202;
  t5469 = 1. + t5241;
  t9833 = -1.*t5202*t4749*t4291;
  t9836 = -1.*t4749*t1144*t2631*t4784;
  t9840 = t9833 + t9836;
  t8501 = -1.*t8495;
  t8519 = 1. + t8501;
  t9865 = t4749*t1144*t4128*t6489;
  t9888 = t3461*t9840;
  t9900 = t9865 + t9888;
  t9923 = -1.*t3461*t4749*t1144*t4128;
  t9937 = t6489*t9840;
  t9941 = t9923 + t9937;
  t10422 = t4749*t4128*t4291;
  t10460 = -1.*t3371*t4784;
  t10472 = t10422 + t10460;
  t10647 = t4128*t3371;
  t10651 = t4749*t4291*t4784;
  t10738 = t10647 + t10651;
  t10744 = -1.*t2631*t6489*t10472;
  t10747 = t3461*t10738;
  t10760 = t10744 + t10747;
  t11266 = -1.*t3461*t2631*t10472;
  t11525 = -1.*t6489*t10738;
  t11725 = t11266 + t11525;
  t11832 = -1.*t4749*t1144*t2631;
  t11842 = -1.*t5202*t10738;
  t11928 = t11832 + t11842;
  t12411 = t5202*t4749*t1144;
  t12414 = -1.*t2631*t10738;
  t12452 = t12411 + t12414;
  t12686 = -1.*t4749*t4128*t4291;
  t12687 = t3371*t4784;
  t12704 = t12686 + t12687;
  t12963 = -1.*t6489*t12704;
  t13205 = t3461*t12452;
  t13207 = t12963 + t13205;
  t13226 = -1.*t3461*t12704;
  t13233 = -1.*t6489*t12452;
  t13235 = t13226 + t13233;
  t13410 = t3461*t12704;
  t13428 = t6489*t12452;
  t13432 = t13410 + t13428;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t1144*t2631*t3371 - 0.325*t3771*t4805 + 0.1575*t5469*t5860 + 0.2255*(-1.*t1144*t2631*t3371 + t5202*t5860) + 0.325*t6489*t6552 - 0.575*t7129*t7727 - 0.575*t8519*t8574 - 0.0641*(t7727*t8495 + t7129*t8574) - 0.295*(-1.*t7129*t7727 + t8495*t8574);
  p_output1[2]=0.325*t1144*t3771*t4128*t4749 + 0.1575*t2631*t4291*t4749 + 0.2255*(-1.*t2631*t4291*t4749 + t1144*t4749*t4784*t5202) + 0.1575*t1144*t4749*t4784*t5469 + 0.325*t6489*t9840 - 0.575*t7129*t9900 - 0.575*t8519*t9941 - 0.0641*(t8495*t9900 + t7129*t9941) - 0.295*(-1.*t7129*t9900 + t8495*t9941);
  p_output1[3]=-0.325*t10738*t3771 + 0.2255*t10472*t5202 + 0.1575*t10472*t5469 - 0.325*t10472*t2631*t6489 - 0.575*t11725*t7129 - 0.295*(-1.*t11725*t7129 + t10760*t8495) - 0.0641*(t10760*t7129 + t11725*t8495) - 0.575*t10760*t8519;
  p_output1[4]=0.2255*t12452 + 0.1575*t10738*t2631 - 0.1575*t1144*t4749*t5202 + 0.325*t11928*t6489 - 0.575*t11928*t3461*t7129 - 0.0641*(t11928*t6489*t7129 + t11928*t3461*t8495) - 0.295*(-1.*t11928*t3461*t7129 + t11928*t6489*t8495) - 0.575*t11928*t6489*t8519;
  p_output1[5]=0.325*t12452*t3461 - 0.325*t12704*t6489 - 0.575*t13235*t7129 - 0.295*(-1.*t13235*t7129 + t13207*t8495) - 0.0641*(t13207*t7129 + t13235*t8495) - 0.575*t13207*t8519;
  p_output1[6]=-0.575*t13432*t7129 - 0.575*t13207*t8495 - 0.295*(-1.*t13432*t7129 - 1.*t13207*t8495) - 0.0641*(-1.*t13207*t7129 + t13432*t8495);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
