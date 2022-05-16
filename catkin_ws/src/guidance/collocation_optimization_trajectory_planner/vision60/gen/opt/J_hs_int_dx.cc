/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:11 GMT+02:00
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
  double t2861;
  double t2900;
  double t2915;
  double t2943;
  double t3792;
  double t3796;
  double t3882;
  double t3953;
  double t4014;
  double t3944;
  double t4337;
  double t4354;
  double t4601;
  double t4768;
  double t5064;
  double t5080;
  double t5321;
  double t5362;
  double t5450;
  double t5492;
  double t5623;
  double t5698;
  double t5999;
  double t6005;
  double t6084;
  double t6113;
  double t6199;
  double t6204;
  double t6255;
  double t6356;
  double t6483;
  double t6532;
  double t6576;
  double t6580;
  double t6606;
  double t6608;
  double t6628;
  double t6640;
  double t6691;
  double t6692;
  double t6709;
  double t6712;
  double t6738;
  double t6750;
  double t6787;
  double t6788;
  double t6781;
  double t6782;
  double t6791;
  double t6803;
  double t6807;
  double t6808;
  double t6815;
  double t6818;
  double t6826;
  double t6828;
  double t6840;
  double t6842;
  double t6850;
  double t6852;
  double t6861;
  double t6873;
  double t6890;
  double t6891;
  double t6897;
  double t6898;
  double t6908;
  double t6909;
  double t6912;
  double t6914;
  double t6924;
  double t6925;
  double t6938;
  double t6940;
  double t6943;
  double t6946;
  double t6954;
  double t6964;
  double t6971;
  double t6973;
  t2861 = 4.*var5[0];
  t2900 = var3[0] + t2861 + var7[0];
  t2915 = -1. + var8[0];
  t2943 = 1/t2915;
  t3792 = -1.*var1[0];
  t3796 = t3792 + var1[1];
  t3882 = -0.333333333333333*t2943*t3796;
  t3953 = 4.*var5[1];
  t4014 = var3[1] + t3953 + var7[1];
  t3944 = -1.33333333333333*t2943*t3796;
  t4337 = 4.*var5[2];
  t4354 = var3[2] + t4337 + var7[2];
  t4601 = 4.*var5[3];
  t4768 = var3[3] + t4601 + var7[3];
  t5064 = 4.*var5[4];
  t5080 = var3[4] + t5064 + var7[4];
  t5321 = 4.*var5[5];
  t5362 = var3[5] + t5321 + var7[5];
  t5450 = 4.*var5[6];
  t5492 = var3[6] + t5450 + var7[6];
  t5623 = 4.*var5[7];
  t5698 = var3[7] + t5623 + var7[7];
  t5999 = 4.*var5[8];
  t6005 = var3[8] + t5999 + var7[8];
  t6084 = 4.*var5[9];
  t6113 = var3[9] + t6084 + var7[9];
  t6199 = 4.*var5[10];
  t6204 = var3[10] + t6199 + var7[10];
  t6255 = 4.*var5[11];
  t6356 = var3[11] + t6255 + var7[11];
  t6483 = 4.*var5[12];
  t6532 = var3[12] + t6483 + var7[12];
  t6576 = 4.*var5[13];
  t6580 = var3[13] + t6576 + var7[13];
  t6606 = 4.*var5[14];
  t6608 = var3[14] + t6606 + var7[14];
  t6628 = 4.*var5[15];
  t6640 = var3[15] + t6628 + var7[15];
  t6691 = 4.*var5[16];
  t6692 = var3[16] + t6691 + var7[16];
  t6709 = 4.*var5[17];
  t6712 = var3[17] + t6709 + var7[17];
  t6738 = -1.*var7[0];
  t6750 = var3[0] + t6738;
  t6787 = -1.*var7[1];
  t6788 = var3[1] + t6787;
  t6781 = -0.25*t2943*t3796;
  t6782 = 0.25*t2943*t3796;
  t6791 = -1.*var7[2];
  t6803 = var3[2] + t6791;
  t6807 = -1.*var7[3];
  t6808 = var3[3] + t6807;
  t6815 = -1.*var7[4];
  t6818 = var3[4] + t6815;
  t6826 = -1.*var7[5];
  t6828 = var3[5] + t6826;
  t6840 = -1.*var7[6];
  t6842 = var3[6] + t6840;
  t6850 = -1.*var7[7];
  t6852 = var3[7] + t6850;
  t6861 = -1.*var7[8];
  t6873 = var3[8] + t6861;
  t6890 = -1.*var7[9];
  t6891 = var3[9] + t6890;
  t6897 = -1.*var7[10];
  t6898 = var3[10] + t6897;
  t6908 = -1.*var7[11];
  t6909 = var3[11] + t6908;
  t6912 = -1.*var7[12];
  t6914 = var3[12] + t6912;
  t6924 = -1.*var7[13];
  t6925 = var3[13] + t6924;
  t6938 = -1.*var7[14];
  t6940 = var3[14] + t6938;
  t6943 = -1.*var7[15];
  t6946 = var3[15] + t6943;
  t6954 = -1.*var7[16];
  t6964 = var3[16] + t6954;
  t6971 = -1.*var7[17];
  t6973 = var3[17] + t6971;
  p_output1[0]=0.333333333333333*t2900*t2943;
  p_output1[1]=-0.333333333333333*t2900*t2943;
  p_output1[2]=-1.;
  p_output1[3]=t3882;
  p_output1[4]=t3944;
  p_output1[5]=1.;
  p_output1[6]=t3882;
  p_output1[7]=0.333333333333333*t2943*t4014;
  p_output1[8]=-0.333333333333333*t2943*t4014;
  p_output1[9]=-1.;
  p_output1[10]=t3882;
  p_output1[11]=t3944;
  p_output1[12]=1.;
  p_output1[13]=t3882;
  p_output1[14]=0.333333333333333*t2943*t4354;
  p_output1[15]=-0.333333333333333*t2943*t4354;
  p_output1[16]=-1.;
  p_output1[17]=t3882;
  p_output1[18]=t3944;
  p_output1[19]=1.;
  p_output1[20]=t3882;
  p_output1[21]=0.333333333333333*t2943*t4768;
  p_output1[22]=-0.333333333333333*t2943*t4768;
  p_output1[23]=-1.;
  p_output1[24]=t3882;
  p_output1[25]=t3944;
  p_output1[26]=1.;
  p_output1[27]=t3882;
  p_output1[28]=0.333333333333333*t2943*t5080;
  p_output1[29]=-0.333333333333333*t2943*t5080;
  p_output1[30]=-1.;
  p_output1[31]=t3882;
  p_output1[32]=t3944;
  p_output1[33]=1.;
  p_output1[34]=t3882;
  p_output1[35]=0.333333333333333*t2943*t5362;
  p_output1[36]=-0.333333333333333*t2943*t5362;
  p_output1[37]=-1.;
  p_output1[38]=t3882;
  p_output1[39]=t3944;
  p_output1[40]=1.;
  p_output1[41]=t3882;
  p_output1[42]=0.333333333333333*t2943*t5492;
  p_output1[43]=-0.333333333333333*t2943*t5492;
  p_output1[44]=-1.;
  p_output1[45]=t3882;
  p_output1[46]=t3944;
  p_output1[47]=1.;
  p_output1[48]=t3882;
  p_output1[49]=0.333333333333333*t2943*t5698;
  p_output1[50]=-0.333333333333333*t2943*t5698;
  p_output1[51]=-1.;
  p_output1[52]=t3882;
  p_output1[53]=t3944;
  p_output1[54]=1.;
  p_output1[55]=t3882;
  p_output1[56]=0.333333333333333*t2943*t6005;
  p_output1[57]=-0.333333333333333*t2943*t6005;
  p_output1[58]=-1.;
  p_output1[59]=t3882;
  p_output1[60]=t3944;
  p_output1[61]=1.;
  p_output1[62]=t3882;
  p_output1[63]=0.333333333333333*t2943*t6113;
  p_output1[64]=-0.333333333333333*t2943*t6113;
  p_output1[65]=-1.;
  p_output1[66]=t3882;
  p_output1[67]=t3944;
  p_output1[68]=1.;
  p_output1[69]=t3882;
  p_output1[70]=0.333333333333333*t2943*t6204;
  p_output1[71]=-0.333333333333333*t2943*t6204;
  p_output1[72]=-1.;
  p_output1[73]=t3882;
  p_output1[74]=t3944;
  p_output1[75]=1.;
  p_output1[76]=t3882;
  p_output1[77]=0.333333333333333*t2943*t6356;
  p_output1[78]=-0.333333333333333*t2943*t6356;
  p_output1[79]=-1.;
  p_output1[80]=t3882;
  p_output1[81]=t3944;
  p_output1[82]=1.;
  p_output1[83]=t3882;
  p_output1[84]=0.333333333333333*t2943*t6532;
  p_output1[85]=-0.333333333333333*t2943*t6532;
  p_output1[86]=-1.;
  p_output1[87]=t3882;
  p_output1[88]=t3944;
  p_output1[89]=1.;
  p_output1[90]=t3882;
  p_output1[91]=0.333333333333333*t2943*t6580;
  p_output1[92]=-0.333333333333333*t2943*t6580;
  p_output1[93]=-1.;
  p_output1[94]=t3882;
  p_output1[95]=t3944;
  p_output1[96]=1.;
  p_output1[97]=t3882;
  p_output1[98]=0.333333333333333*t2943*t6608;
  p_output1[99]=-0.333333333333333*t2943*t6608;
  p_output1[100]=-1.;
  p_output1[101]=t3882;
  p_output1[102]=t3944;
  p_output1[103]=1.;
  p_output1[104]=t3882;
  p_output1[105]=0.333333333333333*t2943*t6640;
  p_output1[106]=-0.333333333333333*t2943*t6640;
  p_output1[107]=-1.;
  p_output1[108]=t3882;
  p_output1[109]=t3944;
  p_output1[110]=1.;
  p_output1[111]=t3882;
  p_output1[112]=0.333333333333333*t2943*t6692;
  p_output1[113]=-0.333333333333333*t2943*t6692;
  p_output1[114]=-1.;
  p_output1[115]=t3882;
  p_output1[116]=t3944;
  p_output1[117]=1.;
  p_output1[118]=t3882;
  p_output1[119]=0.333333333333333*t2943*t6712;
  p_output1[120]=-0.333333333333333*t2943*t6712;
  p_output1[121]=-1.;
  p_output1[122]=t3882;
  p_output1[123]=t3944;
  p_output1[124]=1.;
  p_output1[125]=t3882;
  p_output1[126]=0.25*t2943*t6750;
  p_output1[127]=-0.25*t2943*t6750;
  p_output1[128]=-0.5;
  p_output1[129]=t6781;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t6782;
  p_output1[133]=0.25*t2943*t6788;
  p_output1[134]=-0.25*t2943*t6788;
  p_output1[135]=-0.5;
  p_output1[136]=t6781;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t6782;
  p_output1[140]=0.25*t2943*t6803;
  p_output1[141]=-0.25*t2943*t6803;
  p_output1[142]=-0.5;
  p_output1[143]=t6781;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t6782;
  p_output1[147]=0.25*t2943*t6808;
  p_output1[148]=-0.25*t2943*t6808;
  p_output1[149]=-0.5;
  p_output1[150]=t6781;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t6782;
  p_output1[154]=0.25*t2943*t6818;
  p_output1[155]=-0.25*t2943*t6818;
  p_output1[156]=-0.5;
  p_output1[157]=t6781;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t6782;
  p_output1[161]=0.25*t2943*t6828;
  p_output1[162]=-0.25*t2943*t6828;
  p_output1[163]=-0.5;
  p_output1[164]=t6781;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t6782;
  p_output1[168]=0.25*t2943*t6842;
  p_output1[169]=-0.25*t2943*t6842;
  p_output1[170]=-0.5;
  p_output1[171]=t6781;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t6782;
  p_output1[175]=0.25*t2943*t6852;
  p_output1[176]=-0.25*t2943*t6852;
  p_output1[177]=-0.5;
  p_output1[178]=t6781;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t6782;
  p_output1[182]=0.25*t2943*t6873;
  p_output1[183]=-0.25*t2943*t6873;
  p_output1[184]=-0.5;
  p_output1[185]=t6781;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t6782;
  p_output1[189]=0.25*t2943*t6891;
  p_output1[190]=-0.25*t2943*t6891;
  p_output1[191]=-0.5;
  p_output1[192]=t6781;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t6782;
  p_output1[196]=0.25*t2943*t6898;
  p_output1[197]=-0.25*t2943*t6898;
  p_output1[198]=-0.5;
  p_output1[199]=t6781;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t6782;
  p_output1[203]=0.25*t2943*t6909;
  p_output1[204]=-0.25*t2943*t6909;
  p_output1[205]=-0.5;
  p_output1[206]=t6781;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t6782;
  p_output1[210]=0.25*t2943*t6914;
  p_output1[211]=-0.25*t2943*t6914;
  p_output1[212]=-0.5;
  p_output1[213]=t6781;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t6782;
  p_output1[217]=0.25*t2943*t6925;
  p_output1[218]=-0.25*t2943*t6925;
  p_output1[219]=-0.5;
  p_output1[220]=t6781;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t6782;
  p_output1[224]=0.25*t2943*t6940;
  p_output1[225]=-0.25*t2943*t6940;
  p_output1[226]=-0.5;
  p_output1[227]=t6781;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t6782;
  p_output1[231]=0.25*t2943*t6946;
  p_output1[232]=-0.25*t2943*t6946;
  p_output1[233]=-0.5;
  p_output1[234]=t6781;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t6782;
  p_output1[238]=0.25*t2943*t6964;
  p_output1[239]=-0.25*t2943*t6964;
  p_output1[240]=-0.5;
  p_output1[241]=t6781;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t6782;
  p_output1[245]=0.25*t2943*t6973;
  p_output1[246]=-0.25*t2943*t6973;
  p_output1[247]=-0.5;
  p_output1[248]=t6781;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t6782;
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
