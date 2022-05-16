/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:39 GMT+02:00
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
  p_output1[28]=1;
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
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=4;
  p_output1[88]=4;
  p_output1[89]=4;
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
  p_output1[118]=4;
  p_output1[119]=4;
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
  p_output1[149]=5;
  p_output1[150]=5;
  p_output1[151]=5;
  p_output1[152]=5;
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
  p_output1[180]=6;
  p_output1[181]=6;
  p_output1[182]=6;
  p_output1[183]=6;
  p_output1[184]=6;
  p_output1[185]=6;
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
  p_output1[200]=8;
  p_output1[201]=8;
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
  p_output1[215]=9;
  p_output1[216]=9;
  p_output1[217]=9;
  p_output1[218]=9;
  p_output1[219]=9;
  p_output1[220]=9;
  p_output1[221]=9;
  p_output1[222]=9;
  p_output1[223]=10;
  p_output1[224]=10;
  p_output1[225]=10;
  p_output1[226]=10;
  p_output1[227]=10;
  p_output1[228]=10;
  p_output1[229]=10;
  p_output1[230]=10;
  p_output1[231]=10;
  p_output1[232]=10;
  p_output1[233]=10;
  p_output1[234]=10;
  p_output1[235]=10;
  p_output1[236]=10;
  p_output1[237]=11;
  p_output1[238]=11;
  p_output1[239]=11;
  p_output1[240]=11;
  p_output1[241]=11;
  p_output1[242]=11;
  p_output1[243]=11;
  p_output1[244]=11;
  p_output1[245]=11;
  p_output1[246]=11;
  p_output1[247]=11;
  p_output1[248]=11;
  p_output1[249]=11;
  p_output1[250]=11;
  p_output1[251]=11;
  p_output1[252]=12;
  p_output1[253]=12;
  p_output1[254]=12;
  p_output1[255]=12;
  p_output1[256]=12;
  p_output1[257]=12;
  p_output1[258]=12;
  p_output1[259]=12;
  p_output1[260]=13;
  p_output1[261]=13;
  p_output1[262]=13;
  p_output1[263]=13;
  p_output1[264]=13;
  p_output1[265]=13;
  p_output1[266]=13;
  p_output1[267]=13;
  p_output1[268]=13;
  p_output1[269]=13;
  p_output1[270]=13;
  p_output1[271]=13;
  p_output1[272]=13;
  p_output1[273]=13;
  p_output1[274]=14;
  p_output1[275]=14;
  p_output1[276]=14;
  p_output1[277]=14;
  p_output1[278]=14;
  p_output1[279]=14;
  p_output1[280]=14;
  p_output1[281]=14;
  p_output1[282]=14;
  p_output1[283]=14;
  p_output1[284]=14;
  p_output1[285]=14;
  p_output1[286]=14;
  p_output1[287]=14;
  p_output1[288]=14;
  p_output1[289]=15;
  p_output1[290]=15;
  p_output1[291]=15;
  p_output1[292]=15;
  p_output1[293]=15;
  p_output1[294]=15;
  p_output1[295]=15;
  p_output1[296]=15;
  p_output1[297]=16;
  p_output1[298]=16;
  p_output1[299]=16;
  p_output1[300]=16;
  p_output1[301]=16;
  p_output1[302]=16;
  p_output1[303]=16;
  p_output1[304]=16;
  p_output1[305]=16;
  p_output1[306]=16;
  p_output1[307]=16;
  p_output1[308]=16;
  p_output1[309]=16;
  p_output1[310]=16;
  p_output1[311]=17;
  p_output1[312]=17;
  p_output1[313]=17;
  p_output1[314]=17;
  p_output1[315]=17;
  p_output1[316]=17;
  p_output1[317]=17;
  p_output1[318]=17;
  p_output1[319]=17;
  p_output1[320]=17;
  p_output1[321]=17;
  p_output1[322]=17;
  p_output1[323]=17;
  p_output1[324]=17;
  p_output1[325]=17;
  p_output1[326]=18;
  p_output1[327]=18;
  p_output1[328]=18;
  p_output1[329]=18;
  p_output1[330]=18;
  p_output1[331]=18;
  p_output1[332]=18;
  p_output1[333]=18;
  p_output1[334]=4;
  p_output1[335]=5;
  p_output1[336]=6;
  p_output1[337]=7;
  p_output1[338]=8;
  p_output1[339]=9;
  p_output1[340]=10;
  p_output1[341]=11;
  p_output1[342]=12;
  p_output1[343]=13;
  p_output1[344]=14;
  p_output1[345]=15;
  p_output1[346]=16;
  p_output1[347]=17;
  p_output1[348]=18;
  p_output1[349]=19;
  p_output1[350]=20;
  p_output1[351]=21;
  p_output1[352]=22;
  p_output1[353]=23;
  p_output1[354]=24;
  p_output1[355]=25;
  p_output1[356]=26;
  p_output1[357]=28;
  p_output1[358]=29;
  p_output1[359]=31;
  p_output1[360]=32;
  p_output1[361]=34;
  p_output1[362]=35;
  p_output1[363]=4;
  p_output1[364]=5;
  p_output1[365]=6;
  p_output1[366]=7;
  p_output1[367]=8;
  p_output1[368]=9;
  p_output1[369]=10;
  p_output1[370]=11;
  p_output1[371]=12;
  p_output1[372]=13;
  p_output1[373]=14;
  p_output1[374]=15;
  p_output1[375]=16;
  p_output1[376]=17;
  p_output1[377]=18;
  p_output1[378]=19;
  p_output1[379]=20;
  p_output1[380]=21;
  p_output1[381]=22;
  p_output1[382]=23;
  p_output1[383]=24;
  p_output1[384]=25;
  p_output1[385]=26;
  p_output1[386]=28;
  p_output1[387]=29;
  p_output1[388]=31;
  p_output1[389]=32;
  p_output1[390]=34;
  p_output1[391]=35;
  p_output1[392]=4;
  p_output1[393]=5;
  p_output1[394]=6;
  p_output1[395]=7;
  p_output1[396]=8;
  p_output1[397]=9;
  p_output1[398]=10;
  p_output1[399]=11;
  p_output1[400]=12;
  p_output1[401]=13;
  p_output1[402]=14;
  p_output1[403]=15;
  p_output1[404]=16;
  p_output1[405]=17;
  p_output1[406]=18;
  p_output1[407]=19;
  p_output1[408]=20;
  p_output1[409]=21;
  p_output1[410]=22;
  p_output1[411]=23;
  p_output1[412]=24;
  p_output1[413]=25;
  p_output1[414]=26;
  p_output1[415]=28;
  p_output1[416]=29;
  p_output1[417]=31;
  p_output1[418]=32;
  p_output1[419]=34;
  p_output1[420]=35;
  p_output1[421]=4;
  p_output1[422]=5;
  p_output1[423]=6;
  p_output1[424]=7;
  p_output1[425]=8;
  p_output1[426]=9;
  p_output1[427]=10;
  p_output1[428]=11;
  p_output1[429]=12;
  p_output1[430]=13;
  p_output1[431]=14;
  p_output1[432]=15;
  p_output1[433]=16;
  p_output1[434]=17;
  p_output1[435]=18;
  p_output1[436]=19;
  p_output1[437]=20;
  p_output1[438]=21;
  p_output1[439]=22;
  p_output1[440]=23;
  p_output1[441]=24;
  p_output1[442]=25;
  p_output1[443]=26;
  p_output1[444]=27;
  p_output1[445]=28;
  p_output1[446]=29;
  p_output1[447]=30;
  p_output1[448]=31;
  p_output1[449]=32;
  p_output1[450]=33;
  p_output1[451]=34;
  p_output1[452]=35;
  p_output1[453]=36;
  p_output1[454]=4;
  p_output1[455]=5;
  p_output1[456]=6;
  p_output1[457]=7;
  p_output1[458]=8;
  p_output1[459]=9;
  p_output1[460]=10;
  p_output1[461]=11;
  p_output1[462]=12;
  p_output1[463]=13;
  p_output1[464]=14;
  p_output1[465]=15;
  p_output1[466]=16;
  p_output1[467]=17;
  p_output1[468]=18;
  p_output1[469]=19;
  p_output1[470]=20;
  p_output1[471]=21;
  p_output1[472]=22;
  p_output1[473]=23;
  p_output1[474]=24;
  p_output1[475]=25;
  p_output1[476]=26;
  p_output1[477]=27;
  p_output1[478]=28;
  p_output1[479]=29;
  p_output1[480]=30;
  p_output1[481]=31;
  p_output1[482]=32;
  p_output1[483]=33;
  p_output1[484]=34;
  p_output1[485]=35;
  p_output1[486]=36;
  p_output1[487]=4;
  p_output1[488]=5;
  p_output1[489]=6;
  p_output1[490]=7;
  p_output1[491]=8;
  p_output1[492]=9;
  p_output1[493]=10;
  p_output1[494]=11;
  p_output1[495]=12;
  p_output1[496]=13;
  p_output1[497]=14;
  p_output1[498]=15;
  p_output1[499]=16;
  p_output1[500]=17;
  p_output1[501]=18;
  p_output1[502]=19;
  p_output1[503]=20;
  p_output1[504]=21;
  p_output1[505]=22;
  p_output1[506]=23;
  p_output1[507]=24;
  p_output1[508]=25;
  p_output1[509]=26;
  p_output1[510]=27;
  p_output1[511]=28;
  p_output1[512]=29;
  p_output1[513]=30;
  p_output1[514]=31;
  p_output1[515]=32;
  p_output1[516]=33;
  p_output1[517]=34;
  p_output1[518]=35;
  p_output1[519]=36;
  p_output1[520]=4;
  p_output1[521]=5;
  p_output1[522]=6;
  p_output1[523]=7;
  p_output1[524]=8;
  p_output1[525]=9;
  p_output1[526]=19;
  p_output1[527]=20;
  p_output1[528]=21;
  p_output1[529]=22;
  p_output1[530]=23;
  p_output1[531]=24;
  p_output1[532]=25;
  p_output1[533]=26;
  p_output1[534]=4;
  p_output1[535]=5;
  p_output1[536]=6;
  p_output1[537]=7;
  p_output1[538]=8;
  p_output1[539]=9;
  p_output1[540]=19;
  p_output1[541]=20;
  p_output1[542]=21;
  p_output1[543]=22;
  p_output1[544]=23;
  p_output1[545]=24;
  p_output1[546]=25;
  p_output1[547]=26;
  p_output1[548]=27;
  p_output1[549]=5;
  p_output1[550]=6;
  p_output1[551]=7;
  p_output1[552]=22;
  p_output1[553]=23;
  p_output1[554]=24;
  p_output1[555]=26;
  p_output1[556]=27;
  p_output1[557]=4;
  p_output1[558]=5;
  p_output1[559]=6;
  p_output1[560]=10;
  p_output1[561]=11;
  p_output1[562]=12;
  p_output1[563]=19;
  p_output1[564]=20;
  p_output1[565]=21;
  p_output1[566]=22;
  p_output1[567]=23;
  p_output1[568]=24;
  p_output1[569]=28;
  p_output1[570]=29;
  p_output1[571]=4;
  p_output1[572]=5;
  p_output1[573]=6;
  p_output1[574]=10;
  p_output1[575]=11;
  p_output1[576]=12;
  p_output1[577]=19;
  p_output1[578]=20;
  p_output1[579]=21;
  p_output1[580]=22;
  p_output1[581]=23;
  p_output1[582]=24;
  p_output1[583]=28;
  p_output1[584]=29;
  p_output1[585]=30;
  p_output1[586]=5;
  p_output1[587]=6;
  p_output1[588]=10;
  p_output1[589]=22;
  p_output1[590]=23;
  p_output1[591]=24;
  p_output1[592]=29;
  p_output1[593]=30;
  p_output1[594]=4;
  p_output1[595]=5;
  p_output1[596]=6;
  p_output1[597]=13;
  p_output1[598]=14;
  p_output1[599]=15;
  p_output1[600]=19;
  p_output1[601]=20;
  p_output1[602]=21;
  p_output1[603]=22;
  p_output1[604]=23;
  p_output1[605]=24;
  p_output1[606]=31;
  p_output1[607]=32;
  p_output1[608]=4;
  p_output1[609]=5;
  p_output1[610]=6;
  p_output1[611]=13;
  p_output1[612]=14;
  p_output1[613]=15;
  p_output1[614]=19;
  p_output1[615]=20;
  p_output1[616]=21;
  p_output1[617]=22;
  p_output1[618]=23;
  p_output1[619]=24;
  p_output1[620]=31;
  p_output1[621]=32;
  p_output1[622]=33;
  p_output1[623]=5;
  p_output1[624]=6;
  p_output1[625]=13;
  p_output1[626]=22;
  p_output1[627]=23;
  p_output1[628]=24;
  p_output1[629]=32;
  p_output1[630]=33;
  p_output1[631]=4;
  p_output1[632]=5;
  p_output1[633]=6;
  p_output1[634]=16;
  p_output1[635]=17;
  p_output1[636]=18;
  p_output1[637]=19;
  p_output1[638]=20;
  p_output1[639]=21;
  p_output1[640]=22;
  p_output1[641]=23;
  p_output1[642]=24;
  p_output1[643]=34;
  p_output1[644]=35;
  p_output1[645]=4;
  p_output1[646]=5;
  p_output1[647]=6;
  p_output1[648]=16;
  p_output1[649]=17;
  p_output1[650]=18;
  p_output1[651]=19;
  p_output1[652]=20;
  p_output1[653]=21;
  p_output1[654]=22;
  p_output1[655]=23;
  p_output1[656]=24;
  p_output1[657]=34;
  p_output1[658]=35;
  p_output1[659]=36;
  p_output1[660]=5;
  p_output1[661]=6;
  p_output1[662]=16;
  p_output1[663]=22;
  p_output1[664]=23;
  p_output1[665]=24;
  p_output1[666]=35;
  p_output1[667]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 334, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_MmatDx_vision60.hh"

namespace DiagonalStance
{

void Js_MmatDx_vision60_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
