/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:17:57 GMT+01:00
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
  double t63;
  double t90;
  double t132;
  double t144;
  double t160;
  double t166;
  double t181;
  double t196;
  double t205;
  double t193;
  double t238;
  double t239;
  double t270;
  double t285;
  double t310;
  double t313;
  double t352;
  double t366;
  double t393;
  double t404;
  double t433;
  double t445;
  double t465;
  double t467;
  double t486;
  double t494;
  double t503;
  double t510;
  double t526;
  double t527;
  double t546;
  double t551;
  double t561;
  double t563;
  double t576;
  double t577;
  double t584;
  double t586;
  double t596;
  double t600;
  double t604;
  double t607;
  double t611;
  double t615;
  double t625;
  double t629;
  double t623;
  double t624;
  double t636;
  double t637;
  double t643;
  double t644;
  double t649;
  double t650;
  double t658;
  double t660;
  double t665;
  double t673;
  double t679;
  double t687;
  double t695;
  double t704;
  double t713;
  double t714;
  double t723;
  double t724;
  double t741;
  double t742;
  double t757;
  double t758;
  double t764;
  double t769;
  double t773;
  double t775;
  double t780;
  double t781;
  double t786;
  double t787;
  double t794;
  double t796;
  t63 = 4.*var5[0];
  t90 = var3[0] + t63 + var7[0];
  t132 = -1. + var8[0];
  t144 = 1/t132;
  t160 = -1.*var1[0];
  t166 = t160 + var1[1];
  t181 = -0.333333333333333*t144*t166;
  t196 = 4.*var5[1];
  t205 = var3[1] + t196 + var7[1];
  t193 = -1.33333333333333*t144*t166;
  t238 = 4.*var5[2];
  t239 = var3[2] + t238 + var7[2];
  t270 = 4.*var5[3];
  t285 = var3[3] + t270 + var7[3];
  t310 = 4.*var5[4];
  t313 = var3[4] + t310 + var7[4];
  t352 = 4.*var5[5];
  t366 = var3[5] + t352 + var7[5];
  t393 = 4.*var5[6];
  t404 = var3[6] + t393 + var7[6];
  t433 = 4.*var5[7];
  t445 = var3[7] + t433 + var7[7];
  t465 = 4.*var5[8];
  t467 = var3[8] + t465 + var7[8];
  t486 = 4.*var5[9];
  t494 = var3[9] + t486 + var7[9];
  t503 = 4.*var5[10];
  t510 = var3[10] + t503 + var7[10];
  t526 = 4.*var5[11];
  t527 = var3[11] + t526 + var7[11];
  t546 = 4.*var5[12];
  t551 = var3[12] + t546 + var7[12];
  t561 = 4.*var5[13];
  t563 = var3[13] + t561 + var7[13];
  t576 = 4.*var5[14];
  t577 = var3[14] + t576 + var7[14];
  t584 = 4.*var5[15];
  t586 = var3[15] + t584 + var7[15];
  t596 = 4.*var5[16];
  t600 = var3[16] + t596 + var7[16];
  t604 = 4.*var5[17];
  t607 = var3[17] + t604 + var7[17];
  t611 = -1.*var7[0];
  t615 = var3[0] + t611;
  t625 = -1.*var7[1];
  t629 = var3[1] + t625;
  t623 = -0.25*t144*t166;
  t624 = 0.25*t144*t166;
  t636 = -1.*var7[2];
  t637 = var3[2] + t636;
  t643 = -1.*var7[3];
  t644 = var3[3] + t643;
  t649 = -1.*var7[4];
  t650 = var3[4] + t649;
  t658 = -1.*var7[5];
  t660 = var3[5] + t658;
  t665 = -1.*var7[6];
  t673 = var3[6] + t665;
  t679 = -1.*var7[7];
  t687 = var3[7] + t679;
  t695 = -1.*var7[8];
  t704 = var3[8] + t695;
  t713 = -1.*var7[9];
  t714 = var3[9] + t713;
  t723 = -1.*var7[10];
  t724 = var3[10] + t723;
  t741 = -1.*var7[11];
  t742 = var3[11] + t741;
  t757 = -1.*var7[12];
  t758 = var3[12] + t757;
  t764 = -1.*var7[13];
  t769 = var3[13] + t764;
  t773 = -1.*var7[14];
  t775 = var3[14] + t773;
  t780 = -1.*var7[15];
  t781 = var3[15] + t780;
  t786 = -1.*var7[16];
  t787 = var3[16] + t786;
  t794 = -1.*var7[17];
  t796 = var3[17] + t794;
  p_output1[0]=0.333333333333333*t144*t90;
  p_output1[1]=-0.333333333333333*t144*t90;
  p_output1[2]=-1.;
  p_output1[3]=t181;
  p_output1[4]=t193;
  p_output1[5]=1.;
  p_output1[6]=t181;
  p_output1[7]=0.333333333333333*t144*t205;
  p_output1[8]=-0.333333333333333*t144*t205;
  p_output1[9]=-1.;
  p_output1[10]=t181;
  p_output1[11]=t193;
  p_output1[12]=1.;
  p_output1[13]=t181;
  p_output1[14]=0.333333333333333*t144*t239;
  p_output1[15]=-0.333333333333333*t144*t239;
  p_output1[16]=-1.;
  p_output1[17]=t181;
  p_output1[18]=t193;
  p_output1[19]=1.;
  p_output1[20]=t181;
  p_output1[21]=0.333333333333333*t144*t285;
  p_output1[22]=-0.333333333333333*t144*t285;
  p_output1[23]=-1.;
  p_output1[24]=t181;
  p_output1[25]=t193;
  p_output1[26]=1.;
  p_output1[27]=t181;
  p_output1[28]=0.333333333333333*t144*t313;
  p_output1[29]=-0.333333333333333*t144*t313;
  p_output1[30]=-1.;
  p_output1[31]=t181;
  p_output1[32]=t193;
  p_output1[33]=1.;
  p_output1[34]=t181;
  p_output1[35]=0.333333333333333*t144*t366;
  p_output1[36]=-0.333333333333333*t144*t366;
  p_output1[37]=-1.;
  p_output1[38]=t181;
  p_output1[39]=t193;
  p_output1[40]=1.;
  p_output1[41]=t181;
  p_output1[42]=0.333333333333333*t144*t404;
  p_output1[43]=-0.333333333333333*t144*t404;
  p_output1[44]=-1.;
  p_output1[45]=t181;
  p_output1[46]=t193;
  p_output1[47]=1.;
  p_output1[48]=t181;
  p_output1[49]=0.333333333333333*t144*t445;
  p_output1[50]=-0.333333333333333*t144*t445;
  p_output1[51]=-1.;
  p_output1[52]=t181;
  p_output1[53]=t193;
  p_output1[54]=1.;
  p_output1[55]=t181;
  p_output1[56]=0.333333333333333*t144*t467;
  p_output1[57]=-0.333333333333333*t144*t467;
  p_output1[58]=-1.;
  p_output1[59]=t181;
  p_output1[60]=t193;
  p_output1[61]=1.;
  p_output1[62]=t181;
  p_output1[63]=0.333333333333333*t144*t494;
  p_output1[64]=-0.333333333333333*t144*t494;
  p_output1[65]=-1.;
  p_output1[66]=t181;
  p_output1[67]=t193;
  p_output1[68]=1.;
  p_output1[69]=t181;
  p_output1[70]=0.333333333333333*t144*t510;
  p_output1[71]=-0.333333333333333*t144*t510;
  p_output1[72]=-1.;
  p_output1[73]=t181;
  p_output1[74]=t193;
  p_output1[75]=1.;
  p_output1[76]=t181;
  p_output1[77]=0.333333333333333*t144*t527;
  p_output1[78]=-0.333333333333333*t144*t527;
  p_output1[79]=-1.;
  p_output1[80]=t181;
  p_output1[81]=t193;
  p_output1[82]=1.;
  p_output1[83]=t181;
  p_output1[84]=0.333333333333333*t144*t551;
  p_output1[85]=-0.333333333333333*t144*t551;
  p_output1[86]=-1.;
  p_output1[87]=t181;
  p_output1[88]=t193;
  p_output1[89]=1.;
  p_output1[90]=t181;
  p_output1[91]=0.333333333333333*t144*t563;
  p_output1[92]=-0.333333333333333*t144*t563;
  p_output1[93]=-1.;
  p_output1[94]=t181;
  p_output1[95]=t193;
  p_output1[96]=1.;
  p_output1[97]=t181;
  p_output1[98]=0.333333333333333*t144*t577;
  p_output1[99]=-0.333333333333333*t144*t577;
  p_output1[100]=-1.;
  p_output1[101]=t181;
  p_output1[102]=t193;
  p_output1[103]=1.;
  p_output1[104]=t181;
  p_output1[105]=0.333333333333333*t144*t586;
  p_output1[106]=-0.333333333333333*t144*t586;
  p_output1[107]=-1.;
  p_output1[108]=t181;
  p_output1[109]=t193;
  p_output1[110]=1.;
  p_output1[111]=t181;
  p_output1[112]=0.333333333333333*t144*t600;
  p_output1[113]=-0.333333333333333*t144*t600;
  p_output1[114]=-1.;
  p_output1[115]=t181;
  p_output1[116]=t193;
  p_output1[117]=1.;
  p_output1[118]=t181;
  p_output1[119]=0.333333333333333*t144*t607;
  p_output1[120]=-0.333333333333333*t144*t607;
  p_output1[121]=-1.;
  p_output1[122]=t181;
  p_output1[123]=t193;
  p_output1[124]=1.;
  p_output1[125]=t181;
  p_output1[126]=0.25*t144*t615;
  p_output1[127]=-0.25*t144*t615;
  p_output1[128]=-0.5;
  p_output1[129]=t623;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t624;
  p_output1[133]=0.25*t144*t629;
  p_output1[134]=-0.25*t144*t629;
  p_output1[135]=-0.5;
  p_output1[136]=t623;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t624;
  p_output1[140]=0.25*t144*t637;
  p_output1[141]=-0.25*t144*t637;
  p_output1[142]=-0.5;
  p_output1[143]=t623;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t624;
  p_output1[147]=0.25*t144*t644;
  p_output1[148]=-0.25*t144*t644;
  p_output1[149]=-0.5;
  p_output1[150]=t623;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t624;
  p_output1[154]=0.25*t144*t650;
  p_output1[155]=-0.25*t144*t650;
  p_output1[156]=-0.5;
  p_output1[157]=t623;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t624;
  p_output1[161]=0.25*t144*t660;
  p_output1[162]=-0.25*t144*t660;
  p_output1[163]=-0.5;
  p_output1[164]=t623;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t624;
  p_output1[168]=0.25*t144*t673;
  p_output1[169]=-0.25*t144*t673;
  p_output1[170]=-0.5;
  p_output1[171]=t623;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t624;
  p_output1[175]=0.25*t144*t687;
  p_output1[176]=-0.25*t144*t687;
  p_output1[177]=-0.5;
  p_output1[178]=t623;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t624;
  p_output1[182]=0.25*t144*t704;
  p_output1[183]=-0.25*t144*t704;
  p_output1[184]=-0.5;
  p_output1[185]=t623;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t624;
  p_output1[189]=0.25*t144*t714;
  p_output1[190]=-0.25*t144*t714;
  p_output1[191]=-0.5;
  p_output1[192]=t623;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t624;
  p_output1[196]=0.25*t144*t724;
  p_output1[197]=-0.25*t144*t724;
  p_output1[198]=-0.5;
  p_output1[199]=t623;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t624;
  p_output1[203]=0.25*t144*t742;
  p_output1[204]=-0.25*t144*t742;
  p_output1[205]=-0.5;
  p_output1[206]=t623;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t624;
  p_output1[210]=0.25*t144*t758;
  p_output1[211]=-0.25*t144*t758;
  p_output1[212]=-0.5;
  p_output1[213]=t623;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t624;
  p_output1[217]=0.25*t144*t769;
  p_output1[218]=-0.25*t144*t769;
  p_output1[219]=-0.5;
  p_output1[220]=t623;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t624;
  p_output1[224]=0.25*t144*t775;
  p_output1[225]=-0.25*t144*t775;
  p_output1[226]=-0.5;
  p_output1[227]=t623;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t624;
  p_output1[231]=0.25*t144*t781;
  p_output1[232]=-0.25*t144*t781;
  p_output1[233]=-0.5;
  p_output1[234]=t623;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t624;
  p_output1[238]=0.25*t144*t787;
  p_output1[239]=-0.25*t144*t787;
  p_output1[240]=-0.5;
  p_output1[241]=t623;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t624;
  p_output1[245]=0.25*t144*t796;
  p_output1[246]=-0.25*t144*t796;
  p_output1[247]=-0.5;
  p_output1[248]=t623;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t624;
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

namespace TrotStance2
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
