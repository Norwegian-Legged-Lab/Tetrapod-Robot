/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:24 GMT+01:00
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
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=1;
  p_output1[21]=1;
  p_output1[22]=1;
  p_output1[23]=1;
  p_output1[24]=1;
  p_output1[25]=1;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
  p_output1[50]=2;
  p_output1[51]=2;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=3;
  p_output1[62]=3;
  p_output1[63]=3;
  p_output1[64]=3;
  p_output1[65]=3;
  p_output1[66]=3;
  p_output1[67]=3;
  p_output1[68]=3;
  p_output1[69]=3;
  p_output1[70]=3;
  p_output1[71]=3;
  p_output1[72]=3;
  p_output1[73]=3;
  p_output1[74]=3;
  p_output1[75]=3;
  p_output1[76]=3;
  p_output1[77]=3;
  p_output1[78]=1;
  p_output1[79]=4;
  p_output1[80]=5;
  p_output1[81]=6;
  p_output1[82]=10;
  p_output1[83]=11;
  p_output1[84]=12;
  p_output1[85]=19;
  p_output1[86]=20;
  p_output1[87]=21;
  p_output1[88]=22;
  p_output1[89]=23;
  p_output1[90]=24;
  p_output1[91]=28;
  p_output1[92]=29;
  p_output1[93]=30;
  p_output1[94]=37;
  p_output1[95]=38;
  p_output1[96]=39;
  p_output1[97]=40;
  p_output1[98]=41;
  p_output1[99]=42;
  p_output1[100]=46;
  p_output1[101]=47;
  p_output1[102]=48;
  p_output1[103]=55;
  p_output1[104]=2;
  p_output1[105]=4;
  p_output1[106]=5;
  p_output1[107]=6;
  p_output1[108]=10;
  p_output1[109]=11;
  p_output1[110]=12;
  p_output1[111]=19;
  p_output1[112]=20;
  p_output1[113]=21;
  p_output1[114]=22;
  p_output1[115]=23;
  p_output1[116]=24;
  p_output1[117]=28;
  p_output1[118]=29;
  p_output1[119]=30;
  p_output1[120]=37;
  p_output1[121]=38;
  p_output1[122]=39;
  p_output1[123]=40;
  p_output1[124]=41;
  p_output1[125]=42;
  p_output1[126]=46;
  p_output1[127]=47;
  p_output1[128]=48;
  p_output1[129]=56;
  p_output1[130]=3;
  p_output1[131]=4;
  p_output1[132]=5;
  p_output1[133]=6;
  p_output1[134]=10;
  p_output1[135]=11;
  p_output1[136]=12;
  p_output1[137]=19;
  p_output1[138]=20;
  p_output1[139]=21;
  p_output1[140]=22;
  p_output1[141]=23;
  p_output1[142]=24;
  p_output1[143]=28;
  p_output1[144]=29;
  p_output1[145]=30;
  p_output1[146]=37;
  p_output1[147]=38;
  p_output1[148]=39;
  p_output1[149]=40;
  p_output1[150]=41;
  p_output1[151]=42;
  p_output1[152]=46;
  p_output1[153]=47;
  p_output1[154]=48;
  p_output1[155]=57;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 78, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_ddh_FrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void Js_ddh_FrFoot_QuadrupleStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
