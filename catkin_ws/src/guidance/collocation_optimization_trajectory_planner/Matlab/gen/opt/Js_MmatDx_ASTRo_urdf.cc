/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:26:51 GMT+01:00
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
  p_output1[29]=1;
  p_output1[30]=1;
  p_output1[31]=1;
  p_output1[32]=1;
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
  p_output1[59]=2;
  p_output1[60]=2;
  p_output1[61]=2;
  p_output1[62]=2;
  p_output1[63]=2;
  p_output1[64]=2;
  p_output1[65]=2;
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
  p_output1[90]=3;
  p_output1[91]=3;
  p_output1[92]=3;
  p_output1[93]=3;
  p_output1[94]=3;
  p_output1[95]=3;
  p_output1[96]=3;
  p_output1[97]=3;
  p_output1[98]=3;
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
  p_output1[120]=4;
  p_output1[121]=4;
  p_output1[122]=4;
  p_output1[123]=4;
  p_output1[124]=4;
  p_output1[125]=4;
  p_output1[126]=4;
  p_output1[127]=4;
  p_output1[128]=4;
  p_output1[129]=4;
  p_output1[130]=4;
  p_output1[131]=4;
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
  p_output1[153]=5;
  p_output1[154]=5;
  p_output1[155]=5;
  p_output1[156]=5;
  p_output1[157]=5;
  p_output1[158]=5;
  p_output1[159]=5;
  p_output1[160]=5;
  p_output1[161]=5;
  p_output1[162]=5;
  p_output1[163]=5;
  p_output1[164]=5;
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
  p_output1[186]=6;
  p_output1[187]=6;
  p_output1[188]=6;
  p_output1[189]=6;
  p_output1[190]=6;
  p_output1[191]=6;
  p_output1[192]=6;
  p_output1[193]=6;
  p_output1[194]=6;
  p_output1[195]=6;
  p_output1[196]=6;
  p_output1[197]=6;
  p_output1[198]=7;
  p_output1[199]=7;
  p_output1[200]=7;
  p_output1[201]=7;
  p_output1[202]=7;
  p_output1[203]=7;
  p_output1[204]=7;
  p_output1[205]=7;
  p_output1[206]=7;
  p_output1[207]=7;
  p_output1[208]=7;
  p_output1[209]=7;
  p_output1[210]=7;
  p_output1[211]=7;
  p_output1[212]=7;
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
  p_output1[224]=8;
  p_output1[225]=8;
  p_output1[226]=8;
  p_output1[227]=8;
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
  p_output1[258]=11;
  p_output1[259]=11;
  p_output1[260]=11;
  p_output1[261]=11;
  p_output1[262]=11;
  p_output1[263]=11;
  p_output1[264]=11;
  p_output1[265]=11;
  p_output1[266]=11;
  p_output1[267]=11;
  p_output1[268]=11;
  p_output1[269]=11;
  p_output1[270]=11;
  p_output1[271]=11;
  p_output1[272]=11;
  p_output1[273]=12;
  p_output1[274]=12;
  p_output1[275]=12;
  p_output1[276]=12;
  p_output1[277]=12;
  p_output1[278]=12;
  p_output1[279]=12;
  p_output1[280]=12;
  p_output1[281]=12;
  p_output1[282]=12;
  p_output1[283]=12;
  p_output1[284]=12;
  p_output1[285]=12;
  p_output1[286]=12;
  p_output1[287]=12;
  p_output1[288]=13;
  p_output1[289]=13;
  p_output1[290]=13;
  p_output1[291]=13;
  p_output1[292]=13;
  p_output1[293]=13;
  p_output1[294]=13;
  p_output1[295]=13;
  p_output1[296]=13;
  p_output1[297]=13;
  p_output1[298]=13;
  p_output1[299]=13;
  p_output1[300]=13;
  p_output1[301]=13;
  p_output1[302]=13;
  p_output1[303]=14;
  p_output1[304]=14;
  p_output1[305]=14;
  p_output1[306]=14;
  p_output1[307]=14;
  p_output1[308]=14;
  p_output1[309]=14;
  p_output1[310]=14;
  p_output1[311]=14;
  p_output1[312]=14;
  p_output1[313]=14;
  p_output1[314]=14;
  p_output1[315]=14;
  p_output1[316]=14;
  p_output1[317]=14;
  p_output1[318]=15;
  p_output1[319]=15;
  p_output1[320]=15;
  p_output1[321]=15;
  p_output1[322]=15;
  p_output1[323]=15;
  p_output1[324]=15;
  p_output1[325]=15;
  p_output1[326]=15;
  p_output1[327]=15;
  p_output1[328]=15;
  p_output1[329]=15;
  p_output1[330]=15;
  p_output1[331]=15;
  p_output1[332]=15;
  p_output1[333]=16;
  p_output1[334]=16;
  p_output1[335]=16;
  p_output1[336]=16;
  p_output1[337]=16;
  p_output1[338]=16;
  p_output1[339]=16;
  p_output1[340]=16;
  p_output1[341]=16;
  p_output1[342]=16;
  p_output1[343]=16;
  p_output1[344]=16;
  p_output1[345]=16;
  p_output1[346]=16;
  p_output1[347]=16;
  p_output1[348]=17;
  p_output1[349]=17;
  p_output1[350]=17;
  p_output1[351]=17;
  p_output1[352]=17;
  p_output1[353]=17;
  p_output1[354]=17;
  p_output1[355]=17;
  p_output1[356]=17;
  p_output1[357]=17;
  p_output1[358]=17;
  p_output1[359]=17;
  p_output1[360]=17;
  p_output1[361]=17;
  p_output1[362]=17;
  p_output1[363]=18;
  p_output1[364]=18;
  p_output1[365]=18;
  p_output1[366]=18;
  p_output1[367]=18;
  p_output1[368]=18;
  p_output1[369]=18;
  p_output1[370]=18;
  p_output1[371]=18;
  p_output1[372]=18;
  p_output1[373]=18;
  p_output1[374]=18;
  p_output1[375]=18;
  p_output1[376]=18;
  p_output1[377]=18;
  p_output1[378]=4;
  p_output1[379]=5;
  p_output1[380]=6;
  p_output1[381]=7;
  p_output1[382]=8;
  p_output1[383]=9;
  p_output1[384]=10;
  p_output1[385]=11;
  p_output1[386]=12;
  p_output1[387]=13;
  p_output1[388]=14;
  p_output1[389]=15;
  p_output1[390]=16;
  p_output1[391]=17;
  p_output1[392]=18;
  p_output1[393]=19;
  p_output1[394]=20;
  p_output1[395]=21;
  p_output1[396]=22;
  p_output1[397]=23;
  p_output1[398]=24;
  p_output1[399]=25;
  p_output1[400]=26;
  p_output1[401]=27;
  p_output1[402]=28;
  p_output1[403]=29;
  p_output1[404]=30;
  p_output1[405]=31;
  p_output1[406]=32;
  p_output1[407]=33;
  p_output1[408]=34;
  p_output1[409]=35;
  p_output1[410]=36;
  p_output1[411]=4;
  p_output1[412]=5;
  p_output1[413]=6;
  p_output1[414]=7;
  p_output1[415]=8;
  p_output1[416]=9;
  p_output1[417]=10;
  p_output1[418]=11;
  p_output1[419]=12;
  p_output1[420]=13;
  p_output1[421]=14;
  p_output1[422]=15;
  p_output1[423]=16;
  p_output1[424]=17;
  p_output1[425]=18;
  p_output1[426]=19;
  p_output1[427]=20;
  p_output1[428]=21;
  p_output1[429]=22;
  p_output1[430]=23;
  p_output1[431]=24;
  p_output1[432]=25;
  p_output1[433]=26;
  p_output1[434]=27;
  p_output1[435]=28;
  p_output1[436]=29;
  p_output1[437]=30;
  p_output1[438]=31;
  p_output1[439]=32;
  p_output1[440]=33;
  p_output1[441]=34;
  p_output1[442]=35;
  p_output1[443]=36;
  p_output1[444]=4;
  p_output1[445]=5;
  p_output1[446]=6;
  p_output1[447]=7;
  p_output1[448]=8;
  p_output1[449]=9;
  p_output1[450]=10;
  p_output1[451]=11;
  p_output1[452]=12;
  p_output1[453]=13;
  p_output1[454]=14;
  p_output1[455]=15;
  p_output1[456]=16;
  p_output1[457]=17;
  p_output1[458]=18;
  p_output1[459]=19;
  p_output1[460]=20;
  p_output1[461]=21;
  p_output1[462]=22;
  p_output1[463]=23;
  p_output1[464]=24;
  p_output1[465]=25;
  p_output1[466]=26;
  p_output1[467]=27;
  p_output1[468]=28;
  p_output1[469]=29;
  p_output1[470]=30;
  p_output1[471]=31;
  p_output1[472]=32;
  p_output1[473]=33;
  p_output1[474]=34;
  p_output1[475]=35;
  p_output1[476]=36;
  p_output1[477]=4;
  p_output1[478]=5;
  p_output1[479]=6;
  p_output1[480]=7;
  p_output1[481]=8;
  p_output1[482]=9;
  p_output1[483]=10;
  p_output1[484]=11;
  p_output1[485]=12;
  p_output1[486]=13;
  p_output1[487]=14;
  p_output1[488]=15;
  p_output1[489]=16;
  p_output1[490]=17;
  p_output1[491]=18;
  p_output1[492]=19;
  p_output1[493]=20;
  p_output1[494]=21;
  p_output1[495]=22;
  p_output1[496]=23;
  p_output1[497]=24;
  p_output1[498]=25;
  p_output1[499]=26;
  p_output1[500]=27;
  p_output1[501]=28;
  p_output1[502]=29;
  p_output1[503]=30;
  p_output1[504]=31;
  p_output1[505]=32;
  p_output1[506]=33;
  p_output1[507]=34;
  p_output1[508]=35;
  p_output1[509]=36;
  p_output1[510]=4;
  p_output1[511]=5;
  p_output1[512]=6;
  p_output1[513]=7;
  p_output1[514]=8;
  p_output1[515]=9;
  p_output1[516]=10;
  p_output1[517]=11;
  p_output1[518]=12;
  p_output1[519]=13;
  p_output1[520]=14;
  p_output1[521]=15;
  p_output1[522]=16;
  p_output1[523]=17;
  p_output1[524]=18;
  p_output1[525]=19;
  p_output1[526]=20;
  p_output1[527]=21;
  p_output1[528]=22;
  p_output1[529]=23;
  p_output1[530]=24;
  p_output1[531]=25;
  p_output1[532]=26;
  p_output1[533]=27;
  p_output1[534]=28;
  p_output1[535]=29;
  p_output1[536]=30;
  p_output1[537]=31;
  p_output1[538]=32;
  p_output1[539]=33;
  p_output1[540]=34;
  p_output1[541]=35;
  p_output1[542]=36;
  p_output1[543]=4;
  p_output1[544]=5;
  p_output1[545]=6;
  p_output1[546]=7;
  p_output1[547]=8;
  p_output1[548]=9;
  p_output1[549]=10;
  p_output1[550]=11;
  p_output1[551]=12;
  p_output1[552]=13;
  p_output1[553]=14;
  p_output1[554]=15;
  p_output1[555]=16;
  p_output1[556]=17;
  p_output1[557]=18;
  p_output1[558]=19;
  p_output1[559]=20;
  p_output1[560]=21;
  p_output1[561]=22;
  p_output1[562]=23;
  p_output1[563]=24;
  p_output1[564]=25;
  p_output1[565]=26;
  p_output1[566]=27;
  p_output1[567]=28;
  p_output1[568]=29;
  p_output1[569]=30;
  p_output1[570]=31;
  p_output1[571]=32;
  p_output1[572]=33;
  p_output1[573]=34;
  p_output1[574]=35;
  p_output1[575]=36;
  p_output1[576]=4;
  p_output1[577]=5;
  p_output1[578]=6;
  p_output1[579]=7;
  p_output1[580]=8;
  p_output1[581]=9;
  p_output1[582]=19;
  p_output1[583]=20;
  p_output1[584]=21;
  p_output1[585]=22;
  p_output1[586]=23;
  p_output1[587]=24;
  p_output1[588]=25;
  p_output1[589]=26;
  p_output1[590]=27;
  p_output1[591]=4;
  p_output1[592]=5;
  p_output1[593]=6;
  p_output1[594]=7;
  p_output1[595]=8;
  p_output1[596]=9;
  p_output1[597]=19;
  p_output1[598]=20;
  p_output1[599]=21;
  p_output1[600]=22;
  p_output1[601]=23;
  p_output1[602]=24;
  p_output1[603]=25;
  p_output1[604]=26;
  p_output1[605]=27;
  p_output1[606]=4;
  p_output1[607]=5;
  p_output1[608]=6;
  p_output1[609]=7;
  p_output1[610]=8;
  p_output1[611]=9;
  p_output1[612]=19;
  p_output1[613]=20;
  p_output1[614]=21;
  p_output1[615]=22;
  p_output1[616]=23;
  p_output1[617]=24;
  p_output1[618]=25;
  p_output1[619]=26;
  p_output1[620]=27;
  p_output1[621]=4;
  p_output1[622]=5;
  p_output1[623]=6;
  p_output1[624]=10;
  p_output1[625]=11;
  p_output1[626]=12;
  p_output1[627]=19;
  p_output1[628]=20;
  p_output1[629]=21;
  p_output1[630]=22;
  p_output1[631]=23;
  p_output1[632]=24;
  p_output1[633]=28;
  p_output1[634]=29;
  p_output1[635]=30;
  p_output1[636]=4;
  p_output1[637]=5;
  p_output1[638]=6;
  p_output1[639]=10;
  p_output1[640]=11;
  p_output1[641]=12;
  p_output1[642]=19;
  p_output1[643]=20;
  p_output1[644]=21;
  p_output1[645]=22;
  p_output1[646]=23;
  p_output1[647]=24;
  p_output1[648]=28;
  p_output1[649]=29;
  p_output1[650]=30;
  p_output1[651]=4;
  p_output1[652]=5;
  p_output1[653]=6;
  p_output1[654]=10;
  p_output1[655]=11;
  p_output1[656]=12;
  p_output1[657]=19;
  p_output1[658]=20;
  p_output1[659]=21;
  p_output1[660]=22;
  p_output1[661]=23;
  p_output1[662]=24;
  p_output1[663]=28;
  p_output1[664]=29;
  p_output1[665]=30;
  p_output1[666]=4;
  p_output1[667]=5;
  p_output1[668]=6;
  p_output1[669]=13;
  p_output1[670]=14;
  p_output1[671]=15;
  p_output1[672]=19;
  p_output1[673]=20;
  p_output1[674]=21;
  p_output1[675]=22;
  p_output1[676]=23;
  p_output1[677]=24;
  p_output1[678]=31;
  p_output1[679]=32;
  p_output1[680]=33;
  p_output1[681]=4;
  p_output1[682]=5;
  p_output1[683]=6;
  p_output1[684]=13;
  p_output1[685]=14;
  p_output1[686]=15;
  p_output1[687]=19;
  p_output1[688]=20;
  p_output1[689]=21;
  p_output1[690]=22;
  p_output1[691]=23;
  p_output1[692]=24;
  p_output1[693]=31;
  p_output1[694]=32;
  p_output1[695]=33;
  p_output1[696]=4;
  p_output1[697]=5;
  p_output1[698]=6;
  p_output1[699]=13;
  p_output1[700]=14;
  p_output1[701]=15;
  p_output1[702]=19;
  p_output1[703]=20;
  p_output1[704]=21;
  p_output1[705]=22;
  p_output1[706]=23;
  p_output1[707]=24;
  p_output1[708]=31;
  p_output1[709]=32;
  p_output1[710]=33;
  p_output1[711]=4;
  p_output1[712]=5;
  p_output1[713]=6;
  p_output1[714]=16;
  p_output1[715]=17;
  p_output1[716]=18;
  p_output1[717]=19;
  p_output1[718]=20;
  p_output1[719]=21;
  p_output1[720]=22;
  p_output1[721]=23;
  p_output1[722]=24;
  p_output1[723]=34;
  p_output1[724]=35;
  p_output1[725]=36;
  p_output1[726]=4;
  p_output1[727]=5;
  p_output1[728]=6;
  p_output1[729]=16;
  p_output1[730]=17;
  p_output1[731]=18;
  p_output1[732]=19;
  p_output1[733]=20;
  p_output1[734]=21;
  p_output1[735]=22;
  p_output1[736]=23;
  p_output1[737]=24;
  p_output1[738]=34;
  p_output1[739]=35;
  p_output1[740]=36;
  p_output1[741]=4;
  p_output1[742]=5;
  p_output1[743]=6;
  p_output1[744]=16;
  p_output1[745]=17;
  p_output1[746]=18;
  p_output1[747]=19;
  p_output1[748]=20;
  p_output1[749]=21;
  p_output1[750]=22;
  p_output1[751]=23;
  p_output1[752]=24;
  p_output1[753]=34;
  p_output1[754]=35;
  p_output1[755]=36;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 378, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_MmatDx_ASTRo_urdf.hh"

namespace DiagonalStance1
{

void Js_MmatDx_ASTRo_urdf_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
