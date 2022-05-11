/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:57:45 GMT+01:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=NaN;
  p_output1[1]=NaN;
  p_output1[2]=NaN;
  p_output1[3]=NaN;
  p_output1[4]=NaN;
  p_output1[5]=NaN;
  p_output1[6]=NaN;
  p_output1[7]=NaN;
  p_output1[8]=NaN;
  p_output1[9]=NaN;
  p_output1[10]=NaN;
  p_output1[11]=NaN;
  p_output1[12]=NaN;
  p_output1[13]=NaN;
  p_output1[14]=NaN;
  p_output1[15]=NaN;
  p_output1[16]=NaN;
  p_output1[17]=NaN;
  p_output1[18]=NaN;
  p_output1[19]=NaN;
  p_output1[20]=NaN;
  p_output1[21]=NaN;
  p_output1[22]=NaN;
  p_output1[23]=NaN;
  p_output1[24]=NaN;
  p_output1[25]=NaN;
  p_output1[26]=NaN;
  p_output1[27]=NaN;
  p_output1[28]=NaN;
  p_output1[29]=NaN;
  p_output1[30]=NaN;
  p_output1[31]=NaN;
  p_output1[32]=NaN;
  p_output1[33]=NaN;
  p_output1[34]=NaN;
  p_output1[35]=NaN;
  p_output1[36]=NaN;
  p_output1[37]=NaN;
  p_output1[38]=NaN;
  p_output1[39]=NaN;
  p_output1[40]=NaN;
  p_output1[41]=NaN;
  p_output1[42]=NaN;
  p_output1[43]=NaN;
  p_output1[44]=NaN;
  p_output1[45]=NaN;
  p_output1[46]=NaN;
  p_output1[47]=NaN;
  p_output1[48]=NaN;
  p_output1[49]=NaN;
  p_output1[50]=NaN;
  p_output1[51]=NaN;
  p_output1[52]=NaN;
  p_output1[53]=NaN;
  p_output1[54]=NaN;
  p_output1[55]=NaN;
  p_output1[56]=NaN;
  p_output1[57]=NaN;
  p_output1[58]=NaN;
  p_output1[59]=NaN;
  p_output1[60]=NaN;
  p_output1[61]=NaN;
  p_output1[62]=NaN;
  p_output1[63]=NaN;
  p_output1[64]=NaN;
  p_output1[65]=NaN;
  p_output1[66]=NaN;
  p_output1[67]=NaN;
  p_output1[68]=NaN;
  p_output1[69]=NaN;
  p_output1[70]=NaN;
  p_output1[71]=NaN;
  p_output1[72]=NaN;
  p_output1[73]=NaN;
  p_output1[74]=NaN;
  p_output1[75]=NaN;
  p_output1[76]=NaN;
  p_output1[77]=NaN;
  p_output1[78]=NaN;
  p_output1[79]=NaN;
  p_output1[80]=NaN;
  p_output1[81]=NaN;
  p_output1[82]=NaN;
  p_output1[83]=NaN;
  p_output1[84]=NaN;
  p_output1[85]=NaN;
  p_output1[86]=NaN;
  p_output1[87]=NaN;
  p_output1[88]=NaN;
  p_output1[89]=NaN;
  p_output1[90]=NaN;
  p_output1[91]=NaN;
  p_output1[92]=NaN;
  p_output1[93]=NaN;
  p_output1[94]=NaN;
  p_output1[95]=NaN;
  p_output1[96]=NaN;
  p_output1[97]=NaN;
  p_output1[98]=NaN;
  p_output1[99]=NaN;
  p_output1[100]=NaN;
  p_output1[101]=NaN;
  p_output1[102]=NaN;
  p_output1[103]=NaN;
  p_output1[104]=NaN;
  p_output1[105]=NaN;
  p_output1[106]=NaN;
  p_output1[107]=NaN;
  p_output1[108]=NaN;
  p_output1[109]=NaN;
  p_output1[110]=NaN;
  p_output1[111]=NaN;
  p_output1[112]=NaN;
  p_output1[113]=NaN;
  p_output1[114]=NaN;
  p_output1[115]=NaN;
  p_output1[116]=NaN;
  p_output1[117]=NaN;
  p_output1[118]=NaN;
  p_output1[119]=NaN;
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
