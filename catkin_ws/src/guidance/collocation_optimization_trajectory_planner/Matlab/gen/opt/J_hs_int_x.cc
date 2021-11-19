/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:02 GMT+01:00
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
  double t6;
  double t7;
  double t24;
  double t33;
  double t44;
  double t58;
  double t64;
  double t77;
  double t89;
  double t68;
  double t101;
  double t109;
  double t121;
  double t132;
  double t141;
  double t148;
  double t160;
  double t165;
  double t168;
  double t170;
  double t185;
  double t191;
  double t194;
  double t205;
  double t217;
  double t220;
  double t227;
  double t231;
  double t239;
  double t247;
  double t253;
  double t262;
  double t275;
  double t282;
  double t301;
  double t303;
  double t307;
  double t314;
  double t331;
  double t339;
  double t344;
  double t345;
  double t357;
  double t359;
  double t369;
  double t375;
  double t365;
  double t367;
  double t385;
  double t387;
  double t392;
  double t399;
  double t408;
  double t411;
  double t419;
  double t422;
  double t433;
  double t434;
  double t438;
  double t439;
  double t451;
  double t452;
  double t463;
  double t465;
  double t472;
  double t473;
  double t476;
  double t477;
  double t489;
  double t490;
  double t496;
  double t500;
  double t503;
  double t508;
  double t514;
  double t518;
  double t521;
  double t523;
  double t527;
  double t531;
  t6 = 4.*var5[0];
  t7 = t6 + var7[0] + var3[0];
  t24 = -1. + var8[0];
  t33 = 1/t24;
  t44 = -1.*var1[0];
  t58 = t44 + var1[1];
  t64 = -0.333333333333333*t33*t58;
  t77 = 4.*var5[1];
  t89 = t77 + var7[1] + var3[1];
  t68 = -1.33333333333333*t33*t58;
  t101 = 4.*var5[2];
  t109 = t101 + var7[2] + var3[2];
  t121 = 4.*var5[3];
  t132 = t121 + var7[3] + var3[3];
  t141 = 4.*var5[4];
  t148 = t141 + var7[4] + var3[4];
  t160 = 4.*var5[5];
  t165 = t160 + var7[5] + var3[5];
  t168 = 4.*var5[6];
  t170 = t168 + var7[6] + var3[6];
  t185 = 4.*var5[7];
  t191 = t185 + var7[7] + var3[7];
  t194 = 4.*var5[8];
  t205 = t194 + var7[8] + var3[8];
  t217 = 4.*var5[9];
  t220 = t217 + var7[9] + var3[9];
  t227 = 4.*var5[10];
  t231 = t227 + var7[10] + var3[10];
  t239 = 4.*var5[11];
  t247 = t239 + var7[11] + var3[11];
  t253 = 4.*var5[12];
  t262 = t253 + var7[12] + var3[12];
  t275 = 4.*var5[13];
  t282 = t275 + var7[13] + var3[13];
  t301 = 4.*var5[14];
  t303 = t301 + var7[14] + var3[14];
  t307 = 4.*var5[15];
  t314 = t307 + var7[15] + var3[15];
  t331 = 4.*var5[16];
  t339 = t331 + var7[16] + var3[16];
  t344 = 4.*var5[17];
  t345 = t344 + var7[17] + var3[17];
  t357 = -1.*var7[0];
  t359 = t357 + var3[0];
  t369 = -1.*var7[1];
  t375 = t369 + var3[1];
  t365 = -0.25*t33*t58;
  t367 = 0.25*t33*t58;
  t385 = -1.*var7[2];
  t387 = t385 + var3[2];
  t392 = -1.*var7[3];
  t399 = t392 + var3[3];
  t408 = -1.*var7[4];
  t411 = t408 + var3[4];
  t419 = -1.*var7[5];
  t422 = t419 + var3[5];
  t433 = -1.*var7[6];
  t434 = t433 + var3[6];
  t438 = -1.*var7[7];
  t439 = t438 + var3[7];
  t451 = -1.*var7[8];
  t452 = t451 + var3[8];
  t463 = -1.*var7[9];
  t465 = t463 + var3[9];
  t472 = -1.*var7[10];
  t473 = t472 + var3[10];
  t476 = -1.*var7[11];
  t477 = t476 + var3[11];
  t489 = -1.*var7[12];
  t490 = t489 + var3[12];
  t496 = -1.*var7[13];
  t500 = t496 + var3[13];
  t503 = -1.*var7[14];
  t508 = t503 + var3[14];
  t514 = -1.*var7[15];
  t518 = t514 + var3[15];
  t521 = -1.*var7[16];
  t523 = t521 + var3[16];
  t527 = -1.*var7[17];
  t531 = t527 + var3[17];
  p_output1[0]=0.333333333333333*t33*t7;
  p_output1[1]=-0.333333333333333*t33*t7;
  p_output1[2]=-1.;
  p_output1[3]=t64;
  p_output1[4]=t68;
  p_output1[5]=1.;
  p_output1[6]=t64;
  p_output1[7]=0.333333333333333*t33*t89;
  p_output1[8]=-0.333333333333333*t33*t89;
  p_output1[9]=-1.;
  p_output1[10]=t64;
  p_output1[11]=t68;
  p_output1[12]=1.;
  p_output1[13]=t64;
  p_output1[14]=0.333333333333333*t109*t33;
  p_output1[15]=-0.333333333333333*t109*t33;
  p_output1[16]=-1.;
  p_output1[17]=t64;
  p_output1[18]=t68;
  p_output1[19]=1.;
  p_output1[20]=t64;
  p_output1[21]=0.333333333333333*t132*t33;
  p_output1[22]=-0.333333333333333*t132*t33;
  p_output1[23]=-1.;
  p_output1[24]=t64;
  p_output1[25]=t68;
  p_output1[26]=1.;
  p_output1[27]=t64;
  p_output1[28]=0.333333333333333*t148*t33;
  p_output1[29]=-0.333333333333333*t148*t33;
  p_output1[30]=-1.;
  p_output1[31]=t64;
  p_output1[32]=t68;
  p_output1[33]=1.;
  p_output1[34]=t64;
  p_output1[35]=0.333333333333333*t165*t33;
  p_output1[36]=-0.333333333333333*t165*t33;
  p_output1[37]=-1.;
  p_output1[38]=t64;
  p_output1[39]=t68;
  p_output1[40]=1.;
  p_output1[41]=t64;
  p_output1[42]=0.333333333333333*t170*t33;
  p_output1[43]=-0.333333333333333*t170*t33;
  p_output1[44]=-1.;
  p_output1[45]=t64;
  p_output1[46]=t68;
  p_output1[47]=1.;
  p_output1[48]=t64;
  p_output1[49]=0.333333333333333*t191*t33;
  p_output1[50]=-0.333333333333333*t191*t33;
  p_output1[51]=-1.;
  p_output1[52]=t64;
  p_output1[53]=t68;
  p_output1[54]=1.;
  p_output1[55]=t64;
  p_output1[56]=0.333333333333333*t205*t33;
  p_output1[57]=-0.333333333333333*t205*t33;
  p_output1[58]=-1.;
  p_output1[59]=t64;
  p_output1[60]=t68;
  p_output1[61]=1.;
  p_output1[62]=t64;
  p_output1[63]=0.333333333333333*t220*t33;
  p_output1[64]=-0.333333333333333*t220*t33;
  p_output1[65]=-1.;
  p_output1[66]=t64;
  p_output1[67]=t68;
  p_output1[68]=1.;
  p_output1[69]=t64;
  p_output1[70]=0.333333333333333*t231*t33;
  p_output1[71]=-0.333333333333333*t231*t33;
  p_output1[72]=-1.;
  p_output1[73]=t64;
  p_output1[74]=t68;
  p_output1[75]=1.;
  p_output1[76]=t64;
  p_output1[77]=0.333333333333333*t247*t33;
  p_output1[78]=-0.333333333333333*t247*t33;
  p_output1[79]=-1.;
  p_output1[80]=t64;
  p_output1[81]=t68;
  p_output1[82]=1.;
  p_output1[83]=t64;
  p_output1[84]=0.333333333333333*t262*t33;
  p_output1[85]=-0.333333333333333*t262*t33;
  p_output1[86]=-1.;
  p_output1[87]=t64;
  p_output1[88]=t68;
  p_output1[89]=1.;
  p_output1[90]=t64;
  p_output1[91]=0.333333333333333*t282*t33;
  p_output1[92]=-0.333333333333333*t282*t33;
  p_output1[93]=-1.;
  p_output1[94]=t64;
  p_output1[95]=t68;
  p_output1[96]=1.;
  p_output1[97]=t64;
  p_output1[98]=0.333333333333333*t303*t33;
  p_output1[99]=-0.333333333333333*t303*t33;
  p_output1[100]=-1.;
  p_output1[101]=t64;
  p_output1[102]=t68;
  p_output1[103]=1.;
  p_output1[104]=t64;
  p_output1[105]=0.333333333333333*t314*t33;
  p_output1[106]=-0.333333333333333*t314*t33;
  p_output1[107]=-1.;
  p_output1[108]=t64;
  p_output1[109]=t68;
  p_output1[110]=1.;
  p_output1[111]=t64;
  p_output1[112]=0.333333333333333*t33*t339;
  p_output1[113]=-0.333333333333333*t33*t339;
  p_output1[114]=-1.;
  p_output1[115]=t64;
  p_output1[116]=t68;
  p_output1[117]=1.;
  p_output1[118]=t64;
  p_output1[119]=0.333333333333333*t33*t345;
  p_output1[120]=-0.333333333333333*t33*t345;
  p_output1[121]=-1.;
  p_output1[122]=t64;
  p_output1[123]=t68;
  p_output1[124]=1.;
  p_output1[125]=t64;
  p_output1[126]=0.25*t33*t359;
  p_output1[127]=-0.25*t33*t359;
  p_output1[128]=-0.5;
  p_output1[129]=t365;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t367;
  p_output1[133]=0.25*t33*t375;
  p_output1[134]=-0.25*t33*t375;
  p_output1[135]=-0.5;
  p_output1[136]=t365;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t367;
  p_output1[140]=0.25*t33*t387;
  p_output1[141]=-0.25*t33*t387;
  p_output1[142]=-0.5;
  p_output1[143]=t365;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t367;
  p_output1[147]=0.25*t33*t399;
  p_output1[148]=-0.25*t33*t399;
  p_output1[149]=-0.5;
  p_output1[150]=t365;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t367;
  p_output1[154]=0.25*t33*t411;
  p_output1[155]=-0.25*t33*t411;
  p_output1[156]=-0.5;
  p_output1[157]=t365;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t367;
  p_output1[161]=0.25*t33*t422;
  p_output1[162]=-0.25*t33*t422;
  p_output1[163]=-0.5;
  p_output1[164]=t365;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t367;
  p_output1[168]=0.25*t33*t434;
  p_output1[169]=-0.25*t33*t434;
  p_output1[170]=-0.5;
  p_output1[171]=t365;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t367;
  p_output1[175]=0.25*t33*t439;
  p_output1[176]=-0.25*t33*t439;
  p_output1[177]=-0.5;
  p_output1[178]=t365;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t367;
  p_output1[182]=0.25*t33*t452;
  p_output1[183]=-0.25*t33*t452;
  p_output1[184]=-0.5;
  p_output1[185]=t365;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t367;
  p_output1[189]=0.25*t33*t465;
  p_output1[190]=-0.25*t33*t465;
  p_output1[191]=-0.5;
  p_output1[192]=t365;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t367;
  p_output1[196]=0.25*t33*t473;
  p_output1[197]=-0.25*t33*t473;
  p_output1[198]=-0.5;
  p_output1[199]=t365;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t367;
  p_output1[203]=0.25*t33*t477;
  p_output1[204]=-0.25*t33*t477;
  p_output1[205]=-0.5;
  p_output1[206]=t365;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t367;
  p_output1[210]=0.25*t33*t490;
  p_output1[211]=-0.25*t33*t490;
  p_output1[212]=-0.5;
  p_output1[213]=t365;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t367;
  p_output1[217]=0.25*t33*t500;
  p_output1[218]=-0.25*t33*t500;
  p_output1[219]=-0.5;
  p_output1[220]=t365;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t367;
  p_output1[224]=0.25*t33*t508;
  p_output1[225]=-0.25*t33*t508;
  p_output1[226]=-0.5;
  p_output1[227]=t365;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t367;
  p_output1[231]=0.25*t33*t518;
  p_output1[232]=-0.25*t33*t518;
  p_output1[233]=-0.5;
  p_output1[234]=t365;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t367;
  p_output1[238]=0.25*t33*t523;
  p_output1[239]=-0.25*t33*t523;
  p_output1[240]=-0.5;
  p_output1[241]=t365;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t367;
  p_output1[245]=0.25*t33*t531;
  p_output1[246]=-0.25*t33*t531;
  p_output1[247]=-0.5;
  p_output1[248]=t365;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t367;
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

namespace ParallelStance2
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
