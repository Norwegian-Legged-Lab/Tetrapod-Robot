/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:30 GMT+01:00
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
  double t9;
  double t28;
  double t136;
  double t149;
  double t83;
  double t142;
  double t150;
  double t151;
  double t2807;
  double t2836;
  double t2812;
  double t2844;
  double t2861;
  double t2869;
  double t2872;
  double t2875;
  double t2811;
  double t2866;
  double t2876;
  double t2885;
  double t3415;
  double t3416;
  double t3421;
  double t3428;
  double t3433;
  double t3434;
  double t3414;
  double t3424;
  double t3436;
  double t3440;
  double t212;
  double t325;
  double t353;
  double t952;
  double t1269;
  double t1653;
  double t2010;
  double t2083;
  double t2180;
  double t2226;
  double t2275;
  double t2301;
  double t2378;
  double t2438;
  double t2497;
  double t2577;
  double t2715;
  double t2785;
  double t3973;
  double t3979;
  double t3980;
  double t2891;
  double t2917;
  double t2970;
  double t3055;
  double t3082;
  double t3155;
  double t3171;
  double t3206;
  double t3248;
  double t3282;
  double t3295;
  double t3310;
  double t3321;
  double t3342;
  double t3358;
  double t3370;
  double t3395;
  double t3404;
  double t4157;
  double t4170;
  double t4171;
  double t3442;
  double t3454;
  double t3465;
  double t3483;
  double t3492;
  double t3517;
  double t3533;
  double t3558;
  double t3586;
  double t3616;
  double t3645;
  double t3691;
  double t3748;
  double t3795;
  double t3818;
  double t3849;
  double t3919;
  double t3963;
  double t4331;
  double t4333;
  double t4334;
  t9 = Cos(var1[4]);
  t28 = Cos(var1[5]);
  t136 = Sin(var1[4]);
  t149 = Sin(var1[5]);
  t83 = 0.009423*t9*t28;
  t142 = 0.006886*t136;
  t150 = 0.009423*t9*t149;
  t151 = var1[0] + t83 + t142 + t150;
  t2807 = Sin(var1[3]);
  t2836 = Cos(var1[3]);
  t2812 = t28*t2807*t136;
  t2844 = t2836*t149;
  t2861 = t2812 + t2844;
  t2869 = t2836*t28;
  t2872 = -1.*t2807*t136*t149;
  t2875 = t2869 + t2872;
  t2811 = -0.006886*t9*t2807;
  t2866 = 0.009423*t2861;
  t2876 = -0.009423*t2875;
  t2885 = var1[1] + t2811 + t2866 + t2876;
  t3415 = -1.*t2836*t28*t136;
  t3416 = t2807*t149;
  t3421 = t3415 + t3416;
  t3428 = t28*t2807;
  t3433 = t2836*t136*t149;
  t3434 = t3428 + t3433;
  t3414 = 0.006886*t2836*t9;
  t3424 = 0.009423*t3421;
  t3436 = -0.009423*t3434;
  t3440 = var1[2] + t3414 + t3424 + t3436;
  t212 = 0.01084*t136;
  t325 = 0.013619*t136;
  t353 = 0.014922*t136;
  t952 = 0.014609*t136;
  t1269 = 0.012712*t136;
  t1653 = 0.009438*t136;
  t2010 = 0.00514*t136;
  t2083 = 0.000286*t136;
  t2180 = -0.004599*t136;
  t2226 = -0.008986*t136;
  t2275 = -0.012399*t136;
  t2301 = -0.014468*t136;
  t2378 = -0.01497*t136;
  t2438 = -0.013849*t136;
  t2497 = -0.011228*t136;
  t2577 = -0.00739*t136;
  t2715 = -0.002751*t136;
  t2785 = 0.002186*t136;
  t3973 = -0.141787*t9*t28;
  t3979 = 0.160633*t9*t149;
  t3980 = var1[0] + t3973 + t142 + t3979;
  t2891 = -0.01084*t9*t2807;
  t2917 = -0.013619*t9*t2807;
  t2970 = -0.014922*t9*t2807;
  t3055 = -0.014609*t9*t2807;
  t3082 = -0.012712*t9*t2807;
  t3155 = -0.009438*t9*t2807;
  t3171 = -0.00514*t9*t2807;
  t3206 = -0.000286*t9*t2807;
  t3248 = 0.004599*t9*t2807;
  t3282 = 0.008986*t9*t2807;
  t3295 = 0.012399*t9*t2807;
  t3310 = 0.014468*t9*t2807;
  t3321 = 0.01497*t9*t2807;
  t3342 = 0.013849*t9*t2807;
  t3358 = 0.011228*t9*t2807;
  t3370 = 0.00739*t9*t2807;
  t3395 = 0.002751*t9*t2807;
  t3404 = -0.002186*t9*t2807;
  t4157 = -0.141787*t2861;
  t4170 = -0.160633*t2875;
  t4171 = var1[1] + t2811 + t4157 + t4170;
  t3442 = 0.01084*t2836*t9;
  t3454 = 0.013619*t2836*t9;
  t3465 = 0.014922*t2836*t9;
  t3483 = 0.014609*t2836*t9;
  t3492 = 0.012712*t2836*t9;
  t3517 = 0.009438*t2836*t9;
  t3533 = 0.00514*t2836*t9;
  t3558 = 0.000286*t2836*t9;
  t3586 = -0.004599*t2836*t9;
  t3616 = -0.008986*t2836*t9;
  t3645 = -0.012399*t2836*t9;
  t3691 = -0.014468*t2836*t9;
  t3748 = -0.01497*t2836*t9;
  t3795 = -0.013849*t2836*t9;
  t3818 = -0.011228*t2836*t9;
  t3849 = -0.00739*t2836*t9;
  t3919 = -0.002751*t2836*t9;
  t3963 = 0.002186*t2836*t9;
  t4331 = -0.141787*t3421;
  t4333 = -0.160633*t3434;
  t4334 = var1[2] + t3414 + t4331 + t4333;
  p_output1[0]=t151;
  p_output1[1]=t212 + 0.007331*t149*t9 + 0.007331*t28*t9 + var1[0];
  p_output1[2]=t325 + 0.004445*t149*t9 + 0.004445*t28*t9 + var1[0];
  p_output1[3]=t353 + 0.001078*t149*t9 + 0.001078*t28*t9 + var1[0];
  p_output1[4]=-0.002407*t149*t9 - 0.002407*t28*t9 + t952 + var1[0];
  p_output1[5]=t1269 - 0.005631*t149*t9 - 0.005631*t28*t9 + var1[0];
  p_output1[6]=t1653 - 0.008244*t149*t9 - 0.008244*t28*t9 + var1[0];
  p_output1[7]=t2010 - 0.009964*t149*t9 - 0.009964*t28*t9 + var1[0];
  p_output1[8]=t2083 - 0.010605*t149*t9 - 0.010605*t28*t9 + var1[0];
  p_output1[9]=t2180 - 0.010096*t149*t9 - 0.010096*t28*t9 + var1[0];
  p_output1[10]=t2226 - 0.008493*t149*t9 - 0.008493*t28*t9 + var1[0];
  p_output1[11]=t2275 - 0.00597*t149*t9 - 0.00597*t28*t9 + var1[0];
  p_output1[12]=t2301 - 0.0028*t149*t9 - 0.0028*t28*t9 + var1[0];
  p_output1[13]=t2378 + 0.000674*t149*t9 + 0.000674*t28*t9 + var1[0];
  p_output1[14]=t2438 + 0.004074*t149*t9 + 0.004074*t28*t9 + var1[0];
  p_output1[15]=t2497 + 0.007033*t149*t9 + 0.007033*t28*t9 + var1[0];
  p_output1[16]=t2577 + 0.00923*t149*t9 + 0.00923*t28*t9 + var1[0];
  p_output1[17]=t2715 + 0.010427*t149*t9 + 0.010427*t28*t9 + var1[0];
  p_output1[18]=t2785 + 0.010493*t149*t9 + 0.010493*t28*t9 + var1[0];
  p_output1[19]=t151;
  p_output1[20]=t2885;
  p_output1[21]=0.007331*t2861 - 0.007331*t2875 + t2891 + var1[1];
  p_output1[22]=0.004445*t2861 - 0.004445*t2875 + t2917 + var1[1];
  p_output1[23]=0.001078*t2861 - 0.001078*t2875 + t2970 + var1[1];
  p_output1[24]=-0.002407*t2861 + 0.002407*t2875 + t3055 + var1[1];
  p_output1[25]=-0.005631*t2861 + 0.005631*t2875 + t3082 + var1[1];
  p_output1[26]=-0.008244*t2861 + 0.008244*t2875 + t3155 + var1[1];
  p_output1[27]=-0.009964*t2861 + 0.009964*t2875 + t3171 + var1[1];
  p_output1[28]=-0.010605*t2861 + 0.010605*t2875 + t3206 + var1[1];
  p_output1[29]=-0.010096*t2861 + 0.010096*t2875 + t3248 + var1[1];
  p_output1[30]=-0.008493*t2861 + 0.008493*t2875 + t3282 + var1[1];
  p_output1[31]=-0.00597*t2861 + 0.00597*t2875 + t3295 + var1[1];
  p_output1[32]=-0.0028*t2861 + 0.0028*t2875 + t3310 + var1[1];
  p_output1[33]=0.000674*t2861 - 0.000674*t2875 + t3321 + var1[1];
  p_output1[34]=0.004074*t2861 - 0.004074*t2875 + t3342 + var1[1];
  p_output1[35]=0.007033*t2861 - 0.007033*t2875 + t3358 + var1[1];
  p_output1[36]=0.00923*t2861 - 0.00923*t2875 + t3370 + var1[1];
  p_output1[37]=0.010427*t2861 - 0.010427*t2875 + t3395 + var1[1];
  p_output1[38]=0.010493*t2861 - 0.010493*t2875 + t3404 + var1[1];
  p_output1[39]=t2885;
  p_output1[40]=t3440;
  p_output1[41]=0.007331*t3421 - 0.007331*t3434 + t3442 + var1[2];
  p_output1[42]=0.004445*t3421 - 0.004445*t3434 + t3454 + var1[2];
  p_output1[43]=0.001078*t3421 - 0.001078*t3434 + t3465 + var1[2];
  p_output1[44]=-0.002407*t3421 + 0.002407*t3434 + t3483 + var1[2];
  p_output1[45]=-0.005631*t3421 + 0.005631*t3434 + t3492 + var1[2];
  p_output1[46]=-0.008244*t3421 + 0.008244*t3434 + t3517 + var1[2];
  p_output1[47]=-0.009964*t3421 + 0.009964*t3434 + t3533 + var1[2];
  p_output1[48]=-0.010605*t3421 + 0.010605*t3434 + t3558 + var1[2];
  p_output1[49]=-0.010096*t3421 + 0.010096*t3434 + t3586 + var1[2];
  p_output1[50]=-0.008493*t3421 + 0.008493*t3434 + t3616 + var1[2];
  p_output1[51]=-0.00597*t3421 + 0.00597*t3434 + t3645 + var1[2];
  p_output1[52]=-0.0028*t3421 + 0.0028*t3434 + t3691 + var1[2];
  p_output1[53]=0.000674*t3421 - 0.000674*t3434 + t3748 + var1[2];
  p_output1[54]=0.004074*t3421 - 0.004074*t3434 + t3795 + var1[2];
  p_output1[55]=0.007033*t3421 - 0.007033*t3434 + t3818 + var1[2];
  p_output1[56]=0.00923*t3421 - 0.00923*t3434 + t3849 + var1[2];
  p_output1[57]=0.010427*t3421 - 0.010427*t3434 + t3919 + var1[2];
  p_output1[58]=0.010493*t3421 - 0.010493*t3434 + t3963 + var1[2];
  p_output1[59]=t3440;
  p_output1[60]=t3980;
  p_output1[61]=t212 + 0.158541*t149*t9 - 0.143879*t28*t9 + var1[0];
  p_output1[62]=t325 + 0.155655*t149*t9 - 0.146765*t28*t9 + var1[0];
  p_output1[63]=t353 + 0.152288*t149*t9 - 0.150132*t28*t9 + var1[0];
  p_output1[64]=0.148803*t149*t9 - 0.153617*t28*t9 + t952 + var1[0];
  p_output1[65]=t1269 + 0.145579*t149*t9 - 0.156841*t28*t9 + var1[0];
  p_output1[66]=t1653 + 0.142966*t149*t9 - 0.159454*t28*t9 + var1[0];
  p_output1[67]=t2010 + 0.141246*t149*t9 - 0.161174*t28*t9 + var1[0];
  p_output1[68]=t2083 + 0.140605*t149*t9 - 0.161815*t28*t9 + var1[0];
  p_output1[69]=t2180 + 0.141114*t149*t9 - 0.161306*t28*t9 + var1[0];
  p_output1[70]=t2226 + 0.142717*t149*t9 - 0.159703*t28*t9 + var1[0];
  p_output1[71]=t2275 + 0.14524*t149*t9 - 0.15718*t28*t9 + var1[0];
  p_output1[72]=t2301 + 0.14841*t149*t9 - 0.15401*t28*t9 + var1[0];
  p_output1[73]=t2378 + 0.151884*t149*t9 - 0.150536*t28*t9 + var1[0];
  p_output1[74]=t2438 + 0.155284*t149*t9 - 0.147136*t28*t9 + var1[0];
  p_output1[75]=t2497 + 0.158243*t149*t9 - 0.144177*t28*t9 + var1[0];
  p_output1[76]=t2577 + 0.16044*t149*t9 - 0.14198*t28*t9 + var1[0];
  p_output1[77]=t2715 + 0.161637*t149*t9 - 0.140783*t28*t9 + var1[0];
  p_output1[78]=t2785 + 0.161703*t149*t9 - 0.140717*t28*t9 + var1[0];
  p_output1[79]=t3980;
  p_output1[80]=t4171;
  p_output1[81]=-0.143879*t2861 - 0.158541*t2875 + t2891 + var1[1];
  p_output1[82]=-0.146765*t2861 - 0.155655*t2875 + t2917 + var1[1];
  p_output1[83]=-0.150132*t2861 - 0.152288*t2875 + t2970 + var1[1];
  p_output1[84]=-0.153617*t2861 - 0.148803*t2875 + t3055 + var1[1];
  p_output1[85]=-0.156841*t2861 - 0.145579*t2875 + t3082 + var1[1];
  p_output1[86]=-0.159454*t2861 - 0.142966*t2875 + t3155 + var1[1];
  p_output1[87]=-0.161174*t2861 - 0.141246*t2875 + t3171 + var1[1];
  p_output1[88]=-0.161815*t2861 - 0.140605*t2875 + t3206 + var1[1];
  p_output1[89]=-0.161306*t2861 - 0.141114*t2875 + t3248 + var1[1];
  p_output1[90]=-0.159703*t2861 - 0.142717*t2875 + t3282 + var1[1];
  p_output1[91]=-0.15718*t2861 - 0.14524*t2875 + t3295 + var1[1];
  p_output1[92]=-0.15401*t2861 - 0.14841*t2875 + t3310 + var1[1];
  p_output1[93]=-0.150536*t2861 - 0.151884*t2875 + t3321 + var1[1];
  p_output1[94]=-0.147136*t2861 - 0.155284*t2875 + t3342 + var1[1];
  p_output1[95]=-0.144177*t2861 - 0.158243*t2875 + t3358 + var1[1];
  p_output1[96]=-0.14198*t2861 - 0.16044*t2875 + t3370 + var1[1];
  p_output1[97]=-0.140783*t2861 - 0.161637*t2875 + t3395 + var1[1];
  p_output1[98]=-0.140717*t2861 - 0.161703*t2875 + t3404 + var1[1];
  p_output1[99]=t4171;
  p_output1[100]=t4334;
  p_output1[101]=-0.143879*t3421 - 0.158541*t3434 + t3442 + var1[2];
  p_output1[102]=-0.146765*t3421 - 0.155655*t3434 + t3454 + var1[2];
  p_output1[103]=-0.150132*t3421 - 0.152288*t3434 + t3465 + var1[2];
  p_output1[104]=-0.153617*t3421 - 0.148803*t3434 + t3483 + var1[2];
  p_output1[105]=-0.156841*t3421 - 0.145579*t3434 + t3492 + var1[2];
  p_output1[106]=-0.159454*t3421 - 0.142966*t3434 + t3517 + var1[2];
  p_output1[107]=-0.161174*t3421 - 0.141246*t3434 + t3533 + var1[2];
  p_output1[108]=-0.161815*t3421 - 0.140605*t3434 + t3558 + var1[2];
  p_output1[109]=-0.161306*t3421 - 0.141114*t3434 + t3586 + var1[2];
  p_output1[110]=-0.159703*t3421 - 0.142717*t3434 + t3616 + var1[2];
  p_output1[111]=-0.15718*t3421 - 0.14524*t3434 + t3645 + var1[2];
  p_output1[112]=-0.15401*t3421 - 0.14841*t3434 + t3691 + var1[2];
  p_output1[113]=-0.150536*t3421 - 0.151884*t3434 + t3748 + var1[2];
  p_output1[114]=-0.147136*t3421 - 0.155284*t3434 + t3795 + var1[2];
  p_output1[115]=-0.144177*t3421 - 0.158243*t3434 + t3818 + var1[2];
  p_output1[116]=-0.14198*t3421 - 0.16044*t3434 + t3849 + var1[2];
  p_output1[117]=-0.140783*t3421 - 0.161637*t3434 + t3919 + var1[2];
  p_output1[118]=-0.140717*t3421 - 0.161703*t3434 + t3963 + var1[2];
  p_output1[119]=t4334;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_base_link_to_rr_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_rr_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
