/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:26 GMT+02:00
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
  double t4905;
  double t1550;
  double t5135;
  double t5245;
  double t5210;
  double t5212;
  double t5246;
  double t582;
  double t5223;
  double t5247;
  double t5256;
  double t5170;
  double t5306;
  double t5310;
  double t5311;
  double t5292;
  double t5545;
  double t5548;
  double t5322;
  double t5325;
  double t5326;
  double t5341;
  double t5350;
  double t5351;
  double t5352;
  double t5355;
  double t5474;
  double t5550;
  double t5551;
  double t5557;
  double t5594;
  double t5596;
  double t5601;
  double t5608;
  double t5610;
  double t5617;
  double t5633;
  double t5637;
  double t5639;
  double t5641;
  double t5642;
  double t5643;
  double t5285;
  double t5330;
  double t5331;
  double t5722;
  double t5723;
  double t5724;
  double t5727;
  double t5728;
  double t5729;
  double t5736;
  double t5738;
  double t5740;
  double t2323;
  double t5173;
  double t5175;
  double t5721;
  double t5726;
  double t5742;
  double t5743;
  double t5751;
  double t5752;
  double t5753;
  double t5754;
  double t5755;
  double t5756;
  double t5712;
  double t5713;
  double t5717;
  double t5718;
  double t5746;
  double t5749;
  double t5766;
  double t5768;
  double t5770;
  double t5773;
  double t5774;
  double t5775;
  double t5750;
  double t5758;
  double t5759;
  double t5772;
  double t5776;
  double t5777;
  double t5780;
  double t5785;
  double t5786;
  double t5338;
  double t5508;
  double t5513;
  double t5761;
  double t5796;
  double t5820;
  double t5825;
  double t5850;
  double t5858;
  double t5924;
  double t5932;
  double t5881;
  double t5885;
  double t5908;
  double t5895;
  double t5992;
  double t5987;
  t4905 = Cos(var1[15]);
  t1550 = Sin(var1[4]);
  t5135 = Cos(var1[4]);
  t5245 = Cos(var1[16]);
  t5210 = Cos(var1[17]);
  t5212 = Sin(var1[16]);
  t5246 = Sin(var1[17]);
  t582 = Sin(var1[15]);
  t5223 = t5210*t5212;
  t5247 = -1.*t5245*t5246;
  t5256 = t5223 + t5247;
  t5170 = Sin(var1[5]);
  t5306 = t5245*t5210;
  t5310 = t5212*t5246;
  t5311 = t5306 + t5310;
  t5292 = Cos(var1[5]);
  t5545 = Cos(var1[3]);
  t5548 = Sin(var1[3]);
  t5322 = t5292*t5311;
  t5325 = t582*t5256*t5170;
  t5326 = t5322 + t5325;
  t5341 = -1.*t5210*t5212;
  t5350 = t5245*t5246;
  t5351 = t5341 + t5350;
  t5352 = t5292*t5351;
  t5355 = t582*t5311*t5170;
  t5474 = t5352 + t5355;
  t5550 = t5135*t582;
  t5551 = t4905*t1550*t5170;
  t5557 = t5550 + t5551;
  t5594 = -1.*t5292*t582*t5256;
  t5596 = t5311*t5170;
  t5601 = t5594 + t5596;
  t5608 = t4905*t5135*t5256;
  t5610 = -1.*t1550*t5326;
  t5617 = t5608 + t5610;
  t5633 = -1.*t5292*t582*t5311;
  t5637 = t5351*t5170;
  t5639 = t5633 + t5637;
  t5641 = t4905*t5135*t5311;
  t5642 = -1.*t1550*t5474;
  t5643 = t5641 + t5642;
  t5285 = t4905*t5256*t1550;
  t5330 = t5135*t5326;
  t5331 = t5285 + t5330;
  t5722 = -0.0641*t5210;
  t5723 = -0.28*t5246;
  t5724 = t5722 + t5723;
  t5727 = -1.*t5210;
  t5728 = 1. + t5727;
  t5729 = -0.575*t5728;
  t5736 = -0.295*t5210;
  t5738 = -0.0641*t5246;
  t5740 = t5729 + t5736 + t5738;
  t2323 = t582*t1550;
  t5173 = -1.*t4905*t5135*t5170;
  t5175 = t2323 + t5173;
  t5721 = 0.325*t5212;
  t5726 = t5245*t5724;
  t5742 = t5212*t5740;
  t5743 = t5721 + t5726 + t5742;
  t5751 = -1.*t5245;
  t5752 = 1. + t5751;
  t5753 = -0.325*t5752;
  t5754 = -1.*t5212*t5724;
  t5755 = t5245*t5740;
  t5756 = t5753 + t5754 + t5755;
  t5712 = -1.*t4905;
  t5713 = 1. + t5712;
  t5717 = -0.1575*t5713;
  t5718 = -0.2255*t4905;
  t5746 = -1.*t582*t5743;
  t5749 = t5717 + t5718 + t5746;
  t5766 = -0.068*t582;
  t5768 = t4905*t5743;
  t5770 = t5766 + t5768;
  t5773 = t5292*t5756;
  t5774 = -1.*t5749*t5170;
  t5775 = t5773 + t5774;
  t5750 = t5292*t5749;
  t5758 = t5756*t5170;
  t5759 = t5750 + t5758;
  t5772 = t5770*t1550;
  t5776 = t5135*t5775;
  t5777 = t5772 + t5776;
  t5780 = t5135*t5770;
  t5785 = -1.*t1550*t5775;
  t5786 = t5780 + t5785;
  t5338 = t4905*t5311*t1550;
  t5508 = t5135*t5474;
  t5513 = t5338 + t5508;
  t5761 = t4905*t5292*t5759;
  t5796 = -1.*t5759*t5601;
  t5820 = t5759*t5601;
  t5825 = -1.*t5759*t5639;
  t5850 = -1.*t4905*t5292*t5759;
  t5858 = t5759*t5639;
  t5924 = -1.*t582*t5770;
  t5932 = t4905*t5770*t5311;
  t5881 = t582*t5770;
  t5885 = -1.*t4905*t5770*t5256;
  t5908 = -1.*t4905*t5770*t5311;
  t5895 = t4905*t5770*t5256;
  t5992 = t5756*t5311;
  t5987 = -1.*t5756*t5351;
  p_output1[0]=t5331*var2[0] + t5175*var2[1] + t5513*var2[2];
  p_output1[1]=(t5545*t5601 - 1.*t5548*t5617)*var2[0] + (t4905*t5292*t5545 - 1.*t5548*t5557)*var2[1] + (t5545*t5639 - 1.*t5548*t5643)*var2[2];
  p_output1[2]=(t5548*t5601 + t5545*t5617)*var2[0] + (t4905*t5292*t5548 + t5545*t5557)*var2[1] + (t5548*t5639 + t5545*t5643)*var2[2];
  p_output1[3]=(t5513*(-1.*t5175*t5777 - 1.*t5557*t5786 + t5850) + t5175*(t5513*t5777 + t5643*t5786 + t5858))*var2[0] + (t5513*(t5331*t5777 + t5617*t5786 + t5820) + t5331*(-1.*t5513*t5777 - 1.*t5643*t5786 + t5825))*var2[1] + (t5331*(t5761 + t5175*t5777 + t5557*t5786) + t5175*(-1.*t5331*t5777 - 1.*t5617*t5786 + t5796))*var2[2];
  p_output1[4]=(t5639*(t4905*t5170*t5775 + t5850 + t5924) + t4905*t5292*(t5474*t5775 + t5858 + t5932))*var2[0] + (t5639*(t5326*t5775 + t5820 + t5895) + t5601*(-1.*t5474*t5775 + t5825 + t5908))*var2[1] + (t5601*(t5761 - 1.*t4905*t5170*t5775 + t5881) + t4905*t5292*(-1.*t5326*t5775 + t5796 + t5885))*var2[2];
  p_output1[5]=(t4905*t5311*(-1.*t4905*t5749 + t5924) + t582*(t5351*t5756 - 1.*t5311*t5749*t582 + t5932))*var2[0] + (t4905*t5256*(t5311*t5749*t582 + t5908 + t5987) + t4905*t5311*(-1.*t5256*t5749*t582 + t5895 + t5992))*var2[1] + (t4905*t5256*(t4905*t5749 + t5881) + t582*(-1.*t5311*t5756 + t5256*t5749*t582 + t5885))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t5256 + 0.2255*t5351)*var2[0] + (t5311*(-1.*t5311*t5743 + t5987) + t5351*(t5256*t5743 + t5992))*var2[1] - 0.068*t5311*var2[2];
  p_output1[16]=(-0.325*t5246 - 1.*t5210*t5724 - 1.*t5246*t5740)*var2[0] + (0.325*t5210 - 1.*t5246*t5724 + t5210*t5740)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
