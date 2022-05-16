/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:36 GMT+02:00
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
  p_output1[196]=8;
  p_output1[197]=8;
  p_output1[198]=8;
  p_output1[199]=8;
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
  p_output1[211]=9;
  p_output1[212]=9;
  p_output1[213]=9;
  p_output1[214]=9;
  p_output1[215]=9;
  p_output1[216]=9;
  p_output1[217]=9;
  p_output1[218]=10;
  p_output1[219]=10;
  p_output1[220]=10;
  p_output1[221]=10;
  p_output1[222]=10;
  p_output1[223]=10;
  p_output1[224]=10;
  p_output1[225]=10;
  p_output1[226]=10;
  p_output1[227]=10;
  p_output1[228]=10;
  p_output1[229]=10;
  p_output1[230]=10;
  p_output1[231]=10;
  p_output1[232]=11;
  p_output1[233]=11;
  p_output1[234]=11;
  p_output1[235]=11;
  p_output1[236]=11;
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
  p_output1[247]=12;
  p_output1[248]=12;
  p_output1[249]=12;
  p_output1[250]=12;
  p_output1[251]=12;
  p_output1[252]=12;
  p_output1[253]=12;
  p_output1[254]=13;
  p_output1[255]=13;
  p_output1[256]=13;
  p_output1[257]=13;
  p_output1[258]=13;
  p_output1[259]=13;
  p_output1[260]=13;
  p_output1[261]=13;
  p_output1[262]=13;
  p_output1[263]=13;
  p_output1[264]=13;
  p_output1[265]=13;
  p_output1[266]=13;
  p_output1[267]=13;
  p_output1[268]=14;
  p_output1[269]=14;
  p_output1[270]=14;
  p_output1[271]=14;
  p_output1[272]=14;
  p_output1[273]=14;
  p_output1[274]=14;
  p_output1[275]=14;
  p_output1[276]=14;
  p_output1[277]=14;
  p_output1[278]=14;
  p_output1[279]=14;
  p_output1[280]=14;
  p_output1[281]=14;
  p_output1[282]=14;
  p_output1[283]=15;
  p_output1[284]=15;
  p_output1[285]=15;
  p_output1[286]=15;
  p_output1[287]=15;
  p_output1[288]=15;
  p_output1[289]=15;
  p_output1[290]=16;
  p_output1[291]=16;
  p_output1[292]=16;
  p_output1[293]=16;
  p_output1[294]=16;
  p_output1[295]=16;
  p_output1[296]=16;
  p_output1[297]=16;
  p_output1[298]=16;
  p_output1[299]=16;
  p_output1[300]=16;
  p_output1[301]=16;
  p_output1[302]=16;
  p_output1[303]=16;
  p_output1[304]=17;
  p_output1[305]=17;
  p_output1[306]=17;
  p_output1[307]=17;
  p_output1[308]=17;
  p_output1[309]=17;
  p_output1[310]=17;
  p_output1[311]=17;
  p_output1[312]=17;
  p_output1[313]=17;
  p_output1[314]=17;
  p_output1[315]=17;
  p_output1[316]=17;
  p_output1[317]=17;
  p_output1[318]=17;
  p_output1[319]=18;
  p_output1[320]=18;
  p_output1[321]=18;
  p_output1[322]=18;
  p_output1[323]=18;
  p_output1[324]=18;
  p_output1[325]=18;
  p_output1[326]=4;
  p_output1[327]=5;
  p_output1[328]=6;
  p_output1[329]=7;
  p_output1[330]=8;
  p_output1[331]=9;
  p_output1[332]=10;
  p_output1[333]=11;
  p_output1[334]=12;
  p_output1[335]=13;
  p_output1[336]=14;
  p_output1[337]=15;
  p_output1[338]=16;
  p_output1[339]=17;
  p_output1[340]=18;
  p_output1[341]=19;
  p_output1[342]=20;
  p_output1[343]=21;
  p_output1[344]=22;
  p_output1[345]=23;
  p_output1[346]=24;
  p_output1[347]=25;
  p_output1[348]=26;
  p_output1[349]=28;
  p_output1[350]=29;
  p_output1[351]=31;
  p_output1[352]=32;
  p_output1[353]=34;
  p_output1[354]=35;
  p_output1[355]=4;
  p_output1[356]=5;
  p_output1[357]=6;
  p_output1[358]=7;
  p_output1[359]=8;
  p_output1[360]=9;
  p_output1[361]=10;
  p_output1[362]=11;
  p_output1[363]=12;
  p_output1[364]=13;
  p_output1[365]=14;
  p_output1[366]=15;
  p_output1[367]=16;
  p_output1[368]=17;
  p_output1[369]=18;
  p_output1[370]=19;
  p_output1[371]=20;
  p_output1[372]=21;
  p_output1[373]=22;
  p_output1[374]=23;
  p_output1[375]=24;
  p_output1[376]=25;
  p_output1[377]=26;
  p_output1[378]=28;
  p_output1[379]=29;
  p_output1[380]=31;
  p_output1[381]=32;
  p_output1[382]=34;
  p_output1[383]=35;
  p_output1[384]=4;
  p_output1[385]=5;
  p_output1[386]=6;
  p_output1[387]=7;
  p_output1[388]=8;
  p_output1[389]=9;
  p_output1[390]=10;
  p_output1[391]=11;
  p_output1[392]=12;
  p_output1[393]=13;
  p_output1[394]=14;
  p_output1[395]=15;
  p_output1[396]=16;
  p_output1[397]=17;
  p_output1[398]=18;
  p_output1[399]=19;
  p_output1[400]=20;
  p_output1[401]=21;
  p_output1[402]=22;
  p_output1[403]=23;
  p_output1[404]=24;
  p_output1[405]=25;
  p_output1[406]=26;
  p_output1[407]=28;
  p_output1[408]=29;
  p_output1[409]=31;
  p_output1[410]=32;
  p_output1[411]=34;
  p_output1[412]=35;
  p_output1[413]=4;
  p_output1[414]=5;
  p_output1[415]=6;
  p_output1[416]=7;
  p_output1[417]=8;
  p_output1[418]=9;
  p_output1[419]=10;
  p_output1[420]=11;
  p_output1[421]=12;
  p_output1[422]=13;
  p_output1[423]=14;
  p_output1[424]=15;
  p_output1[425]=16;
  p_output1[426]=17;
  p_output1[427]=18;
  p_output1[428]=19;
  p_output1[429]=20;
  p_output1[430]=21;
  p_output1[431]=22;
  p_output1[432]=23;
  p_output1[433]=24;
  p_output1[434]=25;
  p_output1[435]=26;
  p_output1[436]=27;
  p_output1[437]=28;
  p_output1[438]=29;
  p_output1[439]=30;
  p_output1[440]=31;
  p_output1[441]=32;
  p_output1[442]=33;
  p_output1[443]=34;
  p_output1[444]=35;
  p_output1[445]=36;
  p_output1[446]=4;
  p_output1[447]=5;
  p_output1[448]=6;
  p_output1[449]=7;
  p_output1[450]=8;
  p_output1[451]=9;
  p_output1[452]=10;
  p_output1[453]=11;
  p_output1[454]=12;
  p_output1[455]=13;
  p_output1[456]=14;
  p_output1[457]=15;
  p_output1[458]=16;
  p_output1[459]=17;
  p_output1[460]=18;
  p_output1[461]=19;
  p_output1[462]=20;
  p_output1[463]=21;
  p_output1[464]=22;
  p_output1[465]=23;
  p_output1[466]=24;
  p_output1[467]=25;
  p_output1[468]=26;
  p_output1[469]=27;
  p_output1[470]=28;
  p_output1[471]=29;
  p_output1[472]=30;
  p_output1[473]=31;
  p_output1[474]=32;
  p_output1[475]=33;
  p_output1[476]=34;
  p_output1[477]=35;
  p_output1[478]=36;
  p_output1[479]=4;
  p_output1[480]=5;
  p_output1[481]=6;
  p_output1[482]=7;
  p_output1[483]=8;
  p_output1[484]=9;
  p_output1[485]=10;
  p_output1[486]=11;
  p_output1[487]=12;
  p_output1[488]=13;
  p_output1[489]=14;
  p_output1[490]=15;
  p_output1[491]=16;
  p_output1[492]=17;
  p_output1[493]=18;
  p_output1[494]=19;
  p_output1[495]=20;
  p_output1[496]=21;
  p_output1[497]=22;
  p_output1[498]=23;
  p_output1[499]=24;
  p_output1[500]=25;
  p_output1[501]=26;
  p_output1[502]=28;
  p_output1[503]=29;
  p_output1[504]=31;
  p_output1[505]=32;
  p_output1[506]=34;
  p_output1[507]=35;
  p_output1[508]=4;
  p_output1[509]=5;
  p_output1[510]=6;
  p_output1[511]=7;
  p_output1[512]=8;
  p_output1[513]=9;
  p_output1[514]=19;
  p_output1[515]=20;
  p_output1[516]=21;
  p_output1[517]=22;
  p_output1[518]=23;
  p_output1[519]=24;
  p_output1[520]=25;
  p_output1[521]=26;
  p_output1[522]=4;
  p_output1[523]=5;
  p_output1[524]=6;
  p_output1[525]=7;
  p_output1[526]=8;
  p_output1[527]=9;
  p_output1[528]=19;
  p_output1[529]=20;
  p_output1[530]=21;
  p_output1[531]=22;
  p_output1[532]=23;
  p_output1[533]=24;
  p_output1[534]=25;
  p_output1[535]=26;
  p_output1[536]=27;
  p_output1[537]=5;
  p_output1[538]=6;
  p_output1[539]=7;
  p_output1[540]=22;
  p_output1[541]=23;
  p_output1[542]=26;
  p_output1[543]=27;
  p_output1[544]=4;
  p_output1[545]=5;
  p_output1[546]=6;
  p_output1[547]=10;
  p_output1[548]=11;
  p_output1[549]=12;
  p_output1[550]=19;
  p_output1[551]=20;
  p_output1[552]=21;
  p_output1[553]=22;
  p_output1[554]=23;
  p_output1[555]=24;
  p_output1[556]=28;
  p_output1[557]=29;
  p_output1[558]=4;
  p_output1[559]=5;
  p_output1[560]=6;
  p_output1[561]=10;
  p_output1[562]=11;
  p_output1[563]=12;
  p_output1[564]=19;
  p_output1[565]=20;
  p_output1[566]=21;
  p_output1[567]=22;
  p_output1[568]=23;
  p_output1[569]=24;
  p_output1[570]=28;
  p_output1[571]=29;
  p_output1[572]=30;
  p_output1[573]=5;
  p_output1[574]=6;
  p_output1[575]=10;
  p_output1[576]=22;
  p_output1[577]=23;
  p_output1[578]=29;
  p_output1[579]=30;
  p_output1[580]=4;
  p_output1[581]=5;
  p_output1[582]=6;
  p_output1[583]=13;
  p_output1[584]=14;
  p_output1[585]=15;
  p_output1[586]=19;
  p_output1[587]=20;
  p_output1[588]=21;
  p_output1[589]=22;
  p_output1[590]=23;
  p_output1[591]=24;
  p_output1[592]=31;
  p_output1[593]=32;
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
  p_output1[608]=33;
  p_output1[609]=5;
  p_output1[610]=6;
  p_output1[611]=13;
  p_output1[612]=22;
  p_output1[613]=23;
  p_output1[614]=32;
  p_output1[615]=33;
  p_output1[616]=4;
  p_output1[617]=5;
  p_output1[618]=6;
  p_output1[619]=16;
  p_output1[620]=17;
  p_output1[621]=18;
  p_output1[622]=19;
  p_output1[623]=20;
  p_output1[624]=21;
  p_output1[625]=22;
  p_output1[626]=23;
  p_output1[627]=24;
  p_output1[628]=34;
  p_output1[629]=35;
  p_output1[630]=4;
  p_output1[631]=5;
  p_output1[632]=6;
  p_output1[633]=16;
  p_output1[634]=17;
  p_output1[635]=18;
  p_output1[636]=19;
  p_output1[637]=20;
  p_output1[638]=21;
  p_output1[639]=22;
  p_output1[640]=23;
  p_output1[641]=24;
  p_output1[642]=34;
  p_output1[643]=35;
  p_output1[644]=36;
  p_output1[645]=5;
  p_output1[646]=6;
  p_output1[647]=16;
  p_output1[648]=22;
  p_output1[649]=23;
  p_output1[650]=35;
  p_output1[651]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 326, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_MmatDx_ASTRo.hh"

namespace DiagonalStance
{

void Js_MmatDx_ASTRo_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
