/*
 * Automatically Generated from Mathematica.
 * Mon 30 May 2022 12:13:30 GMT+02:00
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
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=3;
  p_output1[19]=3;
  p_output1[20]=3;
  p_output1[21]=3;
  p_output1[22]=3;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=4;
  p_output1[28]=4;
  p_output1[29]=4;
  p_output1[30]=4;
  p_output1[31]=4;
  p_output1[32]=4;
  p_output1[33]=4;
  p_output1[34]=4;
  p_output1[35]=4;
  p_output1[36]=5;
  p_output1[37]=5;
  p_output1[38]=5;
  p_output1[39]=5;
  p_output1[40]=5;
  p_output1[41]=5;
  p_output1[42]=5;
  p_output1[43]=5;
  p_output1[44]=5;
  p_output1[45]=6;
  p_output1[46]=6;
  p_output1[47]=6;
  p_output1[48]=6;
  p_output1[49]=6;
  p_output1[50]=6;
  p_output1[51]=6;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=7;
  p_output1[55]=7;
  p_output1[56]=7;
  p_output1[57]=7;
  p_output1[58]=7;
  p_output1[59]=7;
  p_output1[60]=7;
  p_output1[61]=7;
  p_output1[62]=7;
  p_output1[63]=8;
  p_output1[64]=8;
  p_output1[65]=8;
  p_output1[66]=8;
  p_output1[67]=8;
  p_output1[68]=8;
  p_output1[69]=8;
  p_output1[70]=8;
  p_output1[71]=8;
  p_output1[72]=9;
  p_output1[73]=9;
  p_output1[74]=9;
  p_output1[75]=9;
  p_output1[76]=9;
  p_output1[77]=9;
  p_output1[78]=9;
  p_output1[79]=9;
  p_output1[80]=9;
  p_output1[81]=10;
  p_output1[82]=10;
  p_output1[83]=10;
  p_output1[84]=10;
  p_output1[85]=10;
  p_output1[86]=10;
  p_output1[87]=10;
  p_output1[88]=10;
  p_output1[89]=10;
  p_output1[90]=11;
  p_output1[91]=11;
  p_output1[92]=11;
  p_output1[93]=11;
  p_output1[94]=11;
  p_output1[95]=11;
  p_output1[96]=11;
  p_output1[97]=11;
  p_output1[98]=11;
  p_output1[99]=1;
  p_output1[100]=2;
  p_output1[101]=13;
  p_output1[102]=24;
  p_output1[103]=35;
  p_output1[104]=46;
  p_output1[105]=57;
  p_output1[106]=68;
  p_output1[107]=69;
  p_output1[108]=1;
  p_output1[109]=3;
  p_output1[110]=14;
  p_output1[111]=25;
  p_output1[112]=36;
  p_output1[113]=47;
  p_output1[114]=58;
  p_output1[115]=68;
  p_output1[116]=69;
  p_output1[117]=1;
  p_output1[118]=4;
  p_output1[119]=15;
  p_output1[120]=26;
  p_output1[121]=37;
  p_output1[122]=48;
  p_output1[123]=59;
  p_output1[124]=68;
  p_output1[125]=69;
  p_output1[126]=1;
  p_output1[127]=5;
  p_output1[128]=16;
  p_output1[129]=27;
  p_output1[130]=38;
  p_output1[131]=49;
  p_output1[132]=60;
  p_output1[133]=68;
  p_output1[134]=69;
  p_output1[135]=1;
  p_output1[136]=6;
  p_output1[137]=17;
  p_output1[138]=28;
  p_output1[139]=39;
  p_output1[140]=50;
  p_output1[141]=61;
  p_output1[142]=68;
  p_output1[143]=69;
  p_output1[144]=1;
  p_output1[145]=7;
  p_output1[146]=18;
  p_output1[147]=29;
  p_output1[148]=40;
  p_output1[149]=51;
  p_output1[150]=62;
  p_output1[151]=68;
  p_output1[152]=69;
  p_output1[153]=1;
  p_output1[154]=8;
  p_output1[155]=19;
  p_output1[156]=30;
  p_output1[157]=41;
  p_output1[158]=52;
  p_output1[159]=63;
  p_output1[160]=68;
  p_output1[161]=69;
  p_output1[162]=1;
  p_output1[163]=9;
  p_output1[164]=20;
  p_output1[165]=31;
  p_output1[166]=42;
  p_output1[167]=53;
  p_output1[168]=64;
  p_output1[169]=68;
  p_output1[170]=69;
  p_output1[171]=1;
  p_output1[172]=10;
  p_output1[173]=21;
  p_output1[174]=32;
  p_output1[175]=43;
  p_output1[176]=54;
  p_output1[177]=65;
  p_output1[178]=68;
  p_output1[179]=69;
  p_output1[180]=1;
  p_output1[181]=11;
  p_output1[182]=22;
  p_output1[183]=33;
  p_output1[184]=44;
  p_output1[185]=55;
  p_output1[186]=66;
  p_output1[187]=68;
  p_output1[188]=69;
  p_output1[189]=1;
  p_output1[190]=12;
  p_output1[191]=23;
  p_output1[192]=34;
  p_output1[193]=45;
  p_output1[194]=56;
  p_output1[195]=67;
  p_output1[196]=68;
  p_output1[197]=69;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 99, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_yd_position_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void Js_yd_position_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
