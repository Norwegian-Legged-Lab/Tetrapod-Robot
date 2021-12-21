/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:17:54 GMT+01:00
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
  double t8;
  double t16;
  double t49;
  double t53;
  double t66;
  double t72;
  double t76;
  double t83;
  double t89;
  double t79;
  double t94;
  double t101;
  double t118;
  double t120;
  double t136;
  double t140;
  double t149;
  double t151;
  double t154;
  double t158;
  double t167;
  double t178;
  double t182;
  double t192;
  double t197;
  double t200;
  double t208;
  double t214;
  double t228;
  double t237;
  double t240;
  double t248;
  double t257;
  double t265;
  double t276;
  double t281;
  double t289;
  double t291;
  double t296;
  double t309;
  double t316;
  double t326;
  double t338;
  double t340;
  double t360;
  double t363;
  double t353;
  double t358;
  double t372;
  double t373;
  double t389;
  double t390;
  double t406;
  double t410;
  double t425;
  double t430;
  double t434;
  double t440;
  double t450;
  double t452;
  double t462;
  double t463;
  double t475;
  double t476;
  double t482;
  double t483;
  double t489;
  double t491;
  double t499;
  double t500;
  double t507;
  double t509;
  double t517;
  double t519;
  double t523;
  double t524;
  double t529;
  double t531;
  double t540;
  double t543;
  t8 = 4.*var5[0];
  t16 = t8 + var7[0] + var3[0];
  t49 = -1. + var8[0];
  t53 = 1/t49;
  t66 = -1.*var1[0];
  t72 = t66 + var1[1];
  t76 = -0.333333333333333*t53*t72;
  t83 = 4.*var5[1];
  t89 = t83 + var7[1] + var3[1];
  t79 = -1.33333333333333*t53*t72;
  t94 = 4.*var5[2];
  t101 = t94 + var7[2] + var3[2];
  t118 = 4.*var5[3];
  t120 = t118 + var7[3] + var3[3];
  t136 = 4.*var5[4];
  t140 = t136 + var7[4] + var3[4];
  t149 = 4.*var5[5];
  t151 = t149 + var7[5] + var3[5];
  t154 = 4.*var5[6];
  t158 = t154 + var7[6] + var3[6];
  t167 = 4.*var5[7];
  t178 = t167 + var7[7] + var3[7];
  t182 = 4.*var5[8];
  t192 = t182 + var7[8] + var3[8];
  t197 = 4.*var5[9];
  t200 = t197 + var7[9] + var3[9];
  t208 = 4.*var5[10];
  t214 = t208 + var7[10] + var3[10];
  t228 = 4.*var5[11];
  t237 = t228 + var7[11] + var3[11];
  t240 = 4.*var5[12];
  t248 = t240 + var7[12] + var3[12];
  t257 = 4.*var5[13];
  t265 = t257 + var7[13] + var3[13];
  t276 = 4.*var5[14];
  t281 = t276 + var7[14] + var3[14];
  t289 = 4.*var5[15];
  t291 = t289 + var7[15] + var3[15];
  t296 = 4.*var5[16];
  t309 = t296 + var7[16] + var3[16];
  t316 = 4.*var5[17];
  t326 = t316 + var7[17] + var3[17];
  t338 = -1.*var7[0];
  t340 = t338 + var3[0];
  t360 = -1.*var7[1];
  t363 = t360 + var3[1];
  t353 = -0.25*t53*t72;
  t358 = 0.25*t53*t72;
  t372 = -1.*var7[2];
  t373 = t372 + var3[2];
  t389 = -1.*var7[3];
  t390 = t389 + var3[3];
  t406 = -1.*var7[4];
  t410 = t406 + var3[4];
  t425 = -1.*var7[5];
  t430 = t425 + var3[5];
  t434 = -1.*var7[6];
  t440 = t434 + var3[6];
  t450 = -1.*var7[7];
  t452 = t450 + var3[7];
  t462 = -1.*var7[8];
  t463 = t462 + var3[8];
  t475 = -1.*var7[9];
  t476 = t475 + var3[9];
  t482 = -1.*var7[10];
  t483 = t482 + var3[10];
  t489 = -1.*var7[11];
  t491 = t489 + var3[11];
  t499 = -1.*var7[12];
  t500 = t499 + var3[12];
  t507 = -1.*var7[13];
  t509 = t507 + var3[13];
  t517 = -1.*var7[14];
  t519 = t517 + var3[14];
  t523 = -1.*var7[15];
  t524 = t523 + var3[15];
  t529 = -1.*var7[16];
  t531 = t529 + var3[16];
  t540 = -1.*var7[17];
  t543 = t540 + var3[17];
  p_output1[0]=0.333333333333333*t16*t53;
  p_output1[1]=-0.333333333333333*t16*t53;
  p_output1[2]=-1.;
  p_output1[3]=t76;
  p_output1[4]=t79;
  p_output1[5]=1.;
  p_output1[6]=t76;
  p_output1[7]=0.333333333333333*t53*t89;
  p_output1[8]=-0.333333333333333*t53*t89;
  p_output1[9]=-1.;
  p_output1[10]=t76;
  p_output1[11]=t79;
  p_output1[12]=1.;
  p_output1[13]=t76;
  p_output1[14]=0.333333333333333*t101*t53;
  p_output1[15]=-0.333333333333333*t101*t53;
  p_output1[16]=-1.;
  p_output1[17]=t76;
  p_output1[18]=t79;
  p_output1[19]=1.;
  p_output1[20]=t76;
  p_output1[21]=0.333333333333333*t120*t53;
  p_output1[22]=-0.333333333333333*t120*t53;
  p_output1[23]=-1.;
  p_output1[24]=t76;
  p_output1[25]=t79;
  p_output1[26]=1.;
  p_output1[27]=t76;
  p_output1[28]=0.333333333333333*t140*t53;
  p_output1[29]=-0.333333333333333*t140*t53;
  p_output1[30]=-1.;
  p_output1[31]=t76;
  p_output1[32]=t79;
  p_output1[33]=1.;
  p_output1[34]=t76;
  p_output1[35]=0.333333333333333*t151*t53;
  p_output1[36]=-0.333333333333333*t151*t53;
  p_output1[37]=-1.;
  p_output1[38]=t76;
  p_output1[39]=t79;
  p_output1[40]=1.;
  p_output1[41]=t76;
  p_output1[42]=0.333333333333333*t158*t53;
  p_output1[43]=-0.333333333333333*t158*t53;
  p_output1[44]=-1.;
  p_output1[45]=t76;
  p_output1[46]=t79;
  p_output1[47]=1.;
  p_output1[48]=t76;
  p_output1[49]=0.333333333333333*t178*t53;
  p_output1[50]=-0.333333333333333*t178*t53;
  p_output1[51]=-1.;
  p_output1[52]=t76;
  p_output1[53]=t79;
  p_output1[54]=1.;
  p_output1[55]=t76;
  p_output1[56]=0.333333333333333*t192*t53;
  p_output1[57]=-0.333333333333333*t192*t53;
  p_output1[58]=-1.;
  p_output1[59]=t76;
  p_output1[60]=t79;
  p_output1[61]=1.;
  p_output1[62]=t76;
  p_output1[63]=0.333333333333333*t200*t53;
  p_output1[64]=-0.333333333333333*t200*t53;
  p_output1[65]=-1.;
  p_output1[66]=t76;
  p_output1[67]=t79;
  p_output1[68]=1.;
  p_output1[69]=t76;
  p_output1[70]=0.333333333333333*t214*t53;
  p_output1[71]=-0.333333333333333*t214*t53;
  p_output1[72]=-1.;
  p_output1[73]=t76;
  p_output1[74]=t79;
  p_output1[75]=1.;
  p_output1[76]=t76;
  p_output1[77]=0.333333333333333*t237*t53;
  p_output1[78]=-0.333333333333333*t237*t53;
  p_output1[79]=-1.;
  p_output1[80]=t76;
  p_output1[81]=t79;
  p_output1[82]=1.;
  p_output1[83]=t76;
  p_output1[84]=0.333333333333333*t248*t53;
  p_output1[85]=-0.333333333333333*t248*t53;
  p_output1[86]=-1.;
  p_output1[87]=t76;
  p_output1[88]=t79;
  p_output1[89]=1.;
  p_output1[90]=t76;
  p_output1[91]=0.333333333333333*t265*t53;
  p_output1[92]=-0.333333333333333*t265*t53;
  p_output1[93]=-1.;
  p_output1[94]=t76;
  p_output1[95]=t79;
  p_output1[96]=1.;
  p_output1[97]=t76;
  p_output1[98]=0.333333333333333*t281*t53;
  p_output1[99]=-0.333333333333333*t281*t53;
  p_output1[100]=-1.;
  p_output1[101]=t76;
  p_output1[102]=t79;
  p_output1[103]=1.;
  p_output1[104]=t76;
  p_output1[105]=0.333333333333333*t291*t53;
  p_output1[106]=-0.333333333333333*t291*t53;
  p_output1[107]=-1.;
  p_output1[108]=t76;
  p_output1[109]=t79;
  p_output1[110]=1.;
  p_output1[111]=t76;
  p_output1[112]=0.333333333333333*t309*t53;
  p_output1[113]=-0.333333333333333*t309*t53;
  p_output1[114]=-1.;
  p_output1[115]=t76;
  p_output1[116]=t79;
  p_output1[117]=1.;
  p_output1[118]=t76;
  p_output1[119]=0.333333333333333*t326*t53;
  p_output1[120]=-0.333333333333333*t326*t53;
  p_output1[121]=-1.;
  p_output1[122]=t76;
  p_output1[123]=t79;
  p_output1[124]=1.;
  p_output1[125]=t76;
  p_output1[126]=0.25*t340*t53;
  p_output1[127]=-0.25*t340*t53;
  p_output1[128]=-0.5;
  p_output1[129]=t353;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t358;
  p_output1[133]=0.25*t363*t53;
  p_output1[134]=-0.25*t363*t53;
  p_output1[135]=-0.5;
  p_output1[136]=t353;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t358;
  p_output1[140]=0.25*t373*t53;
  p_output1[141]=-0.25*t373*t53;
  p_output1[142]=-0.5;
  p_output1[143]=t353;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t358;
  p_output1[147]=0.25*t390*t53;
  p_output1[148]=-0.25*t390*t53;
  p_output1[149]=-0.5;
  p_output1[150]=t353;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t358;
  p_output1[154]=0.25*t410*t53;
  p_output1[155]=-0.25*t410*t53;
  p_output1[156]=-0.5;
  p_output1[157]=t353;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t358;
  p_output1[161]=0.25*t430*t53;
  p_output1[162]=-0.25*t430*t53;
  p_output1[163]=-0.5;
  p_output1[164]=t353;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t358;
  p_output1[168]=0.25*t440*t53;
  p_output1[169]=-0.25*t440*t53;
  p_output1[170]=-0.5;
  p_output1[171]=t353;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t358;
  p_output1[175]=0.25*t452*t53;
  p_output1[176]=-0.25*t452*t53;
  p_output1[177]=-0.5;
  p_output1[178]=t353;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t358;
  p_output1[182]=0.25*t463*t53;
  p_output1[183]=-0.25*t463*t53;
  p_output1[184]=-0.5;
  p_output1[185]=t353;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t358;
  p_output1[189]=0.25*t476*t53;
  p_output1[190]=-0.25*t476*t53;
  p_output1[191]=-0.5;
  p_output1[192]=t353;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t358;
  p_output1[196]=0.25*t483*t53;
  p_output1[197]=-0.25*t483*t53;
  p_output1[198]=-0.5;
  p_output1[199]=t353;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t358;
  p_output1[203]=0.25*t491*t53;
  p_output1[204]=-0.25*t491*t53;
  p_output1[205]=-0.5;
  p_output1[206]=t353;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t358;
  p_output1[210]=0.25*t500*t53;
  p_output1[211]=-0.25*t500*t53;
  p_output1[212]=-0.5;
  p_output1[213]=t353;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t358;
  p_output1[217]=0.25*t509*t53;
  p_output1[218]=-0.25*t509*t53;
  p_output1[219]=-0.5;
  p_output1[220]=t353;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t358;
  p_output1[224]=0.25*t519*t53;
  p_output1[225]=-0.25*t519*t53;
  p_output1[226]=-0.5;
  p_output1[227]=t353;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t358;
  p_output1[231]=0.25*t524*t53;
  p_output1[232]=-0.25*t524*t53;
  p_output1[233]=-0.5;
  p_output1[234]=t353;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t358;
  p_output1[238]=0.25*t53*t531;
  p_output1[239]=-0.25*t53*t531;
  p_output1[240]=-0.5;
  p_output1[241]=t353;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t358;
  p_output1[245]=0.25*t53*t543;
  p_output1[246]=-0.25*t53*t543;
  p_output1[247]=-0.5;
  p_output1[248]=t353;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t358;
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

#include "J_hs_int_x.hh"

namespace TrotStance2
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
