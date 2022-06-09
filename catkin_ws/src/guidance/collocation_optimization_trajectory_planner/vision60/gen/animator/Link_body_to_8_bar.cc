/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 10:09:34 GMT+02:00
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
  double t3346;
  double t14772;
  double t19074;
  double t19131;
  double t18635;
  double t19125;
  double t19155;
  double t19207;
  double t21931;
  double t21953;
  double t21944;
  double t21955;
  double t21956;
  double t21959;
  double t21960;
  double t21962;
  double t21932;
  double t21958;
  double t21966;
  double t21968;
  double t27385;
  double t27386;
  double t27388;
  double t27404;
  double t27411;
  double t27415;
  double t27383;
  double t27400;
  double t27426;
  double t27472;
  double t20236;
  double t20298;
  double t20458;
  double t21164;
  double t21203;
  double t21287;
  double t21367;
  double t21420;
  double t21447;
  double t21490;
  double t21623;
  double t21632;
  double t21637;
  double t21686;
  double t21695;
  double t21725;
  double t21737;
  double t21756;
  double t27771;
  double t27772;
  double t27773;
  double t22005;
  double t22020;
  double t22032;
  double t22063;
  double t22145;
  double t22160;
  double t22204;
  double t22215;
  double t22257;
  double t22266;
  double t22285;
  double t22290;
  double t22308;
  double t25281;
  double t25744;
  double t25771;
  double t25785;
  double t25817;
  double t28126;
  double t28128;
  double t28192;
  double t27502;
  double t27508;
  double t27516;
  double t27521;
  double t27529;
  double t27537;
  double t27542;
  double t27551;
  double t27556;
  double t27637;
  double t27655;
  double t27724;
  double t27731;
  double t27738;
  double t27743;
  double t27748;
  double t27755;
  double t27761;
  double t28270;
  double t28271;
  double t28272;
  t3346 = Cos(var1[4]);
  t14772 = Cos(var1[5]);
  t19074 = Sin(var1[4]);
  t19131 = Sin(var1[5]);
  t18635 = 0.006306*t3346*t14772;
  t19125 = -0.003993*t19074;
  t19155 = 0.013011*t3346*t19131;
  t19207 = var1[0] + t18635 + t19125 + t19155;
  t21931 = Sin(var1[3]);
  t21953 = Cos(var1[3]);
  t21944 = t14772*t21931*t19074;
  t21955 = t21953*t19131;
  t21956 = t21944 + t21955;
  t21959 = t21953*t14772;
  t21960 = -1.*t21931*t19074*t19131;
  t21962 = t21959 + t21960;
  t21932 = 0.003993*t3346*t21931;
  t21958 = 0.006306*t21956;
  t21966 = -0.013011*t21962;
  t21968 = var1[1] + t21932 + t21958 + t21966;
  t27385 = -1.*t21953*t14772*t19074;
  t27386 = t21931*t19131;
  t27388 = t27385 + t27386;
  t27404 = t14772*t21931;
  t27411 = t21953*t19074*t19131;
  t27415 = t27404 + t27411;
  t27383 = -0.003993*t21953*t3346;
  t27400 = 0.006306*t27388;
  t27426 = -0.013011*t27415;
  t27472 = var1[2] + t27383 + t27400 + t27426;
  t20236 = -0.008471*t19074;
  t20298 = -0.012032*t19074;
  t20458 = -0.014288*t19074;
  t21164 = -0.014997*t19074;
  t21203 = -0.01408*t19074;
  t21287 = -0.011637*t19074;
  t21367 = -0.007933*t19074;
  t21420 = -0.00337*t19074;
  t21447 = 0.001559*t19074;
  t21490 = 0.006318*t19074;
  t21623 = 0.010393*t19074;
  t21632 = 0.013342*t19074;
  t21637 = 0.014845*t19074;
  t21686 = 0.014739*t19074;
  t21695 = 0.013036*t19074;
  t21725 = 0.00992*t19074;
  t21737 = 0.00573*t19074;
  t21756 = 0.000918*t19074;
  t27771 = 0.331306*t3346*t14772;
  t27772 = -0.144489*t3346*t19131;
  t27773 = var1[0] + t27771 + t19125 + t27772;
  t22005 = 0.008471*t3346*t21931;
  t22020 = 0.012032*t3346*t21931;
  t22032 = 0.014288*t3346*t21931;
  t22063 = 0.014997*t3346*t21931;
  t22145 = 0.01408*t3346*t21931;
  t22160 = 0.011637*t3346*t21931;
  t22204 = 0.007933*t3346*t21931;
  t22215 = 0.00337*t3346*t21931;
  t22257 = -0.001559*t3346*t21931;
  t22266 = -0.006318*t3346*t21931;
  t22285 = -0.010393*t3346*t21931;
  t22290 = -0.013342*t3346*t21931;
  t22308 = -0.014845*t3346*t21931;
  t25281 = -0.014739*t3346*t21931;
  t25744 = -0.013036*t3346*t21931;
  t25771 = -0.00992*t3346*t21931;
  t25785 = -0.00573*t3346*t21931;
  t25817 = -0.000918*t3346*t21931;
  t28126 = 0.331306*t21956;
  t28128 = 0.144489*t21962;
  t28192 = var1[1] + t21932 + t28126 + t28128;
  t27502 = -0.008471*t21953*t3346;
  t27508 = -0.012032*t21953*t3346;
  t27516 = -0.014288*t21953*t3346;
  t27521 = -0.014997*t21953*t3346;
  t27529 = -0.01408*t21953*t3346;
  t27537 = -0.011637*t21953*t3346;
  t27542 = -0.007933*t21953*t3346;
  t27551 = -0.00337*t21953*t3346;
  t27556 = 0.001559*t21953*t3346;
  t27637 = 0.006318*t21953*t3346;
  t27655 = 0.010393*t21953*t3346;
  t27724 = 0.013342*t21953*t3346;
  t27731 = 0.014845*t21953*t3346;
  t27738 = 0.014739*t21953*t3346;
  t27743 = 0.013036*t21953*t3346;
  t27748 = 0.00992*t21953*t3346;
  t27755 = 0.00573*t21953*t3346;
  t27761 = 0.000918*t21953*t3346;
  t28270 = 0.331306*t27388;
  t28271 = 0.144489*t27415;
  t28272 = var1[2] + t27383 + t28270 + t28271;
  p_output1[0]=t19207;
  p_output1[1]=t20236 + 0.005398*t14772*t3346 + 0.01114*t19131*t3346 + var1[0];
  p_output1[2]=t20298 + 0.003906*t14772*t3346 + 0.008061*t19131*t3346 + var1[0];
  p_output1[3]=t20458 + 0.001991*t14772*t3346 + 0.004108*t19131*t3346 + var1[0];
  p_output1[4]=t21164 - 0.00014*t14772*t3346 - 0.000289*t19131*t3346 + var1[0];
  p_output1[5]=t21203 - 0.002256*t14772*t3346 - 0.004656*t19131*t3346 + var1[0];
  p_output1[6]=t21287 - 0.004128*t14772*t3346 - 0.008517*t19131*t3346 + var1[0];
  p_output1[7]=t21367 - 0.005552*t14772*t3346 - 0.011456*t19131*t3346 + var1[0];
  p_output1[8]=t21420 - 0.006374*t14772*t3346 - 0.013153*t19131*t3346 + var1[0];
  p_output1[9]=t21447 - 0.006506*t14772*t3346 - 0.013425*t19131*t3346 + var1[0];
  p_output1[10]=t21490 - 0.005933*t14772*t3346 - 0.012242*t19131*t3346 + var1[0];
  p_output1[11]=t21623 - 0.004717*t14772*t3346 - 0.009733*t19131*t3346 + var1[0];
  p_output1[12]=t21632 - 0.002989*t14772*t3346 - 0.006169*t19131*t3346 + var1[0];
  p_output1[13]=t21637 - 0.000938*t14772*t3346 - 0.001936*t19131*t3346 + var1[0];
  p_output1[14]=t21686 + 0.001215*t14772*t3346 + 0.002507*t19131*t3346 + var1[0];
  p_output1[15]=t21695 + 0.003236*t14772*t3346 + 0.006677*t19131*t3346 + var1[0];
  p_output1[16]=t21725 + 0.004907*t14772*t3346 + 0.010125*t19131*t3346 + var1[0];
  p_output1[17]=t21737 + 0.006046*t14772*t3346 + 0.012475*t19131*t3346 + var1[0];
  p_output1[18]=t21756 + 0.006529*t14772*t3346 + 0.013473*t19131*t3346 + var1[0];
  p_output1[19]=t19207;
  p_output1[20]=t21968;
  p_output1[21]=0.005398*t21956 - 0.01114*t21962 + t22005 + var1[1];
  p_output1[22]=0.003906*t21956 - 0.008061*t21962 + t22020 + var1[1];
  p_output1[23]=0.001991*t21956 - 0.004108*t21962 + t22032 + var1[1];
  p_output1[24]=-0.00014*t21956 + 0.000289*t21962 + t22063 + var1[1];
  p_output1[25]=-0.002256*t21956 + 0.004656*t21962 + t22145 + var1[1];
  p_output1[26]=-0.004128*t21956 + 0.008517*t21962 + t22160 + var1[1];
  p_output1[27]=-0.005552*t21956 + 0.011456*t21962 + t22204 + var1[1];
  p_output1[28]=-0.006374*t21956 + 0.013153*t21962 + t22215 + var1[1];
  p_output1[29]=-0.006506*t21956 + 0.013425*t21962 + t22257 + var1[1];
  p_output1[30]=-0.005933*t21956 + 0.012242*t21962 + t22266 + var1[1];
  p_output1[31]=-0.004717*t21956 + 0.009733*t21962 + t22285 + var1[1];
  p_output1[32]=-0.002989*t21956 + 0.006169*t21962 + t22290 + var1[1];
  p_output1[33]=-0.000938*t21956 + 0.001936*t21962 + t22308 + var1[1];
  p_output1[34]=0.001215*t21956 - 0.002507*t21962 + t25281 + var1[1];
  p_output1[35]=0.003236*t21956 - 0.006677*t21962 + t25744 + var1[1];
  p_output1[36]=0.004907*t21956 - 0.010125*t21962 + t25771 + var1[1];
  p_output1[37]=0.006046*t21956 - 0.012475*t21962 + t25785 + var1[1];
  p_output1[38]=0.006529*t21956 - 0.013473*t21962 + t25817 + var1[1];
  p_output1[39]=t21968;
  p_output1[40]=t27472;
  p_output1[41]=0.005398*t27388 - 0.01114*t27415 + t27502 + var1[2];
  p_output1[42]=0.003906*t27388 - 0.008061*t27415 + t27508 + var1[2];
  p_output1[43]=0.001991*t27388 - 0.004108*t27415 + t27516 + var1[2];
  p_output1[44]=-0.00014*t27388 + 0.000289*t27415 + t27521 + var1[2];
  p_output1[45]=-0.002256*t27388 + 0.004656*t27415 + t27529 + var1[2];
  p_output1[46]=-0.004128*t27388 + 0.008517*t27415 + t27537 + var1[2];
  p_output1[47]=-0.005552*t27388 + 0.011456*t27415 + t27542 + var1[2];
  p_output1[48]=-0.006374*t27388 + 0.013153*t27415 + t27551 + var1[2];
  p_output1[49]=-0.006506*t27388 + 0.013425*t27415 + t27556 + var1[2];
  p_output1[50]=-0.005933*t27388 + 0.012242*t27415 + t27637 + var1[2];
  p_output1[51]=-0.004717*t27388 + 0.009733*t27415 + t27655 + var1[2];
  p_output1[52]=-0.002989*t27388 + 0.006169*t27415 + t27724 + var1[2];
  p_output1[53]=-0.000938*t27388 + 0.001936*t27415 + t27731 + var1[2];
  p_output1[54]=0.001215*t27388 - 0.002507*t27415 + t27738 + var1[2];
  p_output1[55]=0.003236*t27388 - 0.006677*t27415 + t27743 + var1[2];
  p_output1[56]=0.004907*t27388 - 0.010125*t27415 + t27748 + var1[2];
  p_output1[57]=0.006046*t27388 - 0.012475*t27415 + t27755 + var1[2];
  p_output1[58]=0.006529*t27388 - 0.013473*t27415 + t27761 + var1[2];
  p_output1[59]=t27472;
  p_output1[60]=t27773;
  p_output1[61]=t20236 + 0.330398*t14772*t3346 - 0.14636*t19131*t3346 + var1[0];
  p_output1[62]=t20298 + 0.328906*t14772*t3346 - 0.149439*t19131*t3346 + var1[0];
  p_output1[63]=t20458 + 0.326991*t14772*t3346 - 0.153392*t19131*t3346 + var1[0];
  p_output1[64]=t21164 + 0.32486*t14772*t3346 - 0.157789*t19131*t3346 + var1[0];
  p_output1[65]=t21203 + 0.322744*t14772*t3346 - 0.162156*t19131*t3346 + var1[0];
  p_output1[66]=t21287 + 0.320872*t14772*t3346 - 0.166017*t19131*t3346 + var1[0];
  p_output1[67]=t21367 + 0.319448*t14772*t3346 - 0.168956*t19131*t3346 + var1[0];
  p_output1[68]=t21420 + 0.318626*t14772*t3346 - 0.170653*t19131*t3346 + var1[0];
  p_output1[69]=t21447 + 0.318494*t14772*t3346 - 0.170925*t19131*t3346 + var1[0];
  p_output1[70]=t21490 + 0.319067*t14772*t3346 - 0.169742*t19131*t3346 + var1[0];
  p_output1[71]=t21623 + 0.320283*t14772*t3346 - 0.167233*t19131*t3346 + var1[0];
  p_output1[72]=t21632 + 0.322011*t14772*t3346 - 0.163669*t19131*t3346 + var1[0];
  p_output1[73]=t21637 + 0.324062*t14772*t3346 - 0.159436*t19131*t3346 + var1[0];
  p_output1[74]=t21686 + 0.326215*t14772*t3346 - 0.154993*t19131*t3346 + var1[0];
  p_output1[75]=t21695 + 0.328236*t14772*t3346 - 0.150823*t19131*t3346 + var1[0];
  p_output1[76]=t21725 + 0.329907*t14772*t3346 - 0.147375*t19131*t3346 + var1[0];
  p_output1[77]=t21737 + 0.331046*t14772*t3346 - 0.145025*t19131*t3346 + var1[0];
  p_output1[78]=t21756 + 0.331529*t14772*t3346 - 0.144027*t19131*t3346 + var1[0];
  p_output1[79]=t27773;
  p_output1[80]=t28192;
  p_output1[81]=0.330398*t21956 + 0.14636*t21962 + t22005 + var1[1];
  p_output1[82]=0.328906*t21956 + 0.149439*t21962 + t22020 + var1[1];
  p_output1[83]=0.326991*t21956 + 0.153392*t21962 + t22032 + var1[1];
  p_output1[84]=0.32486*t21956 + 0.157789*t21962 + t22063 + var1[1];
  p_output1[85]=0.322744*t21956 + 0.162156*t21962 + t22145 + var1[1];
  p_output1[86]=0.320872*t21956 + 0.166017*t21962 + t22160 + var1[1];
  p_output1[87]=0.319448*t21956 + 0.168956*t21962 + t22204 + var1[1];
  p_output1[88]=0.318626*t21956 + 0.170653*t21962 + t22215 + var1[1];
  p_output1[89]=0.318494*t21956 + 0.170925*t21962 + t22257 + var1[1];
  p_output1[90]=0.319067*t21956 + 0.169742*t21962 + t22266 + var1[1];
  p_output1[91]=0.320283*t21956 + 0.167233*t21962 + t22285 + var1[1];
  p_output1[92]=0.322011*t21956 + 0.163669*t21962 + t22290 + var1[1];
  p_output1[93]=0.324062*t21956 + 0.159436*t21962 + t22308 + var1[1];
  p_output1[94]=0.326215*t21956 + 0.154993*t21962 + t25281 + var1[1];
  p_output1[95]=0.328236*t21956 + 0.150823*t21962 + t25744 + var1[1];
  p_output1[96]=0.329907*t21956 + 0.147375*t21962 + t25771 + var1[1];
  p_output1[97]=0.331046*t21956 + 0.145025*t21962 + t25785 + var1[1];
  p_output1[98]=0.331529*t21956 + 0.144027*t21962 + t25817 + var1[1];
  p_output1[99]=t28192;
  p_output1[100]=t28272;
  p_output1[101]=0.330398*t27388 + 0.14636*t27415 + t27502 + var1[2];
  p_output1[102]=0.328906*t27388 + 0.149439*t27415 + t27508 + var1[2];
  p_output1[103]=0.326991*t27388 + 0.153392*t27415 + t27516 + var1[2];
  p_output1[104]=0.32486*t27388 + 0.157789*t27415 + t27521 + var1[2];
  p_output1[105]=0.322744*t27388 + 0.162156*t27415 + t27529 + var1[2];
  p_output1[106]=0.320872*t27388 + 0.166017*t27415 + t27537 + var1[2];
  p_output1[107]=0.319448*t27388 + 0.168956*t27415 + t27542 + var1[2];
  p_output1[108]=0.318626*t27388 + 0.170653*t27415 + t27551 + var1[2];
  p_output1[109]=0.318494*t27388 + 0.170925*t27415 + t27556 + var1[2];
  p_output1[110]=0.319067*t27388 + 0.169742*t27415 + t27637 + var1[2];
  p_output1[111]=0.320283*t27388 + 0.167233*t27415 + t27655 + var1[2];
  p_output1[112]=0.322011*t27388 + 0.163669*t27415 + t27724 + var1[2];
  p_output1[113]=0.324062*t27388 + 0.159436*t27415 + t27731 + var1[2];
  p_output1[114]=0.326215*t27388 + 0.154993*t27415 + t27738 + var1[2];
  p_output1[115]=0.328236*t27388 + 0.150823*t27415 + t27743 + var1[2];
  p_output1[116]=0.329907*t27388 + 0.147375*t27415 + t27748 + var1[2];
  p_output1[117]=0.331046*t27388 + 0.145025*t27415 + t27755 + var1[2];
  p_output1[118]=0.331529*t27388 + 0.144027*t27415 + t27761 + var1[2];
  p_output1[119]=t28272;
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

#include "Link_body_to_8_bar.hh"

namespace SymFunction
{

void Link_body_to_8_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
