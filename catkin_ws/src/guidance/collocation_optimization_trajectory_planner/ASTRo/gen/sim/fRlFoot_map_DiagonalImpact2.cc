/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:51 GMT+02:00
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
  double t24984;
  double t1838;
  double t1879;
  double t25268;
  double t26661;
  double t26662;
  double t26664;
  double t26636;
  double t26694;
  double t26515;
  double t26696;
  double t26513;
  double t4549;
  double t26504;
  double t26510;
  double t26511;
  double t26677;
  double t26698;
  double t26699;
  double t26713;
  double t26709;
  double t26710;
  double t26711;
  double t26708;
  double t26715;
  double t26716;
  double t26717;
  double t26745;
  double t26746;
  double t26766;
  double t26767;
  double t26772;
  double t26786;
  double t26790;
  double t26797;
  double t26802;
  double t26806;
  double t26809;
  double t26811;
  double t26815;
  double t26840;
  double t26850;
  double t26862;
  double t26747;
  double t26749;
  double t26751;
  double t26816;
  double t26817;
  double t26916;
  double t26921;
  double t26939;
  double t26944;
  double t26950;
  double t26951;
  double t26953;
  double t26959;
  double t26969;
  double t26972;
  double t26835;
  double t26886;
  double t26912;
  double t26724;
  double t26725;
  double t26726;
  double t26727;
  double t26728;
  double t26730;
  double t26731;
  double t26734;
  double t26736;
  double t26955;
  double t26974;
  double t26982;
  double t26996;
  double t27001;
  double t27008;
  double t27031;
  double t27032;
  double t27036;
  double t26739;
  double t26740;
  double t26741;
  double t26914;
  double t27037;
  double t26512;
  double t26701;
  double t26705;
  double t27044;
  double t27048;
  double t27053;
  double t27125;
  double t27131;
  double t27138;
  double t27144;
  double t27178;
  double t27183;
  t24984 = Cos(var1[10]);
  t1838 = Cos(var1[11]);
  t1879 = Sin(var1[10]);
  t25268 = Sin(var1[11]);
  t26661 = -1.*t24984*t1838;
  t26662 = -1.*t1879*t25268;
  t26664 = t26661 + t26662;
  t26636 = Cos(var1[5]);
  t26694 = Sin(var1[9]);
  t26515 = Cos(var1[9]);
  t26696 = Sin(var1[5]);
  t26513 = Cos(var1[4]);
  t4549 = -1.*t1838*t1879;
  t26504 = t24984*t25268;
  t26510 = t4549 + t26504;
  t26511 = Sin(var1[4]);
  t26677 = t26515*t26636*t26664;
  t26698 = -1.*t26694*t26664*t26696;
  t26699 = t26677 + t26698;
  t26713 = Sin(var1[3]);
  t26709 = t26636*t26694*t26664;
  t26710 = t26515*t26664*t26696;
  t26711 = t26709 + t26710;
  t26708 = Cos(var1[3]);
  t26715 = t26513*t26510;
  t26716 = -1.*t26511*t26699;
  t26717 = t26715 + t26716;
  t26745 = -1.*t26515;
  t26746 = 1. + t26745;
  t26766 = -1.*t24984;
  t26767 = 1. + t26766;
  t26772 = -0.28121*t26767;
  t26786 = -1.*t1838;
  t26790 = 1. + t26786;
  t26797 = -0.50321*t26790;
  t26802 = -0.19821*t1838;
  t26806 = t26797 + t26802;
  t26809 = t24984*t26806;
  t26811 = 0.305*t1879*t25268;
  t26815 = t26772 + t26809 + t26811;
  t26840 = -0.15121*t26746;
  t26850 = t26515*t26815;
  t26862 = t26840 + t26850;
  t26747 = 0.15121*t26746;
  t26749 = 0.15121*t26515;
  t26751 = 0.15121*t26694;
  t26816 = t26694*t26815;
  t26817 = t26747 + t26749 + t26751 + t26816;
  t26916 = t26636*t26694;
  t26921 = t26515*t26696;
  t26939 = t26916 + t26921;
  t26944 = 0.28121*t1879;
  t26950 = t26806*t1879;
  t26951 = -0.305*t24984*t25268;
  t26953 = t26944 + t26950 + t26951;
  t26959 = t26636*t26862;
  t26969 = -1.*t26817*t26696;
  t26972 = t26959 + t26969;
  t26835 = t26636*t26817;
  t26886 = t26862*t26696;
  t26912 = t26835 + t26886;
  t26724 = t24984*t1838;
  t26725 = t1879*t25268;
  t26726 = t26724 + t26725;
  t26727 = t26726*t26511;
  t26728 = t26515*t26636*t26510;
  t26730 = -1.*t26694*t26510*t26696;
  t26731 = t26728 + t26730;
  t26734 = t26513*t26731;
  t26736 = t26727 + t26734;
  t26955 = t26953*t26511;
  t26974 = t26513*t26972;
  t26982 = t26955 + t26974;
  t26996 = t26513*t26953;
  t27001 = -1.*t26511*t26972;
  t27008 = t26996 + t27001;
  t27031 = t26636*t26694*t26510;
  t27032 = t26515*t26510*t26696;
  t27036 = t27031 + t27032;
  t26739 = -1.*t26515*t26636;
  t26740 = t26694*t26696;
  t26741 = t26739 + t26740;
  t26914 = -1.*t26741*t26912;
  t27037 = t27036*t26912;
  t26512 = t26510*t26511;
  t26701 = t26513*t26699;
  t26705 = t26512 + t26701;
  t27044 = t26513*t26726;
  t27048 = -1.*t26511*t26731;
  t27053 = t27044 + t27048;
  t27125 = -1.*t27036*t26912;
  t27131 = t26711*t26912;
  t27138 = -1.*t26953*t26726;
  t27144 = t26953*t26510;
  t27178 = t26741*t26912;
  t27183 = -1.*t26711*t26912;
  p_output1[0]=t26705;
  p_output1[1]=t26708*t26711 - 1.*t26713*t26717;
  p_output1[2]=t26711*t26713 + t26708*t26717;
  p_output1[3]=t26736*(t26914 - 1.*t26513*t26939*t26982 + t26511*t26939*t27008) + t26513*t26939*(t26736*t26982 + t27037 + t27008*t27053);
  p_output1[4]=(t26914 - 1.*t26939*t26972)*t27036 + t26741*(t26726*t26953 + t26731*t26972 + t27037);
  p_output1[5]=t26726*(t26515*t26817 - 1.*t26694*t26862);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t26664 + 0.15121*t26726;
  p_output1[10]=0.28121*t25268 - 0.305*t1838*t25268 + t25268*t26806;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t26513*t26939;
  p_output1[19]=t26708*t26741 + t26511*t26713*t26939;
  p_output1[20]=t26713*t26741 - 1.*t26511*t26708*t26939;
  p_output1[21]=t26705*(-1.*t26736*t26982 - 1.*t27008*t27053 + t27125) + t26736*(t26705*t26982 + t26717*t27008 + t27131);
  p_output1[22]=t26711*(-1.*t26731*t26972 + t27125 + t27138) + t27036*(t26699*t26972 + t27131 + t27144);
  p_output1[23]=t26510*(-1.*t26510*t26694*t26817 - 1.*t26510*t26515*t26862 + t27138) + t26726*(t26664*t26694*t26817 + t26515*t26664*t26862 + t27144);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t26510*(-1.*t26510*t26815 + t27138) + t26726*(t26664*t26815 + t27144);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t26736;
  p_output1[37]=t26708*t27036 - 1.*t26713*t27053;
  p_output1[38]=t26713*t27036 + t26708*t27053;
  p_output1[39]=t26705*(t26513*t26939*t26982 - 1.*t26511*t26939*t27008 + t27178) + t26513*t26939*(-1.*t26705*t26982 - 1.*t26717*t27008 + t27183);
  p_output1[40]=t26711*(t26939*t26972 + t27178) + t26741*(-1.*t26510*t26953 - 1.*t26699*t26972 + t27183);
  p_output1[41]=t26510*(-1.*t26515*t26817 + t26694*t26862);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t1838 + 0.305*Power(t25268,2) + t1838*t26806;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
