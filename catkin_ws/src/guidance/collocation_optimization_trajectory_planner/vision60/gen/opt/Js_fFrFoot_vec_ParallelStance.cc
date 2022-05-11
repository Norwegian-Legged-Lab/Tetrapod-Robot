/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:46 GMT+02:00
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
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=3;
  p_output1[18]=3;
  p_output1[19]=3;
  p_output1[20]=3;
  p_output1[21]=3;
  p_output1[22]=3;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=4;
  p_output1[27]=4;
  p_output1[28]=4;
  p_output1[29]=4;
  p_output1[30]=4;
  p_output1[31]=4;
  p_output1[32]=4;
  p_output1[33]=4;
  p_output1[34]=5;
  p_output1[35]=5;
  p_output1[36]=5;
  p_output1[37]=5;
  p_output1[38]=5;
  p_output1[39]=5;
  p_output1[40]=5;
  p_output1[41]=6;
  p_output1[42]=6;
  p_output1[43]=6;
  p_output1[44]=6;
  p_output1[45]=6;
  p_output1[46]=6;
  p_output1[47]=13;
  p_output1[48]=13;
  p_output1[49]=13;
  p_output1[50]=13;
  p_output1[51]=13;
  p_output1[52]=14;
  p_output1[53]=14;
  p_output1[54]=14;
  p_output1[55]=15;
  p_output1[56]=15;
  p_output1[57]=5;
  p_output1[58]=6;
  p_output1[59]=13;
  p_output1[60]=14;
  p_output1[61]=15;
  p_output1[62]=19;
  p_output1[63]=20;
  p_output1[64]=21;
  p_output1[65]=4;
  p_output1[66]=5;
  p_output1[67]=6;
  p_output1[68]=13;
  p_output1[69]=14;
  p_output1[70]=15;
  p_output1[71]=19;
  p_output1[72]=20;
  p_output1[73]=21;
  p_output1[74]=4;
  p_output1[75]=5;
  p_output1[76]=6;
  p_output1[77]=13;
  p_output1[78]=14;
  p_output1[79]=15;
  p_output1[80]=19;
  p_output1[81]=20;
  p_output1[82]=21;
  p_output1[83]=5;
  p_output1[84]=6;
  p_output1[85]=13;
  p_output1[86]=14;
  p_output1[87]=15;
  p_output1[88]=19;
  p_output1[89]=20;
  p_output1[90]=21;
  p_output1[91]=6;
  p_output1[92]=13;
  p_output1[93]=14;
  p_output1[94]=15;
  p_output1[95]=19;
  p_output1[96]=20;
  p_output1[97]=21;
  p_output1[98]=13;
  p_output1[99]=14;
  p_output1[100]=15;
  p_output1[101]=19;
  p_output1[102]=20;
  p_output1[103]=21;
  p_output1[104]=14;
  p_output1[105]=15;
  p_output1[106]=19;
  p_output1[107]=20;
  p_output1[108]=21;
  p_output1[109]=15;
  p_output1[110]=19;
  p_output1[111]=21;
  p_output1[112]=19;
  p_output1[113]=21;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void Js_fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
