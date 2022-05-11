/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:09 GMT+02:00
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
  double t164;
  double t204;
  double t3770;
  double t4420;
  double t3153;
  double t4394;
  double t4440;
  double t4444;
  double t24426;
  double t24475;
  double t24473;
  double t24477;
  double t24478;
  double t24500;
  double t24502;
  double t24533;
  double t24430;
  double t24494;
  double t24534;
  double t24535;
  double t24974;
  double t24978;
  double t24981;
  double t24986;
  double t25052;
  double t25054;
  double t24973;
  double t24984;
  double t25071;
  double t25094;
  double t4447;
  double t6282;
  double t11753;
  double t11947;
  double t12555;
  double t13968;
  double t17859;
  double t18393;
  double t18931;
  double t21172;
  double t23304;
  double t23659;
  double t24032;
  double t24172;
  double t24227;
  double t24232;
  double t24284;
  double t24370;
  double t31093;
  double t31095;
  double t31099;
  double t24547;
  double t24576;
  double t24606;
  double t24691;
  double t24710;
  double t24730;
  double t24745;
  double t24776;
  double t24785;
  double t24824;
  double t24829;
  double t24834;
  double t24854;
  double t24860;
  double t24877;
  double t24906;
  double t24921;
  double t24954;
  double t32058;
  double t32065;
  double t32066;
  double t25113;
  double t25173;
  double t25200;
  double t25211;
  double t25254;
  double t25344;
  double t27299;
  double t28588;
  double t30233;
  double t30367;
  double t30485;
  double t30580;
  double t30624;
  double t30760;
  double t30817;
  double t30832;
  double t30908;
  double t31065;
  double t32242;
  double t32243;
  double t32245;
  t164 = Cos(var1[4]);
  t204 = Cos(var1[5]);
  t3770 = Sin(var1[4]);
  t4420 = Sin(var1[5]);
  t3153 = -0.006209*t164*t204;
  t4394 = -0.00472*t3770;
  t4440 = 0.012813*t164*t4420;
  t4444 = var1[0] + t3153 + t4394 + t4440;
  t24426 = Sin(var1[3]);
  t24475 = Cos(var1[3]);
  t24473 = t204*t24426*t3770;
  t24477 = t24475*t4420;
  t24478 = t24473 + t24477;
  t24500 = t24475*t204;
  t24502 = -1.*t24426*t3770*t4420;
  t24533 = t24500 + t24502;
  t24430 = 0.00472*t164*t24426;
  t24494 = -0.006209*t24478;
  t24534 = -0.012813*t24533;
  t24535 = var1[1] + t24430 + t24494 + t24534;
  t24974 = -1.*t24475*t204*t3770;
  t24978 = t24426*t4420;
  t24981 = t24974 + t24978;
  t24986 = t204*t24426;
  t25052 = t24475*t3770*t4420;
  t25054 = t24986 + t25052;
  t24973 = -0.00472*t24475*t164;
  t24984 = -0.006209*t24981;
  t25071 = -0.012813*t25054;
  t25094 = var1[2] + t24973 + t24984 + t25071;
  t4447 = -0.009087*t3770;
  t6282 = -0.01247*t3770;
  t11753 = -0.014501*t3770;
  t11947 = -0.014961*t3770;
  t12555 = -0.0138*t3770;
  t13968 = -0.011143*t3770;
  t17859 = -0.007278*t3770;
  t18393 = -0.002625*t3770;
  t18931 = 0.002312*t3770;
  t21172 = 0.006999*t3770;
  t23304 = 0.010928*t3770;
  t23659 = 0.013672*t3770;
  t24032 = 0.014935*t3770;
  t24172 = 0.014579*t3770;
  t24227 = 0.012644*t3770;
  t24232 = 0.009338*t3770;
  t24284 = 0.00502*t3770;
  t24370 = 0.000159*t3770;
  t31093 = 0.318791*t164*t204;
  t31095 = 0.170313*t164*t4420;
  t31099 = var1[0] + t31093 + t4394 + t31095;
  t24547 = 0.009087*t164*t24426;
  t24576 = 0.01247*t164*t24426;
  t24606 = 0.014501*t164*t24426;
  t24691 = 0.014961*t164*t24426;
  t24710 = 0.0138*t164*t24426;
  t24730 = 0.011143*t164*t24426;
  t24745 = 0.007278*t164*t24426;
  t24776 = 0.002625*t164*t24426;
  t24785 = -0.002312*t164*t24426;
  t24824 = -0.006999*t164*t24426;
  t24829 = -0.010928*t164*t24426;
  t24834 = -0.013672*t164*t24426;
  t24854 = -0.014935*t164*t24426;
  t24860 = -0.014579*t164*t24426;
  t24877 = -0.012644*t164*t24426;
  t24906 = -0.009338*t164*t24426;
  t24921 = -0.00502*t164*t24426;
  t24954 = -0.000159*t164*t24426;
  t32058 = 0.318791*t24478;
  t32065 = -0.170313*t24533;
  t32066 = var1[1] + t24430 + t32058 + t32065;
  t25113 = -0.009087*t24475*t164;
  t25173 = -0.01247*t24475*t164;
  t25200 = -0.014501*t24475*t164;
  t25211 = -0.014961*t24475*t164;
  t25254 = -0.0138*t24475*t164;
  t25344 = -0.011143*t24475*t164;
  t27299 = -0.007278*t24475*t164;
  t28588 = -0.002625*t24475*t164;
  t30233 = 0.002312*t24475*t164;
  t30367 = 0.006999*t24475*t164;
  t30485 = 0.010928*t24475*t164;
  t30580 = 0.013672*t24475*t164;
  t30624 = 0.014935*t24475*t164;
  t30760 = 0.014579*t24475*t164;
  t30817 = 0.012644*t24475*t164;
  t30832 = 0.009338*t24475*t164;
  t30908 = 0.00502*t24475*t164;
  t31065 = 0.000159*t24475*t164;
  t32242 = 0.318791*t24981;
  t32243 = -0.170313*t25054;
  t32245 = var1[2] + t24973 + t32242 + t32243;
  p_output1[0]=t4444;
  p_output1[1]=-0.005204*t164*t204 + 0.010739*t164*t4420 + t4447 + var1[0];
  p_output1[2]=-0.003636*t164*t204 + 0.007502*t164*t4420 + t6282 + var1[0];
  p_output1[3]=t11753 - 0.001673*t164*t204 + 0.003452*t164*t4420 + var1[0];
  p_output1[4]=t11947 + 0.000471*t164*t204 - 0.000972*t164*t4420 + var1[0];
  p_output1[5]=t12555 + 0.002564*t164*t204 - 0.005291*t164*t4420 + var1[0];
  p_output1[6]=t13968 + 0.004379*t164*t204 - 0.009037*t164*t4420 + var1[0];
  p_output1[7]=t17859 + 0.00572*t164*t204 - 0.011803*t164*t4420 + var1[0];
  p_output1[8]=t18393 + 0.006441*t164*t204 - 0.01329*t164*t4420 + var1[0];
  p_output1[9]=t18931 + 0.006463*t164*t204 - 0.013337*t164*t4420 + var1[0];
  p_output1[10]=0.005786*t164*t204 + t21172 - 0.011939*t164*t4420 + var1[0];
  p_output1[11]=0.004481*t164*t204 + t23304 - 0.009247*t164*t4420 + var1[0];
  p_output1[12]=0.002691*t164*t204 + t23659 - 0.005553*t164*t4420 + var1[0];
  p_output1[13]=0.000609*t164*t204 + t24032 - 0.001257*t164*t4420 + var1[0];
  p_output1[14]=-0.001539*t164*t204 + t24172 + 0.003175*t164*t4420 + var1[0];
  p_output1[15]=-0.00352*t164*t204 + t24227 + 0.007263*t164*t4420 + var1[0];
  p_output1[16]=-0.005119*t164*t204 + t24232 + 0.010564*t164*t4420 + var1[0];
  p_output1[17]=-0.006164*t164*t204 + t24284 + 0.01272*t164*t4420 + var1[0];
  p_output1[18]=-0.006541*t164*t204 + t24370 + 0.013498*t164*t4420 + var1[0];
  p_output1[19]=t4444;
  p_output1[20]=t24535;
  p_output1[21]=-0.005204*t24478 - 0.010739*t24533 + t24547 + var1[1];
  p_output1[22]=-0.003636*t24478 - 0.007502*t24533 + t24576 + var1[1];
  p_output1[23]=-0.001673*t24478 - 0.003452*t24533 + t24606 + var1[1];
  p_output1[24]=0.000471*t24478 + 0.000972*t24533 + t24691 + var1[1];
  p_output1[25]=0.002564*t24478 + 0.005291*t24533 + t24710 + var1[1];
  p_output1[26]=0.004379*t24478 + 0.009037*t24533 + t24730 + var1[1];
  p_output1[27]=0.00572*t24478 + 0.011803*t24533 + t24745 + var1[1];
  p_output1[28]=0.006441*t24478 + 0.01329*t24533 + t24776 + var1[1];
  p_output1[29]=0.006463*t24478 + 0.013337*t24533 + t24785 + var1[1];
  p_output1[30]=0.005786*t24478 + 0.011939*t24533 + t24824 + var1[1];
  p_output1[31]=0.004481*t24478 + 0.009247*t24533 + t24829 + var1[1];
  p_output1[32]=0.002691*t24478 + 0.005553*t24533 + t24834 + var1[1];
  p_output1[33]=0.000609*t24478 + 0.001257*t24533 + t24854 + var1[1];
  p_output1[34]=-0.001539*t24478 - 0.003175*t24533 + t24860 + var1[1];
  p_output1[35]=-0.00352*t24478 - 0.007263*t24533 + t24877 + var1[1];
  p_output1[36]=-0.005119*t24478 - 0.010564*t24533 + t24906 + var1[1];
  p_output1[37]=-0.006164*t24478 - 0.01272*t24533 + t24921 + var1[1];
  p_output1[38]=-0.006541*t24478 - 0.013498*t24533 + t24954 + var1[1];
  p_output1[39]=t24535;
  p_output1[40]=t25094;
  p_output1[41]=-0.005204*t24981 - 0.010739*t25054 + t25113 + var1[2];
  p_output1[42]=-0.003636*t24981 - 0.007502*t25054 + t25173 + var1[2];
  p_output1[43]=-0.001673*t24981 - 0.003452*t25054 + t25200 + var1[2];
  p_output1[44]=0.000471*t24981 + 0.000972*t25054 + t25211 + var1[2];
  p_output1[45]=0.002564*t24981 + 0.005291*t25054 + t25254 + var1[2];
  p_output1[46]=0.004379*t24981 + 0.009037*t25054 + t25344 + var1[2];
  p_output1[47]=0.00572*t24981 + 0.011803*t25054 + t27299 + var1[2];
  p_output1[48]=0.006441*t24981 + 0.01329*t25054 + t28588 + var1[2];
  p_output1[49]=0.006463*t24981 + 0.013337*t25054 + t30233 + var1[2];
  p_output1[50]=0.005786*t24981 + 0.011939*t25054 + t30367 + var1[2];
  p_output1[51]=0.004481*t24981 + 0.009247*t25054 + t30485 + var1[2];
  p_output1[52]=0.002691*t24981 + 0.005553*t25054 + t30580 + var1[2];
  p_output1[53]=0.000609*t24981 + 0.001257*t25054 + t30624 + var1[2];
  p_output1[54]=-0.001539*t24981 - 0.003175*t25054 + t30760 + var1[2];
  p_output1[55]=-0.00352*t24981 - 0.007263*t25054 + t30817 + var1[2];
  p_output1[56]=-0.005119*t24981 - 0.010564*t25054 + t30832 + var1[2];
  p_output1[57]=-0.006164*t24981 - 0.01272*t25054 + t30908 + var1[2];
  p_output1[58]=-0.006541*t24981 - 0.013498*t25054 + t31065 + var1[2];
  p_output1[59]=t25094;
  p_output1[60]=t31099;
  p_output1[61]=0.319796*t164*t204 + 0.168239*t164*t4420 + t4447 + var1[0];
  p_output1[62]=0.321364*t164*t204 + 0.165002*t164*t4420 + t6282 + var1[0];
  p_output1[63]=t11753 + 0.323327*t164*t204 + 0.160952*t164*t4420 + var1[0];
  p_output1[64]=t11947 + 0.325471*t164*t204 + 0.156528*t164*t4420 + var1[0];
  p_output1[65]=t12555 + 0.327564*t164*t204 + 0.152209*t164*t4420 + var1[0];
  p_output1[66]=t13968 + 0.329379*t164*t204 + 0.148463*t164*t4420 + var1[0];
  p_output1[67]=t17859 + 0.33072*t164*t204 + 0.145697*t164*t4420 + var1[0];
  p_output1[68]=t18393 + 0.331441*t164*t204 + 0.14421*t164*t4420 + var1[0];
  p_output1[69]=t18931 + 0.331463*t164*t204 + 0.144163*t164*t4420 + var1[0];
  p_output1[70]=0.330786*t164*t204 + t21172 + 0.145561*t164*t4420 + var1[0];
  p_output1[71]=0.329481*t164*t204 + t23304 + 0.148253*t164*t4420 + var1[0];
  p_output1[72]=0.327691*t164*t204 + t23659 + 0.151947*t164*t4420 + var1[0];
  p_output1[73]=0.325609*t164*t204 + t24032 + 0.156243*t164*t4420 + var1[0];
  p_output1[74]=0.323461*t164*t204 + t24172 + 0.160675*t164*t4420 + var1[0];
  p_output1[75]=0.32148*t164*t204 + t24227 + 0.164763*t164*t4420 + var1[0];
  p_output1[76]=0.319881*t164*t204 + t24232 + 0.168064*t164*t4420 + var1[0];
  p_output1[77]=0.318836*t164*t204 + t24284 + 0.17022*t164*t4420 + var1[0];
  p_output1[78]=0.318459*t164*t204 + t24370 + 0.170998*t164*t4420 + var1[0];
  p_output1[79]=t31099;
  p_output1[80]=t32066;
  p_output1[81]=0.319796*t24478 - 0.168239*t24533 + t24547 + var1[1];
  p_output1[82]=0.321364*t24478 - 0.165002*t24533 + t24576 + var1[1];
  p_output1[83]=0.323327*t24478 - 0.160952*t24533 + t24606 + var1[1];
  p_output1[84]=0.325471*t24478 - 0.156528*t24533 + t24691 + var1[1];
  p_output1[85]=0.327564*t24478 - 0.152209*t24533 + t24710 + var1[1];
  p_output1[86]=0.329379*t24478 - 0.148463*t24533 + t24730 + var1[1];
  p_output1[87]=0.33072*t24478 - 0.145697*t24533 + t24745 + var1[1];
  p_output1[88]=0.331441*t24478 - 0.14421*t24533 + t24776 + var1[1];
  p_output1[89]=0.331463*t24478 - 0.144163*t24533 + t24785 + var1[1];
  p_output1[90]=0.330786*t24478 - 0.145561*t24533 + t24824 + var1[1];
  p_output1[91]=0.329481*t24478 - 0.148253*t24533 + t24829 + var1[1];
  p_output1[92]=0.327691*t24478 - 0.151947*t24533 + t24834 + var1[1];
  p_output1[93]=0.325609*t24478 - 0.156243*t24533 + t24854 + var1[1];
  p_output1[94]=0.323461*t24478 - 0.160675*t24533 + t24860 + var1[1];
  p_output1[95]=0.32148*t24478 - 0.164763*t24533 + t24877 + var1[1];
  p_output1[96]=0.319881*t24478 - 0.168064*t24533 + t24906 + var1[1];
  p_output1[97]=0.318836*t24478 - 0.17022*t24533 + t24921 + var1[1];
  p_output1[98]=0.318459*t24478 - 0.170998*t24533 + t24954 + var1[1];
  p_output1[99]=t32066;
  p_output1[100]=t32245;
  p_output1[101]=0.319796*t24981 - 0.168239*t25054 + t25113 + var1[2];
  p_output1[102]=0.321364*t24981 - 0.165002*t25054 + t25173 + var1[2];
  p_output1[103]=0.323327*t24981 - 0.160952*t25054 + t25200 + var1[2];
  p_output1[104]=0.325471*t24981 - 0.156528*t25054 + t25211 + var1[2];
  p_output1[105]=0.327564*t24981 - 0.152209*t25054 + t25254 + var1[2];
  p_output1[106]=0.329379*t24981 - 0.148463*t25054 + t25344 + var1[2];
  p_output1[107]=0.33072*t24981 - 0.145697*t25054 + t27299 + var1[2];
  p_output1[108]=0.331441*t24981 - 0.14421*t25054 + t28588 + var1[2];
  p_output1[109]=0.331463*t24981 - 0.144163*t25054 + t30233 + var1[2];
  p_output1[110]=0.330786*t24981 - 0.145561*t25054 + t30367 + var1[2];
  p_output1[111]=0.329481*t24981 - 0.148253*t25054 + t30485 + var1[2];
  p_output1[112]=0.327691*t24981 - 0.151947*t25054 + t30580 + var1[2];
  p_output1[113]=0.325609*t24981 - 0.156243*t25054 + t30624 + var1[2];
  p_output1[114]=0.323461*t24981 - 0.160675*t25054 + t30760 + var1[2];
  p_output1[115]=0.32148*t24981 - 0.164763*t25054 + t30817 + var1[2];
  p_output1[116]=0.319881*t24981 - 0.168064*t25054 + t30832 + var1[2];
  p_output1[117]=0.318836*t24981 - 0.17022*t25054 + t30908 + var1[2];
  p_output1[118]=0.318459*t24981 - 0.170998*t25054 + t31065 + var1[2];
  p_output1[119]=t32245;
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

#include "Link_body_to_10_bar.hh"

namespace SymFunction
{

void Link_body_to_10_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
