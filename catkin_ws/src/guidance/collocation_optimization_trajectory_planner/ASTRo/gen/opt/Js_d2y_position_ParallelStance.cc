/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:13 GMT+02:00
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
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
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
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=4;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=5;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=5;
  p_output1[56]=5;
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=5;
  p_output1[63]=5;
  p_output1[64]=5;
  p_output1[65]=6;
  p_output1[66]=6;
  p_output1[67]=6;
  p_output1[68]=6;
  p_output1[69]=6;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=6;
  p_output1[75]=6;
  p_output1[76]=6;
  p_output1[77]=6;
  p_output1[78]=7;
  p_output1[79]=7;
  p_output1[80]=7;
  p_output1[81]=7;
  p_output1[82]=7;
  p_output1[83]=7;
  p_output1[84]=7;
  p_output1[85]=7;
  p_output1[86]=7;
  p_output1[87]=7;
  p_output1[88]=7;
  p_output1[89]=7;
  p_output1[90]=7;
  p_output1[91]=8;
  p_output1[92]=8;
  p_output1[93]=8;
  p_output1[94]=8;
  p_output1[95]=8;
  p_output1[96]=8;
  p_output1[97]=8;
  p_output1[98]=8;
  p_output1[99]=8;
  p_output1[100]=8;
  p_output1[101]=8;
  p_output1[102]=8;
  p_output1[103]=8;
  p_output1[104]=9;
  p_output1[105]=9;
  p_output1[106]=9;
  p_output1[107]=9;
  p_output1[108]=9;
  p_output1[109]=9;
  p_output1[110]=9;
  p_output1[111]=9;
  p_output1[112]=9;
  p_output1[113]=9;
  p_output1[114]=9;
  p_output1[115]=9;
  p_output1[116]=9;
  p_output1[117]=10;
  p_output1[118]=10;
  p_output1[119]=10;
  p_output1[120]=10;
  p_output1[121]=10;
  p_output1[122]=10;
  p_output1[123]=10;
  p_output1[124]=10;
  p_output1[125]=10;
  p_output1[126]=10;
  p_output1[127]=10;
  p_output1[128]=10;
  p_output1[129]=10;
  p_output1[130]=11;
  p_output1[131]=11;
  p_output1[132]=11;
  p_output1[133]=11;
  p_output1[134]=11;
  p_output1[135]=11;
  p_output1[136]=11;
  p_output1[137]=11;
  p_output1[138]=11;
  p_output1[139]=11;
  p_output1[140]=11;
  p_output1[141]=11;
  p_output1[142]=11;
  p_output1[143]=1;
  p_output1[144]=2;
  p_output1[145]=15;
  p_output1[146]=33;
  p_output1[147]=51;
  p_output1[148]=57;
  p_output1[149]=68;
  p_output1[150]=79;
  p_output1[151]=90;
  p_output1[152]=101;
  p_output1[153]=112;
  p_output1[154]=123;
  p_output1[155]=124;
  p_output1[156]=1;
  p_output1[157]=2;
  p_output1[158]=16;
  p_output1[159]=34;
  p_output1[160]=52;
  p_output1[161]=58;
  p_output1[162]=69;
  p_output1[163]=80;
  p_output1[164]=91;
  p_output1[165]=102;
  p_output1[166]=113;
  p_output1[167]=123;
  p_output1[168]=124;
  p_output1[169]=1;
  p_output1[170]=2;
  p_output1[171]=17;
  p_output1[172]=35;
  p_output1[173]=53;
  p_output1[174]=59;
  p_output1[175]=70;
  p_output1[176]=81;
  p_output1[177]=92;
  p_output1[178]=103;
  p_output1[179]=114;
  p_output1[180]=123;
  p_output1[181]=124;
  p_output1[182]=1;
  p_output1[183]=2;
  p_output1[184]=18;
  p_output1[185]=36;
  p_output1[186]=54;
  p_output1[187]=60;
  p_output1[188]=71;
  p_output1[189]=82;
  p_output1[190]=93;
  p_output1[191]=104;
  p_output1[192]=115;
  p_output1[193]=123;
  p_output1[194]=124;
  p_output1[195]=1;
  p_output1[196]=2;
  p_output1[197]=20;
  p_output1[198]=38;
  p_output1[199]=56;
  p_output1[200]=61;
  p_output1[201]=72;
  p_output1[202]=83;
  p_output1[203]=94;
  p_output1[204]=105;
  p_output1[205]=116;
  p_output1[206]=123;
  p_output1[207]=124;
  p_output1[208]=1;
  p_output1[209]=2;
  p_output1[210]=9;
  p_output1[211]=27;
  p_output1[212]=45;
  p_output1[213]=62;
  p_output1[214]=73;
  p_output1[215]=84;
  p_output1[216]=95;
  p_output1[217]=106;
  p_output1[218]=117;
  p_output1[219]=123;
  p_output1[220]=124;
  p_output1[221]=1;
  p_output1[222]=2;
  p_output1[223]=10;
  p_output1[224]=28;
  p_output1[225]=46;
  p_output1[226]=63;
  p_output1[227]=74;
  p_output1[228]=85;
  p_output1[229]=96;
  p_output1[230]=107;
  p_output1[231]=118;
  p_output1[232]=123;
  p_output1[233]=124;
  p_output1[234]=1;
  p_output1[235]=2;
  p_output1[236]=11;
  p_output1[237]=29;
  p_output1[238]=47;
  p_output1[239]=64;
  p_output1[240]=75;
  p_output1[241]=86;
  p_output1[242]=97;
  p_output1[243]=108;
  p_output1[244]=119;
  p_output1[245]=123;
  p_output1[246]=124;
  p_output1[247]=1;
  p_output1[248]=2;
  p_output1[249]=12;
  p_output1[250]=30;
  p_output1[251]=48;
  p_output1[252]=65;
  p_output1[253]=76;
  p_output1[254]=87;
  p_output1[255]=98;
  p_output1[256]=109;
  p_output1[257]=120;
  p_output1[258]=123;
  p_output1[259]=124;
  p_output1[260]=1;
  p_output1[261]=2;
  p_output1[262]=13;
  p_output1[263]=31;
  p_output1[264]=49;
  p_output1[265]=66;
  p_output1[266]=77;
  p_output1[267]=88;
  p_output1[268]=99;
  p_output1[269]=110;
  p_output1[270]=121;
  p_output1[271]=123;
  p_output1[272]=124;
  p_output1[273]=1;
  p_output1[274]=2;
  p_output1[275]=14;
  p_output1[276]=32;
  p_output1[277]=50;
  p_output1[278]=67;
  p_output1[279]=78;
  p_output1[280]=89;
  p_output1[281]=100;
  p_output1[282]=111;
  p_output1[283]=122;
  p_output1[284]=123;
  p_output1[285]=124;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 143, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_d2y_position_ParallelStance.hh"

namespace ParallelStance
{

void Js_d2y_position_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
