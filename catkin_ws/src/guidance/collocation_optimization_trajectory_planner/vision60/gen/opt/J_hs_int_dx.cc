/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:42 GMT+02:00
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
  double t67;
  double t585;
  double t1523;
  double t2111;
  double t2386;
  double t2402;
  double t2627;
  double t2800;
  double t2814;
  double t2794;
  double t3035;
  double t3036;
  double t3269;
  double t3445;
  double t3617;
  double t3623;
  double t3825;
  double t3906;
  double t4876;
  double t4899;
  double t5050;
  double t5062;
  double t5318;
  double t5326;
  double t10842;
  double t10870;
  double t11202;
  double t11216;
  double t11344;
  double t11792;
  double t12549;
  double t12550;
  double t12842;
  double t12847;
  double t13029;
  double t13143;
  double t13306;
  double t13313;
  double t13323;
  double t13331;
  double t13425;
  double t13431;
  double t13571;
  double t13731;
  double t13740;
  double t13781;
  double t13736;
  double t13739;
  double t14123;
  double t14137;
  double t14373;
  double t14377;
  double t14385;
  double t14386;
  double t14390;
  double t17066;
  double t17391;
  double t17415;
  double t17607;
  double t17867;
  double t18192;
  double t18319;
  double t18478;
  double t18480;
  double t18564;
  double t18575;
  double t18628;
  double t18630;
  double t18946;
  double t19113;
  double t19205;
  double t19206;
  double t19984;
  double t20401;
  double t20605;
  double t20610;
  double t20632;
  double t20633;
  double t20923;
  double t20973;
  t67 = 4.*var5[0];
  t585 = var3[0] + t67 + var7[0];
  t1523 = -1. + var8[0];
  t2111 = 1/t1523;
  t2386 = -1.*var1[0];
  t2402 = t2386 + var1[1];
  t2627 = -0.333333333333333*t2111*t2402;
  t2800 = 4.*var5[1];
  t2814 = var3[1] + t2800 + var7[1];
  t2794 = -1.33333333333333*t2111*t2402;
  t3035 = 4.*var5[2];
  t3036 = var3[2] + t3035 + var7[2];
  t3269 = 4.*var5[3];
  t3445 = var3[3] + t3269 + var7[3];
  t3617 = 4.*var5[4];
  t3623 = var3[4] + t3617 + var7[4];
  t3825 = 4.*var5[5];
  t3906 = var3[5] + t3825 + var7[5];
  t4876 = 4.*var5[6];
  t4899 = var3[6] + t4876 + var7[6];
  t5050 = 4.*var5[7];
  t5062 = var3[7] + t5050 + var7[7];
  t5318 = 4.*var5[8];
  t5326 = var3[8] + t5318 + var7[8];
  t10842 = 4.*var5[9];
  t10870 = var3[9] + t10842 + var7[9];
  t11202 = 4.*var5[10];
  t11216 = var3[10] + t11202 + var7[10];
  t11344 = 4.*var5[11];
  t11792 = var3[11] + t11344 + var7[11];
  t12549 = 4.*var5[12];
  t12550 = var3[12] + t12549 + var7[12];
  t12842 = 4.*var5[13];
  t12847 = var3[13] + t12842 + var7[13];
  t13029 = 4.*var5[14];
  t13143 = var3[14] + t13029 + var7[14];
  t13306 = 4.*var5[15];
  t13313 = var3[15] + t13306 + var7[15];
  t13323 = 4.*var5[16];
  t13331 = var3[16] + t13323 + var7[16];
  t13425 = 4.*var5[17];
  t13431 = var3[17] + t13425 + var7[17];
  t13571 = -1.*var7[0];
  t13731 = var3[0] + t13571;
  t13740 = -1.*var7[1];
  t13781 = var3[1] + t13740;
  t13736 = -0.25*t2111*t2402;
  t13739 = 0.25*t2111*t2402;
  t14123 = -1.*var7[2];
  t14137 = var3[2] + t14123;
  t14373 = -1.*var7[3];
  t14377 = var3[3] + t14373;
  t14385 = -1.*var7[4];
  t14386 = var3[4] + t14385;
  t14390 = -1.*var7[5];
  t17066 = var3[5] + t14390;
  t17391 = -1.*var7[6];
  t17415 = var3[6] + t17391;
  t17607 = -1.*var7[7];
  t17867 = var3[7] + t17607;
  t18192 = -1.*var7[8];
  t18319 = var3[8] + t18192;
  t18478 = -1.*var7[9];
  t18480 = var3[9] + t18478;
  t18564 = -1.*var7[10];
  t18575 = var3[10] + t18564;
  t18628 = -1.*var7[11];
  t18630 = var3[11] + t18628;
  t18946 = -1.*var7[12];
  t19113 = var3[12] + t18946;
  t19205 = -1.*var7[13];
  t19206 = var3[13] + t19205;
  t19984 = -1.*var7[14];
  t20401 = var3[14] + t19984;
  t20605 = -1.*var7[15];
  t20610 = var3[15] + t20605;
  t20632 = -1.*var7[16];
  t20633 = var3[16] + t20632;
  t20923 = -1.*var7[17];
  t20973 = var3[17] + t20923;
  p_output1[0]=0.333333333333333*t2111*t585;
  p_output1[1]=-0.333333333333333*t2111*t585;
  p_output1[2]=-1.;
  p_output1[3]=t2627;
  p_output1[4]=t2794;
  p_output1[5]=1.;
  p_output1[6]=t2627;
  p_output1[7]=0.333333333333333*t2111*t2814;
  p_output1[8]=-0.333333333333333*t2111*t2814;
  p_output1[9]=-1.;
  p_output1[10]=t2627;
  p_output1[11]=t2794;
  p_output1[12]=1.;
  p_output1[13]=t2627;
  p_output1[14]=0.333333333333333*t2111*t3036;
  p_output1[15]=-0.333333333333333*t2111*t3036;
  p_output1[16]=-1.;
  p_output1[17]=t2627;
  p_output1[18]=t2794;
  p_output1[19]=1.;
  p_output1[20]=t2627;
  p_output1[21]=0.333333333333333*t2111*t3445;
  p_output1[22]=-0.333333333333333*t2111*t3445;
  p_output1[23]=-1.;
  p_output1[24]=t2627;
  p_output1[25]=t2794;
  p_output1[26]=1.;
  p_output1[27]=t2627;
  p_output1[28]=0.333333333333333*t2111*t3623;
  p_output1[29]=-0.333333333333333*t2111*t3623;
  p_output1[30]=-1.;
  p_output1[31]=t2627;
  p_output1[32]=t2794;
  p_output1[33]=1.;
  p_output1[34]=t2627;
  p_output1[35]=0.333333333333333*t2111*t3906;
  p_output1[36]=-0.333333333333333*t2111*t3906;
  p_output1[37]=-1.;
  p_output1[38]=t2627;
  p_output1[39]=t2794;
  p_output1[40]=1.;
  p_output1[41]=t2627;
  p_output1[42]=0.333333333333333*t2111*t4899;
  p_output1[43]=-0.333333333333333*t2111*t4899;
  p_output1[44]=-1.;
  p_output1[45]=t2627;
  p_output1[46]=t2794;
  p_output1[47]=1.;
  p_output1[48]=t2627;
  p_output1[49]=0.333333333333333*t2111*t5062;
  p_output1[50]=-0.333333333333333*t2111*t5062;
  p_output1[51]=-1.;
  p_output1[52]=t2627;
  p_output1[53]=t2794;
  p_output1[54]=1.;
  p_output1[55]=t2627;
  p_output1[56]=0.333333333333333*t2111*t5326;
  p_output1[57]=-0.333333333333333*t2111*t5326;
  p_output1[58]=-1.;
  p_output1[59]=t2627;
  p_output1[60]=t2794;
  p_output1[61]=1.;
  p_output1[62]=t2627;
  p_output1[63]=0.333333333333333*t10870*t2111;
  p_output1[64]=-0.333333333333333*t10870*t2111;
  p_output1[65]=-1.;
  p_output1[66]=t2627;
  p_output1[67]=t2794;
  p_output1[68]=1.;
  p_output1[69]=t2627;
  p_output1[70]=0.333333333333333*t11216*t2111;
  p_output1[71]=-0.333333333333333*t11216*t2111;
  p_output1[72]=-1.;
  p_output1[73]=t2627;
  p_output1[74]=t2794;
  p_output1[75]=1.;
  p_output1[76]=t2627;
  p_output1[77]=0.333333333333333*t11792*t2111;
  p_output1[78]=-0.333333333333333*t11792*t2111;
  p_output1[79]=-1.;
  p_output1[80]=t2627;
  p_output1[81]=t2794;
  p_output1[82]=1.;
  p_output1[83]=t2627;
  p_output1[84]=0.333333333333333*t12550*t2111;
  p_output1[85]=-0.333333333333333*t12550*t2111;
  p_output1[86]=-1.;
  p_output1[87]=t2627;
  p_output1[88]=t2794;
  p_output1[89]=1.;
  p_output1[90]=t2627;
  p_output1[91]=0.333333333333333*t12847*t2111;
  p_output1[92]=-0.333333333333333*t12847*t2111;
  p_output1[93]=-1.;
  p_output1[94]=t2627;
  p_output1[95]=t2794;
  p_output1[96]=1.;
  p_output1[97]=t2627;
  p_output1[98]=0.333333333333333*t13143*t2111;
  p_output1[99]=-0.333333333333333*t13143*t2111;
  p_output1[100]=-1.;
  p_output1[101]=t2627;
  p_output1[102]=t2794;
  p_output1[103]=1.;
  p_output1[104]=t2627;
  p_output1[105]=0.333333333333333*t13313*t2111;
  p_output1[106]=-0.333333333333333*t13313*t2111;
  p_output1[107]=-1.;
  p_output1[108]=t2627;
  p_output1[109]=t2794;
  p_output1[110]=1.;
  p_output1[111]=t2627;
  p_output1[112]=0.333333333333333*t13331*t2111;
  p_output1[113]=-0.333333333333333*t13331*t2111;
  p_output1[114]=-1.;
  p_output1[115]=t2627;
  p_output1[116]=t2794;
  p_output1[117]=1.;
  p_output1[118]=t2627;
  p_output1[119]=0.333333333333333*t13431*t2111;
  p_output1[120]=-0.333333333333333*t13431*t2111;
  p_output1[121]=-1.;
  p_output1[122]=t2627;
  p_output1[123]=t2794;
  p_output1[124]=1.;
  p_output1[125]=t2627;
  p_output1[126]=0.25*t13731*t2111;
  p_output1[127]=-0.25*t13731*t2111;
  p_output1[128]=-0.5;
  p_output1[129]=t13736;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t13739;
  p_output1[133]=0.25*t13781*t2111;
  p_output1[134]=-0.25*t13781*t2111;
  p_output1[135]=-0.5;
  p_output1[136]=t13736;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t13739;
  p_output1[140]=0.25*t14137*t2111;
  p_output1[141]=-0.25*t14137*t2111;
  p_output1[142]=-0.5;
  p_output1[143]=t13736;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t13739;
  p_output1[147]=0.25*t14377*t2111;
  p_output1[148]=-0.25*t14377*t2111;
  p_output1[149]=-0.5;
  p_output1[150]=t13736;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t13739;
  p_output1[154]=0.25*t14386*t2111;
  p_output1[155]=-0.25*t14386*t2111;
  p_output1[156]=-0.5;
  p_output1[157]=t13736;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t13739;
  p_output1[161]=0.25*t17066*t2111;
  p_output1[162]=-0.25*t17066*t2111;
  p_output1[163]=-0.5;
  p_output1[164]=t13736;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t13739;
  p_output1[168]=0.25*t17415*t2111;
  p_output1[169]=-0.25*t17415*t2111;
  p_output1[170]=-0.5;
  p_output1[171]=t13736;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t13739;
  p_output1[175]=0.25*t17867*t2111;
  p_output1[176]=-0.25*t17867*t2111;
  p_output1[177]=-0.5;
  p_output1[178]=t13736;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t13739;
  p_output1[182]=0.25*t18319*t2111;
  p_output1[183]=-0.25*t18319*t2111;
  p_output1[184]=-0.5;
  p_output1[185]=t13736;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t13739;
  p_output1[189]=0.25*t18480*t2111;
  p_output1[190]=-0.25*t18480*t2111;
  p_output1[191]=-0.5;
  p_output1[192]=t13736;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t13739;
  p_output1[196]=0.25*t18575*t2111;
  p_output1[197]=-0.25*t18575*t2111;
  p_output1[198]=-0.5;
  p_output1[199]=t13736;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t13739;
  p_output1[203]=0.25*t18630*t2111;
  p_output1[204]=-0.25*t18630*t2111;
  p_output1[205]=-0.5;
  p_output1[206]=t13736;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t13739;
  p_output1[210]=0.25*t19113*t2111;
  p_output1[211]=-0.25*t19113*t2111;
  p_output1[212]=-0.5;
  p_output1[213]=t13736;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t13739;
  p_output1[217]=0.25*t19206*t2111;
  p_output1[218]=-0.25*t19206*t2111;
  p_output1[219]=-0.5;
  p_output1[220]=t13736;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t13739;
  p_output1[224]=0.25*t20401*t2111;
  p_output1[225]=-0.25*t20401*t2111;
  p_output1[226]=-0.5;
  p_output1[227]=t13736;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t13739;
  p_output1[231]=0.25*t20610*t2111;
  p_output1[232]=-0.25*t20610*t2111;
  p_output1[233]=-0.5;
  p_output1[234]=t13736;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t13739;
  p_output1[238]=0.25*t20633*t2111;
  p_output1[239]=-0.25*t20633*t2111;
  p_output1[240]=-0.5;
  p_output1[241]=t13736;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t13739;
  p_output1[245]=0.25*t20973*t2111;
  p_output1[246]=-0.25*t20973*t2111;
  p_output1[247]=-0.5;
  p_output1[248]=t13736;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t13739;
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
