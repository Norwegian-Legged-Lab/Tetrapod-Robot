/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:39 GMT+01:00
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
  double t411;
  double t642;
  double t712;
  double t840;
  double t699;
  double t766;
  double t1007;
  double t1210;
  double t3252;
  double t3269;
  double t3267;
  double t3272;
  double t3274;
  double t3296;
  double t3301;
  double t3305;
  double t3262;
  double t3291;
  double t3308;
  double t3317;
  double t3586;
  double t3587;
  double t3590;
  double t3593;
  double t3596;
  double t3597;
  double t3579;
  double t3591;
  double t3600;
  double t3602;
  double t1277;
  double t1888;
  double t1983;
  double t2146;
  double t2367;
  double t2500;
  double t2661;
  double t2708;
  double t2734;
  double t2776;
  double t2897;
  double t3016;
  double t3067;
  double t3135;
  double t3153;
  double t3176;
  double t3226;
  double t3247;
  double t3772;
  double t3776;
  double t3778;
  double t3329;
  double t3366;
  double t3387;
  double t3395;
  double t3405;
  double t3423;
  double t3430;
  double t3441;
  double t3450;
  double t3465;
  double t3470;
  double t3475;
  double t3487;
  double t3507;
  double t3521;
  double t3536;
  double t3558;
  double t3567;
  double t3911;
  double t3912;
  double t3913;
  double t3603;
  double t3609;
  double t3621;
  double t3628;
  double t3636;
  double t3650;
  double t3658;
  double t3663;
  double t3673;
  double t3684;
  double t3691;
  double t3696;
  double t3702;
  double t3706;
  double t3719;
  double t3731;
  double t3742;
  double t3763;
  double t4057;
  double t4060;
  double t4066;
  t411 = Cos(var1[4]);
  t642 = Cos(var1[5]);
  t712 = Sin(var1[4]);
  t840 = Sin(var1[5]);
  t699 = 0.000265*t411*t642;
  t766 = 0.014995*t712;
  t1007 = 0.000265*t411*t840;
  t1210 = var1[0] + t699 + t766 + t1007;
  t3252 = Sin(var1[3]);
  t3269 = Cos(var1[3]);
  t3267 = t642*t3252*t712;
  t3272 = t3269*t840;
  t3274 = t3267 + t3272;
  t3296 = t3269*t642;
  t3301 = -1.*t3252*t712*t840;
  t3305 = t3296 + t3301;
  t3262 = -0.014995*t411*t3252;
  t3291 = 0.000265*t3274;
  t3308 = -0.000265*t3305;
  t3317 = var1[1] + t3262 + t3291 + t3308;
  t3586 = -1.*t3269*t642*t712;
  t3587 = t3252*t840;
  t3590 = t3586 + t3587;
  t3593 = t642*t3252;
  t3596 = t3269*t712*t840;
  t3597 = t3593 + t3596;
  t3579 = 0.014995*t3269*t411;
  t3591 = 0.000265*t3590;
  t3600 = -0.000265*t3597;
  t3602 = var1[2] + t3579 + t3591 + t3600;
  t1277 = 0.014305*t712;
  t1888 = 0.012064*t712;
  t1983 = 0.008516*t712;
  t2146 = 0.004045*t712;
  t2367 = -0.000864*t712;
  t2500 = -0.00568*t712;
  t2661 = -0.00988*t712;
  t2708 = -0.013009*t712;
  t2734 = -0.014729*t712;
  t2776 = -0.014853*t712;
  t2897 = -0.013367*t712;
  t3016 = -0.010432*t712;
  t3067 = -0.006367*t712;
  t3135 = -0.001612*t712;
  t3153 = 0.003317*t712;
  t3176 = 0.007888*t712;
  t3226 = 0.011603*t712;
  t3247 = 0.014061*t712;
  t3772 = -0.150945*t411*t642;
  t3776 = 0.151475*t411*t840;
  t3778 = var1[0] + t3772 + t766 + t3776;
  t3329 = -0.014305*t411*t3252;
  t3366 = -0.012064*t411*t3252;
  t3387 = -0.008516*t411*t3252;
  t3395 = -0.004045*t411*t3252;
  t3405 = 0.000864*t411*t3252;
  t3423 = 0.00568*t411*t3252;
  t3430 = 0.00988*t411*t3252;
  t3441 = 0.013009*t411*t3252;
  t3450 = 0.014729*t411*t3252;
  t3465 = 0.014853*t411*t3252;
  t3470 = 0.013367*t411*t3252;
  t3475 = 0.010432*t411*t3252;
  t3487 = 0.006367*t411*t3252;
  t3507 = 0.001612*t411*t3252;
  t3521 = -0.003317*t411*t3252;
  t3536 = -0.007888*t411*t3252;
  t3558 = -0.011603*t411*t3252;
  t3567 = -0.014061*t411*t3252;
  t3911 = -0.150945*t3274;
  t3912 = -0.151475*t3305;
  t3913 = var1[1] + t3262 + t3911 + t3912;
  t3603 = 0.014305*t3269*t411;
  t3609 = 0.012064*t3269*t411;
  t3621 = 0.008516*t3269*t411;
  t3628 = 0.004045*t3269*t411;
  t3636 = -0.000864*t3269*t411;
  t3650 = -0.00568*t3269*t411;
  t3658 = -0.00988*t3269*t411;
  t3663 = -0.013009*t3269*t411;
  t3673 = -0.014729*t3269*t411;
  t3684 = -0.014853*t3269*t411;
  t3691 = -0.013367*t3269*t411;
  t3696 = -0.010432*t3269*t411;
  t3702 = -0.006367*t3269*t411;
  t3706 = -0.001612*t3269*t411;
  t3719 = 0.003317*t3269*t411;
  t3731 = 0.007888*t3269*t411;
  t3742 = 0.011603*t3269*t411;
  t3763 = 0.014061*t3269*t411;
  t4057 = -0.150945*t3590;
  t4060 = -0.151475*t3597;
  t4066 = var1[2] + t3579 + t4057 + t4060;
  p_output1[0]=t1210;
  p_output1[1]=t1277 - 0.003192*t411*t642 - 0.003192*t411*t840 + var1[0];
  p_output1[2]=t1888 - 0.006303*t411*t642 - 0.006303*t411*t840 + var1[0];
  p_output1[3]=t1983 - 0.008732*t411*t642 - 0.008732*t411*t840 + var1[0];
  p_output1[4]=t2146 - 0.010214*t411*t642 - 0.010214*t411*t840 + var1[0];
  p_output1[5]=t2367 - 0.010589*t411*t642 - 0.010589*t411*t840 + var1[0];
  p_output1[6]=t2500 - 0.009817*t411*t642 - 0.009817*t411*t840 + var1[0];
  p_output1[7]=t2661 - 0.007981*t411*t642 - 0.007981*t411*t840 + var1[0];
  p_output1[8]=t2708 - 0.00528*t411*t642 - 0.00528*t411*t840 + var1[0];
  p_output1[9]=t2734 - 0.002007*t411*t642 - 0.002007*t411*t840 + var1[0];
  p_output1[10]=t2776 + 0.001484*t411*t642 + 0.001484*t411*t840 + var1[0];
  p_output1[11]=t2897 + 0.004813*t411*t642 + 0.004813*t411*t840 + var1[0];
  p_output1[12]=t3016 + 0.007621*t411*t642 + 0.007621*t411*t840 + var1[0];
  p_output1[13]=t3067 + 0.009604*t411*t642 + 0.009604*t411*t840 + var1[0];
  p_output1[14]=t3135 + 0.010545*t411*t642 + 0.010545*t411*t840 + var1[0];
  p_output1[15]=t3153 + 0.010344*t411*t642 + 0.010344*t411*t840 + var1[0];
  p_output1[16]=t3176 + 0.009022*t411*t642 + 0.009022*t411*t840 + var1[0];
  p_output1[17]=t3226 + 0.006722*t411*t642 + 0.006722*t411*t840 + var1[0];
  p_output1[18]=t3247 + 0.003694*t411*t642 + 0.003694*t411*t840 + var1[0];
  p_output1[19]=t1210;
  p_output1[20]=t3317;
  p_output1[21]=-0.003192*t3274 + 0.003192*t3305 + t3329 + var1[1];
  p_output1[22]=-0.006303*t3274 + 0.006303*t3305 + t3366 + var1[1];
  p_output1[23]=-0.008732*t3274 + 0.008732*t3305 + t3387 + var1[1];
  p_output1[24]=-0.010214*t3274 + 0.010214*t3305 + t3395 + var1[1];
  p_output1[25]=-0.010589*t3274 + 0.010589*t3305 + t3405 + var1[1];
  p_output1[26]=-0.009817*t3274 + 0.009817*t3305 + t3423 + var1[1];
  p_output1[27]=-0.007981*t3274 + 0.007981*t3305 + t3430 + var1[1];
  p_output1[28]=-0.00528*t3274 + 0.00528*t3305 + t3441 + var1[1];
  p_output1[29]=-0.002007*t3274 + 0.002007*t3305 + t3450 + var1[1];
  p_output1[30]=0.001484*t3274 - 0.001484*t3305 + t3465 + var1[1];
  p_output1[31]=0.004813*t3274 - 0.004813*t3305 + t3470 + var1[1];
  p_output1[32]=0.007621*t3274 - 0.007621*t3305 + t3475 + var1[1];
  p_output1[33]=0.009604*t3274 - 0.009604*t3305 + t3487 + var1[1];
  p_output1[34]=0.010545*t3274 - 0.010545*t3305 + t3507 + var1[1];
  p_output1[35]=0.010344*t3274 - 0.010344*t3305 + t3521 + var1[1];
  p_output1[36]=0.009022*t3274 - 0.009022*t3305 + t3536 + var1[1];
  p_output1[37]=0.006722*t3274 - 0.006722*t3305 + t3558 + var1[1];
  p_output1[38]=0.003694*t3274 - 0.003694*t3305 + t3567 + var1[1];
  p_output1[39]=t3317;
  p_output1[40]=t3602;
  p_output1[41]=-0.003192*t3590 + 0.003192*t3597 + t3603 + var1[2];
  p_output1[42]=-0.006303*t3590 + 0.006303*t3597 + t3609 + var1[2];
  p_output1[43]=-0.008732*t3590 + 0.008732*t3597 + t3621 + var1[2];
  p_output1[44]=-0.010214*t3590 + 0.010214*t3597 + t3628 + var1[2];
  p_output1[45]=-0.010589*t3590 + 0.010589*t3597 + t3636 + var1[2];
  p_output1[46]=-0.009817*t3590 + 0.009817*t3597 + t3650 + var1[2];
  p_output1[47]=-0.007981*t3590 + 0.007981*t3597 + t3658 + var1[2];
  p_output1[48]=-0.00528*t3590 + 0.00528*t3597 + t3663 + var1[2];
  p_output1[49]=-0.002007*t3590 + 0.002007*t3597 + t3673 + var1[2];
  p_output1[50]=0.001484*t3590 - 0.001484*t3597 + t3684 + var1[2];
  p_output1[51]=0.004813*t3590 - 0.004813*t3597 + t3691 + var1[2];
  p_output1[52]=0.007621*t3590 - 0.007621*t3597 + t3696 + var1[2];
  p_output1[53]=0.009604*t3590 - 0.009604*t3597 + t3702 + var1[2];
  p_output1[54]=0.010545*t3590 - 0.010545*t3597 + t3706 + var1[2];
  p_output1[55]=0.010344*t3590 - 0.010344*t3597 + t3719 + var1[2];
  p_output1[56]=0.009022*t3590 - 0.009022*t3597 + t3731 + var1[2];
  p_output1[57]=0.006722*t3590 - 0.006722*t3597 + t3742 + var1[2];
  p_output1[58]=0.003694*t3590 - 0.003694*t3597 + t3763 + var1[2];
  p_output1[59]=t3602;
  p_output1[60]=t3778;
  p_output1[61]=t1277 - 0.154402*t411*t642 + 0.148018*t411*t840 + var1[0];
  p_output1[62]=t1888 - 0.157513*t411*t642 + 0.144907*t411*t840 + var1[0];
  p_output1[63]=t1983 - 0.159942*t411*t642 + 0.142478*t411*t840 + var1[0];
  p_output1[64]=t2146 - 0.161424*t411*t642 + 0.140996*t411*t840 + var1[0];
  p_output1[65]=t2367 - 0.161799*t411*t642 + 0.140621*t411*t840 + var1[0];
  p_output1[66]=t2500 - 0.161027*t411*t642 + 0.141393*t411*t840 + var1[0];
  p_output1[67]=t2661 - 0.159191*t411*t642 + 0.143229*t411*t840 + var1[0];
  p_output1[68]=t2708 - 0.15649*t411*t642 + 0.14593*t411*t840 + var1[0];
  p_output1[69]=t2734 - 0.153217*t411*t642 + 0.149203*t411*t840 + var1[0];
  p_output1[70]=t2776 - 0.149726*t411*t642 + 0.152694*t411*t840 + var1[0];
  p_output1[71]=t2897 - 0.146397*t411*t642 + 0.156023*t411*t840 + var1[0];
  p_output1[72]=t3016 - 0.143589*t411*t642 + 0.158831*t411*t840 + var1[0];
  p_output1[73]=t3067 - 0.141606*t411*t642 + 0.160814*t411*t840 + var1[0];
  p_output1[74]=t3135 - 0.140665*t411*t642 + 0.161755*t411*t840 + var1[0];
  p_output1[75]=t3153 - 0.140866*t411*t642 + 0.161554*t411*t840 + var1[0];
  p_output1[76]=t3176 - 0.142188*t411*t642 + 0.160232*t411*t840 + var1[0];
  p_output1[77]=t3226 - 0.144488*t411*t642 + 0.157932*t411*t840 + var1[0];
  p_output1[78]=t3247 - 0.147516*t411*t642 + 0.154904*t411*t840 + var1[0];
  p_output1[79]=t3778;
  p_output1[80]=t3913;
  p_output1[81]=-0.154402*t3274 - 0.148018*t3305 + t3329 + var1[1];
  p_output1[82]=-0.157513*t3274 - 0.144907*t3305 + t3366 + var1[1];
  p_output1[83]=-0.159942*t3274 - 0.142478*t3305 + t3387 + var1[1];
  p_output1[84]=-0.161424*t3274 - 0.140996*t3305 + t3395 + var1[1];
  p_output1[85]=-0.161799*t3274 - 0.140621*t3305 + t3405 + var1[1];
  p_output1[86]=-0.161027*t3274 - 0.141393*t3305 + t3423 + var1[1];
  p_output1[87]=-0.159191*t3274 - 0.143229*t3305 + t3430 + var1[1];
  p_output1[88]=-0.15649*t3274 - 0.14593*t3305 + t3441 + var1[1];
  p_output1[89]=-0.153217*t3274 - 0.149203*t3305 + t3450 + var1[1];
  p_output1[90]=-0.149726*t3274 - 0.152694*t3305 + t3465 + var1[1];
  p_output1[91]=-0.146397*t3274 - 0.156023*t3305 + t3470 + var1[1];
  p_output1[92]=-0.143589*t3274 - 0.158831*t3305 + t3475 + var1[1];
  p_output1[93]=-0.141606*t3274 - 0.160814*t3305 + t3487 + var1[1];
  p_output1[94]=-0.140665*t3274 - 0.161755*t3305 + t3507 + var1[1];
  p_output1[95]=-0.140866*t3274 - 0.161554*t3305 + t3521 + var1[1];
  p_output1[96]=-0.142188*t3274 - 0.160232*t3305 + t3536 + var1[1];
  p_output1[97]=-0.144488*t3274 - 0.157932*t3305 + t3558 + var1[1];
  p_output1[98]=-0.147516*t3274 - 0.154904*t3305 + t3567 + var1[1];
  p_output1[99]=t3913;
  p_output1[100]=t4066;
  p_output1[101]=-0.154402*t3590 - 0.148018*t3597 + t3603 + var1[2];
  p_output1[102]=-0.157513*t3590 - 0.144907*t3597 + t3609 + var1[2];
  p_output1[103]=-0.159942*t3590 - 0.142478*t3597 + t3621 + var1[2];
  p_output1[104]=-0.161424*t3590 - 0.140996*t3597 + t3628 + var1[2];
  p_output1[105]=-0.161799*t3590 - 0.140621*t3597 + t3636 + var1[2];
  p_output1[106]=-0.161027*t3590 - 0.141393*t3597 + t3650 + var1[2];
  p_output1[107]=-0.159191*t3590 - 0.143229*t3597 + t3658 + var1[2];
  p_output1[108]=-0.15649*t3590 - 0.14593*t3597 + t3663 + var1[2];
  p_output1[109]=-0.153217*t3590 - 0.149203*t3597 + t3673 + var1[2];
  p_output1[110]=-0.149726*t3590 - 0.152694*t3597 + t3684 + var1[2];
  p_output1[111]=-0.146397*t3590 - 0.156023*t3597 + t3691 + var1[2];
  p_output1[112]=-0.143589*t3590 - 0.158831*t3597 + t3696 + var1[2];
  p_output1[113]=-0.141606*t3590 - 0.160814*t3597 + t3702 + var1[2];
  p_output1[114]=-0.140665*t3590 - 0.161755*t3597 + t3706 + var1[2];
  p_output1[115]=-0.140866*t3590 - 0.161554*t3597 + t3719 + var1[2];
  p_output1[116]=-0.142188*t3590 - 0.160232*t3597 + t3731 + var1[2];
  p_output1[117]=-0.144488*t3590 - 0.157932*t3597 + t3742 + var1[2];
  p_output1[118]=-0.147516*t3590 - 0.154904*t3597 + t3763 + var1[2];
  p_output1[119]=t4066;
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
