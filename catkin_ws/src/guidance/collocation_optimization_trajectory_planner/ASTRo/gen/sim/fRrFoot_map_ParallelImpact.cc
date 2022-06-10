/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:32 GMT+02:00
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
  double t21834;
  double t10766;
  double t11693;
  double t21838;
  double t22202;
  double t22212;
  double t22213;
  double t22189;
  double t22219;
  double t22176;
  double t22220;
  double t22172;
  double t21772;
  double t21842;
  double t21847;
  double t21848;
  double t22216;
  double t22221;
  double t22222;
  double t22236;
  double t22227;
  double t22230;
  double t22232;
  double t22226;
  double t22257;
  double t22258;
  double t22277;
  double t22325;
  double t22341;
  double t22347;
  double t22394;
  double t22402;
  double t22417;
  double t22433;
  double t22435;
  double t22436;
  double t22439;
  double t22456;
  double t22468;
  double t22472;
  double t22478;
  double t22502;
  double t22529;
  double t22363;
  double t22382;
  double t22496;
  double t22500;
  double t22544;
  double t22549;
  double t22557;
  double t22567;
  double t22571;
  double t22575;
  double t22588;
  double t22634;
  double t22646;
  double t22673;
  double t22501;
  double t22530;
  double t22536;
  double t22292;
  double t22297;
  double t22299;
  double t22303;
  double t22306;
  double t22311;
  double t22313;
  double t22314;
  double t22317;
  double t22625;
  double t22679;
  double t22691;
  double t22706;
  double t22712;
  double t22715;
  double t22766;
  double t22775;
  double t22776;
  double t22318;
  double t22320;
  double t22322;
  double t22538;
  double t22778;
  double t22158;
  double t22224;
  double t22225;
  double t22820;
  double t22839;
  double t22842;
  double t23056;
  double t23083;
  double t23145;
  double t23172;
  double t23377;
  double t23424;
  t21834 = Cos(var1[16]);
  t10766 = Cos(var1[17]);
  t11693 = Sin(var1[16]);
  t21838 = Sin(var1[17]);
  t22202 = -1.*t21834*t10766;
  t22212 = -1.*t11693*t21838;
  t22213 = t22202 + t22212;
  t22189 = Cos(var1[5]);
  t22219 = Sin(var1[15]);
  t22176 = Cos(var1[15]);
  t22220 = Sin(var1[5]);
  t22172 = Cos(var1[4]);
  t21772 = -1.*t10766*t11693;
  t21842 = t21834*t21838;
  t21847 = t21772 + t21842;
  t21848 = Sin(var1[4]);
  t22216 = t22176*t22189*t22213;
  t22221 = -1.*t22219*t22213*t22220;
  t22222 = t22216 + t22221;
  t22236 = Sin(var1[3]);
  t22227 = t22189*t22219*t22213;
  t22230 = t22176*t22213*t22220;
  t22232 = t22227 + t22230;
  t22226 = Cos(var1[3]);
  t22257 = t22172*t21847;
  t22258 = -1.*t21848*t22222;
  t22277 = t22257 + t22258;
  t22325 = -1.*t22176;
  t22341 = 1. + t22325;
  t22347 = -0.15121*t22341;
  t22394 = -1.*t21834;
  t22402 = 1. + t22394;
  t22417 = -0.28121*t22402;
  t22433 = -1.*t10766;
  t22435 = 1. + t22433;
  t22436 = -0.50321*t22435;
  t22439 = -0.19821*t10766;
  t22456 = t22436 + t22439;
  t22468 = t21834*t22456;
  t22472 = 0.305*t11693*t21838;
  t22478 = t22417 + t22468 + t22472;
  t22502 = t22176*t22478;
  t22529 = t22347 + t22502;
  t22363 = -0.15121*t22176;
  t22382 = 0.15121*t22219;
  t22496 = t22219*t22478;
  t22500 = t22347 + t22363 + t22382 + t22496;
  t22544 = t22189*t22219;
  t22549 = t22176*t22220;
  t22557 = t22544 + t22549;
  t22567 = 0.28121*t11693;
  t22571 = t22456*t11693;
  t22575 = -0.305*t21834*t21838;
  t22588 = t22567 + t22571 + t22575;
  t22634 = t22189*t22529;
  t22646 = -1.*t22500*t22220;
  t22673 = t22634 + t22646;
  t22501 = t22189*t22500;
  t22530 = t22529*t22220;
  t22536 = t22501 + t22530;
  t22292 = t21834*t10766;
  t22297 = t11693*t21838;
  t22299 = t22292 + t22297;
  t22303 = t22299*t21848;
  t22306 = t22176*t22189*t21847;
  t22311 = -1.*t22219*t21847*t22220;
  t22313 = t22306 + t22311;
  t22314 = t22172*t22313;
  t22317 = t22303 + t22314;
  t22625 = t22588*t21848;
  t22679 = t22172*t22673;
  t22691 = t22625 + t22679;
  t22706 = t22172*t22588;
  t22712 = -1.*t21848*t22673;
  t22715 = t22706 + t22712;
  t22766 = t22189*t22219*t21847;
  t22775 = t22176*t21847*t22220;
  t22776 = t22766 + t22775;
  t22318 = -1.*t22176*t22189;
  t22320 = t22219*t22220;
  t22322 = t22318 + t22320;
  t22538 = -1.*t22322*t22536;
  t22778 = t22776*t22536;
  t22158 = t21847*t21848;
  t22224 = t22172*t22222;
  t22225 = t22158 + t22224;
  t22820 = t22172*t22299;
  t22839 = -1.*t21848*t22313;
  t22842 = t22820 + t22839;
  t23056 = -1.*t22776*t22536;
  t23083 = t22232*t22536;
  t23145 = -1.*t22588*t22299;
  t23172 = t22588*t21847;
  t23377 = t22322*t22536;
  t23424 = -1.*t22232*t22536;
  p_output1[0]=t22225;
  p_output1[1]=t22226*t22232 - 1.*t22236*t22277;
  p_output1[2]=t22232*t22236 + t22226*t22277;
  p_output1[3]=t22317*(t22538 - 1.*t22172*t22557*t22691 + t21848*t22557*t22715) + t22172*t22557*(t22317*t22691 + t22778 + t22715*t22842);
  p_output1[4]=(t22538 - 1.*t22557*t22673)*t22776 + t22322*(t22299*t22588 + t22313*t22673 + t22778);
  p_output1[5]=t22299*(t22176*t22500 - 1.*t22219*t22529);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t22213 - 0.15121*t22299;
  p_output1[16]=0.28121*t21838 - 0.305*t10766*t21838 + t21838*t22456;
  p_output1[17]=0;
  p_output1[18]=t22172*t22557;
  p_output1[19]=t22226*t22322 + t21848*t22236*t22557;
  p_output1[20]=t22236*t22322 - 1.*t21848*t22226*t22557;
  p_output1[21]=t22225*(-1.*t22317*t22691 - 1.*t22715*t22842 + t23056) + t22317*(t22225*t22691 + t22277*t22715 + t23083);
  p_output1[22]=t22232*(-1.*t22313*t22673 + t23056 + t23145) + t22776*(t22222*t22673 + t23083 + t23172);
  p_output1[23]=t21847*(-1.*t21847*t22219*t22500 - 1.*t21847*t22176*t22529 + t23145) + t22299*(t22213*t22219*t22500 + t22176*t22213*t22529 + t23172);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t21847*(-1.*t21847*t22478 + t23145) + t22299*(t22213*t22478 + t23172);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t22317;
  p_output1[37]=t22226*t22776 - 1.*t22236*t22842;
  p_output1[38]=t22236*t22776 + t22226*t22842;
  p_output1[39]=t22225*(t22172*t22557*t22691 - 1.*t21848*t22557*t22715 + t23377) + t22172*t22557*(-1.*t22225*t22691 - 1.*t22277*t22715 + t23424);
  p_output1[40]=t22232*(t22557*t22673 + t23377) + t22322*(-1.*t21847*t22588 - 1.*t22222*t22673 + t23424);
  p_output1[41]=t21847*(-1.*t22176*t22500 + t22219*t22529);
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
  p_output1[52]=0.28121*t10766 + 0.305*Power(t21838,2) + t10766*t22456;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
