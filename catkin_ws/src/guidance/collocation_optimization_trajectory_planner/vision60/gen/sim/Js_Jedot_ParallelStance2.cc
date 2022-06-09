/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:39:02 GMT+02:00
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
  p_output1[170]=37;
  p_output1[171]=37;
  p_output1[172]=37;
  p_output1[173]=37;
  p_output1[174]=37;
  p_output1[175]=37;
  p_output1[176]=37;
  p_output1[177]=37;
  p_output1[178]=37;
  p_output1[179]=37;
  p_output1[180]=37;
  p_output1[181]=37;
  p_output1[182]=38;
  p_output1[183]=38;
  p_output1[184]=38;
  p_output1[185]=38;
  p_output1[186]=38;
  p_output1[187]=38;
  p_output1[188]=38;
  p_output1[189]=38;
  p_output1[190]=38;
  p_output1[191]=38;
  p_output1[192]=38;
  p_output1[193]=38;
  p_output1[194]=39;
  p_output1[195]=39;
  p_output1[196]=39;
  p_output1[197]=39;
  p_output1[198]=39;
  p_output1[199]=39;
  p_output1[200]=39;
  p_output1[201]=39;
  p_output1[202]=39;
  p_output1[203]=39;
  p_output1[204]=39;
  p_output1[205]=39;
  p_output1[206]=43;
  p_output1[207]=43;
  p_output1[208]=43;
  p_output1[209]=43;
  p_output1[210]=43;
  p_output1[211]=43;
  p_output1[212]=43;
  p_output1[213]=43;
  p_output1[214]=43;
  p_output1[215]=43;
  p_output1[216]=43;
  p_output1[217]=43;
  p_output1[218]=43;
  p_output1[219]=44;
  p_output1[220]=44;
  p_output1[221]=44;
  p_output1[222]=44;
  p_output1[223]=44;
  p_output1[224]=44;
  p_output1[225]=44;
  p_output1[226]=44;
  p_output1[227]=44;
  p_output1[228]=45;
  p_output1[229]=45;
  p_output1[230]=45;
  p_output1[231]=45;
  p_output1[232]=45;
  p_output1[233]=45;
  p_output1[234]=45;
  p_output1[235]=45;
  p_output1[236]=45;
  p_output1[237]=45;
  p_output1[238]=45;
  p_output1[239]=45;
  p_output1[240]=45;
  p_output1[241]=49;
  p_output1[242]=49;
  p_output1[243]=49;
  p_output1[244]=49;
  p_output1[245]=49;
  p_output1[246]=49;
  p_output1[247]=49;
  p_output1[248]=49;
  p_output1[249]=49;
  p_output1[250]=49;
  p_output1[251]=49;
  p_output1[252]=49;
  p_output1[253]=49;
  p_output1[254]=49;
  p_output1[255]=50;
  p_output1[256]=50;
  p_output1[257]=50;
  p_output1[258]=50;
  p_output1[259]=50;
  p_output1[260]=50;
  p_output1[261]=50;
  p_output1[262]=50;
  p_output1[263]=50;
  p_output1[264]=51;
  p_output1[265]=51;
  p_output1[266]=51;
  p_output1[267]=51;
  p_output1[268]=51;
  p_output1[269]=51;
  p_output1[270]=51;
  p_output1[271]=51;
  p_output1[272]=51;
  p_output1[273]=51;
  p_output1[274]=51;
  p_output1[275]=51;
  p_output1[276]=51;
  p_output1[277]=51;
  p_output1[278]=58;
  p_output1[279]=58;
  p_output1[280]=58;
  p_output1[281]=58;
  p_output1[282]=58;
  p_output1[283]=58;
  p_output1[284]=58;
  p_output1[285]=58;
  p_output1[286]=58;
  p_output1[287]=58;
  p_output1[288]=58;
  p_output1[289]=58;
  p_output1[290]=59;
  p_output1[291]=59;
  p_output1[292]=59;
  p_output1[293]=59;
  p_output1[294]=59;
  p_output1[295]=59;
  p_output1[296]=59;
  p_output1[297]=59;
  p_output1[298]=59;
  p_output1[299]=59;
  p_output1[300]=59;
  p_output1[301]=59;
  p_output1[302]=60;
  p_output1[303]=60;
  p_output1[304]=60;
  p_output1[305]=60;
  p_output1[306]=60;
  p_output1[307]=60;
  p_output1[308]=60;
  p_output1[309]=60;
  p_output1[310]=60;
  p_output1[311]=60;
  p_output1[312]=60;
  p_output1[313]=60;
  p_output1[314]=64;
  p_output1[315]=64;
  p_output1[316]=64;
  p_output1[317]=64;
  p_output1[318]=64;
  p_output1[319]=64;
  p_output1[320]=64;
  p_output1[321]=64;
  p_output1[322]=64;
  p_output1[323]=64;
  p_output1[324]=64;
  p_output1[325]=64;
  p_output1[326]=64;
  p_output1[327]=65;
  p_output1[328]=65;
  p_output1[329]=65;
  p_output1[330]=65;
  p_output1[331]=65;
  p_output1[332]=65;
  p_output1[333]=65;
  p_output1[334]=65;
  p_output1[335]=65;
  p_output1[336]=66;
  p_output1[337]=66;
  p_output1[338]=66;
  p_output1[339]=66;
  p_output1[340]=66;
  p_output1[341]=66;
  p_output1[342]=66;
  p_output1[343]=66;
  p_output1[344]=66;
  p_output1[345]=66;
  p_output1[346]=66;
  p_output1[347]=66;
  p_output1[348]=66;
  p_output1[349]=70;
  p_output1[350]=70;
  p_output1[351]=70;
  p_output1[352]=70;
  p_output1[353]=70;
  p_output1[354]=70;
  p_output1[355]=70;
  p_output1[356]=70;
  p_output1[357]=70;
  p_output1[358]=70;
  p_output1[359]=70;
  p_output1[360]=70;
  p_output1[361]=70;
  p_output1[362]=70;
  p_output1[363]=71;
  p_output1[364]=71;
  p_output1[365]=71;
  p_output1[366]=71;
  p_output1[367]=71;
  p_output1[368]=71;
  p_output1[369]=71;
  p_output1[370]=71;
  p_output1[371]=71;
  p_output1[372]=72;
  p_output1[373]=72;
  p_output1[374]=72;
  p_output1[375]=72;
  p_output1[376]=72;
  p_output1[377]=72;
  p_output1[378]=72;
  p_output1[379]=72;
  p_output1[380]=72;
  p_output1[381]=72;
  p_output1[382]=72;
  p_output1[383]=72;
  p_output1[384]=72;
  p_output1[385]=72;
  p_output1[386]=4;
  p_output1[387]=5;
  p_output1[388]=6;
  p_output1[389]=7;
  p_output1[390]=8;
  p_output1[391]=9;
  p_output1[392]=20;
  p_output1[393]=21;
  p_output1[394]=4;
  p_output1[395]=5;
  p_output1[396]=6;
  p_output1[397]=7;
  p_output1[398]=20;
  p_output1[399]=21;
  p_output1[400]=4;
  p_output1[401]=5;
  p_output1[402]=6;
  p_output1[403]=7;
  p_output1[404]=8;
  p_output1[405]=9;
  p_output1[406]=20;
  p_output1[407]=21;
  p_output1[408]=4;
  p_output1[409]=5;
  p_output1[410]=6;
  p_output1[411]=10;
  p_output1[412]=11;
  p_output1[413]=12;
  p_output1[414]=20;
  p_output1[415]=21;
  p_output1[416]=4;
  p_output1[417]=5;
  p_output1[418]=6;
  p_output1[419]=10;
  p_output1[420]=20;
  p_output1[421]=21;
  p_output1[422]=4;
  p_output1[423]=5;
  p_output1[424]=6;
  p_output1[425]=10;
  p_output1[426]=11;
  p_output1[427]=12;
  p_output1[428]=20;
  p_output1[429]=21;
  p_output1[430]=4;
  p_output1[431]=5;
  p_output1[432]=6;
  p_output1[433]=7;
  p_output1[434]=8;
  p_output1[435]=9;
  p_output1[436]=19;
  p_output1[437]=20;
  p_output1[438]=21;
  p_output1[439]=22;
  p_output1[440]=4;
  p_output1[441]=5;
  p_output1[442]=6;
  p_output1[443]=7;
  p_output1[444]=8;
  p_output1[445]=9;
  p_output1[446]=19;
  p_output1[447]=20;
  p_output1[448]=21;
  p_output1[449]=22;
  p_output1[450]=4;
  p_output1[451]=5;
  p_output1[452]=6;
  p_output1[453]=7;
  p_output1[454]=8;
  p_output1[455]=9;
  p_output1[456]=19;
  p_output1[457]=20;
  p_output1[458]=21;
  p_output1[459]=22;
  p_output1[460]=4;
  p_output1[461]=5;
  p_output1[462]=6;
  p_output1[463]=10;
  p_output1[464]=11;
  p_output1[465]=12;
  p_output1[466]=19;
  p_output1[467]=20;
  p_output1[468]=21;
  p_output1[469]=22;
  p_output1[470]=4;
  p_output1[471]=5;
  p_output1[472]=6;
  p_output1[473]=10;
  p_output1[474]=11;
  p_output1[475]=12;
  p_output1[476]=19;
  p_output1[477]=20;
  p_output1[478]=21;
  p_output1[479]=22;
  p_output1[480]=4;
  p_output1[481]=5;
  p_output1[482]=6;
  p_output1[483]=10;
  p_output1[484]=11;
  p_output1[485]=12;
  p_output1[486]=19;
  p_output1[487]=20;
  p_output1[488]=21;
  p_output1[489]=22;
  p_output1[490]=4;
  p_output1[491]=5;
  p_output1[492]=6;
  p_output1[493]=7;
  p_output1[494]=8;
  p_output1[495]=9;
  p_output1[496]=19;
  p_output1[497]=20;
  p_output1[498]=21;
  p_output1[499]=22;
  p_output1[500]=23;
  p_output1[501]=4;
  p_output1[502]=5;
  p_output1[503]=6;
  p_output1[504]=7;
  p_output1[505]=8;
  p_output1[506]=9;
  p_output1[507]=19;
  p_output1[508]=20;
  p_output1[509]=21;
  p_output1[510]=22;
  p_output1[511]=23;
  p_output1[512]=4;
  p_output1[513]=5;
  p_output1[514]=6;
  p_output1[515]=7;
  p_output1[516]=8;
  p_output1[517]=9;
  p_output1[518]=19;
  p_output1[519]=20;
  p_output1[520]=21;
  p_output1[521]=22;
  p_output1[522]=23;
  p_output1[523]=4;
  p_output1[524]=5;
  p_output1[525]=6;
  p_output1[526]=10;
  p_output1[527]=11;
  p_output1[528]=12;
  p_output1[529]=19;
  p_output1[530]=20;
  p_output1[531]=21;
  p_output1[532]=22;
  p_output1[533]=23;
  p_output1[534]=4;
  p_output1[535]=5;
  p_output1[536]=6;
  p_output1[537]=10;
  p_output1[538]=11;
  p_output1[539]=12;
  p_output1[540]=19;
  p_output1[541]=20;
  p_output1[542]=21;
  p_output1[543]=22;
  p_output1[544]=23;
  p_output1[545]=4;
  p_output1[546]=5;
  p_output1[547]=6;
  p_output1[548]=10;
  p_output1[549]=11;
  p_output1[550]=12;
  p_output1[551]=19;
  p_output1[552]=20;
  p_output1[553]=21;
  p_output1[554]=22;
  p_output1[555]=23;
  p_output1[556]=4;
  p_output1[557]=5;
  p_output1[558]=6;
  p_output1[559]=7;
  p_output1[560]=8;
  p_output1[561]=9;
  p_output1[562]=19;
  p_output1[563]=20;
  p_output1[564]=21;
  p_output1[565]=22;
  p_output1[566]=23;
  p_output1[567]=24;
  p_output1[568]=4;
  p_output1[569]=5;
  p_output1[570]=6;
  p_output1[571]=7;
  p_output1[572]=8;
  p_output1[573]=9;
  p_output1[574]=19;
  p_output1[575]=20;
  p_output1[576]=21;
  p_output1[577]=22;
  p_output1[578]=23;
  p_output1[579]=24;
  p_output1[580]=4;
  p_output1[581]=5;
  p_output1[582]=6;
  p_output1[583]=7;
  p_output1[584]=8;
  p_output1[585]=9;
  p_output1[586]=19;
  p_output1[587]=20;
  p_output1[588]=21;
  p_output1[589]=22;
  p_output1[590]=23;
  p_output1[591]=24;
  p_output1[592]=4;
  p_output1[593]=5;
  p_output1[594]=6;
  p_output1[595]=7;
  p_output1[596]=8;
  p_output1[597]=9;
  p_output1[598]=19;
  p_output1[599]=20;
  p_output1[600]=21;
  p_output1[601]=22;
  p_output1[602]=23;
  p_output1[603]=24;
  p_output1[604]=25;
  p_output1[605]=5;
  p_output1[606]=6;
  p_output1[607]=7;
  p_output1[608]=8;
  p_output1[609]=9;
  p_output1[610]=22;
  p_output1[611]=23;
  p_output1[612]=24;
  p_output1[613]=25;
  p_output1[614]=4;
  p_output1[615]=5;
  p_output1[616]=6;
  p_output1[617]=7;
  p_output1[618]=8;
  p_output1[619]=9;
  p_output1[620]=19;
  p_output1[621]=20;
  p_output1[622]=21;
  p_output1[623]=22;
  p_output1[624]=23;
  p_output1[625]=24;
  p_output1[626]=25;
  p_output1[627]=4;
  p_output1[628]=5;
  p_output1[629]=6;
  p_output1[630]=7;
  p_output1[631]=8;
  p_output1[632]=9;
  p_output1[633]=19;
  p_output1[634]=20;
  p_output1[635]=21;
  p_output1[636]=22;
  p_output1[637]=23;
  p_output1[638]=24;
  p_output1[639]=25;
  p_output1[640]=26;
  p_output1[641]=5;
  p_output1[642]=6;
  p_output1[643]=7;
  p_output1[644]=8;
  p_output1[645]=9;
  p_output1[646]=22;
  p_output1[647]=23;
  p_output1[648]=24;
  p_output1[649]=25;
  p_output1[650]=4;
  p_output1[651]=5;
  p_output1[652]=6;
  p_output1[653]=7;
  p_output1[654]=8;
  p_output1[655]=9;
  p_output1[656]=19;
  p_output1[657]=20;
  p_output1[658]=21;
  p_output1[659]=22;
  p_output1[660]=23;
  p_output1[661]=24;
  p_output1[662]=25;
  p_output1[663]=26;
  p_output1[664]=4;
  p_output1[665]=5;
  p_output1[666]=6;
  p_output1[667]=10;
  p_output1[668]=11;
  p_output1[669]=12;
  p_output1[670]=19;
  p_output1[671]=20;
  p_output1[672]=21;
  p_output1[673]=22;
  p_output1[674]=23;
  p_output1[675]=24;
  p_output1[676]=4;
  p_output1[677]=5;
  p_output1[678]=6;
  p_output1[679]=10;
  p_output1[680]=11;
  p_output1[681]=12;
  p_output1[682]=19;
  p_output1[683]=20;
  p_output1[684]=21;
  p_output1[685]=22;
  p_output1[686]=23;
  p_output1[687]=24;
  p_output1[688]=4;
  p_output1[689]=5;
  p_output1[690]=6;
  p_output1[691]=10;
  p_output1[692]=11;
  p_output1[693]=12;
  p_output1[694]=19;
  p_output1[695]=20;
  p_output1[696]=21;
  p_output1[697]=22;
  p_output1[698]=23;
  p_output1[699]=24;
  p_output1[700]=4;
  p_output1[701]=5;
  p_output1[702]=6;
  p_output1[703]=10;
  p_output1[704]=11;
  p_output1[705]=12;
  p_output1[706]=19;
  p_output1[707]=20;
  p_output1[708]=21;
  p_output1[709]=22;
  p_output1[710]=23;
  p_output1[711]=24;
  p_output1[712]=28;
  p_output1[713]=5;
  p_output1[714]=6;
  p_output1[715]=10;
  p_output1[716]=11;
  p_output1[717]=12;
  p_output1[718]=22;
  p_output1[719]=23;
  p_output1[720]=24;
  p_output1[721]=28;
  p_output1[722]=4;
  p_output1[723]=5;
  p_output1[724]=6;
  p_output1[725]=10;
  p_output1[726]=11;
  p_output1[727]=12;
  p_output1[728]=19;
  p_output1[729]=20;
  p_output1[730]=21;
  p_output1[731]=22;
  p_output1[732]=23;
  p_output1[733]=24;
  p_output1[734]=28;
  p_output1[735]=4;
  p_output1[736]=5;
  p_output1[737]=6;
  p_output1[738]=10;
  p_output1[739]=11;
  p_output1[740]=12;
  p_output1[741]=19;
  p_output1[742]=20;
  p_output1[743]=21;
  p_output1[744]=22;
  p_output1[745]=23;
  p_output1[746]=24;
  p_output1[747]=28;
  p_output1[748]=29;
  p_output1[749]=5;
  p_output1[750]=6;
  p_output1[751]=10;
  p_output1[752]=11;
  p_output1[753]=12;
  p_output1[754]=22;
  p_output1[755]=23;
  p_output1[756]=24;
  p_output1[757]=28;
  p_output1[758]=4;
  p_output1[759]=5;
  p_output1[760]=6;
  p_output1[761]=10;
  p_output1[762]=11;
  p_output1[763]=12;
  p_output1[764]=19;
  p_output1[765]=20;
  p_output1[766]=21;
  p_output1[767]=22;
  p_output1[768]=23;
  p_output1[769]=24;
  p_output1[770]=28;
  p_output1[771]=29;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 386, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Jedot_ParallelStance2.hh"

namespace SymFunction
{

void Js_Jedot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
