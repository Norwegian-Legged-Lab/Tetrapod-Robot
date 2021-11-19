/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:17 GMT+01:00
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
  double t91;
  double t109;
  double t127;
  double t138;
  double t111;
  double t136;
  double t141;
  double t142;
  double t602;
  double t621;
  double t620;
  double t626;
  double t629;
  double t632;
  double t644;
  double t646;
  double t611;
  double t630;
  double t647;
  double t659;
  double t984;
  double t992;
  double t993;
  double t1000;
  double t1001;
  double t1003;
  double t977;
  double t998;
  double t1012;
  double t1016;
  double t150;
  double t166;
  double t189;
  double t224;
  double t245;
  double t264;
  double t275;
  double t333;
  double t384;
  double t409;
  double t428;
  double t441;
  double t455;
  double t483;
  double t505;
  double t522;
  double t563;
  double t581;
  double t1301;
  double t1305;
  double t1306;
  double t660;
  double t687;
  double t733;
  double t748;
  double t769;
  double t781;
  double t785;
  double t815;
  double t826;
  double t844;
  double t857;
  double t866;
  double t873;
  double t888;
  double t903;
  double t923;
  double t939;
  double t959;
  double t1550;
  double t1558;
  double t1562;
  double t1028;
  double t1034;
  double t1044;
  double t1061;
  double t1074;
  double t1087;
  double t1097;
  double t1113;
  double t1134;
  double t1150;
  double t1162;
  double t1176;
  double t1183;
  double t1200;
  double t1216;
  double t1241;
  double t1265;
  double t1286;
  double t1855;
  double t1856;
  double t1858;
  t91 = Cos(var1[4]);
  t109 = Cos(var1[5]);
  t127 = Sin(var1[4]);
  t138 = Sin(var1[5]);
  t111 = 0.010595*t91*t109;
  t136 = -0.000697*t127;
  t141 = 0.010595*t91*t138;
  t142 = var1[0] + t111 + t136 + t141;
  t602 = Sin(var1[3]);
  t621 = Cos(var1[3]);
  t620 = t109*t602*t127;
  t626 = t621*t138;
  t629 = t620 + t626;
  t632 = t621*t109;
  t644 = -1.*t602*t127*t138;
  t646 = t632 + t644;
  t611 = 0.000697*t91*t602;
  t630 = 0.010595*t629;
  t647 = -0.010595*t646;
  t659 = var1[1] + t611 + t630 + t647;
  t984 = -1.*t621*t109*t127;
  t992 = t602*t138;
  t993 = t984 + t992;
  t1000 = t109*t602;
  t1001 = t621*t127*t138;
  t1003 = t1000 + t1001;
  t977 = -0.000697*t621*t91;
  t998 = 0.010595*t993;
  t1012 = -0.010595*t1003;
  t1016 = var1[2] + t977 + t998 + t1012;
  t150 = -0.005525*t127;
  t166 = -0.009754*t127;
  t189 = -0.012925*t127;
  t224 = -0.014696*t127;
  t245 = -0.014875*t127;
  t264 = -0.013442*t127;
  t275 = -0.010552*t127;
  t333 = -0.006518*t127;
  t384 = -0.001778*t127;
  t409 = 0.003154*t127;
  t428 = 0.007745*t127;
  t441 = 0.011496*t127;
  t455 = 0.014002*t127;
  t483 = 0.01499*t127;
  t505 = 0.014354*t127;
  t522 = 0.012162*t127;
  t563 = 0.008653*t127;
  t581 = 0.004206*t127;
  t1301 = 0.161805*t91*t109;
  t1305 = -0.140615*t91*t138;
  t1306 = var1[0] + t1301 + t136 + t1305;
  t660 = 0.005525*t91*t602;
  t687 = 0.009754*t91*t602;
  t733 = 0.012925*t91*t602;
  t748 = 0.014696*t91*t602;
  t769 = 0.014875*t91*t602;
  t781 = 0.013442*t91*t602;
  t785 = 0.010552*t91*t602;
  t815 = 0.006518*t91*t602;
  t826 = 0.001778*t91*t602;
  t844 = -0.003154*t91*t602;
  t857 = -0.007745*t91*t602;
  t866 = -0.011496*t91*t602;
  t873 = -0.014002*t91*t602;
  t888 = -0.01499*t91*t602;
  t903 = -0.014354*t91*t602;
  t923 = -0.012162*t91*t602;
  t939 = -0.008653*t91*t602;
  t959 = -0.004206*t91*t602;
  t1550 = 0.161805*t629;
  t1558 = 0.140615*t646;
  t1562 = var1[1] + t611 + t1550 + t1558;
  t1028 = -0.005525*t621*t91;
  t1034 = -0.009754*t621*t91;
  t1044 = -0.012925*t621*t91;
  t1061 = -0.014696*t621*t91;
  t1074 = -0.014875*t621*t91;
  t1087 = -0.013442*t621*t91;
  t1097 = -0.010552*t621*t91;
  t1113 = -0.006518*t621*t91;
  t1134 = -0.001778*t621*t91;
  t1150 = 0.003154*t621*t91;
  t1162 = 0.007745*t621*t91;
  t1176 = 0.011496*t621*t91;
  t1183 = 0.014002*t621*t91;
  t1200 = 0.01499*t621*t91;
  t1216 = 0.014354*t621*t91;
  t1241 = 0.012162*t621*t91;
  t1265 = 0.008653*t621*t91;
  t1286 = 0.004206*t621*t91;
  t1855 = 0.161805*t993;
  t1856 = 0.140615*t1003;
  t1858 = var1[2] + t977 + t1855 + t1856;
  p_output1[0]=t142;
  p_output1[1]=t150 + 0.009861*t109*t91 + 0.009861*t138*t91 + var1[0];
  p_output1[2]=t166 + 0.008058*t109*t91 + 0.008058*t138*t91 + var1[0];
  p_output1[3]=t189 + 0.005382*t109*t91 + 0.005382*t138*t91 + var1[0];
  p_output1[4]=t224 + 0.002123*t109*t91 + 0.002123*t138*t91 + var1[0];
  p_output1[5]=t245 - 0.001366*t109*t91 - 0.001366*t138*t91 + var1[0];
  p_output1[6]=t264 - 0.004708*t109*t91 - 0.004708*t138*t91 + var1[0];
  p_output1[7]=t275 - 0.007539*t109*t91 - 0.007539*t138*t91 + var1[0];
  p_output1[8]=t333 - 0.009553*t109*t91 - 0.009553*t138*t91 + var1[0];
  p_output1[9]=t384 - 0.010532*t109*t91 - 0.010532*t138*t91 + var1[0];
  p_output1[10]=t409 - 0.010369*t109*t91 - 0.010369*t138*t91 + var1[0];
  p_output1[11]=t428 - 0.009083*t109*t91 - 0.009083*t138*t91 + var1[0];
  p_output1[12]=t441 - 0.006813*t109*t91 - 0.006813*t138*t91 + var1[0];
  p_output1[13]=t455 - 0.003804*t109*t91 - 0.003804*t138*t91 + var1[0];
  p_output1[14]=t483 - 0.000383*t109*t91 - 0.000383*t138*t91 + var1[0];
  p_output1[15]=t505 + 0.003079*t109*t91 + 0.003079*t138*t91 + var1[0];
  p_output1[16]=t522 + 0.006208*t109*t91 + 0.006208*t138*t91 + var1[0];
  p_output1[17]=t563 + 0.008664*t109*t91 + 0.008664*t138*t91 + var1[0];
  p_output1[18]=t581 + 0.010181*t109*t91 + 0.010181*t138*t91 + var1[0];
  p_output1[19]=t142;
  p_output1[20]=t659;
  p_output1[21]=0.009861*t629 - 0.009861*t646 + t660 + var1[1];
  p_output1[22]=0.008058*t629 - 0.008058*t646 + t687 + var1[1];
  p_output1[23]=0.005382*t629 - 0.005382*t646 + t733 + var1[1];
  p_output1[24]=0.002123*t629 - 0.002123*t646 + t748 + var1[1];
  p_output1[25]=-0.001366*t629 + 0.001366*t646 + t769 + var1[1];
  p_output1[26]=-0.004708*t629 + 0.004708*t646 + t781 + var1[1];
  p_output1[27]=-0.007539*t629 + 0.007539*t646 + t785 + var1[1];
  p_output1[28]=-0.009553*t629 + 0.009553*t646 + t815 + var1[1];
  p_output1[29]=-0.010532*t629 + 0.010532*t646 + t826 + var1[1];
  p_output1[30]=-0.010369*t629 + 0.010369*t646 + t844 + var1[1];
  p_output1[31]=-0.009083*t629 + 0.009083*t646 + t857 + var1[1];
  p_output1[32]=-0.006813*t629 + 0.006813*t646 + t866 + var1[1];
  p_output1[33]=-0.003804*t629 + 0.003804*t646 + t873 + var1[1];
  p_output1[34]=-0.000383*t629 + 0.000383*t646 + t888 + var1[1];
  p_output1[35]=0.003079*t629 - 0.003079*t646 + t903 + var1[1];
  p_output1[36]=0.006208*t629 - 0.006208*t646 + t923 + var1[1];
  p_output1[37]=0.008664*t629 - 0.008664*t646 + t939 + var1[1];
  p_output1[38]=0.010181*t629 - 0.010181*t646 + t959 + var1[1];
  p_output1[39]=t659;
  p_output1[40]=t1016;
  p_output1[41]=-0.009861*t1003 + t1028 + 0.009861*t993 + var1[2];
  p_output1[42]=-0.008058*t1003 + t1034 + 0.008058*t993 + var1[2];
  p_output1[43]=-0.005382*t1003 + t1044 + 0.005382*t993 + var1[2];
  p_output1[44]=-0.002123*t1003 + t1061 + 0.002123*t993 + var1[2];
  p_output1[45]=0.001366*t1003 + t1074 - 0.001366*t993 + var1[2];
  p_output1[46]=0.004708*t1003 + t1087 - 0.004708*t993 + var1[2];
  p_output1[47]=0.007539*t1003 + t1097 - 0.007539*t993 + var1[2];
  p_output1[48]=0.009553*t1003 + t1113 - 0.009553*t993 + var1[2];
  p_output1[49]=0.010532*t1003 + t1134 - 0.010532*t993 + var1[2];
  p_output1[50]=0.010369*t1003 + t1150 - 0.010369*t993 + var1[2];
  p_output1[51]=0.009083*t1003 + t1162 - 0.009083*t993 + var1[2];
  p_output1[52]=0.006813*t1003 + t1176 - 0.006813*t993 + var1[2];
  p_output1[53]=0.003804*t1003 + t1183 - 0.003804*t993 + var1[2];
  p_output1[54]=0.000383*t1003 + t1200 - 0.000383*t993 + var1[2];
  p_output1[55]=-0.003079*t1003 + t1216 + 0.003079*t993 + var1[2];
  p_output1[56]=-0.006208*t1003 + t1241 + 0.006208*t993 + var1[2];
  p_output1[57]=-0.008664*t1003 + t1265 + 0.008664*t993 + var1[2];
  p_output1[58]=-0.010181*t1003 + t1286 + 0.010181*t993 + var1[2];
  p_output1[59]=t1016;
  p_output1[60]=t1306;
  p_output1[61]=t150 + 0.161071*t109*t91 - 0.141349*t138*t91 + var1[0];
  p_output1[62]=t166 + 0.159268*t109*t91 - 0.143152*t138*t91 + var1[0];
  p_output1[63]=t189 + 0.156592*t109*t91 - 0.145828*t138*t91 + var1[0];
  p_output1[64]=t224 + 0.153333*t109*t91 - 0.149087*t138*t91 + var1[0];
  p_output1[65]=t245 + 0.149844*t109*t91 - 0.152576*t138*t91 + var1[0];
  p_output1[66]=t264 + 0.146502*t109*t91 - 0.155918*t138*t91 + var1[0];
  p_output1[67]=t275 + 0.143671*t109*t91 - 0.158749*t138*t91 + var1[0];
  p_output1[68]=t333 + 0.141657*t109*t91 - 0.160763*t138*t91 + var1[0];
  p_output1[69]=t384 + 0.140678*t109*t91 - 0.161742*t138*t91 + var1[0];
  p_output1[70]=t409 + 0.140841*t109*t91 - 0.161579*t138*t91 + var1[0];
  p_output1[71]=t428 + 0.142127*t109*t91 - 0.160293*t138*t91 + var1[0];
  p_output1[72]=t441 + 0.144397*t109*t91 - 0.158023*t138*t91 + var1[0];
  p_output1[73]=t455 + 0.147406*t109*t91 - 0.155014*t138*t91 + var1[0];
  p_output1[74]=t483 + 0.150827*t109*t91 - 0.151593*t138*t91 + var1[0];
  p_output1[75]=t505 + 0.154289*t109*t91 - 0.148131*t138*t91 + var1[0];
  p_output1[76]=t522 + 0.157418*t109*t91 - 0.145002*t138*t91 + var1[0];
  p_output1[77]=t563 + 0.159874*t109*t91 - 0.142546*t138*t91 + var1[0];
  p_output1[78]=t581 + 0.161391*t109*t91 - 0.141029*t138*t91 + var1[0];
  p_output1[79]=t1306;
  p_output1[80]=t1562;
  p_output1[81]=0.161071*t629 + 0.141349*t646 + t660 + var1[1];
  p_output1[82]=0.159268*t629 + 0.143152*t646 + t687 + var1[1];
  p_output1[83]=0.156592*t629 + 0.145828*t646 + t733 + var1[1];
  p_output1[84]=0.153333*t629 + 0.149087*t646 + t748 + var1[1];
  p_output1[85]=0.149844*t629 + 0.152576*t646 + t769 + var1[1];
  p_output1[86]=0.146502*t629 + 0.155918*t646 + t781 + var1[1];
  p_output1[87]=0.143671*t629 + 0.158749*t646 + t785 + var1[1];
  p_output1[88]=0.141657*t629 + 0.160763*t646 + t815 + var1[1];
  p_output1[89]=0.140678*t629 + 0.161742*t646 + t826 + var1[1];
  p_output1[90]=0.140841*t629 + 0.161579*t646 + t844 + var1[1];
  p_output1[91]=0.142127*t629 + 0.160293*t646 + t857 + var1[1];
  p_output1[92]=0.144397*t629 + 0.158023*t646 + t866 + var1[1];
  p_output1[93]=0.147406*t629 + 0.155014*t646 + t873 + var1[1];
  p_output1[94]=0.150827*t629 + 0.151593*t646 + t888 + var1[1];
  p_output1[95]=0.154289*t629 + 0.148131*t646 + t903 + var1[1];
  p_output1[96]=0.157418*t629 + 0.145002*t646 + t923 + var1[1];
  p_output1[97]=0.159874*t629 + 0.142546*t646 + t939 + var1[1];
  p_output1[98]=0.161391*t629 + 0.141029*t646 + t959 + var1[1];
  p_output1[99]=t1562;
  p_output1[100]=t1858;
  p_output1[101]=0.141349*t1003 + t1028 + 0.161071*t993 + var1[2];
  p_output1[102]=0.143152*t1003 + t1034 + 0.159268*t993 + var1[2];
  p_output1[103]=0.145828*t1003 + t1044 + 0.156592*t993 + var1[2];
  p_output1[104]=0.149087*t1003 + t1061 + 0.153333*t993 + var1[2];
  p_output1[105]=0.152576*t1003 + t1074 + 0.149844*t993 + var1[2];
  p_output1[106]=0.155918*t1003 + t1087 + 0.146502*t993 + var1[2];
  p_output1[107]=0.158749*t1003 + t1097 + 0.143671*t993 + var1[2];
  p_output1[108]=0.160763*t1003 + t1113 + 0.141657*t993 + var1[2];
  p_output1[109]=0.161742*t1003 + t1134 + 0.140678*t993 + var1[2];
  p_output1[110]=0.161579*t1003 + t1150 + 0.140841*t993 + var1[2];
  p_output1[111]=0.160293*t1003 + t1162 + 0.142127*t993 + var1[2];
  p_output1[112]=0.158023*t1003 + t1176 + 0.144397*t993 + var1[2];
  p_output1[113]=0.155014*t1003 + t1183 + 0.147406*t993 + var1[2];
  p_output1[114]=0.151593*t1003 + t1200 + 0.150827*t993 + var1[2];
  p_output1[115]=0.148131*t1003 + t1216 + 0.154289*t993 + var1[2];
  p_output1[116]=0.145002*t1003 + t1241 + 0.157418*t993 + var1[2];
  p_output1[117]=0.142546*t1003 + t1265 + 0.159874*t993 + var1[2];
  p_output1[118]=0.141029*t1003 + t1286 + 0.161391*t993 + var1[2];
  p_output1[119]=t1858;
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

#include "Link_base_link_to_fl_hip_yaw_bar.hh"

namespace SymFunction
{

void Link_base_link_to_fl_hip_yaw_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
