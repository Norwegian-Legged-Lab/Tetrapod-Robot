/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:26:38 GMT+02:00
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
  p_output1[99]=12;
  p_output1[100]=12;
  p_output1[101]=12;
  p_output1[102]=12;
  p_output1[103]=12;
  p_output1[104]=12;
  p_output1[105]=12;
  p_output1[106]=12;
  p_output1[107]=12;
  p_output1[108]=13;
  p_output1[109]=13;
  p_output1[110]=13;
  p_output1[111]=13;
  p_output1[112]=13;
  p_output1[113]=13;
  p_output1[114]=13;
  p_output1[115]=13;
  p_output1[116]=13;
  p_output1[117]=14;
  p_output1[118]=14;
  p_output1[119]=14;
  p_output1[120]=14;
  p_output1[121]=14;
  p_output1[122]=14;
  p_output1[123]=14;
  p_output1[124]=14;
  p_output1[125]=14;
  p_output1[126]=1;
  p_output1[127]=2;
  p_output1[128]=16;
  p_output1[129]=30;
  p_output1[130]=44;
  p_output1[131]=58;
  p_output1[132]=72;
  p_output1[133]=86;
  p_output1[134]=87;
  p_output1[135]=1;
  p_output1[136]=3;
  p_output1[137]=17;
  p_output1[138]=31;
  p_output1[139]=45;
  p_output1[140]=59;
  p_output1[141]=73;
  p_output1[142]=86;
  p_output1[143]=87;
  p_output1[144]=1;
  p_output1[145]=4;
  p_output1[146]=18;
  p_output1[147]=32;
  p_output1[148]=46;
  p_output1[149]=60;
  p_output1[150]=74;
  p_output1[151]=86;
  p_output1[152]=87;
  p_output1[153]=1;
  p_output1[154]=5;
  p_output1[155]=19;
  p_output1[156]=33;
  p_output1[157]=47;
  p_output1[158]=61;
  p_output1[159]=75;
  p_output1[160]=86;
  p_output1[161]=87;
  p_output1[162]=1;
  p_output1[163]=6;
  p_output1[164]=20;
  p_output1[165]=34;
  p_output1[166]=48;
  p_output1[167]=62;
  p_output1[168]=76;
  p_output1[169]=86;
  p_output1[170]=87;
  p_output1[171]=1;
  p_output1[172]=7;
  p_output1[173]=21;
  p_output1[174]=35;
  p_output1[175]=49;
  p_output1[176]=63;
  p_output1[177]=77;
  p_output1[178]=86;
  p_output1[179]=87;
  p_output1[180]=1;
  p_output1[181]=8;
  p_output1[182]=22;
  p_output1[183]=36;
  p_output1[184]=50;
  p_output1[185]=64;
  p_output1[186]=78;
  p_output1[187]=86;
  p_output1[188]=87;
  p_output1[189]=1;
  p_output1[190]=9;
  p_output1[191]=23;
  p_output1[192]=37;
  p_output1[193]=51;
  p_output1[194]=65;
  p_output1[195]=79;
  p_output1[196]=86;
  p_output1[197]=87;
  p_output1[198]=1;
  p_output1[199]=10;
  p_output1[200]=24;
  p_output1[201]=38;
  p_output1[202]=52;
  p_output1[203]=66;
  p_output1[204]=80;
  p_output1[205]=86;
  p_output1[206]=87;
  p_output1[207]=1;
  p_output1[208]=11;
  p_output1[209]=25;
  p_output1[210]=39;
  p_output1[211]=53;
  p_output1[212]=67;
  p_output1[213]=81;
  p_output1[214]=86;
  p_output1[215]=87;
  p_output1[216]=1;
  p_output1[217]=12;
  p_output1[218]=26;
  p_output1[219]=40;
  p_output1[220]=54;
  p_output1[221]=68;
  p_output1[222]=82;
  p_output1[223]=86;
  p_output1[224]=87;
  p_output1[225]=1;
  p_output1[226]=13;
  p_output1[227]=27;
  p_output1[228]=41;
  p_output1[229]=55;
  p_output1[230]=69;
  p_output1[231]=83;
  p_output1[232]=86;
  p_output1[233]=87;
  p_output1[234]=1;
  p_output1[235]=14;
  p_output1[236]=28;
  p_output1[237]=42;
  p_output1[238]=56;
  p_output1[239]=70;
  p_output1[240]=84;
  p_output1[241]=86;
  p_output1[242]=87;
  p_output1[243]=1;
  p_output1[244]=15;
  p_output1[245]=29;
  p_output1[246]=43;
  p_output1[247]=57;
  p_output1[248]=71;
  p_output1[249]=85;
  p_output1[250]=86;
  p_output1[251]=87;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_yd_position_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void Js_yd_position_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
