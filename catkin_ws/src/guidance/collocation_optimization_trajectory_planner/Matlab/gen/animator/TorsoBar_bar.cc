/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:12 GMT+01:00
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
  double t8;
  double t10;
  double t21;
  double t23;
  double t17;
  double t22;
  double t24;
  double t32;
  double t979;
  double t986;
  double t983;
  double t987;
  double t991;
  double t994;
  double t996;
  double t999;
  double t980;
  double t993;
  double t1001;
  double t1002;
  double t1113;
  double t1114;
  double t1115;
  double t1117;
  double t1118;
  double t1119;
  double t1111;
  double t1116;
  double t1120;
  double t1121;
  double t1216;
  double t1217;
  double t1223;
  double t1225;
  double t1374;
  double t1375;
  double t1376;
  double t1377;
  double t1471;
  double t1472;
  double t1473;
  double t1474;
  t8 = Cos(var1[4]);
  t10 = Cos(var1[5]);
  t21 = Sin(var1[4]);
  t23 = Sin(var1[5]);
  t17 = 0.010984*t8*t10;
  t22 = -0.000126*t21;
  t24 = -0.010214*t8*t23;
  t32 = var1[0] + t17 + t22 + t24;
  t979 = Sin(var1[3]);
  t986 = Cos(var1[3]);
  t983 = t10*t979*t21;
  t987 = t986*t23;
  t991 = t983 + t987;
  t994 = t986*t10;
  t996 = -1.*t979*t21*t23;
  t999 = t994 + t996;
  t980 = 0.000126*t8*t979;
  t993 = 0.010984*t991;
  t1001 = 0.010214*t999;
  t1002 = var1[1] + t980 + t993 + t1001;
  t1113 = -1.*t986*t10*t21;
  t1114 = t979*t23;
  t1115 = t1113 + t1114;
  t1117 = t10*t979;
  t1118 = t986*t21*t23;
  t1119 = t1117 + t1118;
  t1111 = -0.000126*t986*t8;
  t1116 = 0.010984*t1115;
  t1120 = 0.010214*t1119;
  t1121 = var1[2] + t1111 + t1116 + t1120;
  t1216 = 0.012814*t8*t10;
  t1217 = -0.024154*t21;
  t1223 = -0.00795*t8*t23;
  t1225 = var1[0] + t1216 + t1217 + t1223;
  t1374 = 0.024154*t8*t979;
  t1375 = 0.012814*t991;
  t1376 = 0.00795*t999;
  t1377 = var1[1] + t1374 + t1375 + t1376;
  t1471 = -0.024154*t986*t8;
  t1472 = 0.012814*t1115;
  t1473 = 0.00795*t1119;
  t1474 = var1[2] + t1471 + t1472 + t1473;
  p_output1[0]=t32;
  p_output1[1]=0.000465*t21 + 0.013685*t10*t8 - 0.006123*t23*t8 + var1[0];
  p_output1[2]=0.001006*t21 + 0.014904*t10*t8 - 0.001369*t23*t8 + var1[0];
  p_output1[3]=0.001438*t21 + 0.014507*t10*t8 + 0.003534*t23*t8 + var1[0];
  p_output1[4]=0.001714*t21 + 0.012538*t10*t8 + 0.008054*t23*t8 + var1[0];
  p_output1[5]=0.001804*t21 + 0.00921*t10*t8 + 0.011701*t23*t8 + var1[0];
  p_output1[6]=0.001699*t21 + 0.004884*t10*t8 + 0.01408*t23*t8 + var1[0];
  p_output1[7]=0.001409*t21 + 0.000029*t10*t8 + 0.014934*t23*t8 + var1[0];
  p_output1[8]=0.000967*t21 - 0.004829*t10*t8 + 0.014169*t23*t8 + var1[0];
  p_output1[9]=0.00042*t21 - 0.009164*t10*t8 + 0.011868*t23*t8 + var1[0];
  p_output1[10]=-0.000172*t21 - 0.012505*t10*t8 + 0.008282*t23*t8 + var1[0];
  p_output1[11]=-0.000746*t21 - 0.014492*t10*t8 + 0.003798*t23*t8 + var1[0];
  p_output1[12]=-0.001239*t21 - 0.014908*t10*t8 - 0.001098*t23*t8 + var1[0];
  p_output1[13]=-0.001598*t21 - 0.013709*t10*t8 - 0.005874*t23*t8 + var1[0];
  p_output1[14]=-0.001783*t21 - 0.011024*t10*t8 - 0.010014*t23*t8 + var1[0];
  p_output1[15]=-0.001776*t21 - 0.007145*t10*t8 - 0.013069*t23*t8 + var1[0];
  p_output1[16]=-0.001576*t21 - 0.002491*t10*t8 - 0.014708*t23*t8 + var1[0];
  p_output1[17]=-0.001205*t21 + 0.002433*t10*t8 - 0.014752*t23*t8 + var1[0];
  p_output1[18]=-0.000703*t21 + 0.007093*t10*t8 - 0.013198*t23*t8 + var1[0];
  p_output1[19]=t32;
  p_output1[20]=t1002;
  p_output1[21]=-0.000465*t8*t979 + 0.013685*t991 + 0.006123*t999 + var1[1];
  p_output1[22]=-0.001006*t8*t979 + 0.014904*t991 + 0.001369*t999 + var1[1];
  p_output1[23]=-0.001438*t8*t979 + 0.014507*t991 - 0.003534*t999 + var1[1];
  p_output1[24]=-0.001714*t8*t979 + 0.012538*t991 - 0.008054*t999 + var1[1];
  p_output1[25]=-0.001804*t8*t979 + 0.00921*t991 - 0.011701*t999 + var1[1];
  p_output1[26]=-0.001699*t8*t979 + 0.004884*t991 - 0.01408*t999 + var1[1];
  p_output1[27]=-0.001409*t8*t979 + 0.000029*t991 - 0.014934*t999 + var1[1];
  p_output1[28]=-0.000967*t8*t979 - 0.004829*t991 - 0.014169*t999 + var1[1];
  p_output1[29]=-0.00042*t8*t979 - 0.009164*t991 - 0.011868*t999 + var1[1];
  p_output1[30]=0.000172*t8*t979 - 0.012505*t991 - 0.008282*t999 + var1[1];
  p_output1[31]=0.000746*t8*t979 - 0.014492*t991 - 0.003798*t999 + var1[1];
  p_output1[32]=0.001239*t8*t979 - 0.014908*t991 + 0.001098*t999 + var1[1];
  p_output1[33]=0.001598*t8*t979 - 0.013709*t991 + 0.005874*t999 + var1[1];
  p_output1[34]=0.001783*t8*t979 - 0.011024*t991 + 0.010014*t999 + var1[1];
  p_output1[35]=0.001776*t8*t979 - 0.007145*t991 + 0.013069*t999 + var1[1];
  p_output1[36]=0.001576*t8*t979 - 0.002491*t991 + 0.014708*t999 + var1[1];
  p_output1[37]=0.001205*t8*t979 + 0.002433*t991 + 0.014752*t999 + var1[1];
  p_output1[38]=0.000703*t8*t979 + 0.007093*t991 + 0.013198*t999 + var1[1];
  p_output1[39]=t1002;
  p_output1[40]=t1121;
  p_output1[41]=0.013685*t1115 + 0.006123*t1119 + 0.000465*t8*t986 + var1[2];
  p_output1[42]=0.014904*t1115 + 0.001369*t1119 + 0.001006*t8*t986 + var1[2];
  p_output1[43]=0.014507*t1115 - 0.003534*t1119 + 0.001438*t8*t986 + var1[2];
  p_output1[44]=0.012538*t1115 - 0.008054*t1119 + 0.001714*t8*t986 + var1[2];
  p_output1[45]=0.00921*t1115 - 0.011701*t1119 + 0.001804*t8*t986 + var1[2];
  p_output1[46]=0.004884*t1115 - 0.01408*t1119 + 0.001699*t8*t986 + var1[2];
  p_output1[47]=0.000029*t1115 - 0.014934*t1119 + 0.001409*t8*t986 + var1[2];
  p_output1[48]=-0.004829*t1115 - 0.014169*t1119 + 0.000967*t8*t986 + var1[2];
  p_output1[49]=-0.009164*t1115 - 0.011868*t1119 + 0.00042*t8*t986 + var1[2];
  p_output1[50]=-0.012505*t1115 - 0.008282*t1119 - 0.000172*t8*t986 + var1[2];
  p_output1[51]=-0.014492*t1115 - 0.003798*t1119 - 0.000746*t8*t986 + var1[2];
  p_output1[52]=-0.014908*t1115 + 0.001098*t1119 - 0.001239*t8*t986 + var1[2];
  p_output1[53]=-0.013709*t1115 + 0.005874*t1119 - 0.001598*t8*t986 + var1[2];
  p_output1[54]=-0.011024*t1115 + 0.010014*t1119 - 0.001783*t8*t986 + var1[2];
  p_output1[55]=-0.007145*t1115 + 0.013069*t1119 - 0.001776*t8*t986 + var1[2];
  p_output1[56]=-0.002491*t1115 + 0.014708*t1119 - 0.001576*t8*t986 + var1[2];
  p_output1[57]=0.002433*t1115 + 0.014752*t1119 - 0.001205*t8*t986 + var1[2];
  p_output1[58]=0.007093*t1115 + 0.013198*t1119 - 0.000703*t8*t986 + var1[2];
  p_output1[59]=t1121;
  p_output1[60]=t1225;
  p_output1[61]=-0.023563*t21 + 0.015515*t10*t8 - 0.003859*t23*t8 + var1[0];
  p_output1[62]=-0.023022*t21 + 0.016734*t10*t8 + 0.000895*t23*t8 + var1[0];
  p_output1[63]=-0.02259*t21 + 0.016337*t10*t8 + 0.005798*t23*t8 + var1[0];
  p_output1[64]=-0.022314*t21 + 0.014368*t10*t8 + 0.010318*t23*t8 + var1[0];
  p_output1[65]=-0.022224*t21 + 0.01104*t10*t8 + 0.013965*t23*t8 + var1[0];
  p_output1[66]=-0.022329*t21 + 0.006714*t10*t8 + 0.016344*t23*t8 + var1[0];
  p_output1[67]=-0.022619*t21 + 0.001859*t10*t8 + 0.017198*t23*t8 + var1[0];
  p_output1[68]=-0.023061*t21 - 0.002999*t10*t8 + 0.016433*t23*t8 + var1[0];
  p_output1[69]=-0.023608*t21 - 0.007334*t10*t8 + 0.014132*t23*t8 + var1[0];
  p_output1[70]=-0.0242*t21 - 0.010675*t10*t8 + 0.010546*t23*t8 + var1[0];
  p_output1[71]=-0.024774*t21 - 0.012662*t10*t8 + 0.006062*t23*t8 + var1[0];
  p_output1[72]=-0.025267*t21 - 0.013078*t10*t8 + 0.001166*t23*t8 + var1[0];
  p_output1[73]=-0.025626*t21 - 0.011879*t10*t8 - 0.00361*t23*t8 + var1[0];
  p_output1[74]=-0.025811*t21 - 0.009194*t10*t8 - 0.00775*t23*t8 + var1[0];
  p_output1[75]=-0.025804*t21 - 0.005315*t10*t8 - 0.010805*t23*t8 + var1[0];
  p_output1[76]=-0.025604*t21 - 0.000661*t10*t8 - 0.012444*t23*t8 + var1[0];
  p_output1[77]=-0.025233*t21 + 0.004263*t10*t8 - 0.012488*t23*t8 + var1[0];
  p_output1[78]=-0.024731*t21 + 0.008923*t10*t8 - 0.010934*t23*t8 + var1[0];
  p_output1[79]=t1225;
  p_output1[80]=t1377;
  p_output1[81]=0.023563*t8*t979 + 0.015515*t991 + 0.003859*t999 + var1[1];
  p_output1[82]=0.023022*t8*t979 + 0.016734*t991 - 0.000895*t999 + var1[1];
  p_output1[83]=0.02259*t8*t979 + 0.016337*t991 - 0.005798*t999 + var1[1];
  p_output1[84]=0.022314*t8*t979 + 0.014368*t991 - 0.010318*t999 + var1[1];
  p_output1[85]=0.022224*t8*t979 + 0.01104*t991 - 0.013965*t999 + var1[1];
  p_output1[86]=0.022329*t8*t979 + 0.006714*t991 - 0.016344*t999 + var1[1];
  p_output1[87]=0.022619*t8*t979 + 0.001859*t991 - 0.017198*t999 + var1[1];
  p_output1[88]=0.023061*t8*t979 - 0.002999*t991 - 0.016433*t999 + var1[1];
  p_output1[89]=0.023608*t8*t979 - 0.007334*t991 - 0.014132*t999 + var1[1];
  p_output1[90]=0.0242*t8*t979 - 0.010675*t991 - 0.010546*t999 + var1[1];
  p_output1[91]=0.024774*t8*t979 - 0.012662*t991 - 0.006062*t999 + var1[1];
  p_output1[92]=0.025267*t8*t979 - 0.013078*t991 - 0.001166*t999 + var1[1];
  p_output1[93]=0.025626*t8*t979 - 0.011879*t991 + 0.00361*t999 + var1[1];
  p_output1[94]=0.025811*t8*t979 - 0.009194*t991 + 0.00775*t999 + var1[1];
  p_output1[95]=0.025804*t8*t979 - 0.005315*t991 + 0.010805*t999 + var1[1];
  p_output1[96]=0.025604*t8*t979 - 0.000661*t991 + 0.012444*t999 + var1[1];
  p_output1[97]=0.025233*t8*t979 + 0.004263*t991 + 0.012488*t999 + var1[1];
  p_output1[98]=0.024731*t8*t979 + 0.008923*t991 + 0.010934*t999 + var1[1];
  p_output1[99]=t1377;
  p_output1[100]=t1474;
  p_output1[101]=0.015515*t1115 + 0.003859*t1119 - 0.023563*t8*t986 + var1[2];
  p_output1[102]=0.016734*t1115 - 0.000895*t1119 - 0.023022*t8*t986 + var1[2];
  p_output1[103]=0.016337*t1115 - 0.005798*t1119 - 0.02259*t8*t986 + var1[2];
  p_output1[104]=0.014368*t1115 - 0.010318*t1119 - 0.022314*t8*t986 + var1[2];
  p_output1[105]=0.01104*t1115 - 0.013965*t1119 - 0.022224*t8*t986 + var1[2];
  p_output1[106]=0.006714*t1115 - 0.016344*t1119 - 0.022329*t8*t986 + var1[2];
  p_output1[107]=0.001859*t1115 - 0.017198*t1119 - 0.022619*t8*t986 + var1[2];
  p_output1[108]=-0.002999*t1115 - 0.016433*t1119 - 0.023061*t8*t986 + var1[2];
  p_output1[109]=-0.007334*t1115 - 0.014132*t1119 - 0.023608*t8*t986 + var1[2];
  p_output1[110]=-0.010675*t1115 - 0.010546*t1119 - 0.0242*t8*t986 + var1[2];
  p_output1[111]=-0.012662*t1115 - 0.006062*t1119 - 0.024774*t8*t986 + var1[2];
  p_output1[112]=-0.013078*t1115 - 0.001166*t1119 - 0.025267*t8*t986 + var1[2];
  p_output1[113]=-0.011879*t1115 + 0.00361*t1119 - 0.025626*t8*t986 + var1[2];
  p_output1[114]=-0.009194*t1115 + 0.00775*t1119 - 0.025811*t8*t986 + var1[2];
  p_output1[115]=-0.005315*t1115 + 0.010805*t1119 - 0.025804*t8*t986 + var1[2];
  p_output1[116]=-0.000661*t1115 + 0.012444*t1119 - 0.025604*t8*t986 + var1[2];
  p_output1[117]=0.004263*t1115 + 0.012488*t1119 - 0.025233*t8*t986 + var1[2];
  p_output1[118]=0.008923*t1115 + 0.010934*t1119 - 0.024731*t8*t986 + var1[2];
  p_output1[119]=t1474;
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
