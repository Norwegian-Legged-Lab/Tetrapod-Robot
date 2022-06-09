/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:34 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t561;
  double t775;
  double t837;
  double t842;
  double t871;
  double t879;
  double t897;
  double t919;
  double t937;
  double t917;
  double t1014;
  double t1015;
  double t1034;
  double t1044;
  double t1069;
  double t1077;
  double t1119;
  double t1129;
  double t1153;
  double t1154;
  double t1186;
  double t1193;
  double t1207;
  double t1213;
  double t1228;
  double t1239;
  double t1257;
  double t1258;
  double t1271;
  double t1274;
  double t1280;
  double t1281;
  double t1285;
  double t1287;
  double t1292;
  double t1295;
  double t1300;
  double t1301;
  double t1305;
  double t1306;
  double t1309;
  double t1310;
  double t1313;
  double t1315;
  double t1320;
  double t1321;
  double t1318;
  double t1319;
  double t1324;
  double t1325;
  double t1328;
  double t1330;
  double t1334;
  double t1335;
  double t1340;
  double t1341;
  double t1344;
  double t1345;
  double t1348;
  double t1349;
  double t1352;
  double t1353;
  double t1357;
  double t1358;
  double t1361;
  double t1362;
  double t1365;
  double t1366;
  double t1369;
  double t1370;
  double t1373;
  double t1374;
  double t1378;
  double t1380;
  double t1383;
  double t1384;
  double t1391;
  double t1392;
  double t1397;
  double t1398;
  t561 = 4.*var5[0];
  t775 = var3[0] + t561 + var7[0];
  t837 = -1. + var8[0];
  t842 = 1/t837;
  t871 = -1.*var1[0];
  t879 = t871 + var1[1];
  t897 = -0.333333333333333*t842*t879;
  t919 = 4.*var5[1];
  t937 = var3[1] + t919 + var7[1];
  t917 = -1.33333333333333*t842*t879;
  t1014 = 4.*var5[2];
  t1015 = var3[2] + t1014 + var7[2];
  t1034 = 4.*var5[3];
  t1044 = var3[3] + t1034 + var7[3];
  t1069 = 4.*var5[4];
  t1077 = var3[4] + t1069 + var7[4];
  t1119 = 4.*var5[5];
  t1129 = var3[5] + t1119 + var7[5];
  t1153 = 4.*var5[6];
  t1154 = var3[6] + t1153 + var7[6];
  t1186 = 4.*var5[7];
  t1193 = var3[7] + t1186 + var7[7];
  t1207 = 4.*var5[8];
  t1213 = var3[8] + t1207 + var7[8];
  t1228 = 4.*var5[9];
  t1239 = var3[9] + t1228 + var7[9];
  t1257 = 4.*var5[10];
  t1258 = var3[10] + t1257 + var7[10];
  t1271 = 4.*var5[11];
  t1274 = var3[11] + t1271 + var7[11];
  t1280 = 4.*var5[12];
  t1281 = var3[12] + t1280 + var7[12];
  t1285 = 4.*var5[13];
  t1287 = var3[13] + t1285 + var7[13];
  t1292 = 4.*var5[14];
  t1295 = var3[14] + t1292 + var7[14];
  t1300 = 4.*var5[15];
  t1301 = var3[15] + t1300 + var7[15];
  t1305 = 4.*var5[16];
  t1306 = var3[16] + t1305 + var7[16];
  t1309 = 4.*var5[17];
  t1310 = var3[17] + t1309 + var7[17];
  t1313 = -1.*var7[0];
  t1315 = var3[0] + t1313;
  t1320 = -1.*var7[1];
  t1321 = var3[1] + t1320;
  t1318 = -0.25*t842*t879;
  t1319 = 0.25*t842*t879;
  t1324 = -1.*var7[2];
  t1325 = var3[2] + t1324;
  t1328 = -1.*var7[3];
  t1330 = var3[3] + t1328;
  t1334 = -1.*var7[4];
  t1335 = var3[4] + t1334;
  t1340 = -1.*var7[5];
  t1341 = var3[5] + t1340;
  t1344 = -1.*var7[6];
  t1345 = var3[6] + t1344;
  t1348 = -1.*var7[7];
  t1349 = var3[7] + t1348;
  t1352 = -1.*var7[8];
  t1353 = var3[8] + t1352;
  t1357 = -1.*var7[9];
  t1358 = var3[9] + t1357;
  t1361 = -1.*var7[10];
  t1362 = var3[10] + t1361;
  t1365 = -1.*var7[11];
  t1366 = var3[11] + t1365;
  t1369 = -1.*var7[12];
  t1370 = var3[12] + t1369;
  t1373 = -1.*var7[13];
  t1374 = var3[13] + t1373;
  t1378 = -1.*var7[14];
  t1380 = var3[14] + t1378;
  t1383 = -1.*var7[15];
  t1384 = var3[15] + t1383;
  t1391 = -1.*var7[16];
  t1392 = var3[16] + t1391;
  t1397 = -1.*var7[17];
  t1398 = var3[17] + t1397;
  p_output1[0]=0.333333333333333*t775*t842;
  p_output1[1]=-0.333333333333333*t775*t842;
  p_output1[2]=-1.;
  p_output1[3]=t897;
  p_output1[4]=t917;
  p_output1[5]=1.;
  p_output1[6]=t897;
  p_output1[7]=0.333333333333333*t842*t937;
  p_output1[8]=-0.333333333333333*t842*t937;
  p_output1[9]=-1.;
  p_output1[10]=t897;
  p_output1[11]=t917;
  p_output1[12]=1.;
  p_output1[13]=t897;
  p_output1[14]=0.333333333333333*t1015*t842;
  p_output1[15]=-0.333333333333333*t1015*t842;
  p_output1[16]=-1.;
  p_output1[17]=t897;
  p_output1[18]=t917;
  p_output1[19]=1.;
  p_output1[20]=t897;
  p_output1[21]=0.333333333333333*t1044*t842;
  p_output1[22]=-0.333333333333333*t1044*t842;
  p_output1[23]=-1.;
  p_output1[24]=t897;
  p_output1[25]=t917;
  p_output1[26]=1.;
  p_output1[27]=t897;
  p_output1[28]=0.333333333333333*t1077*t842;
  p_output1[29]=-0.333333333333333*t1077*t842;
  p_output1[30]=-1.;
  p_output1[31]=t897;
  p_output1[32]=t917;
  p_output1[33]=1.;
  p_output1[34]=t897;
  p_output1[35]=0.333333333333333*t1129*t842;
  p_output1[36]=-0.333333333333333*t1129*t842;
  p_output1[37]=-1.;
  p_output1[38]=t897;
  p_output1[39]=t917;
  p_output1[40]=1.;
  p_output1[41]=t897;
  p_output1[42]=0.333333333333333*t1154*t842;
  p_output1[43]=-0.333333333333333*t1154*t842;
  p_output1[44]=-1.;
  p_output1[45]=t897;
  p_output1[46]=t917;
  p_output1[47]=1.;
  p_output1[48]=t897;
  p_output1[49]=0.333333333333333*t1193*t842;
  p_output1[50]=-0.333333333333333*t1193*t842;
  p_output1[51]=-1.;
  p_output1[52]=t897;
  p_output1[53]=t917;
  p_output1[54]=1.;
  p_output1[55]=t897;
  p_output1[56]=0.333333333333333*t1213*t842;
  p_output1[57]=-0.333333333333333*t1213*t842;
  p_output1[58]=-1.;
  p_output1[59]=t897;
  p_output1[60]=t917;
  p_output1[61]=1.;
  p_output1[62]=t897;
  p_output1[63]=0.333333333333333*t1239*t842;
  p_output1[64]=-0.333333333333333*t1239*t842;
  p_output1[65]=-1.;
  p_output1[66]=t897;
  p_output1[67]=t917;
  p_output1[68]=1.;
  p_output1[69]=t897;
  p_output1[70]=0.333333333333333*t1258*t842;
  p_output1[71]=-0.333333333333333*t1258*t842;
  p_output1[72]=-1.;
  p_output1[73]=t897;
  p_output1[74]=t917;
  p_output1[75]=1.;
  p_output1[76]=t897;
  p_output1[77]=0.333333333333333*t1274*t842;
  p_output1[78]=-0.333333333333333*t1274*t842;
  p_output1[79]=-1.;
  p_output1[80]=t897;
  p_output1[81]=t917;
  p_output1[82]=1.;
  p_output1[83]=t897;
  p_output1[84]=0.333333333333333*t1281*t842;
  p_output1[85]=-0.333333333333333*t1281*t842;
  p_output1[86]=-1.;
  p_output1[87]=t897;
  p_output1[88]=t917;
  p_output1[89]=1.;
  p_output1[90]=t897;
  p_output1[91]=0.333333333333333*t1287*t842;
  p_output1[92]=-0.333333333333333*t1287*t842;
  p_output1[93]=-1.;
  p_output1[94]=t897;
  p_output1[95]=t917;
  p_output1[96]=1.;
  p_output1[97]=t897;
  p_output1[98]=0.333333333333333*t1295*t842;
  p_output1[99]=-0.333333333333333*t1295*t842;
  p_output1[100]=-1.;
  p_output1[101]=t897;
  p_output1[102]=t917;
  p_output1[103]=1.;
  p_output1[104]=t897;
  p_output1[105]=0.333333333333333*t1301*t842;
  p_output1[106]=-0.333333333333333*t1301*t842;
  p_output1[107]=-1.;
  p_output1[108]=t897;
  p_output1[109]=t917;
  p_output1[110]=1.;
  p_output1[111]=t897;
  p_output1[112]=0.333333333333333*t1306*t842;
  p_output1[113]=-0.333333333333333*t1306*t842;
  p_output1[114]=-1.;
  p_output1[115]=t897;
  p_output1[116]=t917;
  p_output1[117]=1.;
  p_output1[118]=t897;
  p_output1[119]=0.333333333333333*t1310*t842;
  p_output1[120]=-0.333333333333333*t1310*t842;
  p_output1[121]=-1.;
  p_output1[122]=t897;
  p_output1[123]=t917;
  p_output1[124]=1.;
  p_output1[125]=t897;
  p_output1[126]=0.25*t1315*t842;
  p_output1[127]=-0.25*t1315*t842;
  p_output1[128]=-0.5;
  p_output1[129]=t1318;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t1319;
  p_output1[133]=0.25*t1321*t842;
  p_output1[134]=-0.25*t1321*t842;
  p_output1[135]=-0.5;
  p_output1[136]=t1318;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t1319;
  p_output1[140]=0.25*t1325*t842;
  p_output1[141]=-0.25*t1325*t842;
  p_output1[142]=-0.5;
  p_output1[143]=t1318;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t1319;
  p_output1[147]=0.25*t1330*t842;
  p_output1[148]=-0.25*t1330*t842;
  p_output1[149]=-0.5;
  p_output1[150]=t1318;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t1319;
  p_output1[154]=0.25*t1335*t842;
  p_output1[155]=-0.25*t1335*t842;
  p_output1[156]=-0.5;
  p_output1[157]=t1318;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t1319;
  p_output1[161]=0.25*t1341*t842;
  p_output1[162]=-0.25*t1341*t842;
  p_output1[163]=-0.5;
  p_output1[164]=t1318;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t1319;
  p_output1[168]=0.25*t1345*t842;
  p_output1[169]=-0.25*t1345*t842;
  p_output1[170]=-0.5;
  p_output1[171]=t1318;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t1319;
  p_output1[175]=0.25*t1349*t842;
  p_output1[176]=-0.25*t1349*t842;
  p_output1[177]=-0.5;
  p_output1[178]=t1318;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t1319;
  p_output1[182]=0.25*t1353*t842;
  p_output1[183]=-0.25*t1353*t842;
  p_output1[184]=-0.5;
  p_output1[185]=t1318;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t1319;
  p_output1[189]=0.25*t1358*t842;
  p_output1[190]=-0.25*t1358*t842;
  p_output1[191]=-0.5;
  p_output1[192]=t1318;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t1319;
  p_output1[196]=0.25*t1362*t842;
  p_output1[197]=-0.25*t1362*t842;
  p_output1[198]=-0.5;
  p_output1[199]=t1318;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t1319;
  p_output1[203]=0.25*t1366*t842;
  p_output1[204]=-0.25*t1366*t842;
  p_output1[205]=-0.5;
  p_output1[206]=t1318;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t1319;
  p_output1[210]=0.25*t1370*t842;
  p_output1[211]=-0.25*t1370*t842;
  p_output1[212]=-0.5;
  p_output1[213]=t1318;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t1319;
  p_output1[217]=0.25*t1374*t842;
  p_output1[218]=-0.25*t1374*t842;
  p_output1[219]=-0.5;
  p_output1[220]=t1318;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t1319;
  p_output1[224]=0.25*t1380*t842;
  p_output1[225]=-0.25*t1380*t842;
  p_output1[226]=-0.5;
  p_output1[227]=t1318;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t1319;
  p_output1[231]=0.25*t1384*t842;
  p_output1[232]=-0.25*t1384*t842;
  p_output1[233]=-0.5;
  p_output1[234]=t1318;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t1319;
  p_output1[238]=0.25*t1392*t842;
  p_output1[239]=-0.25*t1392*t842;
  p_output1[240]=-0.5;
  p_output1[241]=t1318;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t1319;
  p_output1[245]=0.25*t1398*t842;
  p_output1[246]=-0.25*t1398*t842;
  p_output1[247]=-0.5;
  p_output1[248]=t1318;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t1319;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 252, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_dx.hh"

namespace ParallelStance
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
