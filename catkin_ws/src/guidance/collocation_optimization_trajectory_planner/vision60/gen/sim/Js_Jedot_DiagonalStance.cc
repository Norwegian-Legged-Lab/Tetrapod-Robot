/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:38:04 GMT+02:00
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
  p_output1[170]=58;
  p_output1[171]=58;
  p_output1[172]=58;
  p_output1[173]=58;
  p_output1[174]=58;
  p_output1[175]=58;
  p_output1[176]=58;
  p_output1[177]=58;
  p_output1[178]=58;
  p_output1[179]=58;
  p_output1[180]=58;
  p_output1[181]=58;
  p_output1[182]=59;
  p_output1[183]=59;
  p_output1[184]=59;
  p_output1[185]=59;
  p_output1[186]=59;
  p_output1[187]=59;
  p_output1[188]=59;
  p_output1[189]=59;
  p_output1[190]=59;
  p_output1[191]=59;
  p_output1[192]=59;
  p_output1[193]=59;
  p_output1[194]=60;
  p_output1[195]=60;
  p_output1[196]=60;
  p_output1[197]=60;
  p_output1[198]=60;
  p_output1[199]=60;
  p_output1[200]=60;
  p_output1[201]=60;
  p_output1[202]=60;
  p_output1[203]=60;
  p_output1[204]=60;
  p_output1[205]=60;
  p_output1[206]=64;
  p_output1[207]=64;
  p_output1[208]=64;
  p_output1[209]=64;
  p_output1[210]=64;
  p_output1[211]=64;
  p_output1[212]=64;
  p_output1[213]=64;
  p_output1[214]=64;
  p_output1[215]=64;
  p_output1[216]=64;
  p_output1[217]=64;
  p_output1[218]=64;
  p_output1[219]=65;
  p_output1[220]=65;
  p_output1[221]=65;
  p_output1[222]=65;
  p_output1[223]=65;
  p_output1[224]=65;
  p_output1[225]=65;
  p_output1[226]=65;
  p_output1[227]=65;
  p_output1[228]=66;
  p_output1[229]=66;
  p_output1[230]=66;
  p_output1[231]=66;
  p_output1[232]=66;
  p_output1[233]=66;
  p_output1[234]=66;
  p_output1[235]=66;
  p_output1[236]=66;
  p_output1[237]=66;
  p_output1[238]=66;
  p_output1[239]=66;
  p_output1[240]=66;
  p_output1[241]=70;
  p_output1[242]=70;
  p_output1[243]=70;
  p_output1[244]=70;
  p_output1[245]=70;
  p_output1[246]=70;
  p_output1[247]=70;
  p_output1[248]=70;
  p_output1[249]=70;
  p_output1[250]=70;
  p_output1[251]=70;
  p_output1[252]=70;
  p_output1[253]=70;
  p_output1[254]=70;
  p_output1[255]=71;
  p_output1[256]=71;
  p_output1[257]=71;
  p_output1[258]=71;
  p_output1[259]=71;
  p_output1[260]=71;
  p_output1[261]=71;
  p_output1[262]=71;
  p_output1[263]=71;
  p_output1[264]=72;
  p_output1[265]=72;
  p_output1[266]=72;
  p_output1[267]=72;
  p_output1[268]=72;
  p_output1[269]=72;
  p_output1[270]=72;
  p_output1[271]=72;
  p_output1[272]=72;
  p_output1[273]=72;
  p_output1[274]=72;
  p_output1[275]=72;
  p_output1[276]=72;
  p_output1[277]=72;
  p_output1[278]=73;
  p_output1[279]=73;
  p_output1[280]=73;
  p_output1[281]=73;
  p_output1[282]=73;
  p_output1[283]=73;
  p_output1[284]=73;
  p_output1[285]=73;
  p_output1[286]=73;
  p_output1[287]=73;
  p_output1[288]=73;
  p_output1[289]=73;
  p_output1[290]=74;
  p_output1[291]=74;
  p_output1[292]=74;
  p_output1[293]=74;
  p_output1[294]=74;
  p_output1[295]=74;
  p_output1[296]=74;
  p_output1[297]=74;
  p_output1[298]=74;
  p_output1[299]=74;
  p_output1[300]=74;
  p_output1[301]=74;
  p_output1[302]=75;
  p_output1[303]=75;
  p_output1[304]=75;
  p_output1[305]=75;
  p_output1[306]=75;
  p_output1[307]=75;
  p_output1[308]=75;
  p_output1[309]=75;
  p_output1[310]=75;
  p_output1[311]=75;
  p_output1[312]=75;
  p_output1[313]=75;
  p_output1[314]=79;
  p_output1[315]=79;
  p_output1[316]=79;
  p_output1[317]=79;
  p_output1[318]=79;
  p_output1[319]=79;
  p_output1[320]=79;
  p_output1[321]=79;
  p_output1[322]=79;
  p_output1[323]=79;
  p_output1[324]=79;
  p_output1[325]=79;
  p_output1[326]=79;
  p_output1[327]=80;
  p_output1[328]=80;
  p_output1[329]=80;
  p_output1[330]=80;
  p_output1[331]=80;
  p_output1[332]=80;
  p_output1[333]=80;
  p_output1[334]=80;
  p_output1[335]=80;
  p_output1[336]=81;
  p_output1[337]=81;
  p_output1[338]=81;
  p_output1[339]=81;
  p_output1[340]=81;
  p_output1[341]=81;
  p_output1[342]=81;
  p_output1[343]=81;
  p_output1[344]=81;
  p_output1[345]=81;
  p_output1[346]=81;
  p_output1[347]=81;
  p_output1[348]=81;
  p_output1[349]=85;
  p_output1[350]=85;
  p_output1[351]=85;
  p_output1[352]=85;
  p_output1[353]=85;
  p_output1[354]=85;
  p_output1[355]=85;
  p_output1[356]=85;
  p_output1[357]=85;
  p_output1[358]=85;
  p_output1[359]=85;
  p_output1[360]=85;
  p_output1[361]=85;
  p_output1[362]=85;
  p_output1[363]=86;
  p_output1[364]=86;
  p_output1[365]=86;
  p_output1[366]=86;
  p_output1[367]=86;
  p_output1[368]=86;
  p_output1[369]=86;
  p_output1[370]=86;
  p_output1[371]=86;
  p_output1[372]=87;
  p_output1[373]=87;
  p_output1[374]=87;
  p_output1[375]=87;
  p_output1[376]=87;
  p_output1[377]=87;
  p_output1[378]=87;
  p_output1[379]=87;
  p_output1[380]=87;
  p_output1[381]=87;
  p_output1[382]=87;
  p_output1[383]=87;
  p_output1[384]=87;
  p_output1[385]=87;
  p_output1[386]=4;
  p_output1[387]=5;
  p_output1[388]=6;
  p_output1[389]=13;
  p_output1[390]=14;
  p_output1[391]=15;
  p_output1[392]=20;
  p_output1[393]=21;
  p_output1[394]=4;
  p_output1[395]=5;
  p_output1[396]=6;
  p_output1[397]=13;
  p_output1[398]=20;
  p_output1[399]=21;
  p_output1[400]=4;
  p_output1[401]=5;
  p_output1[402]=6;
  p_output1[403]=13;
  p_output1[404]=14;
  p_output1[405]=15;
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
  p_output1[433]=13;
  p_output1[434]=14;
  p_output1[435]=15;
  p_output1[436]=19;
  p_output1[437]=20;
  p_output1[438]=21;
  p_output1[439]=22;
  p_output1[440]=4;
  p_output1[441]=5;
  p_output1[442]=6;
  p_output1[443]=13;
  p_output1[444]=14;
  p_output1[445]=15;
  p_output1[446]=19;
  p_output1[447]=20;
  p_output1[448]=21;
  p_output1[449]=22;
  p_output1[450]=4;
  p_output1[451]=5;
  p_output1[452]=6;
  p_output1[453]=13;
  p_output1[454]=14;
  p_output1[455]=15;
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
  p_output1[493]=13;
  p_output1[494]=14;
  p_output1[495]=15;
  p_output1[496]=19;
  p_output1[497]=20;
  p_output1[498]=21;
  p_output1[499]=22;
  p_output1[500]=23;
  p_output1[501]=4;
  p_output1[502]=5;
  p_output1[503]=6;
  p_output1[504]=13;
  p_output1[505]=14;
  p_output1[506]=15;
  p_output1[507]=19;
  p_output1[508]=20;
  p_output1[509]=21;
  p_output1[510]=22;
  p_output1[511]=23;
  p_output1[512]=4;
  p_output1[513]=5;
  p_output1[514]=6;
  p_output1[515]=13;
  p_output1[516]=14;
  p_output1[517]=15;
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
  p_output1[559]=10;
  p_output1[560]=11;
  p_output1[561]=12;
  p_output1[562]=19;
  p_output1[563]=20;
  p_output1[564]=21;
  p_output1[565]=22;
  p_output1[566]=23;
  p_output1[567]=24;
  p_output1[568]=4;
  p_output1[569]=5;
  p_output1[570]=6;
  p_output1[571]=10;
  p_output1[572]=11;
  p_output1[573]=12;
  p_output1[574]=19;
  p_output1[575]=20;
  p_output1[576]=21;
  p_output1[577]=22;
  p_output1[578]=23;
  p_output1[579]=24;
  p_output1[580]=4;
  p_output1[581]=5;
  p_output1[582]=6;
  p_output1[583]=10;
  p_output1[584]=11;
  p_output1[585]=12;
  p_output1[586]=19;
  p_output1[587]=20;
  p_output1[588]=21;
  p_output1[589]=22;
  p_output1[590]=23;
  p_output1[591]=24;
  p_output1[592]=4;
  p_output1[593]=5;
  p_output1[594]=6;
  p_output1[595]=10;
  p_output1[596]=11;
  p_output1[597]=12;
  p_output1[598]=19;
  p_output1[599]=20;
  p_output1[600]=21;
  p_output1[601]=22;
  p_output1[602]=23;
  p_output1[603]=24;
  p_output1[604]=28;
  p_output1[605]=5;
  p_output1[606]=6;
  p_output1[607]=10;
  p_output1[608]=11;
  p_output1[609]=12;
  p_output1[610]=22;
  p_output1[611]=23;
  p_output1[612]=24;
  p_output1[613]=28;
  p_output1[614]=4;
  p_output1[615]=5;
  p_output1[616]=6;
  p_output1[617]=10;
  p_output1[618]=11;
  p_output1[619]=12;
  p_output1[620]=19;
  p_output1[621]=20;
  p_output1[622]=21;
  p_output1[623]=22;
  p_output1[624]=23;
  p_output1[625]=24;
  p_output1[626]=28;
  p_output1[627]=4;
  p_output1[628]=5;
  p_output1[629]=6;
  p_output1[630]=10;
  p_output1[631]=11;
  p_output1[632]=12;
  p_output1[633]=19;
  p_output1[634]=20;
  p_output1[635]=21;
  p_output1[636]=22;
  p_output1[637]=23;
  p_output1[638]=24;
  p_output1[639]=28;
  p_output1[640]=29;
  p_output1[641]=5;
  p_output1[642]=6;
  p_output1[643]=10;
  p_output1[644]=11;
  p_output1[645]=12;
  p_output1[646]=22;
  p_output1[647]=23;
  p_output1[648]=24;
  p_output1[649]=28;
  p_output1[650]=4;
  p_output1[651]=5;
  p_output1[652]=6;
  p_output1[653]=10;
  p_output1[654]=11;
  p_output1[655]=12;
  p_output1[656]=19;
  p_output1[657]=20;
  p_output1[658]=21;
  p_output1[659]=22;
  p_output1[660]=23;
  p_output1[661]=24;
  p_output1[662]=28;
  p_output1[663]=29;
  p_output1[664]=4;
  p_output1[665]=5;
  p_output1[666]=6;
  p_output1[667]=13;
  p_output1[668]=14;
  p_output1[669]=15;
  p_output1[670]=19;
  p_output1[671]=20;
  p_output1[672]=21;
  p_output1[673]=22;
  p_output1[674]=23;
  p_output1[675]=24;
  p_output1[676]=4;
  p_output1[677]=5;
  p_output1[678]=6;
  p_output1[679]=13;
  p_output1[680]=14;
  p_output1[681]=15;
  p_output1[682]=19;
  p_output1[683]=20;
  p_output1[684]=21;
  p_output1[685]=22;
  p_output1[686]=23;
  p_output1[687]=24;
  p_output1[688]=4;
  p_output1[689]=5;
  p_output1[690]=6;
  p_output1[691]=13;
  p_output1[692]=14;
  p_output1[693]=15;
  p_output1[694]=19;
  p_output1[695]=20;
  p_output1[696]=21;
  p_output1[697]=22;
  p_output1[698]=23;
  p_output1[699]=24;
  p_output1[700]=4;
  p_output1[701]=5;
  p_output1[702]=6;
  p_output1[703]=13;
  p_output1[704]=14;
  p_output1[705]=15;
  p_output1[706]=19;
  p_output1[707]=20;
  p_output1[708]=21;
  p_output1[709]=22;
  p_output1[710]=23;
  p_output1[711]=24;
  p_output1[712]=31;
  p_output1[713]=5;
  p_output1[714]=6;
  p_output1[715]=13;
  p_output1[716]=14;
  p_output1[717]=15;
  p_output1[718]=22;
  p_output1[719]=23;
  p_output1[720]=24;
  p_output1[721]=31;
  p_output1[722]=4;
  p_output1[723]=5;
  p_output1[724]=6;
  p_output1[725]=13;
  p_output1[726]=14;
  p_output1[727]=15;
  p_output1[728]=19;
  p_output1[729]=20;
  p_output1[730]=21;
  p_output1[731]=22;
  p_output1[732]=23;
  p_output1[733]=24;
  p_output1[734]=31;
  p_output1[735]=4;
  p_output1[736]=5;
  p_output1[737]=6;
  p_output1[738]=13;
  p_output1[739]=14;
  p_output1[740]=15;
  p_output1[741]=19;
  p_output1[742]=20;
  p_output1[743]=21;
  p_output1[744]=22;
  p_output1[745]=23;
  p_output1[746]=24;
  p_output1[747]=31;
  p_output1[748]=32;
  p_output1[749]=5;
  p_output1[750]=6;
  p_output1[751]=13;
  p_output1[752]=14;
  p_output1[753]=15;
  p_output1[754]=22;
  p_output1[755]=23;
  p_output1[756]=24;
  p_output1[757]=31;
  p_output1[758]=4;
  p_output1[759]=5;
  p_output1[760]=6;
  p_output1[761]=13;
  p_output1[762]=14;
  p_output1[763]=15;
  p_output1[764]=19;
  p_output1[765]=20;
  p_output1[766]=21;
  p_output1[767]=22;
  p_output1[768]=23;
  p_output1[769]=24;
  p_output1[770]=31;
  p_output1[771]=32;
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

#include "Js_Jedot_DiagonalStance.hh"

namespace SymFunction
{

void Js_Jedot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
