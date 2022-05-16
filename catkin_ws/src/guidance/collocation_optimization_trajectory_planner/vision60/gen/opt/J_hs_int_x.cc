/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:09 GMT+02:00
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
  double t53;
  double t55;
  double t2297;
  double t2520;
  double t2863;
  double t2865;
  double t2873;
  double t2884;
  double t2891;
  double t2882;
  double t2902;
  double t2905;
  double t2909;
  double t2912;
  double t2919;
  double t2930;
  double t3073;
  double t3168;
  double t3604;
  double t3649;
  double t3805;
  double t3820;
  double t3896;
  double t3900;
  double t3990;
  double t4011;
  double t4027;
  double t4078;
  double t4170;
  double t4310;
  double t4409;
  double t4420;
  double t4510;
  double t4531;
  double t4660;
  double t4763;
  double t4780;
  double t4828;
  double t4980;
  double t5051;
  double t5149;
  double t5180;
  double t5240;
  double t5271;
  double t5337;
  double t5355;
  double t5328;
  double t5335;
  double t5418;
  double t5425;
  double t5445;
  double t5446;
  double t5538;
  double t5539;
  double t5544;
  double t5546;
  double t5651;
  double t5655;
  double t5709;
  double t5776;
  double t5961;
  double t5998;
  double t6017;
  double t6021;
  double t6061;
  double t6065;
  double t6085;
  double t6094;
  double t6123;
  double t6134;
  double t6176;
  double t6195;
  double t6216;
  double t6221;
  double t6233;
  double t6235;
  double t6261;
  double t6355;
  double t6404;
  double t6405;
  t53 = 4.*var5[0];
  t55 = t53 + var7[0] + var3[0];
  t2297 = -1. + var8[0];
  t2520 = 1/t2297;
  t2863 = -1.*var1[0];
  t2865 = t2863 + var1[1];
  t2873 = -0.333333333333333*t2520*t2865;
  t2884 = 4.*var5[1];
  t2891 = t2884 + var7[1] + var3[1];
  t2882 = -1.33333333333333*t2520*t2865;
  t2902 = 4.*var5[2];
  t2905 = t2902 + var7[2] + var3[2];
  t2909 = 4.*var5[3];
  t2912 = t2909 + var7[3] + var3[3];
  t2919 = 4.*var5[4];
  t2930 = t2919 + var7[4] + var3[4];
  t3073 = 4.*var5[5];
  t3168 = t3073 + var7[5] + var3[5];
  t3604 = 4.*var5[6];
  t3649 = t3604 + var7[6] + var3[6];
  t3805 = 4.*var5[7];
  t3820 = t3805 + var7[7] + var3[7];
  t3896 = 4.*var5[8];
  t3900 = t3896 + var7[8] + var3[8];
  t3990 = 4.*var5[9];
  t4011 = t3990 + var7[9] + var3[9];
  t4027 = 4.*var5[10];
  t4078 = t4027 + var7[10] + var3[10];
  t4170 = 4.*var5[11];
  t4310 = t4170 + var7[11] + var3[11];
  t4409 = 4.*var5[12];
  t4420 = t4409 + var7[12] + var3[12];
  t4510 = 4.*var5[13];
  t4531 = t4510 + var7[13] + var3[13];
  t4660 = 4.*var5[14];
  t4763 = t4660 + var7[14] + var3[14];
  t4780 = 4.*var5[15];
  t4828 = t4780 + var7[15] + var3[15];
  t4980 = 4.*var5[16];
  t5051 = t4980 + var7[16] + var3[16];
  t5149 = 4.*var5[17];
  t5180 = t5149 + var7[17] + var3[17];
  t5240 = -1.*var7[0];
  t5271 = t5240 + var3[0];
  t5337 = -1.*var7[1];
  t5355 = t5337 + var3[1];
  t5328 = -0.25*t2520*t2865;
  t5335 = 0.25*t2520*t2865;
  t5418 = -1.*var7[2];
  t5425 = t5418 + var3[2];
  t5445 = -1.*var7[3];
  t5446 = t5445 + var3[3];
  t5538 = -1.*var7[4];
  t5539 = t5538 + var3[4];
  t5544 = -1.*var7[5];
  t5546 = t5544 + var3[5];
  t5651 = -1.*var7[6];
  t5655 = t5651 + var3[6];
  t5709 = -1.*var7[7];
  t5776 = t5709 + var3[7];
  t5961 = -1.*var7[8];
  t5998 = t5961 + var3[8];
  t6017 = -1.*var7[9];
  t6021 = t6017 + var3[9];
  t6061 = -1.*var7[10];
  t6065 = t6061 + var3[10];
  t6085 = -1.*var7[11];
  t6094 = t6085 + var3[11];
  t6123 = -1.*var7[12];
  t6134 = t6123 + var3[12];
  t6176 = -1.*var7[13];
  t6195 = t6176 + var3[13];
  t6216 = -1.*var7[14];
  t6221 = t6216 + var3[14];
  t6233 = -1.*var7[15];
  t6235 = t6233 + var3[15];
  t6261 = -1.*var7[16];
  t6355 = t6261 + var3[16];
  t6404 = -1.*var7[17];
  t6405 = t6404 + var3[17];
  p_output1[0]=0.333333333333333*t2520*t55;
  p_output1[1]=-0.333333333333333*t2520*t55;
  p_output1[2]=-1.;
  p_output1[3]=t2873;
  p_output1[4]=t2882;
  p_output1[5]=1.;
  p_output1[6]=t2873;
  p_output1[7]=0.333333333333333*t2520*t2891;
  p_output1[8]=-0.333333333333333*t2520*t2891;
  p_output1[9]=-1.;
  p_output1[10]=t2873;
  p_output1[11]=t2882;
  p_output1[12]=1.;
  p_output1[13]=t2873;
  p_output1[14]=0.333333333333333*t2520*t2905;
  p_output1[15]=-0.333333333333333*t2520*t2905;
  p_output1[16]=-1.;
  p_output1[17]=t2873;
  p_output1[18]=t2882;
  p_output1[19]=1.;
  p_output1[20]=t2873;
  p_output1[21]=0.333333333333333*t2520*t2912;
  p_output1[22]=-0.333333333333333*t2520*t2912;
  p_output1[23]=-1.;
  p_output1[24]=t2873;
  p_output1[25]=t2882;
  p_output1[26]=1.;
  p_output1[27]=t2873;
  p_output1[28]=0.333333333333333*t2520*t2930;
  p_output1[29]=-0.333333333333333*t2520*t2930;
  p_output1[30]=-1.;
  p_output1[31]=t2873;
  p_output1[32]=t2882;
  p_output1[33]=1.;
  p_output1[34]=t2873;
  p_output1[35]=0.333333333333333*t2520*t3168;
  p_output1[36]=-0.333333333333333*t2520*t3168;
  p_output1[37]=-1.;
  p_output1[38]=t2873;
  p_output1[39]=t2882;
  p_output1[40]=1.;
  p_output1[41]=t2873;
  p_output1[42]=0.333333333333333*t2520*t3649;
  p_output1[43]=-0.333333333333333*t2520*t3649;
  p_output1[44]=-1.;
  p_output1[45]=t2873;
  p_output1[46]=t2882;
  p_output1[47]=1.;
  p_output1[48]=t2873;
  p_output1[49]=0.333333333333333*t2520*t3820;
  p_output1[50]=-0.333333333333333*t2520*t3820;
  p_output1[51]=-1.;
  p_output1[52]=t2873;
  p_output1[53]=t2882;
  p_output1[54]=1.;
  p_output1[55]=t2873;
  p_output1[56]=0.333333333333333*t2520*t3900;
  p_output1[57]=-0.333333333333333*t2520*t3900;
  p_output1[58]=-1.;
  p_output1[59]=t2873;
  p_output1[60]=t2882;
  p_output1[61]=1.;
  p_output1[62]=t2873;
  p_output1[63]=0.333333333333333*t2520*t4011;
  p_output1[64]=-0.333333333333333*t2520*t4011;
  p_output1[65]=-1.;
  p_output1[66]=t2873;
  p_output1[67]=t2882;
  p_output1[68]=1.;
  p_output1[69]=t2873;
  p_output1[70]=0.333333333333333*t2520*t4078;
  p_output1[71]=-0.333333333333333*t2520*t4078;
  p_output1[72]=-1.;
  p_output1[73]=t2873;
  p_output1[74]=t2882;
  p_output1[75]=1.;
  p_output1[76]=t2873;
  p_output1[77]=0.333333333333333*t2520*t4310;
  p_output1[78]=-0.333333333333333*t2520*t4310;
  p_output1[79]=-1.;
  p_output1[80]=t2873;
  p_output1[81]=t2882;
  p_output1[82]=1.;
  p_output1[83]=t2873;
  p_output1[84]=0.333333333333333*t2520*t4420;
  p_output1[85]=-0.333333333333333*t2520*t4420;
  p_output1[86]=-1.;
  p_output1[87]=t2873;
  p_output1[88]=t2882;
  p_output1[89]=1.;
  p_output1[90]=t2873;
  p_output1[91]=0.333333333333333*t2520*t4531;
  p_output1[92]=-0.333333333333333*t2520*t4531;
  p_output1[93]=-1.;
  p_output1[94]=t2873;
  p_output1[95]=t2882;
  p_output1[96]=1.;
  p_output1[97]=t2873;
  p_output1[98]=0.333333333333333*t2520*t4763;
  p_output1[99]=-0.333333333333333*t2520*t4763;
  p_output1[100]=-1.;
  p_output1[101]=t2873;
  p_output1[102]=t2882;
  p_output1[103]=1.;
  p_output1[104]=t2873;
  p_output1[105]=0.333333333333333*t2520*t4828;
  p_output1[106]=-0.333333333333333*t2520*t4828;
  p_output1[107]=-1.;
  p_output1[108]=t2873;
  p_output1[109]=t2882;
  p_output1[110]=1.;
  p_output1[111]=t2873;
  p_output1[112]=0.333333333333333*t2520*t5051;
  p_output1[113]=-0.333333333333333*t2520*t5051;
  p_output1[114]=-1.;
  p_output1[115]=t2873;
  p_output1[116]=t2882;
  p_output1[117]=1.;
  p_output1[118]=t2873;
  p_output1[119]=0.333333333333333*t2520*t5180;
  p_output1[120]=-0.333333333333333*t2520*t5180;
  p_output1[121]=-1.;
  p_output1[122]=t2873;
  p_output1[123]=t2882;
  p_output1[124]=1.;
  p_output1[125]=t2873;
  p_output1[126]=0.25*t2520*t5271;
  p_output1[127]=-0.25*t2520*t5271;
  p_output1[128]=-0.5;
  p_output1[129]=t5328;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t5335;
  p_output1[133]=0.25*t2520*t5355;
  p_output1[134]=-0.25*t2520*t5355;
  p_output1[135]=-0.5;
  p_output1[136]=t5328;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t5335;
  p_output1[140]=0.25*t2520*t5425;
  p_output1[141]=-0.25*t2520*t5425;
  p_output1[142]=-0.5;
  p_output1[143]=t5328;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t5335;
  p_output1[147]=0.25*t2520*t5446;
  p_output1[148]=-0.25*t2520*t5446;
  p_output1[149]=-0.5;
  p_output1[150]=t5328;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t5335;
  p_output1[154]=0.25*t2520*t5539;
  p_output1[155]=-0.25*t2520*t5539;
  p_output1[156]=-0.5;
  p_output1[157]=t5328;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t5335;
  p_output1[161]=0.25*t2520*t5546;
  p_output1[162]=-0.25*t2520*t5546;
  p_output1[163]=-0.5;
  p_output1[164]=t5328;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t5335;
  p_output1[168]=0.25*t2520*t5655;
  p_output1[169]=-0.25*t2520*t5655;
  p_output1[170]=-0.5;
  p_output1[171]=t5328;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t5335;
  p_output1[175]=0.25*t2520*t5776;
  p_output1[176]=-0.25*t2520*t5776;
  p_output1[177]=-0.5;
  p_output1[178]=t5328;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t5335;
  p_output1[182]=0.25*t2520*t5998;
  p_output1[183]=-0.25*t2520*t5998;
  p_output1[184]=-0.5;
  p_output1[185]=t5328;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t5335;
  p_output1[189]=0.25*t2520*t6021;
  p_output1[190]=-0.25*t2520*t6021;
  p_output1[191]=-0.5;
  p_output1[192]=t5328;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t5335;
  p_output1[196]=0.25*t2520*t6065;
  p_output1[197]=-0.25*t2520*t6065;
  p_output1[198]=-0.5;
  p_output1[199]=t5328;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t5335;
  p_output1[203]=0.25*t2520*t6094;
  p_output1[204]=-0.25*t2520*t6094;
  p_output1[205]=-0.5;
  p_output1[206]=t5328;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t5335;
  p_output1[210]=0.25*t2520*t6134;
  p_output1[211]=-0.25*t2520*t6134;
  p_output1[212]=-0.5;
  p_output1[213]=t5328;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t5335;
  p_output1[217]=0.25*t2520*t6195;
  p_output1[218]=-0.25*t2520*t6195;
  p_output1[219]=-0.5;
  p_output1[220]=t5328;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t5335;
  p_output1[224]=0.25*t2520*t6221;
  p_output1[225]=-0.25*t2520*t6221;
  p_output1[226]=-0.5;
  p_output1[227]=t5328;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t5335;
  p_output1[231]=0.25*t2520*t6235;
  p_output1[232]=-0.25*t2520*t6235;
  p_output1[233]=-0.5;
  p_output1[234]=t5328;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t5335;
  p_output1[238]=0.25*t2520*t6355;
  p_output1[239]=-0.25*t2520*t6355;
  p_output1[240]=-0.5;
  p_output1[241]=t5328;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t5335;
  p_output1[245]=0.25*t2520*t6405;
  p_output1[246]=-0.25*t2520*t6405;
  p_output1[247]=-0.5;
  p_output1[248]=t5328;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t5335;
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

namespace ParallelStance
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
