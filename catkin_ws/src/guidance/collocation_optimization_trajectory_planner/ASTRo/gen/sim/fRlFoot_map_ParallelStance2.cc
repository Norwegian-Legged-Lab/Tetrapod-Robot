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
static void output1(double *p_output1,const double *var1)
{
  double t20291;
  double t8293;
  double t10724;
  double t20459;
  double t21019;
  double t21056;
  double t21079;
  double t20990;
  double t21088;
  double t20976;
  double t21089;
  double t20954;
  double t15088;
  double t20491;
  double t20503;
  double t20506;
  double t21086;
  double t21138;
  double t21152;
  double t21220;
  double t21182;
  double t21202;
  double t21204;
  double t21180;
  double t21231;
  double t21232;
  double t21240;
  double t21454;
  double t21460;
  double t21483;
  double t21491;
  double t21494;
  double t21501;
  double t21503;
  double t21514;
  double t21532;
  double t21535;
  double t21539;
  double t21542;
  double t21543;
  double t21551;
  double t21553;
  double t21556;
  double t21471;
  double t21477;
  double t21478;
  double t21545;
  double t21546;
  double t21565;
  double t21566;
  double t21568;
  double t21570;
  double t21571;
  double t21575;
  double t21577;
  double t21579;
  double t21580;
  double t21582;
  double t21547;
  double t21557;
  double t21560;
  double t21275;
  double t21349;
  double t21358;
  double t21359;
  double t21360;
  double t21386;
  double t21416;
  double t21420;
  double t21426;
  double t21578;
  double t21586;
  double t21591;
  double t21594;
  double t21596;
  double t21602;
  double t21614;
  double t21615;
  double t21616;
  double t21433;
  double t21446;
  double t21447;
  double t21564;
  double t21617;
  double t20512;
  double t21156;
  double t21169;
  double t21619;
  double t21621;
  double t21624;
  double t21701;
  double t21754;
  double t21768;
  double t21804;
  double t21879;
  double t21887;
  t20291 = Cos(var1[10]);
  t8293 = Cos(var1[11]);
  t10724 = Sin(var1[10]);
  t20459 = Sin(var1[11]);
  t21019 = -1.*t20291*t8293;
  t21056 = -1.*t10724*t20459;
  t21079 = t21019 + t21056;
  t20990 = Cos(var1[5]);
  t21088 = Sin(var1[9]);
  t20976 = Cos(var1[9]);
  t21089 = Sin(var1[5]);
  t20954 = Cos(var1[4]);
  t15088 = -1.*t8293*t10724;
  t20491 = t20291*t20459;
  t20503 = t15088 + t20491;
  t20506 = Sin(var1[4]);
  t21086 = t20976*t20990*t21079;
  t21138 = -1.*t21088*t21079*t21089;
  t21152 = t21086 + t21138;
  t21220 = Sin(var1[3]);
  t21182 = t20990*t21088*t21079;
  t21202 = t20976*t21079*t21089;
  t21204 = t21182 + t21202;
  t21180 = Cos(var1[3]);
  t21231 = t20954*t20503;
  t21232 = -1.*t20506*t21152;
  t21240 = t21231 + t21232;
  t21454 = -1.*t20976;
  t21460 = 1. + t21454;
  t21483 = -1.*t20291;
  t21491 = 1. + t21483;
  t21494 = -0.28121*t21491;
  t21501 = -1.*t8293;
  t21503 = 1. + t21501;
  t21514 = -0.50321*t21503;
  t21532 = -0.19821*t8293;
  t21535 = t21514 + t21532;
  t21539 = t20291*t21535;
  t21542 = 0.305*t10724*t20459;
  t21543 = t21494 + t21539 + t21542;
  t21551 = -0.15121*t21460;
  t21553 = t20976*t21543;
  t21556 = t21551 + t21553;
  t21471 = 0.15121*t21460;
  t21477 = 0.15121*t20976;
  t21478 = 0.15121*t21088;
  t21545 = t21088*t21543;
  t21546 = t21471 + t21477 + t21478 + t21545;
  t21565 = t20990*t21088;
  t21566 = t20976*t21089;
  t21568 = t21565 + t21566;
  t21570 = 0.28121*t10724;
  t21571 = t21535*t10724;
  t21575 = -0.305*t20291*t20459;
  t21577 = t21570 + t21571 + t21575;
  t21579 = t20990*t21556;
  t21580 = -1.*t21546*t21089;
  t21582 = t21579 + t21580;
  t21547 = t20990*t21546;
  t21557 = t21556*t21089;
  t21560 = t21547 + t21557;
  t21275 = t20291*t8293;
  t21349 = t10724*t20459;
  t21358 = t21275 + t21349;
  t21359 = t21358*t20506;
  t21360 = t20976*t20990*t20503;
  t21386 = -1.*t21088*t20503*t21089;
  t21416 = t21360 + t21386;
  t21420 = t20954*t21416;
  t21426 = t21359 + t21420;
  t21578 = t21577*t20506;
  t21586 = t20954*t21582;
  t21591 = t21578 + t21586;
  t21594 = t20954*t21577;
  t21596 = -1.*t20506*t21582;
  t21602 = t21594 + t21596;
  t21614 = t20990*t21088*t20503;
  t21615 = t20976*t20503*t21089;
  t21616 = t21614 + t21615;
  t21433 = -1.*t20976*t20990;
  t21446 = t21088*t21089;
  t21447 = t21433 + t21446;
  t21564 = -1.*t21447*t21560;
  t21617 = t21616*t21560;
  t20512 = t20503*t20506;
  t21156 = t20954*t21152;
  t21169 = t20512 + t21156;
  t21619 = t20954*t21358;
  t21621 = -1.*t20506*t21416;
  t21624 = t21619 + t21621;
  t21701 = -1.*t21616*t21560;
  t21754 = t21204*t21560;
  t21768 = -1.*t21577*t21358;
  t21804 = t21577*t20503;
  t21879 = t21447*t21560;
  t21887 = -1.*t21204*t21560;
  p_output1[0]=t21169;
  p_output1[1]=t21180*t21204 - 1.*t21220*t21240;
  p_output1[2]=t21204*t21220 + t21180*t21240;
  p_output1[3]=t21426*(t21564 - 1.*t20954*t21568*t21591 + t20506*t21568*t21602) + t20954*t21568*(t21426*t21591 + t21617 + t21602*t21624);
  p_output1[4]=(t21564 - 1.*t21568*t21582)*t21616 + t21447*(t21358*t21577 + t21416*t21582 + t21617);
  p_output1[5]=t21358*(t20976*t21546 - 1.*t21088*t21556);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t21079 + 0.15121*t21358;
  p_output1[10]=0.28121*t20459 + t20459*t21535 - 0.305*t20459*t8293;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t20954*t21568;
  p_output1[19]=t21180*t21447 + t20506*t21220*t21568;
  p_output1[20]=t21220*t21447 - 1.*t20506*t21180*t21568;
  p_output1[21]=t21169*(-1.*t21426*t21591 - 1.*t21602*t21624 + t21701) + t21426*(t21169*t21591 + t21240*t21602 + t21754);
  p_output1[22]=t21204*(-1.*t21416*t21582 + t21701 + t21768) + t21616*(t21152*t21582 + t21754 + t21804);
  p_output1[23]=t20503*(-1.*t20503*t21088*t21546 - 1.*t20503*t20976*t21556 + t21768) + t21358*(t21079*t21088*t21546 + t20976*t21079*t21556 + t21804);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t20503*(-1.*t20503*t21543 + t21768) + t21358*(t21079*t21543 + t21804);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t21426;
  p_output1[37]=t21180*t21616 - 1.*t21220*t21624;
  p_output1[38]=t21220*t21616 + t21180*t21624;
  p_output1[39]=t21169*(t20954*t21568*t21591 - 1.*t20506*t21568*t21602 + t21879) + t20954*t21568*(-1.*t21169*t21591 - 1.*t21240*t21602 + t21887);
  p_output1[40]=t21204*(t21568*t21582 + t21879) + t21447*(-1.*t20503*t21577 - 1.*t21152*t21582 + t21887);
  p_output1[41]=t20503*(-1.*t20976*t21546 + t21088*t21556);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.305*Power(t20459,2) + 0.28121*t8293 + t21535*t8293;
  p_output1[47]=-0.305;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
