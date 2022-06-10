/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:21 GMT+02:00
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
  double t5235;
  double t1917;
  double t4046;
  double t5276;
  double t4432;
  double t5279;
  double t5305;
  double t5487;
  double t5691;
  double t5517;
  double t5530;
  double t5553;
  double t5692;
  double t751;
  double t5361;
  double t5308;
  double t5665;
  double t5709;
  double t5731;
  double t5893;
  double t5764;
  double t5867;
  double t5890;
  double t5763;
  double t5901;
  double t5903;
  double t5914;
  double t6406;
  double t6475;
  double t6488;
  double t6592;
  double t6598;
  double t6606;
  double t6610;
  double t6611;
  double t6627;
  double t6399;
  double t6557;
  double t6632;
  double t6633;
  double t6694;
  double t6760;
  double t6763;
  double t6778;
  double t6811;
  double t6817;
  double t6359;
  double t6362;
  double t6369;
  double t6379;
  double t6634;
  double t6665;
  double t6855;
  double t6856;
  double t6863;
  double t6881;
  double t6896;
  double t6901;
  double t6839;
  double t6853;
  double t6854;
  double t6685;
  double t6826;
  double t6827;
  double t6281;
  double t6290;
  double t6297;
  double t6865;
  double t6903;
  double t6907;
  double t6249;
  double t6298;
  double t6299;
  double t6353;
  double t6355;
  double t6358;
  double t6990;
  double t7022;
  double t7037;
  double t7081;
  double t7082;
  double t7088;
  double t6834;
  double t7097;
  double t7139;
  double t7190;
  double t6935;
  double t6940;
  double t6970;
  double t5313;
  double t5735;
  double t5744;
  double t7103;
  double t7108;
  double t7109;
  double t7511;
  double t7559;
  double t7667;
  double t7588;
  double t7702;
  double t7682;
  double t7823;
  double t7896;
  double t7953;
  double t7970;
  t5235 = Cos(var1[13]);
  t1917 = Cos(var1[14]);
  t4046 = Sin(var1[13]);
  t5276 = Sin(var1[14]);
  t4432 = t1917*t4046;
  t5279 = -1.*t5235*t5276;
  t5305 = t4432 + t5279;
  t5487 = Cos(var1[5]);
  t5691 = Sin(var1[12]);
  t5517 = t5235*t1917;
  t5530 = t4046*t5276;
  t5553 = t5517 + t5530;
  t5692 = Sin(var1[5]);
  t751 = Cos(var1[12]);
  t5361 = Cos(var1[4]);
  t5308 = Sin(var1[4]);
  t5665 = t5487*t5553;
  t5709 = t5691*t5305*t5692;
  t5731 = t5665 + t5709;
  t5893 = Sin(var1[3]);
  t5764 = -1.*t5487*t5691*t5305;
  t5867 = t5553*t5692;
  t5890 = t5764 + t5867;
  t5763 = Cos(var1[3]);
  t5901 = t751*t5361*t5305;
  t5903 = -1.*t5308*t5731;
  t5914 = t5901 + t5903;
  t6406 = -0.0641*t1917;
  t6475 = -0.28*t5276;
  t6488 = t6406 + t6475;
  t6592 = -1.*t1917;
  t6598 = 1. + t6592;
  t6606 = 0.075*t6598;
  t6610 = 0.355*t1917;
  t6611 = -0.0641*t5276;
  t6627 = t6606 + t6610 + t6611;
  t6399 = -0.325*t4046;
  t6557 = t5235*t6488;
  t6632 = t4046*t6627;
  t6633 = t6399 + t6557 + t6632;
  t6694 = -1.*t5235;
  t6760 = 1. + t6694;
  t6763 = 0.325*t6760;
  t6778 = -1.*t4046*t6488;
  t6811 = t5235*t6627;
  t6817 = t6763 + t6778 + t6811;
  t6359 = -1.*t751;
  t6362 = 1. + t6359;
  t6369 = -0.1575*t6362;
  t6379 = -0.2255*t751;
  t6634 = -1.*t5691*t6633;
  t6665 = t6369 + t6379 + t6634;
  t6855 = -0.068*t5691;
  t6856 = t751*t6633;
  t6863 = t6855 + t6856;
  t6881 = t5487*t6817;
  t6896 = -1.*t6665*t5692;
  t6901 = t6881 + t6896;
  t6839 = t5691*t5308;
  t6853 = -1.*t751*t5361*t5692;
  t6854 = t6839 + t6853;
  t6685 = t5487*t6665;
  t6826 = t6817*t5692;
  t6827 = t6685 + t6826;
  t6281 = -1.*t1917*t4046;
  t6290 = t5235*t5276;
  t6297 = t6281 + t6290;
  t6865 = t6863*t5308;
  t6903 = t5361*t6901;
  t6907 = t6865 + t6903;
  t6249 = t751*t5553*t5308;
  t6298 = t5487*t6297;
  t6299 = t5691*t5553*t5692;
  t6353 = t6298 + t6299;
  t6355 = t5361*t6353;
  t6358 = t6249 + t6355;
  t6990 = t5361*t6863;
  t7022 = -1.*t5308*t6901;
  t7037 = t6990 + t7022;
  t7081 = -1.*t5487*t5691*t5553;
  t7082 = t6297*t5692;
  t7088 = t7081 + t7082;
  t6834 = -1.*t751*t5487*t6827;
  t7097 = t6827*t7088;
  t7139 = -1.*t5691*t6863;
  t7190 = t751*t6863*t5553;
  t6935 = t5361*t5691;
  t6940 = t751*t5308*t5692;
  t6970 = t6935 + t6940;
  t5313 = t751*t5305*t5308;
  t5735 = t5361*t5731;
  t5744 = t5313 + t5735;
  t7103 = t751*t5361*t5553;
  t7108 = -1.*t5308*t6353;
  t7109 = t7103 + t7108;
  t7511 = t6827*t5890;
  t7559 = -1.*t6827*t7088;
  t7667 = -1.*t751*t6863*t5553;
  t7588 = t751*t6863*t5305;
  t7702 = t6817*t5553;
  t7682 = -1.*t6817*t6297;
  t7823 = t751*t5487*t6827;
  t7896 = -1.*t6827*t5890;
  t7953 = t5691*t6863;
  t7970 = -1.*t751*t6863*t5305;
  p_output1[0]=t5744;
  p_output1[1]=t5763*t5890 - 1.*t5893*t5914;
  p_output1[2]=t5890*t5893 + t5763*t5914;
  p_output1[3]=t6358*(t6834 - 1.*t6854*t6907 - 1.*t6970*t7037) + t6854*(t6358*t6907 + t7097 + t7037*t7109);
  p_output1[4]=t5487*(t6353*t6901 + t7097 + t7190)*t751 + t7088*(t6834 + t7139 + t5692*t6901*t751);
  p_output1[5]=t5691*(-1.*t5553*t5691*t6665 + t6297*t6817 + t7190) + t5553*t751*(t7139 - 1.*t6665*t751);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t5305 + 0.2255*t6297;
  p_output1[13]=0.325*t5276 - 1.*t1917*t6488 - 1.*t5276*t6627;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6854;
  p_output1[19]=-1.*t5893*t6970 + t5487*t5763*t751;
  p_output1[20]=t5763*t6970 + t5487*t5893*t751;
  p_output1[21]=t6358*(t5744*t6907 + t5914*t7037 + t7511) + t5744*(-1.*t6358*t6907 - 1.*t7037*t7109 + t7559);
  p_output1[22]=t7088*(t5731*t6901 + t7511 + t7588) + t5890*(-1.*t6353*t6901 + t7559 + t7667);
  p_output1[23]=t5305*t751*(t5553*t5691*t6665 + t7667 + t7682) + t5553*t751*(-1.*t5305*t5691*t6665 + t7588 + t7702);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t5553*(-1.*t5553*t6633 + t7682) + t6297*(t5305*t6633 + t7702);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6358;
  p_output1[37]=t5763*t7088 - 1.*t5893*t7109;
  p_output1[38]=t5893*t7088 + t5763*t7109;
  p_output1[39]=t5744*(t6854*t6907 + t6970*t7037 + t7823) + t6854*(-1.*t5744*t6907 - 1.*t5914*t7037 + t7896);
  p_output1[40]=t5890*(-1.*t5692*t6901*t751 + t7823 + t7953) + t5487*t751*(-1.*t5731*t6901 + t7896 + t7970);
  p_output1[41]=t5305*t751*(t6665*t751 + t7953) + t5691*(t5305*t5691*t6665 - 1.*t5553*t6817 + t7970);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t5553;
  p_output1[49]=-0.325*t1917 - 1.*t5276*t6488 + t1917*t6627;
  p_output1[50]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
