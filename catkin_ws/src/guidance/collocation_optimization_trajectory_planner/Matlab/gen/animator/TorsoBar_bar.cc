/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:48 GMT+01:00
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
  double t74;
  double t452;
  double t678;
  double t857;
  double t586;
  double t807;
  double t1053;
  double t1095;
  double t2576;
  double t2588;
  double t2586;
  double t2591;
  double t2613;
  double t2673;
  double t2675;
  double t2680;
  double t2581;
  double t2665;
  double t2683;
  double t2692;
  double t3314;
  double t3317;
  double t3318;
  double t3322;
  double t3327;
  double t3332;
  double t3312;
  double t3319;
  double t3333;
  double t3339;
  double t3649;
  double t3662;
  double t3671;
  double t3674;
  double t4056;
  double t4058;
  double t4064;
  double t4065;
  double t4298;
  double t4299;
  double t4301;
  double t4302;
  t74 = Cos(var1[4]);
  t452 = Cos(var1[5]);
  t678 = Sin(var1[4]);
  t857 = Sin(var1[5]);
  t586 = 0.013556*t74*t452;
  t807 = 0.000429*t678;
  t1053 = -0.006407*t74*t857;
  t1095 = var1[0] + t586 + t807 + t1053;
  t2576 = Sin(var1[3]);
  t2588 = Cos(var1[3]);
  t2586 = t452*t2576*t678;
  t2591 = t2588*t857;
  t2613 = t2586 + t2591;
  t2673 = t2588*t452;
  t2675 = -1.*t2576*t678*t857;
  t2680 = t2673 + t2675;
  t2581 = -0.000429*t74*t2576;
  t2665 = 0.013556*t2613;
  t2683 = 0.006407*t2680;
  t2692 = var1[1] + t2581 + t2665 + t2683;
  t3314 = -1.*t2588*t452*t678;
  t3317 = t2576*t857;
  t3318 = t3314 + t3317;
  t3322 = t452*t2576;
  t3327 = t2588*t678*t857;
  t3332 = t3322 + t3327;
  t3312 = 0.000429*t2588*t74;
  t3319 = 0.013556*t3318;
  t3333 = 0.006407*t3332;
  t3339 = var1[2] + t3312 + t3319 + t3333;
  t3649 = 0.015386*t74*t452;
  t3662 = -0.023599*t678;
  t3671 = -0.004143*t74*t857;
  t3674 = var1[0] + t3649 + t3662 + t3671;
  t4056 = 0.023599*t74*t2576;
  t4058 = 0.015386*t2613;
  t4064 = 0.004143*t2680;
  t4065 = var1[1] + t4056 + t4058 + t4064;
  t4298 = -0.023599*t2588*t74;
  t4299 = 0.015386*t3318;
  t4301 = 0.004143*t3332;
  t4302 = var1[2] + t4298 + t4299 + t4301;
  p_output1[0]=t1095;
  p_output1[1]=0.000975*t678 + 0.014874*t452*t74 - 0.00168*t74*t857 + var1[0];
  p_output1[2]=0.001415*t678 + 0.01458*t452*t74 + 0.00323*t74*t857 + var1[0];
  p_output1[3]=0.001702*t678 + 0.012706*t452*t74 + 0.007789*t74*t857 + var1[0];
  p_output1[4]=0.001804*t678 + 0.009455*t452*t74 + 0.011504*t74*t857 + var1[0];
  p_output1[5]=0.001711*t678 + 0.005179*t452*t74 + 0.013973*t74*t857 + var1[0];
  p_output1[6]=0.001433*t678 + 0.000343*t452*t74 + 0.014927*t74*t857 + var1[0];
  p_output1[7]=0.000999*t678 - 0.004531*t452*t74 + 0.014264*t74*t857 + var1[0];
  p_output1[8]=0.000457*t678 - 0.008914*t452*t74 + 0.012055*t74*t857 + var1[0];
  p_output1[9]=-0.000134*t678 - 0.012331*t452*t74 + 0.00854*t74*t857 + var1[0];
  p_output1[10]=-0.000711*t678 - 0.014411*t452*t74 + 0.004099*t74*t857 + var1[0];
  p_output1[11]=-0.001211*t678 - 0.01493*t452*t74 - 0.000786*t74*t857 + var1[0];
  p_output1[12]=-0.00158*t678 - 0.013831*t452*t74 - 0.005586*t74*t857 + var1[0];
  p_output1[13]=-0.001777*t678 - 0.011234*t452*t74 - 0.00978*t74*t857 + var1[0];
  p_output1[14]=-0.001782*t678 - 0.007418*t452*t74 - 0.012915*t74*t857 + var1[0];
  p_output1[15]=-0.001594*t678 - 0.002799*t452*t74 - 0.01465*t74*t857 + var1[0];
  p_output1[16]=-0.001233*t678 + 0.002123*t452*t74 - 0.014798*t74*t857 + var1[0];
  p_output1[17]=-0.000738*t678 + 0.006815*t452*t74 - 0.013342*t74*t857 + var1[0];
  p_output1[18]=-0.000164*t678 + 0.010769*t452*t74 - 0.01044*t74*t857 + var1[0];
  p_output1[19]=t1095;
  p_output1[20]=t2692;
  p_output1[21]=0.014874*t2613 + 0.00168*t2680 - 0.000975*t2576*t74 + var1[1];
  p_output1[22]=0.01458*t2613 - 0.00323*t2680 - 0.001415*t2576*t74 + var1[1];
  p_output1[23]=0.012706*t2613 - 0.007789*t2680 - 0.001702*t2576*t74 + var1[1];
  p_output1[24]=0.009455*t2613 - 0.011504*t2680 - 0.001804*t2576*t74 + var1[1];
  p_output1[25]=0.005179*t2613 - 0.013973*t2680 - 0.001711*t2576*t74 + var1[1];
  p_output1[26]=0.000343*t2613 - 0.014927*t2680 - 0.001433*t2576*t74 + var1[1];
  p_output1[27]=-0.004531*t2613 - 0.014264*t2680 - 0.000999*t2576*t74 + var1[1];
  p_output1[28]=-0.008914*t2613 - 0.012055*t2680 - 0.000457*t2576*t74 + var1[1];
  p_output1[29]=-0.012331*t2613 - 0.00854*t2680 + 0.000134*t2576*t74 + var1[1];
  p_output1[30]=-0.014411*t2613 - 0.004099*t2680 + 0.000711*t2576*t74 + var1[1];
  p_output1[31]=-0.01493*t2613 + 0.000786*t2680 + 0.001211*t2576*t74 + var1[1];
  p_output1[32]=-0.013831*t2613 + 0.005586*t2680 + 0.00158*t2576*t74 + var1[1];
  p_output1[33]=-0.011234*t2613 + 0.00978*t2680 + 0.001777*t2576*t74 + var1[1];
  p_output1[34]=-0.007418*t2613 + 0.012915*t2680 + 0.001782*t2576*t74 + var1[1];
  p_output1[35]=-0.002799*t2613 + 0.01465*t2680 + 0.001594*t2576*t74 + var1[1];
  p_output1[36]=0.002123*t2613 + 0.014798*t2680 + 0.001233*t2576*t74 + var1[1];
  p_output1[37]=0.006815*t2613 + 0.013342*t2680 + 0.000738*t2576*t74 + var1[1];
  p_output1[38]=0.010769*t2613 + 0.01044*t2680 + 0.000164*t2576*t74 + var1[1];
  p_output1[39]=t2692;
  p_output1[40]=t3339;
  p_output1[41]=0.014874*t3318 + 0.00168*t3332 + 0.000975*t2588*t74 + var1[2];
  p_output1[42]=0.01458*t3318 - 0.00323*t3332 + 0.001415*t2588*t74 + var1[2];
  p_output1[43]=0.012706*t3318 - 0.007789*t3332 + 0.001702*t2588*t74 + var1[2];
  p_output1[44]=0.009455*t3318 - 0.011504*t3332 + 0.001804*t2588*t74 + var1[2];
  p_output1[45]=0.005179*t3318 - 0.013973*t3332 + 0.001711*t2588*t74 + var1[2];
  p_output1[46]=0.000343*t3318 - 0.014927*t3332 + 0.001433*t2588*t74 + var1[2];
  p_output1[47]=-0.004531*t3318 - 0.014264*t3332 + 0.000999*t2588*t74 + var1[2];
  p_output1[48]=-0.008914*t3318 - 0.012055*t3332 + 0.000457*t2588*t74 + var1[2];
  p_output1[49]=-0.012331*t3318 - 0.00854*t3332 - 0.000134*t2588*t74 + var1[2];
  p_output1[50]=-0.014411*t3318 - 0.004099*t3332 - 0.000711*t2588*t74 + var1[2];
  p_output1[51]=-0.01493*t3318 + 0.000786*t3332 - 0.001211*t2588*t74 + var1[2];
  p_output1[52]=-0.013831*t3318 + 0.005586*t3332 - 0.00158*t2588*t74 + var1[2];
  p_output1[53]=-0.011234*t3318 + 0.00978*t3332 - 0.001777*t2588*t74 + var1[2];
  p_output1[54]=-0.007418*t3318 + 0.012915*t3332 - 0.001782*t2588*t74 + var1[2];
  p_output1[55]=-0.002799*t3318 + 0.01465*t3332 - 0.001594*t2588*t74 + var1[2];
  p_output1[56]=0.002123*t3318 + 0.014798*t3332 - 0.001233*t2588*t74 + var1[2];
  p_output1[57]=0.006815*t3318 + 0.013342*t3332 - 0.000738*t2588*t74 + var1[2];
  p_output1[58]=0.010769*t3318 + 0.01044*t3332 - 0.000164*t2588*t74 + var1[2];
  p_output1[59]=t3339;
  p_output1[60]=t3674;
  p_output1[61]=-0.023053*t678 + 0.016704*t452*t74 + 0.000584*t74*t857 + var1[0];
  p_output1[62]=-0.022613*t678 + 0.01641*t452*t74 + 0.005494*t74*t857 + var1[0];
  p_output1[63]=-0.022326*t678 + 0.014536*t452*t74 + 0.010053*t74*t857 + var1[0];
  p_output1[64]=-0.022224*t678 + 0.011285*t452*t74 + 0.013768*t74*t857 + var1[0];
  p_output1[65]=-0.022317*t678 + 0.007009*t452*t74 + 0.016237*t74*t857 + var1[0];
  p_output1[66]=-0.022595*t678 + 0.002173*t452*t74 + 0.017191*t74*t857 + var1[0];
  p_output1[67]=-0.023029*t678 - 0.002701*t452*t74 + 0.016528*t74*t857 + var1[0];
  p_output1[68]=-0.023571*t678 - 0.007084*t452*t74 + 0.014319*t74*t857 + var1[0];
  p_output1[69]=-0.024162*t678 - 0.010501*t452*t74 + 0.010804*t74*t857 + var1[0];
  p_output1[70]=-0.024739*t678 - 0.012581*t452*t74 + 0.006363*t74*t857 + var1[0];
  p_output1[71]=-0.025239*t678 - 0.0131*t452*t74 + 0.001478*t74*t857 + var1[0];
  p_output1[72]=-0.025608*t678 - 0.012001*t452*t74 - 0.003322*t74*t857 + var1[0];
  p_output1[73]=-0.025805*t678 - 0.009404*t452*t74 - 0.007516*t74*t857 + var1[0];
  p_output1[74]=-0.02581*t678 - 0.005588*t452*t74 - 0.010651*t74*t857 + var1[0];
  p_output1[75]=-0.025622*t678 - 0.000969*t452*t74 - 0.012386*t74*t857 + var1[0];
  p_output1[76]=-0.025261*t678 + 0.003953*t452*t74 - 0.012534*t74*t857 + var1[0];
  p_output1[77]=-0.024766*t678 + 0.008645*t452*t74 - 0.011078*t74*t857 + var1[0];
  p_output1[78]=-0.024192*t678 + 0.012599*t452*t74 - 0.008176*t74*t857 + var1[0];
  p_output1[79]=t3674;
  p_output1[80]=t4065;
  p_output1[81]=0.016704*t2613 - 0.000584*t2680 + 0.023053*t2576*t74 + var1[1];
  p_output1[82]=0.01641*t2613 - 0.005494*t2680 + 0.022613*t2576*t74 + var1[1];
  p_output1[83]=0.014536*t2613 - 0.010053*t2680 + 0.022326*t2576*t74 + var1[1];
  p_output1[84]=0.011285*t2613 - 0.013768*t2680 + 0.022224*t2576*t74 + var1[1];
  p_output1[85]=0.007009*t2613 - 0.016237*t2680 + 0.022317*t2576*t74 + var1[1];
  p_output1[86]=0.002173*t2613 - 0.017191*t2680 + 0.022595*t2576*t74 + var1[1];
  p_output1[87]=-0.002701*t2613 - 0.016528*t2680 + 0.023029*t2576*t74 + var1[1];
  p_output1[88]=-0.007084*t2613 - 0.014319*t2680 + 0.023571*t2576*t74 + var1[1];
  p_output1[89]=-0.010501*t2613 - 0.010804*t2680 + 0.024162*t2576*t74 + var1[1];
  p_output1[90]=-0.012581*t2613 - 0.006363*t2680 + 0.024739*t2576*t74 + var1[1];
  p_output1[91]=-0.0131*t2613 - 0.001478*t2680 + 0.025239*t2576*t74 + var1[1];
  p_output1[92]=-0.012001*t2613 + 0.003322*t2680 + 0.025608*t2576*t74 + var1[1];
  p_output1[93]=-0.009404*t2613 + 0.007516*t2680 + 0.025805*t2576*t74 + var1[1];
  p_output1[94]=-0.005588*t2613 + 0.010651*t2680 + 0.02581*t2576*t74 + var1[1];
  p_output1[95]=-0.000969*t2613 + 0.012386*t2680 + 0.025622*t2576*t74 + var1[1];
  p_output1[96]=0.003953*t2613 + 0.012534*t2680 + 0.025261*t2576*t74 + var1[1];
  p_output1[97]=0.008645*t2613 + 0.011078*t2680 + 0.024766*t2576*t74 + var1[1];
  p_output1[98]=0.012599*t2613 + 0.008176*t2680 + 0.024192*t2576*t74 + var1[1];
  p_output1[99]=t4065;
  p_output1[100]=t4302;
  p_output1[101]=0.016704*t3318 - 0.000584*t3332 - 0.023053*t2588*t74 + var1[2];
  p_output1[102]=0.01641*t3318 - 0.005494*t3332 - 0.022613*t2588*t74 + var1[2];
  p_output1[103]=0.014536*t3318 - 0.010053*t3332 - 0.022326*t2588*t74 + var1[2];
  p_output1[104]=0.011285*t3318 - 0.013768*t3332 - 0.022224*t2588*t74 + var1[2];
  p_output1[105]=0.007009*t3318 - 0.016237*t3332 - 0.022317*t2588*t74 + var1[2];
  p_output1[106]=0.002173*t3318 - 0.017191*t3332 - 0.022595*t2588*t74 + var1[2];
  p_output1[107]=-0.002701*t3318 - 0.016528*t3332 - 0.023029*t2588*t74 + var1[2];
  p_output1[108]=-0.007084*t3318 - 0.014319*t3332 - 0.023571*t2588*t74 + var1[2];
  p_output1[109]=-0.010501*t3318 - 0.010804*t3332 - 0.024162*t2588*t74 + var1[2];
  p_output1[110]=-0.012581*t3318 - 0.006363*t3332 - 0.024739*t2588*t74 + var1[2];
  p_output1[111]=-0.0131*t3318 - 0.001478*t3332 - 0.025239*t2588*t74 + var1[2];
  p_output1[112]=-0.012001*t3318 + 0.003322*t3332 - 0.025608*t2588*t74 + var1[2];
  p_output1[113]=-0.009404*t3318 + 0.007516*t3332 - 0.025805*t2588*t74 + var1[2];
  p_output1[114]=-0.005588*t3318 + 0.010651*t3332 - 0.02581*t2588*t74 + var1[2];
  p_output1[115]=-0.000969*t3318 + 0.012386*t3332 - 0.025622*t2588*t74 + var1[2];
  p_output1[116]=0.003953*t3318 + 0.012534*t3332 - 0.025261*t2588*t74 + var1[2];
  p_output1[117]=0.008645*t3318 + 0.011078*t3332 - 0.024766*t2588*t74 + var1[2];
  p_output1[118]=0.012599*t3318 + 0.008176*t3332 - 0.024192*t2588*t74 + var1[2];
  p_output1[119]=t4302;
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

#include "TorsoBar_bar.hh"

namespace SymFunction
{

void TorsoBar_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
