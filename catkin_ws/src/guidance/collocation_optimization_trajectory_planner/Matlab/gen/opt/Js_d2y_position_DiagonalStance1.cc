/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:29 GMT+01:00
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
  p_output1[26]=1;
  p_output1[27]=1;
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
  p_output1[52]=2;
  p_output1[53]=2;
  p_output1[54]=2;
  p_output1[55]=2;
  p_output1[56]=2;
  p_output1[57]=2;
  p_output1[58]=2;
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
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=3;
  p_output1[88]=3;
  p_output1[89]=3;
  p_output1[90]=4;
  p_output1[91]=4;
  p_output1[92]=4;
  p_output1[93]=4;
  p_output1[94]=4;
  p_output1[95]=4;
  p_output1[96]=4;
  p_output1[97]=4;
  p_output1[98]=4;
  p_output1[99]=4;
  p_output1[100]=4;
  p_output1[101]=4;
  p_output1[102]=4;
  p_output1[103]=4;
  p_output1[104]=4;
  p_output1[105]=4;
  p_output1[106]=4;
  p_output1[107]=4;
  p_output1[108]=4;
  p_output1[109]=4;
  p_output1[110]=4;
  p_output1[111]=4;
  p_output1[112]=4;
  p_output1[113]=4;
  p_output1[114]=4;
  p_output1[115]=4;
  p_output1[116]=4;
  p_output1[117]=4;
  p_output1[118]=5;
  p_output1[119]=5;
  p_output1[120]=5;
  p_output1[121]=5;
  p_output1[122]=5;
  p_output1[123]=5;
  p_output1[124]=5;
  p_output1[125]=5;
  p_output1[126]=5;
  p_output1[127]=5;
  p_output1[128]=5;
  p_output1[129]=5;
  p_output1[130]=5;
  p_output1[131]=5;
  p_output1[132]=5;
  p_output1[133]=5;
  p_output1[134]=5;
  p_output1[135]=5;
  p_output1[136]=5;
  p_output1[137]=5;
  p_output1[138]=5;
  p_output1[139]=5;
  p_output1[140]=5;
  p_output1[141]=5;
  p_output1[142]=5;
  p_output1[143]=5;
  p_output1[144]=5;
  p_output1[145]=5;
  p_output1[146]=5;
  p_output1[147]=5;
  p_output1[148]=5;
  p_output1[149]=6;
  p_output1[150]=6;
  p_output1[151]=6;
  p_output1[152]=6;
  p_output1[153]=6;
  p_output1[154]=6;
  p_output1[155]=6;
  p_output1[156]=6;
  p_output1[157]=6;
  p_output1[158]=6;
  p_output1[159]=6;
  p_output1[160]=6;
  p_output1[161]=6;
  p_output1[162]=6;
  p_output1[163]=6;
  p_output1[164]=6;
  p_output1[165]=6;
  p_output1[166]=6;
  p_output1[167]=6;
  p_output1[168]=6;
  p_output1[169]=6;
  p_output1[170]=6;
  p_output1[171]=6;
  p_output1[172]=6;
  p_output1[173]=6;
  p_output1[174]=6;
  p_output1[175]=6;
  p_output1[176]=6;
  p_output1[177]=6;
  p_output1[178]=6;
  p_output1[179]=6;
  p_output1[180]=7;
  p_output1[181]=7;
  p_output1[182]=7;
  p_output1[183]=7;
  p_output1[184]=7;
  p_output1[185]=7;
  p_output1[186]=7;
  p_output1[187]=7;
  p_output1[188]=7;
  p_output1[189]=7;
  p_output1[190]=7;
  p_output1[191]=7;
  p_output1[192]=7;
  p_output1[193]=7;
  p_output1[194]=7;
  p_output1[195]=7;
  p_output1[196]=7;
  p_output1[197]=7;
  p_output1[198]=7;
  p_output1[199]=7;
  p_output1[200]=7;
  p_output1[201]=7;
  p_output1[202]=8;
  p_output1[203]=8;
  p_output1[204]=8;
  p_output1[205]=8;
  p_output1[206]=8;
  p_output1[207]=8;
  p_output1[208]=8;
  p_output1[209]=8;
  p_output1[210]=8;
  p_output1[211]=8;
  p_output1[212]=8;
  p_output1[213]=8;
  p_output1[214]=8;
  p_output1[215]=8;
  p_output1[216]=8;
  p_output1[217]=8;
  p_output1[218]=8;
  p_output1[219]=8;
  p_output1[220]=8;
  p_output1[221]=8;
  p_output1[222]=8;
  p_output1[223]=8;
  p_output1[224]=9;
  p_output1[225]=9;
  p_output1[226]=9;
  p_output1[227]=9;
  p_output1[228]=9;
  p_output1[229]=9;
  p_output1[230]=9;
  p_output1[231]=9;
  p_output1[232]=9;
  p_output1[233]=9;
  p_output1[234]=9;
  p_output1[235]=9;
  p_output1[236]=9;
  p_output1[237]=9;
  p_output1[238]=9;
  p_output1[239]=9;
  p_output1[240]=9;
  p_output1[241]=9;
  p_output1[242]=9;
  p_output1[243]=10;
  p_output1[244]=10;
  p_output1[245]=10;
  p_output1[246]=10;
  p_output1[247]=10;
  p_output1[248]=10;
  p_output1[249]=10;
  p_output1[250]=10;
  p_output1[251]=10;
  p_output1[252]=10;
  p_output1[253]=10;
  p_output1[254]=10;
  p_output1[255]=10;
  p_output1[256]=10;
  p_output1[257]=10;
  p_output1[258]=10;
  p_output1[259]=10;
  p_output1[260]=10;
  p_output1[261]=10;
  p_output1[262]=10;
  p_output1[263]=10;
  p_output1[264]=10;
  p_output1[265]=10;
  p_output1[266]=10;
  p_output1[267]=10;
  p_output1[268]=1;
  p_output1[269]=2;
  p_output1[270]=3;
  p_output1[271]=7;
  p_output1[272]=8;
  p_output1[273]=9;
  p_output1[274]=10;
  p_output1[275]=11;
  p_output1[276]=21;
  p_output1[277]=25;
  p_output1[278]=26;
  p_output1[279]=27;
  p_output1[280]=28;
  p_output1[281]=29;
  p_output1[282]=39;
  p_output1[283]=43;
  p_output1[284]=44;
  p_output1[285]=45;
  p_output1[286]=46;
  p_output1[287]=47;
  p_output1[288]=57;
  p_output1[289]=67;
  p_output1[290]=77;
  p_output1[291]=87;
  p_output1[292]=97;
  p_output1[293]=107;
  p_output1[294]=117;
  p_output1[295]=118;
  p_output1[296]=1;
  p_output1[297]=2;
  p_output1[298]=4;
  p_output1[299]=6;
  p_output1[300]=7;
  p_output1[301]=8;
  p_output1[302]=9;
  p_output1[303]=10;
  p_output1[304]=11;
  p_output1[305]=22;
  p_output1[306]=24;
  p_output1[307]=25;
  p_output1[308]=26;
  p_output1[309]=27;
  p_output1[310]=28;
  p_output1[311]=29;
  p_output1[312]=40;
  p_output1[313]=42;
  p_output1[314]=43;
  p_output1[315]=44;
  p_output1[316]=45;
  p_output1[317]=46;
  p_output1[318]=47;
  p_output1[319]=58;
  p_output1[320]=68;
  p_output1[321]=78;
  p_output1[322]=88;
  p_output1[323]=98;
  p_output1[324]=108;
  p_output1[325]=117;
  p_output1[326]=118;
  p_output1[327]=1;
  p_output1[328]=2;
  p_output1[329]=5;
  p_output1[330]=6;
  p_output1[331]=7;
  p_output1[332]=8;
  p_output1[333]=9;
  p_output1[334]=10;
  p_output1[335]=11;
  p_output1[336]=23;
  p_output1[337]=24;
  p_output1[338]=25;
  p_output1[339]=26;
  p_output1[340]=27;
  p_output1[341]=28;
  p_output1[342]=29;
  p_output1[343]=41;
  p_output1[344]=42;
  p_output1[345]=43;
  p_output1[346]=44;
  p_output1[347]=45;
  p_output1[348]=46;
  p_output1[349]=47;
  p_output1[350]=59;
  p_output1[351]=69;
  p_output1[352]=79;
  p_output1[353]=89;
  p_output1[354]=99;
  p_output1[355]=109;
  p_output1[356]=117;
  p_output1[357]=118;
  p_output1[358]=1;
  p_output1[359]=2;
  p_output1[360]=3;
  p_output1[361]=7;
  p_output1[362]=8;
  p_output1[363]=18;
  p_output1[364]=19;
  p_output1[365]=20;
  p_output1[366]=21;
  p_output1[367]=25;
  p_output1[368]=26;
  p_output1[369]=36;
  p_output1[370]=37;
  p_output1[371]=38;
  p_output1[372]=39;
  p_output1[373]=43;
  p_output1[374]=44;
  p_output1[375]=54;
  p_output1[376]=55;
  p_output1[377]=56;
  p_output1[378]=60;
  p_output1[379]=70;
  p_output1[380]=80;
  p_output1[381]=90;
  p_output1[382]=100;
  p_output1[383]=110;
  p_output1[384]=117;
  p_output1[385]=118;
  p_output1[386]=1;
  p_output1[387]=2;
  p_output1[388]=4;
  p_output1[389]=6;
  p_output1[390]=7;
  p_output1[391]=8;
  p_output1[392]=18;
  p_output1[393]=19;
  p_output1[394]=20;
  p_output1[395]=22;
  p_output1[396]=24;
  p_output1[397]=25;
  p_output1[398]=26;
  p_output1[399]=36;
  p_output1[400]=37;
  p_output1[401]=38;
  p_output1[402]=40;
  p_output1[403]=42;
  p_output1[404]=43;
  p_output1[405]=44;
  p_output1[406]=54;
  p_output1[407]=55;
  p_output1[408]=56;
  p_output1[409]=61;
  p_output1[410]=71;
  p_output1[411]=81;
  p_output1[412]=91;
  p_output1[413]=101;
  p_output1[414]=111;
  p_output1[415]=117;
  p_output1[416]=118;
  p_output1[417]=1;
  p_output1[418]=2;
  p_output1[419]=5;
  p_output1[420]=6;
  p_output1[421]=7;
  p_output1[422]=8;
  p_output1[423]=18;
  p_output1[424]=19;
  p_output1[425]=20;
  p_output1[426]=23;
  p_output1[427]=24;
  p_output1[428]=25;
  p_output1[429]=26;
  p_output1[430]=36;
  p_output1[431]=37;
  p_output1[432]=38;
  p_output1[433]=41;
  p_output1[434]=42;
  p_output1[435]=43;
  p_output1[436]=44;
  p_output1[437]=54;
  p_output1[438]=55;
  p_output1[439]=56;
  p_output1[440]=62;
  p_output1[441]=72;
  p_output1[442]=82;
  p_output1[443]=92;
  p_output1[444]=102;
  p_output1[445]=112;
  p_output1[446]=117;
  p_output1[447]=118;
  p_output1[448]=1;
  p_output1[449]=2;
  p_output1[450]=4;
  p_output1[451]=6;
  p_output1[452]=7;
  p_output1[453]=8;
  p_output1[454]=22;
  p_output1[455]=24;
  p_output1[456]=25;
  p_output1[457]=26;
  p_output1[458]=40;
  p_output1[459]=42;
  p_output1[460]=43;
  p_output1[461]=44;
  p_output1[462]=63;
  p_output1[463]=73;
  p_output1[464]=83;
  p_output1[465]=93;
  p_output1[466]=103;
  p_output1[467]=113;
  p_output1[468]=117;
  p_output1[469]=118;
  p_output1[470]=1;
  p_output1[471]=2;
  p_output1[472]=5;
  p_output1[473]=6;
  p_output1[474]=7;
  p_output1[475]=8;
  p_output1[476]=23;
  p_output1[477]=24;
  p_output1[478]=25;
  p_output1[479]=26;
  p_output1[480]=41;
  p_output1[481]=42;
  p_output1[482]=43;
  p_output1[483]=44;
  p_output1[484]=64;
  p_output1[485]=74;
  p_output1[486]=84;
  p_output1[487]=94;
  p_output1[488]=104;
  p_output1[489]=114;
  p_output1[490]=117;
  p_output1[491]=118;
  p_output1[492]=1;
  p_output1[493]=2;
  p_output1[494]=6;
  p_output1[495]=7;
  p_output1[496]=8;
  p_output1[497]=24;
  p_output1[498]=25;
  p_output1[499]=26;
  p_output1[500]=42;
  p_output1[501]=43;
  p_output1[502]=44;
  p_output1[503]=65;
  p_output1[504]=75;
  p_output1[505]=85;
  p_output1[506]=95;
  p_output1[507]=105;
  p_output1[508]=115;
  p_output1[509]=117;
  p_output1[510]=118;
  p_output1[511]=1;
  p_output1[512]=2;
  p_output1[513]=6;
  p_output1[514]=7;
  p_output1[515]=8;
  p_output1[516]=12;
  p_output1[517]=15;
  p_output1[518]=24;
  p_output1[519]=25;
  p_output1[520]=26;
  p_output1[521]=30;
  p_output1[522]=33;
  p_output1[523]=42;
  p_output1[524]=43;
  p_output1[525]=44;
  p_output1[526]=48;
  p_output1[527]=51;
  p_output1[528]=66;
  p_output1[529]=76;
  p_output1[530]=86;
  p_output1[531]=96;
  p_output1[532]=106;
  p_output1[533]=116;
  p_output1[534]=117;
  p_output1[535]=118;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 268, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_d2y_position_DiagonalStance1.hh"

namespace DiagonalStance1
{

void Js_d2y_position_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
