/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:04 GMT+01:00
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
  double t41;
  double t90;
  double t137;
  double t151;
  double t176;
  double t179;
  double t193;
  double t208;
  double t221;
  double t206;
  double t251;
  double t252;
  double t291;
  double t305;
  double t340;
  double t341;
  double t364;
  double t378;
  double t404;
  double t406;
  double t432;
  double t436;
  double t453;
  double t458;
  double t475;
  double t478;
  double t501;
  double t502;
  double t520;
  double t524;
  double t535;
  double t537;
  double t545;
  double t546;
  double t556;
  double t557;
  double t564;
  double t565;
  double t573;
  double t581;
  double t587;
  double t588;
  double t593;
  double t595;
  double t615;
  double t616;
  double t606;
  double t612;
  double t627;
  double t631;
  double t644;
  double t646;
  double t650;
  double t653;
  double t656;
  double t658;
  double t662;
  double t664;
  double t669;
  double t673;
  double t676;
  double t677;
  double t683;
  double t684;
  double t688;
  double t698;
  double t702;
  double t703;
  double t710;
  double t713;
  double t719;
  double t723;
  double t732;
  double t734;
  double t742;
  double t748;
  double t756;
  double t757;
  double t767;
  double t770;
  t41 = 4.*var5[0];
  t90 = var3[0] + t41 + var7[0];
  t137 = -1. + var8[0];
  t151 = 1/t137;
  t176 = -1.*var1[0];
  t179 = t176 + var1[1];
  t193 = -0.333333333333333*t151*t179;
  t208 = 4.*var5[1];
  t221 = var3[1] + t208 + var7[1];
  t206 = -1.33333333333333*t151*t179;
  t251 = 4.*var5[2];
  t252 = var3[2] + t251 + var7[2];
  t291 = 4.*var5[3];
  t305 = var3[3] + t291 + var7[3];
  t340 = 4.*var5[4];
  t341 = var3[4] + t340 + var7[4];
  t364 = 4.*var5[5];
  t378 = var3[5] + t364 + var7[5];
  t404 = 4.*var5[6];
  t406 = var3[6] + t404 + var7[6];
  t432 = 4.*var5[7];
  t436 = var3[7] + t432 + var7[7];
  t453 = 4.*var5[8];
  t458 = var3[8] + t453 + var7[8];
  t475 = 4.*var5[9];
  t478 = var3[9] + t475 + var7[9];
  t501 = 4.*var5[10];
  t502 = var3[10] + t501 + var7[10];
  t520 = 4.*var5[11];
  t524 = var3[11] + t520 + var7[11];
  t535 = 4.*var5[12];
  t537 = var3[12] + t535 + var7[12];
  t545 = 4.*var5[13];
  t546 = var3[13] + t545 + var7[13];
  t556 = 4.*var5[14];
  t557 = var3[14] + t556 + var7[14];
  t564 = 4.*var5[15];
  t565 = var3[15] + t564 + var7[15];
  t573 = 4.*var5[16];
  t581 = var3[16] + t573 + var7[16];
  t587 = 4.*var5[17];
  t588 = var3[17] + t587 + var7[17];
  t593 = -1.*var7[0];
  t595 = var3[0] + t593;
  t615 = -1.*var7[1];
  t616 = var3[1] + t615;
  t606 = -0.25*t151*t179;
  t612 = 0.25*t151*t179;
  t627 = -1.*var7[2];
  t631 = var3[2] + t627;
  t644 = -1.*var7[3];
  t646 = var3[3] + t644;
  t650 = -1.*var7[4];
  t653 = var3[4] + t650;
  t656 = -1.*var7[5];
  t658 = var3[5] + t656;
  t662 = -1.*var7[6];
  t664 = var3[6] + t662;
  t669 = -1.*var7[7];
  t673 = var3[7] + t669;
  t676 = -1.*var7[8];
  t677 = var3[8] + t676;
  t683 = -1.*var7[9];
  t684 = var3[9] + t683;
  t688 = -1.*var7[10];
  t698 = var3[10] + t688;
  t702 = -1.*var7[11];
  t703 = var3[11] + t702;
  t710 = -1.*var7[12];
  t713 = var3[12] + t710;
  t719 = -1.*var7[13];
  t723 = var3[13] + t719;
  t732 = -1.*var7[14];
  t734 = var3[14] + t732;
  t742 = -1.*var7[15];
  t748 = var3[15] + t742;
  t756 = -1.*var7[16];
  t757 = var3[16] + t756;
  t767 = -1.*var7[17];
  t770 = var3[17] + t767;
  p_output1[0]=0.333333333333333*t151*t90;
  p_output1[1]=-0.333333333333333*t151*t90;
  p_output1[2]=-1.;
  p_output1[3]=t193;
  p_output1[4]=t206;
  p_output1[5]=1.;
  p_output1[6]=t193;
  p_output1[7]=0.333333333333333*t151*t221;
  p_output1[8]=-0.333333333333333*t151*t221;
  p_output1[9]=-1.;
  p_output1[10]=t193;
  p_output1[11]=t206;
  p_output1[12]=1.;
  p_output1[13]=t193;
  p_output1[14]=0.333333333333333*t151*t252;
  p_output1[15]=-0.333333333333333*t151*t252;
  p_output1[16]=-1.;
  p_output1[17]=t193;
  p_output1[18]=t206;
  p_output1[19]=1.;
  p_output1[20]=t193;
  p_output1[21]=0.333333333333333*t151*t305;
  p_output1[22]=-0.333333333333333*t151*t305;
  p_output1[23]=-1.;
  p_output1[24]=t193;
  p_output1[25]=t206;
  p_output1[26]=1.;
  p_output1[27]=t193;
  p_output1[28]=0.333333333333333*t151*t341;
  p_output1[29]=-0.333333333333333*t151*t341;
  p_output1[30]=-1.;
  p_output1[31]=t193;
  p_output1[32]=t206;
  p_output1[33]=1.;
  p_output1[34]=t193;
  p_output1[35]=0.333333333333333*t151*t378;
  p_output1[36]=-0.333333333333333*t151*t378;
  p_output1[37]=-1.;
  p_output1[38]=t193;
  p_output1[39]=t206;
  p_output1[40]=1.;
  p_output1[41]=t193;
  p_output1[42]=0.333333333333333*t151*t406;
  p_output1[43]=-0.333333333333333*t151*t406;
  p_output1[44]=-1.;
  p_output1[45]=t193;
  p_output1[46]=t206;
  p_output1[47]=1.;
  p_output1[48]=t193;
  p_output1[49]=0.333333333333333*t151*t436;
  p_output1[50]=-0.333333333333333*t151*t436;
  p_output1[51]=-1.;
  p_output1[52]=t193;
  p_output1[53]=t206;
  p_output1[54]=1.;
  p_output1[55]=t193;
  p_output1[56]=0.333333333333333*t151*t458;
  p_output1[57]=-0.333333333333333*t151*t458;
  p_output1[58]=-1.;
  p_output1[59]=t193;
  p_output1[60]=t206;
  p_output1[61]=1.;
  p_output1[62]=t193;
  p_output1[63]=0.333333333333333*t151*t478;
  p_output1[64]=-0.333333333333333*t151*t478;
  p_output1[65]=-1.;
  p_output1[66]=t193;
  p_output1[67]=t206;
  p_output1[68]=1.;
  p_output1[69]=t193;
  p_output1[70]=0.333333333333333*t151*t502;
  p_output1[71]=-0.333333333333333*t151*t502;
  p_output1[72]=-1.;
  p_output1[73]=t193;
  p_output1[74]=t206;
  p_output1[75]=1.;
  p_output1[76]=t193;
  p_output1[77]=0.333333333333333*t151*t524;
  p_output1[78]=-0.333333333333333*t151*t524;
  p_output1[79]=-1.;
  p_output1[80]=t193;
  p_output1[81]=t206;
  p_output1[82]=1.;
  p_output1[83]=t193;
  p_output1[84]=0.333333333333333*t151*t537;
  p_output1[85]=-0.333333333333333*t151*t537;
  p_output1[86]=-1.;
  p_output1[87]=t193;
  p_output1[88]=t206;
  p_output1[89]=1.;
  p_output1[90]=t193;
  p_output1[91]=0.333333333333333*t151*t546;
  p_output1[92]=-0.333333333333333*t151*t546;
  p_output1[93]=-1.;
  p_output1[94]=t193;
  p_output1[95]=t206;
  p_output1[96]=1.;
  p_output1[97]=t193;
  p_output1[98]=0.333333333333333*t151*t557;
  p_output1[99]=-0.333333333333333*t151*t557;
  p_output1[100]=-1.;
  p_output1[101]=t193;
  p_output1[102]=t206;
  p_output1[103]=1.;
  p_output1[104]=t193;
  p_output1[105]=0.333333333333333*t151*t565;
  p_output1[106]=-0.333333333333333*t151*t565;
  p_output1[107]=-1.;
  p_output1[108]=t193;
  p_output1[109]=t206;
  p_output1[110]=1.;
  p_output1[111]=t193;
  p_output1[112]=0.333333333333333*t151*t581;
  p_output1[113]=-0.333333333333333*t151*t581;
  p_output1[114]=-1.;
  p_output1[115]=t193;
  p_output1[116]=t206;
  p_output1[117]=1.;
  p_output1[118]=t193;
  p_output1[119]=0.333333333333333*t151*t588;
  p_output1[120]=-0.333333333333333*t151*t588;
  p_output1[121]=-1.;
  p_output1[122]=t193;
  p_output1[123]=t206;
  p_output1[124]=1.;
  p_output1[125]=t193;
  p_output1[126]=0.25*t151*t595;
  p_output1[127]=-0.25*t151*t595;
  p_output1[128]=-0.5;
  p_output1[129]=t606;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t612;
  p_output1[133]=0.25*t151*t616;
  p_output1[134]=-0.25*t151*t616;
  p_output1[135]=-0.5;
  p_output1[136]=t606;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t612;
  p_output1[140]=0.25*t151*t631;
  p_output1[141]=-0.25*t151*t631;
  p_output1[142]=-0.5;
  p_output1[143]=t606;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t612;
  p_output1[147]=0.25*t151*t646;
  p_output1[148]=-0.25*t151*t646;
  p_output1[149]=-0.5;
  p_output1[150]=t606;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t612;
  p_output1[154]=0.25*t151*t653;
  p_output1[155]=-0.25*t151*t653;
  p_output1[156]=-0.5;
  p_output1[157]=t606;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t612;
  p_output1[161]=0.25*t151*t658;
  p_output1[162]=-0.25*t151*t658;
  p_output1[163]=-0.5;
  p_output1[164]=t606;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t612;
  p_output1[168]=0.25*t151*t664;
  p_output1[169]=-0.25*t151*t664;
  p_output1[170]=-0.5;
  p_output1[171]=t606;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t612;
  p_output1[175]=0.25*t151*t673;
  p_output1[176]=-0.25*t151*t673;
  p_output1[177]=-0.5;
  p_output1[178]=t606;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t612;
  p_output1[182]=0.25*t151*t677;
  p_output1[183]=-0.25*t151*t677;
  p_output1[184]=-0.5;
  p_output1[185]=t606;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t612;
  p_output1[189]=0.25*t151*t684;
  p_output1[190]=-0.25*t151*t684;
  p_output1[191]=-0.5;
  p_output1[192]=t606;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t612;
  p_output1[196]=0.25*t151*t698;
  p_output1[197]=-0.25*t151*t698;
  p_output1[198]=-0.5;
  p_output1[199]=t606;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t612;
  p_output1[203]=0.25*t151*t703;
  p_output1[204]=-0.25*t151*t703;
  p_output1[205]=-0.5;
  p_output1[206]=t606;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t612;
  p_output1[210]=0.25*t151*t713;
  p_output1[211]=-0.25*t151*t713;
  p_output1[212]=-0.5;
  p_output1[213]=t606;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t612;
  p_output1[217]=0.25*t151*t723;
  p_output1[218]=-0.25*t151*t723;
  p_output1[219]=-0.5;
  p_output1[220]=t606;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t612;
  p_output1[224]=0.25*t151*t734;
  p_output1[225]=-0.25*t151*t734;
  p_output1[226]=-0.5;
  p_output1[227]=t606;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t612;
  p_output1[231]=0.25*t151*t748;
  p_output1[232]=-0.25*t151*t748;
  p_output1[233]=-0.5;
  p_output1[234]=t606;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t612;
  p_output1[238]=0.25*t151*t757;
  p_output1[239]=-0.25*t151*t757;
  p_output1[240]=-0.5;
  p_output1[241]=t606;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t612;
  p_output1[245]=0.25*t151*t770;
  p_output1[246]=-0.25*t151*t770;
  p_output1[247]=-0.5;
  p_output1[248]=t606;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t612;
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

namespace ParallelStance2
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
