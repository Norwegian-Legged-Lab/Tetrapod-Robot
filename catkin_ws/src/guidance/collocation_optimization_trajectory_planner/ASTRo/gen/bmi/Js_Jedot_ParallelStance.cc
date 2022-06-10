/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:51:22 GMT+02:00
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
  p_output1[0]=19;
  p_output1[1]=19;
  p_output1[2]=19;
  p_output1[3]=19;
  p_output1[4]=19;
  p_output1[5]=19;
  p_output1[6]=19;
  p_output1[7]=19;
  p_output1[8]=20;
  p_output1[9]=20;
  p_output1[10]=20;
  p_output1[11]=20;
  p_output1[12]=20;
  p_output1[13]=20;
  p_output1[14]=21;
  p_output1[15]=21;
  p_output1[16]=21;
  p_output1[17]=21;
  p_output1[18]=21;
  p_output1[19]=21;
  p_output1[20]=21;
  p_output1[21]=21;
  p_output1[22]=22;
  p_output1[23]=22;
  p_output1[24]=22;
  p_output1[25]=22;
  p_output1[26]=22;
  p_output1[27]=22;
  p_output1[28]=22;
  p_output1[29]=22;
  p_output1[30]=23;
  p_output1[31]=23;
  p_output1[32]=23;
  p_output1[33]=23;
  p_output1[34]=23;
  p_output1[35]=23;
  p_output1[36]=24;
  p_output1[37]=24;
  p_output1[38]=24;
  p_output1[39]=24;
  p_output1[40]=24;
  p_output1[41]=24;
  p_output1[42]=24;
  p_output1[43]=24;
  p_output1[44]=25;
  p_output1[45]=25;
  p_output1[46]=25;
  p_output1[47]=25;
  p_output1[48]=25;
  p_output1[49]=25;
  p_output1[50]=25;
  p_output1[51]=25;
  p_output1[52]=25;
  p_output1[53]=25;
  p_output1[54]=26;
  p_output1[55]=26;
  p_output1[56]=26;
  p_output1[57]=26;
  p_output1[58]=26;
  p_output1[59]=26;
  p_output1[60]=26;
  p_output1[61]=26;
  p_output1[62]=26;
  p_output1[63]=26;
  p_output1[64]=27;
  p_output1[65]=27;
  p_output1[66]=27;
  p_output1[67]=27;
  p_output1[68]=27;
  p_output1[69]=27;
  p_output1[70]=27;
  p_output1[71]=27;
  p_output1[72]=27;
  p_output1[73]=27;
  p_output1[74]=28;
  p_output1[75]=28;
  p_output1[76]=28;
  p_output1[77]=28;
  p_output1[78]=28;
  p_output1[79]=28;
  p_output1[80]=28;
  p_output1[81]=28;
  p_output1[82]=28;
  p_output1[83]=28;
  p_output1[84]=29;
  p_output1[85]=29;
  p_output1[86]=29;
  p_output1[87]=29;
  p_output1[88]=29;
  p_output1[89]=29;
  p_output1[90]=29;
  p_output1[91]=29;
  p_output1[92]=29;
  p_output1[93]=29;
  p_output1[94]=30;
  p_output1[95]=30;
  p_output1[96]=30;
  p_output1[97]=30;
  p_output1[98]=30;
  p_output1[99]=30;
  p_output1[100]=30;
  p_output1[101]=30;
  p_output1[102]=30;
  p_output1[103]=30;
  p_output1[104]=31;
  p_output1[105]=31;
  p_output1[106]=31;
  p_output1[107]=31;
  p_output1[108]=31;
  p_output1[109]=31;
  p_output1[110]=31;
  p_output1[111]=31;
  p_output1[112]=31;
  p_output1[113]=31;
  p_output1[114]=31;
  p_output1[115]=32;
  p_output1[116]=32;
  p_output1[117]=32;
  p_output1[118]=32;
  p_output1[119]=32;
  p_output1[120]=32;
  p_output1[121]=32;
  p_output1[122]=32;
  p_output1[123]=32;
  p_output1[124]=32;
  p_output1[125]=32;
  p_output1[126]=33;
  p_output1[127]=33;
  p_output1[128]=33;
  p_output1[129]=33;
  p_output1[130]=33;
  p_output1[131]=33;
  p_output1[132]=33;
  p_output1[133]=33;
  p_output1[134]=33;
  p_output1[135]=33;
  p_output1[136]=33;
  p_output1[137]=34;
  p_output1[138]=34;
  p_output1[139]=34;
  p_output1[140]=34;
  p_output1[141]=34;
  p_output1[142]=34;
  p_output1[143]=34;
  p_output1[144]=34;
  p_output1[145]=34;
  p_output1[146]=34;
  p_output1[147]=34;
  p_output1[148]=35;
  p_output1[149]=35;
  p_output1[150]=35;
  p_output1[151]=35;
  p_output1[152]=35;
  p_output1[153]=35;
  p_output1[154]=35;
  p_output1[155]=35;
  p_output1[156]=35;
  p_output1[157]=35;
  p_output1[158]=35;
  p_output1[159]=36;
  p_output1[160]=36;
  p_output1[161]=36;
  p_output1[162]=36;
  p_output1[163]=36;
  p_output1[164]=36;
  p_output1[165]=36;
  p_output1[166]=36;
  p_output1[167]=36;
  p_output1[168]=36;
  p_output1[169]=36;
  p_output1[170]=73;
  p_output1[171]=73;
  p_output1[172]=73;
  p_output1[173]=73;
  p_output1[174]=73;
  p_output1[175]=73;
  p_output1[176]=73;
  p_output1[177]=73;
  p_output1[178]=73;
  p_output1[179]=73;
  p_output1[180]=73;
  p_output1[181]=73;
  p_output1[182]=74;
  p_output1[183]=74;
  p_output1[184]=74;
  p_output1[185]=74;
  p_output1[186]=74;
  p_output1[187]=74;
  p_output1[188]=74;
  p_output1[189]=74;
  p_output1[190]=74;
  p_output1[191]=74;
  p_output1[192]=74;
  p_output1[193]=74;
  p_output1[194]=75;
  p_output1[195]=75;
  p_output1[196]=75;
  p_output1[197]=75;
  p_output1[198]=75;
  p_output1[199]=75;
  p_output1[200]=75;
  p_output1[201]=75;
  p_output1[202]=75;
  p_output1[203]=75;
  p_output1[204]=75;
  p_output1[205]=75;
  p_output1[206]=79;
  p_output1[207]=79;
  p_output1[208]=79;
  p_output1[209]=79;
  p_output1[210]=79;
  p_output1[211]=79;
  p_output1[212]=79;
  p_output1[213]=79;
  p_output1[214]=79;
  p_output1[215]=79;
  p_output1[216]=79;
  p_output1[217]=79;
  p_output1[218]=80;
  p_output1[219]=80;
  p_output1[220]=80;
  p_output1[221]=80;
  p_output1[222]=80;
  p_output1[223]=80;
  p_output1[224]=80;
  p_output1[225]=80;
  p_output1[226]=80;
  p_output1[227]=81;
  p_output1[228]=81;
  p_output1[229]=81;
  p_output1[230]=81;
  p_output1[231]=81;
  p_output1[232]=81;
  p_output1[233]=81;
  p_output1[234]=81;
  p_output1[235]=81;
  p_output1[236]=81;
  p_output1[237]=81;
  p_output1[238]=81;
  p_output1[239]=81;
  p_output1[240]=85;
  p_output1[241]=85;
  p_output1[242]=85;
  p_output1[243]=85;
  p_output1[244]=85;
  p_output1[245]=85;
  p_output1[246]=85;
  p_output1[247]=85;
  p_output1[248]=85;
  p_output1[249]=85;
  p_output1[250]=85;
  p_output1[251]=85;
  p_output1[252]=85;
  p_output1[253]=86;
  p_output1[254]=86;
  p_output1[255]=86;
  p_output1[256]=86;
  p_output1[257]=86;
  p_output1[258]=86;
  p_output1[259]=86;
  p_output1[260]=86;
  p_output1[261]=86;
  p_output1[262]=87;
  p_output1[263]=87;
  p_output1[264]=87;
  p_output1[265]=87;
  p_output1[266]=87;
  p_output1[267]=87;
  p_output1[268]=87;
  p_output1[269]=87;
  p_output1[270]=87;
  p_output1[271]=87;
  p_output1[272]=87;
  p_output1[273]=87;
  p_output1[274]=87;
  p_output1[275]=87;
  p_output1[276]=94;
  p_output1[277]=94;
  p_output1[278]=94;
  p_output1[279]=94;
  p_output1[280]=94;
  p_output1[281]=94;
  p_output1[282]=94;
  p_output1[283]=94;
  p_output1[284]=94;
  p_output1[285]=94;
  p_output1[286]=94;
  p_output1[287]=94;
  p_output1[288]=95;
  p_output1[289]=95;
  p_output1[290]=95;
  p_output1[291]=95;
  p_output1[292]=95;
  p_output1[293]=95;
  p_output1[294]=95;
  p_output1[295]=95;
  p_output1[296]=95;
  p_output1[297]=95;
  p_output1[298]=95;
  p_output1[299]=95;
  p_output1[300]=96;
  p_output1[301]=96;
  p_output1[302]=96;
  p_output1[303]=96;
  p_output1[304]=96;
  p_output1[305]=96;
  p_output1[306]=96;
  p_output1[307]=96;
  p_output1[308]=96;
  p_output1[309]=96;
  p_output1[310]=96;
  p_output1[311]=96;
  p_output1[312]=100;
  p_output1[313]=100;
  p_output1[314]=100;
  p_output1[315]=100;
  p_output1[316]=100;
  p_output1[317]=100;
  p_output1[318]=100;
  p_output1[319]=100;
  p_output1[320]=100;
  p_output1[321]=100;
  p_output1[322]=100;
  p_output1[323]=100;
  p_output1[324]=100;
  p_output1[325]=101;
  p_output1[326]=101;
  p_output1[327]=101;
  p_output1[328]=101;
  p_output1[329]=101;
  p_output1[330]=101;
  p_output1[331]=101;
  p_output1[332]=101;
  p_output1[333]=101;
  p_output1[334]=102;
  p_output1[335]=102;
  p_output1[336]=102;
  p_output1[337]=102;
  p_output1[338]=102;
  p_output1[339]=102;
  p_output1[340]=102;
  p_output1[341]=102;
  p_output1[342]=102;
  p_output1[343]=102;
  p_output1[344]=102;
  p_output1[345]=102;
  p_output1[346]=106;
  p_output1[347]=106;
  p_output1[348]=106;
  p_output1[349]=106;
  p_output1[350]=106;
  p_output1[351]=106;
  p_output1[352]=106;
  p_output1[353]=106;
  p_output1[354]=106;
  p_output1[355]=106;
  p_output1[356]=106;
  p_output1[357]=106;
  p_output1[358]=106;
  p_output1[359]=106;
  p_output1[360]=107;
  p_output1[361]=107;
  p_output1[362]=107;
  p_output1[363]=107;
  p_output1[364]=107;
  p_output1[365]=107;
  p_output1[366]=107;
  p_output1[367]=107;
  p_output1[368]=107;
  p_output1[369]=108;
  p_output1[370]=108;
  p_output1[371]=108;
  p_output1[372]=108;
  p_output1[373]=108;
  p_output1[374]=108;
  p_output1[375]=108;
  p_output1[376]=108;
  p_output1[377]=108;
  p_output1[378]=108;
  p_output1[379]=108;
  p_output1[380]=108;
  p_output1[381]=108;
  p_output1[382]=4;
  p_output1[383]=5;
  p_output1[384]=6;
  p_output1[385]=13;
  p_output1[386]=14;
  p_output1[387]=15;
  p_output1[388]=20;
  p_output1[389]=21;
  p_output1[390]=4;
  p_output1[391]=5;
  p_output1[392]=6;
  p_output1[393]=13;
  p_output1[394]=20;
  p_output1[395]=21;
  p_output1[396]=4;
  p_output1[397]=5;
  p_output1[398]=6;
  p_output1[399]=13;
  p_output1[400]=14;
  p_output1[401]=15;
  p_output1[402]=20;
  p_output1[403]=21;
  p_output1[404]=4;
  p_output1[405]=5;
  p_output1[406]=6;
  p_output1[407]=16;
  p_output1[408]=17;
  p_output1[409]=18;
  p_output1[410]=20;
  p_output1[411]=21;
  p_output1[412]=4;
  p_output1[413]=5;
  p_output1[414]=6;
  p_output1[415]=16;
  p_output1[416]=20;
  p_output1[417]=21;
  p_output1[418]=4;
  p_output1[419]=5;
  p_output1[420]=6;
  p_output1[421]=16;
  p_output1[422]=17;
  p_output1[423]=18;
  p_output1[424]=20;
  p_output1[425]=21;
  p_output1[426]=4;
  p_output1[427]=5;
  p_output1[428]=6;
  p_output1[429]=13;
  p_output1[430]=14;
  p_output1[431]=15;
  p_output1[432]=19;
  p_output1[433]=20;
  p_output1[434]=21;
  p_output1[435]=22;
  p_output1[436]=4;
  p_output1[437]=5;
  p_output1[438]=6;
  p_output1[439]=13;
  p_output1[440]=14;
  p_output1[441]=15;
  p_output1[442]=19;
  p_output1[443]=20;
  p_output1[444]=21;
  p_output1[445]=22;
  p_output1[446]=4;
  p_output1[447]=5;
  p_output1[448]=6;
  p_output1[449]=13;
  p_output1[450]=14;
  p_output1[451]=15;
  p_output1[452]=19;
  p_output1[453]=20;
  p_output1[454]=21;
  p_output1[455]=22;
  p_output1[456]=4;
  p_output1[457]=5;
  p_output1[458]=6;
  p_output1[459]=16;
  p_output1[460]=17;
  p_output1[461]=18;
  p_output1[462]=19;
  p_output1[463]=20;
  p_output1[464]=21;
  p_output1[465]=22;
  p_output1[466]=4;
  p_output1[467]=5;
  p_output1[468]=6;
  p_output1[469]=16;
  p_output1[470]=17;
  p_output1[471]=18;
  p_output1[472]=19;
  p_output1[473]=20;
  p_output1[474]=21;
  p_output1[475]=22;
  p_output1[476]=4;
  p_output1[477]=5;
  p_output1[478]=6;
  p_output1[479]=16;
  p_output1[480]=17;
  p_output1[481]=18;
  p_output1[482]=19;
  p_output1[483]=20;
  p_output1[484]=21;
  p_output1[485]=22;
  p_output1[486]=4;
  p_output1[487]=5;
  p_output1[488]=6;
  p_output1[489]=13;
  p_output1[490]=14;
  p_output1[491]=15;
  p_output1[492]=19;
  p_output1[493]=20;
  p_output1[494]=21;
  p_output1[495]=22;
  p_output1[496]=23;
  p_output1[497]=4;
  p_output1[498]=5;
  p_output1[499]=6;
  p_output1[500]=13;
  p_output1[501]=14;
  p_output1[502]=15;
  p_output1[503]=19;
  p_output1[504]=20;
  p_output1[505]=21;
  p_output1[506]=22;
  p_output1[507]=23;
  p_output1[508]=4;
  p_output1[509]=5;
  p_output1[510]=6;
  p_output1[511]=13;
  p_output1[512]=14;
  p_output1[513]=15;
  p_output1[514]=19;
  p_output1[515]=20;
  p_output1[516]=21;
  p_output1[517]=22;
  p_output1[518]=23;
  p_output1[519]=4;
  p_output1[520]=5;
  p_output1[521]=6;
  p_output1[522]=16;
  p_output1[523]=17;
  p_output1[524]=18;
  p_output1[525]=19;
  p_output1[526]=20;
  p_output1[527]=21;
  p_output1[528]=22;
  p_output1[529]=23;
  p_output1[530]=4;
  p_output1[531]=5;
  p_output1[532]=6;
  p_output1[533]=16;
  p_output1[534]=17;
  p_output1[535]=18;
  p_output1[536]=19;
  p_output1[537]=20;
  p_output1[538]=21;
  p_output1[539]=22;
  p_output1[540]=23;
  p_output1[541]=4;
  p_output1[542]=5;
  p_output1[543]=6;
  p_output1[544]=16;
  p_output1[545]=17;
  p_output1[546]=18;
  p_output1[547]=19;
  p_output1[548]=20;
  p_output1[549]=21;
  p_output1[550]=22;
  p_output1[551]=23;
  p_output1[552]=4;
  p_output1[553]=5;
  p_output1[554]=6;
  p_output1[555]=13;
  p_output1[556]=14;
  p_output1[557]=15;
  p_output1[558]=19;
  p_output1[559]=20;
  p_output1[560]=21;
  p_output1[561]=22;
  p_output1[562]=23;
  p_output1[563]=24;
  p_output1[564]=4;
  p_output1[565]=5;
  p_output1[566]=6;
  p_output1[567]=13;
  p_output1[568]=14;
  p_output1[569]=15;
  p_output1[570]=19;
  p_output1[571]=20;
  p_output1[572]=21;
  p_output1[573]=22;
  p_output1[574]=23;
  p_output1[575]=24;
  p_output1[576]=4;
  p_output1[577]=5;
  p_output1[578]=6;
  p_output1[579]=13;
  p_output1[580]=14;
  p_output1[581]=15;
  p_output1[582]=19;
  p_output1[583]=20;
  p_output1[584]=21;
  p_output1[585]=22;
  p_output1[586]=23;
  p_output1[587]=24;
  p_output1[588]=4;
  p_output1[589]=5;
  p_output1[590]=6;
  p_output1[591]=13;
  p_output1[592]=14;
  p_output1[593]=15;
  p_output1[594]=19;
  p_output1[595]=20;
  p_output1[596]=21;
  p_output1[597]=22;
  p_output1[598]=23;
  p_output1[599]=24;
  p_output1[600]=5;
  p_output1[601]=6;
  p_output1[602]=13;
  p_output1[603]=14;
  p_output1[604]=15;
  p_output1[605]=22;
  p_output1[606]=23;
  p_output1[607]=24;
  p_output1[608]=31;
  p_output1[609]=4;
  p_output1[610]=5;
  p_output1[611]=6;
  p_output1[612]=13;
  p_output1[613]=14;
  p_output1[614]=15;
  p_output1[615]=19;
  p_output1[616]=20;
  p_output1[617]=21;
  p_output1[618]=22;
  p_output1[619]=23;
  p_output1[620]=24;
  p_output1[621]=31;
  p_output1[622]=4;
  p_output1[623]=5;
  p_output1[624]=6;
  p_output1[625]=13;
  p_output1[626]=14;
  p_output1[627]=15;
  p_output1[628]=19;
  p_output1[629]=20;
  p_output1[630]=21;
  p_output1[631]=22;
  p_output1[632]=23;
  p_output1[633]=24;
  p_output1[634]=32;
  p_output1[635]=5;
  p_output1[636]=6;
  p_output1[637]=13;
  p_output1[638]=14;
  p_output1[639]=15;
  p_output1[640]=22;
  p_output1[641]=23;
  p_output1[642]=24;
  p_output1[643]=31;
  p_output1[644]=4;
  p_output1[645]=5;
  p_output1[646]=6;
  p_output1[647]=13;
  p_output1[648]=14;
  p_output1[649]=15;
  p_output1[650]=19;
  p_output1[651]=20;
  p_output1[652]=21;
  p_output1[653]=22;
  p_output1[654]=23;
  p_output1[655]=24;
  p_output1[656]=31;
  p_output1[657]=32;
  p_output1[658]=4;
  p_output1[659]=5;
  p_output1[660]=6;
  p_output1[661]=16;
  p_output1[662]=17;
  p_output1[663]=18;
  p_output1[664]=19;
  p_output1[665]=20;
  p_output1[666]=21;
  p_output1[667]=22;
  p_output1[668]=23;
  p_output1[669]=24;
  p_output1[670]=4;
  p_output1[671]=5;
  p_output1[672]=6;
  p_output1[673]=16;
  p_output1[674]=17;
  p_output1[675]=18;
  p_output1[676]=19;
  p_output1[677]=20;
  p_output1[678]=21;
  p_output1[679]=22;
  p_output1[680]=23;
  p_output1[681]=24;
  p_output1[682]=4;
  p_output1[683]=5;
  p_output1[684]=6;
  p_output1[685]=16;
  p_output1[686]=17;
  p_output1[687]=18;
  p_output1[688]=19;
  p_output1[689]=20;
  p_output1[690]=21;
  p_output1[691]=22;
  p_output1[692]=23;
  p_output1[693]=24;
  p_output1[694]=4;
  p_output1[695]=5;
  p_output1[696]=6;
  p_output1[697]=16;
  p_output1[698]=17;
  p_output1[699]=18;
  p_output1[700]=19;
  p_output1[701]=20;
  p_output1[702]=21;
  p_output1[703]=22;
  p_output1[704]=23;
  p_output1[705]=24;
  p_output1[706]=34;
  p_output1[707]=5;
  p_output1[708]=6;
  p_output1[709]=16;
  p_output1[710]=17;
  p_output1[711]=18;
  p_output1[712]=22;
  p_output1[713]=23;
  p_output1[714]=24;
  p_output1[715]=34;
  p_output1[716]=4;
  p_output1[717]=5;
  p_output1[718]=6;
  p_output1[719]=16;
  p_output1[720]=17;
  p_output1[721]=18;
  p_output1[722]=19;
  p_output1[723]=20;
  p_output1[724]=21;
  p_output1[725]=22;
  p_output1[726]=23;
  p_output1[727]=24;
  p_output1[728]=4;
  p_output1[729]=5;
  p_output1[730]=6;
  p_output1[731]=16;
  p_output1[732]=17;
  p_output1[733]=18;
  p_output1[734]=19;
  p_output1[735]=20;
  p_output1[736]=21;
  p_output1[737]=22;
  p_output1[738]=23;
  p_output1[739]=24;
  p_output1[740]=34;
  p_output1[741]=35;
  p_output1[742]=5;
  p_output1[743]=6;
  p_output1[744]=16;
  p_output1[745]=17;
  p_output1[746]=18;
  p_output1[747]=22;
  p_output1[748]=23;
  p_output1[749]=24;
  p_output1[750]=34;
  p_output1[751]=4;
  p_output1[752]=5;
  p_output1[753]=6;
  p_output1[754]=16;
  p_output1[755]=17;
  p_output1[756]=18;
  p_output1[757]=19;
  p_output1[758]=20;
  p_output1[759]=21;
  p_output1[760]=22;
  p_output1[761]=23;
  p_output1[762]=24;
  p_output1[763]=35;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 382, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Jedot_ParallelStance.hh"

namespace SymFunction
{

void Js_Jedot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
