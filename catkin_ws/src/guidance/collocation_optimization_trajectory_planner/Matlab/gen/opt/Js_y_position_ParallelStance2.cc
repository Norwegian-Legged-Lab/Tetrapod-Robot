/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:33 GMT+01:00
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
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=3;
  p_output1[40]=3;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=4;
  p_output1[53]=4;
  p_output1[54]=4;
  p_output1[55]=4;
  p_output1[56]=4;
  p_output1[57]=4;
  p_output1[58]=4;
  p_output1[59]=4;
  p_output1[60]=4;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=5;
  p_output1[67]=5;
  p_output1[68]=5;
  p_output1[69]=5;
  p_output1[70]=5;
  p_output1[71]=5;
  p_output1[72]=5;
  p_output1[73]=5;
  p_output1[74]=5;
  p_output1[75]=5;
  p_output1[76]=5;
  p_output1[77]=5;
  p_output1[78]=5;
  p_output1[79]=5;
  p_output1[80]=5;
  p_output1[81]=5;
  p_output1[82]=5;
  p_output1[83]=6;
  p_output1[84]=6;
  p_output1[85]=6;
  p_output1[86]=6;
  p_output1[87]=6;
  p_output1[88]=6;
  p_output1[89]=6;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=7;
  p_output1[101]=7;
  p_output1[102]=7;
  p_output1[103]=7;
  p_output1[104]=7;
  p_output1[105]=7;
  p_output1[106]=7;
  p_output1[107]=7;
  p_output1[108]=7;
  p_output1[109]=7;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=8;
  p_output1[115]=8;
  p_output1[116]=8;
  p_output1[117]=8;
  p_output1[118]=8;
  p_output1[119]=8;
  p_output1[120]=8;
  p_output1[121]=8;
  p_output1[122]=8;
  p_output1[123]=8;
  p_output1[124]=8;
  p_output1[125]=8;
  p_output1[126]=8;
  p_output1[127]=8;
  p_output1[128]=9;
  p_output1[129]=9;
  p_output1[130]=9;
  p_output1[131]=9;
  p_output1[132]=9;
  p_output1[133]=9;
  p_output1[134]=9;
  p_output1[135]=9;
  p_output1[136]=9;
  p_output1[137]=9;
  p_output1[138]=9;
  p_output1[139]=9;
  p_output1[140]=9;
  p_output1[141]=10;
  p_output1[142]=10;
  p_output1[143]=10;
  p_output1[144]=10;
  p_output1[145]=10;
  p_output1[146]=10;
  p_output1[147]=10;
  p_output1[148]=10;
  p_output1[149]=10;
  p_output1[150]=10;
  p_output1[151]=10;
  p_output1[152]=10;
  p_output1[153]=10;
  p_output1[154]=10;
  p_output1[155]=10;
  p_output1[156]=1;
  p_output1[157]=2;
  p_output1[158]=3;
  p_output1[159]=7;
  p_output1[160]=8;
  p_output1[161]=12;
  p_output1[162]=13;
  p_output1[163]=14;
  p_output1[164]=21;
  p_output1[165]=31;
  p_output1[166]=41;
  p_output1[167]=51;
  p_output1[168]=61;
  p_output1[169]=71;
  p_output1[170]=81;
  p_output1[171]=82;
  p_output1[172]=1;
  p_output1[173]=2;
  p_output1[174]=4;
  p_output1[175]=6;
  p_output1[176]=7;
  p_output1[177]=8;
  p_output1[178]=12;
  p_output1[179]=13;
  p_output1[180]=14;
  p_output1[181]=22;
  p_output1[182]=32;
  p_output1[183]=42;
  p_output1[184]=52;
  p_output1[185]=62;
  p_output1[186]=72;
  p_output1[187]=81;
  p_output1[188]=82;
  p_output1[189]=1;
  p_output1[190]=2;
  p_output1[191]=5;
  p_output1[192]=6;
  p_output1[193]=7;
  p_output1[194]=8;
  p_output1[195]=12;
  p_output1[196]=13;
  p_output1[197]=14;
  p_output1[198]=23;
  p_output1[199]=33;
  p_output1[200]=43;
  p_output1[201]=53;
  p_output1[202]=63;
  p_output1[203]=73;
  p_output1[204]=81;
  p_output1[205]=82;
  p_output1[206]=1;
  p_output1[207]=2;
  p_output1[208]=3;
  p_output1[209]=7;
  p_output1[210]=8;
  p_output1[211]=18;
  p_output1[212]=19;
  p_output1[213]=20;
  p_output1[214]=24;
  p_output1[215]=34;
  p_output1[216]=44;
  p_output1[217]=54;
  p_output1[218]=64;
  p_output1[219]=74;
  p_output1[220]=81;
  p_output1[221]=82;
  p_output1[222]=1;
  p_output1[223]=2;
  p_output1[224]=4;
  p_output1[225]=6;
  p_output1[226]=7;
  p_output1[227]=8;
  p_output1[228]=18;
  p_output1[229]=19;
  p_output1[230]=20;
  p_output1[231]=25;
  p_output1[232]=35;
  p_output1[233]=45;
  p_output1[234]=55;
  p_output1[235]=65;
  p_output1[236]=75;
  p_output1[237]=81;
  p_output1[238]=82;
  p_output1[239]=1;
  p_output1[240]=2;
  p_output1[241]=5;
  p_output1[242]=6;
  p_output1[243]=7;
  p_output1[244]=8;
  p_output1[245]=18;
  p_output1[246]=19;
  p_output1[247]=20;
  p_output1[248]=26;
  p_output1[249]=36;
  p_output1[250]=46;
  p_output1[251]=56;
  p_output1[252]=66;
  p_output1[253]=76;
  p_output1[254]=81;
  p_output1[255]=82;
  p_output1[256]=1;
  p_output1[257]=2;
  p_output1[258]=4;
  p_output1[259]=6;
  p_output1[260]=7;
  p_output1[261]=8;
  p_output1[262]=27;
  p_output1[263]=37;
  p_output1[264]=47;
  p_output1[265]=57;
  p_output1[266]=67;
  p_output1[267]=77;
  p_output1[268]=81;
  p_output1[269]=82;
  p_output1[270]=1;
  p_output1[271]=2;
  p_output1[272]=5;
  p_output1[273]=6;
  p_output1[274]=7;
  p_output1[275]=8;
  p_output1[276]=28;
  p_output1[277]=38;
  p_output1[278]=48;
  p_output1[279]=58;
  p_output1[280]=68;
  p_output1[281]=78;
  p_output1[282]=81;
  p_output1[283]=82;
  p_output1[284]=1;
  p_output1[285]=2;
  p_output1[286]=6;
  p_output1[287]=7;
  p_output1[288]=8;
  p_output1[289]=29;
  p_output1[290]=39;
  p_output1[291]=49;
  p_output1[292]=59;
  p_output1[293]=69;
  p_output1[294]=79;
  p_output1[295]=81;
  p_output1[296]=82;
  p_output1[297]=1;
  p_output1[298]=2;
  p_output1[299]=6;
  p_output1[300]=7;
  p_output1[301]=8;
  p_output1[302]=12;
  p_output1[303]=18;
  p_output1[304]=30;
  p_output1[305]=40;
  p_output1[306]=50;
  p_output1[307]=60;
  p_output1[308]=70;
  p_output1[309]=80;
  p_output1[310]=81;
  p_output1[311]=82;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 156, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_y_position_ParallelStance2.hh"

namespace ParallelStance2
{

void Js_y_position_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
