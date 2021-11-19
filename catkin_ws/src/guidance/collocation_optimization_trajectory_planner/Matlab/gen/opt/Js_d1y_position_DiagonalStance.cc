/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:47 GMT+01:00
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
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
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
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=4;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=4;
  p_output1[81]=4;
  p_output1[82]=4;
  p_output1[83]=4;
  p_output1[84]=4;
  p_output1[85]=4;
  p_output1[86]=4;
  p_output1[87]=4;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=5;
  p_output1[91]=5;
  p_output1[92]=5;
  p_output1[93]=5;
  p_output1[94]=5;
  p_output1[95]=5;
  p_output1[96]=5;
  p_output1[97]=5;
  p_output1[98]=5;
  p_output1[99]=5;
  p_output1[100]=5;
  p_output1[101]=5;
  p_output1[102]=5;
  p_output1[103]=5;
  p_output1[104]=5;
  p_output1[105]=5;
  p_output1[106]=5;
  p_output1[107]=5;
  p_output1[108]=5;
  p_output1[109]=5;
  p_output1[110]=5;
  p_output1[111]=6;
  p_output1[112]=6;
  p_output1[113]=6;
  p_output1[114]=6;
  p_output1[115]=6;
  p_output1[116]=6;
  p_output1[117]=6;
  p_output1[118]=6;
  p_output1[119]=6;
  p_output1[120]=6;
  p_output1[121]=6;
  p_output1[122]=6;
  p_output1[123]=6;
  p_output1[124]=6;
  p_output1[125]=6;
  p_output1[126]=6;
  p_output1[127]=6;
  p_output1[128]=6;
  p_output1[129]=6;
  p_output1[130]=6;
  p_output1[131]=6;
  p_output1[132]=6;
  p_output1[133]=6;
  p_output1[134]=7;
  p_output1[135]=7;
  p_output1[136]=7;
  p_output1[137]=7;
  p_output1[138]=7;
  p_output1[139]=7;
  p_output1[140]=7;
  p_output1[141]=7;
  p_output1[142]=7;
  p_output1[143]=7;
  p_output1[144]=7;
  p_output1[145]=7;
  p_output1[146]=7;
  p_output1[147]=7;
  p_output1[148]=7;
  p_output1[149]=7;
  p_output1[150]=7;
  p_output1[151]=8;
  p_output1[152]=8;
  p_output1[153]=8;
  p_output1[154]=8;
  p_output1[155]=8;
  p_output1[156]=8;
  p_output1[157]=8;
  p_output1[158]=8;
  p_output1[159]=8;
  p_output1[160]=8;
  p_output1[161]=8;
  p_output1[162]=8;
  p_output1[163]=8;
  p_output1[164]=8;
  p_output1[165]=8;
  p_output1[166]=8;
  p_output1[167]=8;
  p_output1[168]=9;
  p_output1[169]=9;
  p_output1[170]=9;
  p_output1[171]=9;
  p_output1[172]=9;
  p_output1[173]=9;
  p_output1[174]=9;
  p_output1[175]=9;
  p_output1[176]=9;
  p_output1[177]=9;
  p_output1[178]=9;
  p_output1[179]=9;
  p_output1[180]=9;
  p_output1[181]=9;
  p_output1[182]=9;
  p_output1[183]=9;
  p_output1[184]=10;
  p_output1[185]=10;
  p_output1[186]=10;
  p_output1[187]=10;
  p_output1[188]=10;
  p_output1[189]=10;
  p_output1[190]=10;
  p_output1[191]=10;
  p_output1[192]=10;
  p_output1[193]=10;
  p_output1[194]=10;
  p_output1[195]=10;
  p_output1[196]=10;
  p_output1[197]=10;
  p_output1[198]=10;
  p_output1[199]=10;
  p_output1[200]=10;
  p_output1[201]=10;
  p_output1[202]=10;
  p_output1[203]=10;
  p_output1[204]=1;
  p_output1[205]=2;
  p_output1[206]=7;
  p_output1[207]=8;
  p_output1[208]=9;
  p_output1[209]=10;
  p_output1[210]=11;
  p_output1[211]=21;
  p_output1[212]=25;
  p_output1[213]=26;
  p_output1[214]=27;
  p_output1[215]=28;
  p_output1[216]=29;
  p_output1[217]=39;
  p_output1[218]=49;
  p_output1[219]=59;
  p_output1[220]=69;
  p_output1[221]=79;
  p_output1[222]=89;
  p_output1[223]=99;
  p_output1[224]=100;
  p_output1[225]=1;
  p_output1[226]=2;
  p_output1[227]=6;
  p_output1[228]=7;
  p_output1[229]=8;
  p_output1[230]=9;
  p_output1[231]=10;
  p_output1[232]=11;
  p_output1[233]=22;
  p_output1[234]=24;
  p_output1[235]=25;
  p_output1[236]=26;
  p_output1[237]=27;
  p_output1[238]=28;
  p_output1[239]=29;
  p_output1[240]=40;
  p_output1[241]=50;
  p_output1[242]=60;
  p_output1[243]=70;
  p_output1[244]=80;
  p_output1[245]=90;
  p_output1[246]=99;
  p_output1[247]=100;
  p_output1[248]=1;
  p_output1[249]=2;
  p_output1[250]=6;
  p_output1[251]=7;
  p_output1[252]=8;
  p_output1[253]=9;
  p_output1[254]=10;
  p_output1[255]=11;
  p_output1[256]=23;
  p_output1[257]=24;
  p_output1[258]=25;
  p_output1[259]=26;
  p_output1[260]=27;
  p_output1[261]=28;
  p_output1[262]=29;
  p_output1[263]=41;
  p_output1[264]=51;
  p_output1[265]=61;
  p_output1[266]=71;
  p_output1[267]=81;
  p_output1[268]=91;
  p_output1[269]=99;
  p_output1[270]=100;
  p_output1[271]=1;
  p_output1[272]=2;
  p_output1[273]=7;
  p_output1[274]=8;
  p_output1[275]=18;
  p_output1[276]=19;
  p_output1[277]=20;
  p_output1[278]=21;
  p_output1[279]=25;
  p_output1[280]=26;
  p_output1[281]=36;
  p_output1[282]=37;
  p_output1[283]=38;
  p_output1[284]=42;
  p_output1[285]=52;
  p_output1[286]=62;
  p_output1[287]=72;
  p_output1[288]=82;
  p_output1[289]=92;
  p_output1[290]=99;
  p_output1[291]=100;
  p_output1[292]=1;
  p_output1[293]=2;
  p_output1[294]=6;
  p_output1[295]=7;
  p_output1[296]=8;
  p_output1[297]=18;
  p_output1[298]=19;
  p_output1[299]=20;
  p_output1[300]=22;
  p_output1[301]=24;
  p_output1[302]=25;
  p_output1[303]=26;
  p_output1[304]=36;
  p_output1[305]=37;
  p_output1[306]=38;
  p_output1[307]=43;
  p_output1[308]=53;
  p_output1[309]=63;
  p_output1[310]=73;
  p_output1[311]=83;
  p_output1[312]=93;
  p_output1[313]=99;
  p_output1[314]=100;
  p_output1[315]=1;
  p_output1[316]=2;
  p_output1[317]=6;
  p_output1[318]=7;
  p_output1[319]=8;
  p_output1[320]=18;
  p_output1[321]=19;
  p_output1[322]=20;
  p_output1[323]=23;
  p_output1[324]=24;
  p_output1[325]=25;
  p_output1[326]=26;
  p_output1[327]=36;
  p_output1[328]=37;
  p_output1[329]=38;
  p_output1[330]=44;
  p_output1[331]=54;
  p_output1[332]=64;
  p_output1[333]=74;
  p_output1[334]=84;
  p_output1[335]=94;
  p_output1[336]=99;
  p_output1[337]=100;
  p_output1[338]=1;
  p_output1[339]=2;
  p_output1[340]=6;
  p_output1[341]=7;
  p_output1[342]=8;
  p_output1[343]=22;
  p_output1[344]=24;
  p_output1[345]=25;
  p_output1[346]=26;
  p_output1[347]=45;
  p_output1[348]=55;
  p_output1[349]=65;
  p_output1[350]=75;
  p_output1[351]=85;
  p_output1[352]=95;
  p_output1[353]=99;
  p_output1[354]=100;
  p_output1[355]=1;
  p_output1[356]=2;
  p_output1[357]=6;
  p_output1[358]=7;
  p_output1[359]=8;
  p_output1[360]=23;
  p_output1[361]=24;
  p_output1[362]=25;
  p_output1[363]=26;
  p_output1[364]=46;
  p_output1[365]=56;
  p_output1[366]=66;
  p_output1[367]=76;
  p_output1[368]=86;
  p_output1[369]=96;
  p_output1[370]=99;
  p_output1[371]=100;
  p_output1[372]=1;
  p_output1[373]=2;
  p_output1[374]=6;
  p_output1[375]=7;
  p_output1[376]=8;
  p_output1[377]=24;
  p_output1[378]=25;
  p_output1[379]=26;
  p_output1[380]=47;
  p_output1[381]=57;
  p_output1[382]=67;
  p_output1[383]=77;
  p_output1[384]=87;
  p_output1[385]=97;
  p_output1[386]=99;
  p_output1[387]=100;
  p_output1[388]=1;
  p_output1[389]=2;
  p_output1[390]=6;
  p_output1[391]=7;
  p_output1[392]=8;
  p_output1[393]=12;
  p_output1[394]=15;
  p_output1[395]=24;
  p_output1[396]=25;
  p_output1[397]=26;
  p_output1[398]=30;
  p_output1[399]=33;
  p_output1[400]=48;
  p_output1[401]=58;
  p_output1[402]=68;
  p_output1[403]=78;
  p_output1[404]=88;
  p_output1[405]=98;
  p_output1[406]=99;
  p_output1[407]=100;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 204, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_d1y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void Js_d1y_position_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
