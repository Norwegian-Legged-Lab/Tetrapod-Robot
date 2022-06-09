/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:39:29 GMT+02:00
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
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=4;
  p_output1[11]=4;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=5;
  p_output1[16]=5;
  p_output1[17]=5;
  p_output1[18]=5;
  p_output1[19]=5;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=6;
  p_output1[31]=6;
  p_output1[32]=6;
  p_output1[33]=6;
  p_output1[34]=6;
  p_output1[35]=6;
  p_output1[36]=6;
  p_output1[37]=6;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=6;
  p_output1[43]=6;
  p_output1[44]=6;
  p_output1[45]=7;
  p_output1[46]=7;
  p_output1[47]=7;
  p_output1[48]=7;
  p_output1[49]=7;
  p_output1[50]=7;
  p_output1[51]=8;
  p_output1[52]=8;
  p_output1[53]=8;
  p_output1[54]=8;
  p_output1[55]=8;
  p_output1[56]=8;
  p_output1[57]=9;
  p_output1[58]=9;
  p_output1[59]=9;
  p_output1[60]=9;
  p_output1[61]=9;
  p_output1[62]=9;
  p_output1[63]=10;
  p_output1[64]=10;
  p_output1[65]=10;
  p_output1[66]=10;
  p_output1[67]=10;
  p_output1[68]=10;
  p_output1[69]=11;
  p_output1[70]=11;
  p_output1[71]=11;
  p_output1[72]=11;
  p_output1[73]=11;
  p_output1[74]=11;
  p_output1[75]=12;
  p_output1[76]=12;
  p_output1[77]=12;
  p_output1[78]=12;
  p_output1[79]=12;
  p_output1[80]=12;
  p_output1[81]=13;
  p_output1[82]=13;
  p_output1[83]=13;
  p_output1[84]=13;
  p_output1[85]=13;
  p_output1[86]=13;
  p_output1[87]=14;
  p_output1[88]=14;
  p_output1[89]=14;
  p_output1[90]=14;
  p_output1[91]=14;
  p_output1[92]=14;
  p_output1[93]=15;
  p_output1[94]=15;
  p_output1[95]=15;
  p_output1[96]=15;
  p_output1[97]=15;
  p_output1[98]=15;
  p_output1[99]=16;
  p_output1[100]=16;
  p_output1[101]=16;
  p_output1[102]=16;
  p_output1[103]=16;
  p_output1[104]=16;
  p_output1[105]=17;
  p_output1[106]=17;
  p_output1[107]=17;
  p_output1[108]=17;
  p_output1[109]=17;
  p_output1[110]=17;
  p_output1[111]=18;
  p_output1[112]=18;
  p_output1[113]=18;
  p_output1[114]=18;
  p_output1[115]=18;
  p_output1[116]=18;
  p_output1[117]=4;
  p_output1[118]=5;
  p_output1[119]=6;
  p_output1[120]=7;
  p_output1[121]=8;
  p_output1[122]=9;
  p_output1[123]=10;
  p_output1[124]=11;
  p_output1[125]=12;
  p_output1[126]=13;
  p_output1[127]=14;
  p_output1[128]=15;
  p_output1[129]=16;
  p_output1[130]=17;
  p_output1[131]=18;
  p_output1[132]=4;
  p_output1[133]=5;
  p_output1[134]=6;
  p_output1[135]=7;
  p_output1[136]=8;
  p_output1[137]=9;
  p_output1[138]=10;
  p_output1[139]=11;
  p_output1[140]=12;
  p_output1[141]=13;
  p_output1[142]=14;
  p_output1[143]=15;
  p_output1[144]=16;
  p_output1[145]=17;
  p_output1[146]=18;
  p_output1[147]=4;
  p_output1[148]=5;
  p_output1[149]=6;
  p_output1[150]=7;
  p_output1[151]=8;
  p_output1[152]=9;
  p_output1[153]=10;
  p_output1[154]=11;
  p_output1[155]=12;
  p_output1[156]=13;
  p_output1[157]=14;
  p_output1[158]=15;
  p_output1[159]=16;
  p_output1[160]=17;
  p_output1[161]=18;
  p_output1[162]=4;
  p_output1[163]=5;
  p_output1[164]=6;
  p_output1[165]=7;
  p_output1[166]=8;
  p_output1[167]=9;
  p_output1[168]=4;
  p_output1[169]=5;
  p_output1[170]=6;
  p_output1[171]=7;
  p_output1[172]=8;
  p_output1[173]=9;
  p_output1[174]=4;
  p_output1[175]=5;
  p_output1[176]=6;
  p_output1[177]=7;
  p_output1[178]=8;
  p_output1[179]=9;
  p_output1[180]=4;
  p_output1[181]=5;
  p_output1[182]=6;
  p_output1[183]=10;
  p_output1[184]=11;
  p_output1[185]=12;
  p_output1[186]=4;
  p_output1[187]=5;
  p_output1[188]=6;
  p_output1[189]=10;
  p_output1[190]=11;
  p_output1[191]=12;
  p_output1[192]=4;
  p_output1[193]=5;
  p_output1[194]=6;
  p_output1[195]=10;
  p_output1[196]=11;
  p_output1[197]=12;
  p_output1[198]=4;
  p_output1[199]=5;
  p_output1[200]=6;
  p_output1[201]=13;
  p_output1[202]=14;
  p_output1[203]=15;
  p_output1[204]=4;
  p_output1[205]=5;
  p_output1[206]=6;
  p_output1[207]=13;
  p_output1[208]=14;
  p_output1[209]=15;
  p_output1[210]=4;
  p_output1[211]=5;
  p_output1[212]=6;
  p_output1[213]=13;
  p_output1[214]=14;
  p_output1[215]=15;
  p_output1[216]=4;
  p_output1[217]=5;
  p_output1[218]=6;
  p_output1[219]=16;
  p_output1[220]=17;
  p_output1[221]=18;
  p_output1[222]=4;
  p_output1[223]=5;
  p_output1[224]=6;
  p_output1[225]=16;
  p_output1[226]=17;
  p_output1[227]=18;
  p_output1[228]=4;
  p_output1[229]=5;
  p_output1[230]=6;
  p_output1[231]=16;
  p_output1[232]=17;
  p_output1[233]=18;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 117, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ge_vec_ASTRo_DiagonalStance2.hh"

namespace SymFunction
{

void Js_Ge_vec_ASTRo_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
