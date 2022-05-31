/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:32 GMT+02:00
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
  double t247;
  double t419;
  double t631;
  double t794;
  double t896;
  double t897;
  double t921;
  double t983;
  double t1055;
  double t981;
  double t1507;
  double t1526;
  double t1735;
  double t1835;
  double t2166;
  double t2172;
  double t2422;
  double t3138;
  double t3707;
  double t3711;
  double t4375;
  double t4381;
  double t4564;
  double t4565;
  double t4666;
  double t4698;
  double t4719;
  double t4722;
  double t4760;
  double t4797;
  double t4825;
  double t4835;
  double t4859;
  double t4862;
  double t4905;
  double t4920;
  double t4966;
  double t4980;
  double t5024;
  double t5033;
  double t5082;
  double t5092;
  double t5109;
  double t5117;
  double t5161;
  double t5191;
  double t5153;
  double t5157;
  double t5200;
  double t5211;
  double t5220;
  double t5231;
  double t5264;
  double t5266;
  double t5270;
  double t5292;
  double t5347;
  double t5349;
  double t5358;
  double t5380;
  double t5418;
  double t5431;
  double t5441;
  double t5442;
  double t5485;
  double t5500;
  double t5522;
  double t5525;
  double t5529;
  double t5531;
  double t5543;
  double t5547;
  double t5569;
  double t5576;
  double t5583;
  double t5593;
  double t5604;
  double t5615;
  double t5621;
  double t5647;
  t247 = 4.*var5[0];
  t419 = var3[0] + t247 + var7[0];
  t631 = -1. + var8[0];
  t794 = 1/t631;
  t896 = -1.*var1[0];
  t897 = t896 + var1[1];
  t921 = -0.333333333333333*t794*t897;
  t983 = 4.*var5[1];
  t1055 = var3[1] + t983 + var7[1];
  t981 = -1.33333333333333*t794*t897;
  t1507 = 4.*var5[2];
  t1526 = var3[2] + t1507 + var7[2];
  t1735 = 4.*var5[3];
  t1835 = var3[3] + t1735 + var7[3];
  t2166 = 4.*var5[4];
  t2172 = var3[4] + t2166 + var7[4];
  t2422 = 4.*var5[5];
  t3138 = var3[5] + t2422 + var7[5];
  t3707 = 4.*var5[6];
  t3711 = var3[6] + t3707 + var7[6];
  t4375 = 4.*var5[7];
  t4381 = var3[7] + t4375 + var7[7];
  t4564 = 4.*var5[8];
  t4565 = var3[8] + t4564 + var7[8];
  t4666 = 4.*var5[9];
  t4698 = var3[9] + t4666 + var7[9];
  t4719 = 4.*var5[10];
  t4722 = var3[10] + t4719 + var7[10];
  t4760 = 4.*var5[11];
  t4797 = var3[11] + t4760 + var7[11];
  t4825 = 4.*var5[12];
  t4835 = var3[12] + t4825 + var7[12];
  t4859 = 4.*var5[13];
  t4862 = var3[13] + t4859 + var7[13];
  t4905 = 4.*var5[14];
  t4920 = var3[14] + t4905 + var7[14];
  t4966 = 4.*var5[15];
  t4980 = var3[15] + t4966 + var7[15];
  t5024 = 4.*var5[16];
  t5033 = var3[16] + t5024 + var7[16];
  t5082 = 4.*var5[17];
  t5092 = var3[17] + t5082 + var7[17];
  t5109 = -1.*var7[0];
  t5117 = var3[0] + t5109;
  t5161 = -1.*var7[1];
  t5191 = var3[1] + t5161;
  t5153 = -0.25*t794*t897;
  t5157 = 0.25*t794*t897;
  t5200 = -1.*var7[2];
  t5211 = var3[2] + t5200;
  t5220 = -1.*var7[3];
  t5231 = var3[3] + t5220;
  t5264 = -1.*var7[4];
  t5266 = var3[4] + t5264;
  t5270 = -1.*var7[5];
  t5292 = var3[5] + t5270;
  t5347 = -1.*var7[6];
  t5349 = var3[6] + t5347;
  t5358 = -1.*var7[7];
  t5380 = var3[7] + t5358;
  t5418 = -1.*var7[8];
  t5431 = var3[8] + t5418;
  t5441 = -1.*var7[9];
  t5442 = var3[9] + t5441;
  t5485 = -1.*var7[10];
  t5500 = var3[10] + t5485;
  t5522 = -1.*var7[11];
  t5525 = var3[11] + t5522;
  t5529 = -1.*var7[12];
  t5531 = var3[12] + t5529;
  t5543 = -1.*var7[13];
  t5547 = var3[13] + t5543;
  t5569 = -1.*var7[14];
  t5576 = var3[14] + t5569;
  t5583 = -1.*var7[15];
  t5593 = var3[15] + t5583;
  t5604 = -1.*var7[16];
  t5615 = var3[16] + t5604;
  t5621 = -1.*var7[17];
  t5647 = var3[17] + t5621;
  p_output1[0]=0.333333333333333*t419*t794;
  p_output1[1]=-0.333333333333333*t419*t794;
  p_output1[2]=-1.;
  p_output1[3]=t921;
  p_output1[4]=t981;
  p_output1[5]=1.;
  p_output1[6]=t921;
  p_output1[7]=0.333333333333333*t1055*t794;
  p_output1[8]=-0.333333333333333*t1055*t794;
  p_output1[9]=-1.;
  p_output1[10]=t921;
  p_output1[11]=t981;
  p_output1[12]=1.;
  p_output1[13]=t921;
  p_output1[14]=0.333333333333333*t1526*t794;
  p_output1[15]=-0.333333333333333*t1526*t794;
  p_output1[16]=-1.;
  p_output1[17]=t921;
  p_output1[18]=t981;
  p_output1[19]=1.;
  p_output1[20]=t921;
  p_output1[21]=0.333333333333333*t1835*t794;
  p_output1[22]=-0.333333333333333*t1835*t794;
  p_output1[23]=-1.;
  p_output1[24]=t921;
  p_output1[25]=t981;
  p_output1[26]=1.;
  p_output1[27]=t921;
  p_output1[28]=0.333333333333333*t2172*t794;
  p_output1[29]=-0.333333333333333*t2172*t794;
  p_output1[30]=-1.;
  p_output1[31]=t921;
  p_output1[32]=t981;
  p_output1[33]=1.;
  p_output1[34]=t921;
  p_output1[35]=0.333333333333333*t3138*t794;
  p_output1[36]=-0.333333333333333*t3138*t794;
  p_output1[37]=-1.;
  p_output1[38]=t921;
  p_output1[39]=t981;
  p_output1[40]=1.;
  p_output1[41]=t921;
  p_output1[42]=0.333333333333333*t3711*t794;
  p_output1[43]=-0.333333333333333*t3711*t794;
  p_output1[44]=-1.;
  p_output1[45]=t921;
  p_output1[46]=t981;
  p_output1[47]=1.;
  p_output1[48]=t921;
  p_output1[49]=0.333333333333333*t4381*t794;
  p_output1[50]=-0.333333333333333*t4381*t794;
  p_output1[51]=-1.;
  p_output1[52]=t921;
  p_output1[53]=t981;
  p_output1[54]=1.;
  p_output1[55]=t921;
  p_output1[56]=0.333333333333333*t4565*t794;
  p_output1[57]=-0.333333333333333*t4565*t794;
  p_output1[58]=-1.;
  p_output1[59]=t921;
  p_output1[60]=t981;
  p_output1[61]=1.;
  p_output1[62]=t921;
  p_output1[63]=0.333333333333333*t4698*t794;
  p_output1[64]=-0.333333333333333*t4698*t794;
  p_output1[65]=-1.;
  p_output1[66]=t921;
  p_output1[67]=t981;
  p_output1[68]=1.;
  p_output1[69]=t921;
  p_output1[70]=0.333333333333333*t4722*t794;
  p_output1[71]=-0.333333333333333*t4722*t794;
  p_output1[72]=-1.;
  p_output1[73]=t921;
  p_output1[74]=t981;
  p_output1[75]=1.;
  p_output1[76]=t921;
  p_output1[77]=0.333333333333333*t4797*t794;
  p_output1[78]=-0.333333333333333*t4797*t794;
  p_output1[79]=-1.;
  p_output1[80]=t921;
  p_output1[81]=t981;
  p_output1[82]=1.;
  p_output1[83]=t921;
  p_output1[84]=0.333333333333333*t4835*t794;
  p_output1[85]=-0.333333333333333*t4835*t794;
  p_output1[86]=-1.;
  p_output1[87]=t921;
  p_output1[88]=t981;
  p_output1[89]=1.;
  p_output1[90]=t921;
  p_output1[91]=0.333333333333333*t4862*t794;
  p_output1[92]=-0.333333333333333*t4862*t794;
  p_output1[93]=-1.;
  p_output1[94]=t921;
  p_output1[95]=t981;
  p_output1[96]=1.;
  p_output1[97]=t921;
  p_output1[98]=0.333333333333333*t4920*t794;
  p_output1[99]=-0.333333333333333*t4920*t794;
  p_output1[100]=-1.;
  p_output1[101]=t921;
  p_output1[102]=t981;
  p_output1[103]=1.;
  p_output1[104]=t921;
  p_output1[105]=0.333333333333333*t4980*t794;
  p_output1[106]=-0.333333333333333*t4980*t794;
  p_output1[107]=-1.;
  p_output1[108]=t921;
  p_output1[109]=t981;
  p_output1[110]=1.;
  p_output1[111]=t921;
  p_output1[112]=0.333333333333333*t5033*t794;
  p_output1[113]=-0.333333333333333*t5033*t794;
  p_output1[114]=-1.;
  p_output1[115]=t921;
  p_output1[116]=t981;
  p_output1[117]=1.;
  p_output1[118]=t921;
  p_output1[119]=0.333333333333333*t5092*t794;
  p_output1[120]=-0.333333333333333*t5092*t794;
  p_output1[121]=-1.;
  p_output1[122]=t921;
  p_output1[123]=t981;
  p_output1[124]=1.;
  p_output1[125]=t921;
  p_output1[126]=0.25*t5117*t794;
  p_output1[127]=-0.25*t5117*t794;
  p_output1[128]=-0.5;
  p_output1[129]=t5153;
  p_output1[130]=1.;
  p_output1[131]=-0.5;
  p_output1[132]=t5157;
  p_output1[133]=0.25*t5191*t794;
  p_output1[134]=-0.25*t5191*t794;
  p_output1[135]=-0.5;
  p_output1[136]=t5153;
  p_output1[137]=1.;
  p_output1[138]=-0.5;
  p_output1[139]=t5157;
  p_output1[140]=0.25*t5211*t794;
  p_output1[141]=-0.25*t5211*t794;
  p_output1[142]=-0.5;
  p_output1[143]=t5153;
  p_output1[144]=1.;
  p_output1[145]=-0.5;
  p_output1[146]=t5157;
  p_output1[147]=0.25*t5231*t794;
  p_output1[148]=-0.25*t5231*t794;
  p_output1[149]=-0.5;
  p_output1[150]=t5153;
  p_output1[151]=1.;
  p_output1[152]=-0.5;
  p_output1[153]=t5157;
  p_output1[154]=0.25*t5266*t794;
  p_output1[155]=-0.25*t5266*t794;
  p_output1[156]=-0.5;
  p_output1[157]=t5153;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t5157;
  p_output1[161]=0.25*t5292*t794;
  p_output1[162]=-0.25*t5292*t794;
  p_output1[163]=-0.5;
  p_output1[164]=t5153;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t5157;
  p_output1[168]=0.25*t5349*t794;
  p_output1[169]=-0.25*t5349*t794;
  p_output1[170]=-0.5;
  p_output1[171]=t5153;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t5157;
  p_output1[175]=0.25*t5380*t794;
  p_output1[176]=-0.25*t5380*t794;
  p_output1[177]=-0.5;
  p_output1[178]=t5153;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t5157;
  p_output1[182]=0.25*t5431*t794;
  p_output1[183]=-0.25*t5431*t794;
  p_output1[184]=-0.5;
  p_output1[185]=t5153;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t5157;
  p_output1[189]=0.25*t5442*t794;
  p_output1[190]=-0.25*t5442*t794;
  p_output1[191]=-0.5;
  p_output1[192]=t5153;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t5157;
  p_output1[196]=0.25*t5500*t794;
  p_output1[197]=-0.25*t5500*t794;
  p_output1[198]=-0.5;
  p_output1[199]=t5153;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t5157;
  p_output1[203]=0.25*t5525*t794;
  p_output1[204]=-0.25*t5525*t794;
  p_output1[205]=-0.5;
  p_output1[206]=t5153;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t5157;
  p_output1[210]=0.25*t5531*t794;
  p_output1[211]=-0.25*t5531*t794;
  p_output1[212]=-0.5;
  p_output1[213]=t5153;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t5157;
  p_output1[217]=0.25*t5547*t794;
  p_output1[218]=-0.25*t5547*t794;
  p_output1[219]=-0.5;
  p_output1[220]=t5153;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t5157;
  p_output1[224]=0.25*t5576*t794;
  p_output1[225]=-0.25*t5576*t794;
  p_output1[226]=-0.5;
  p_output1[227]=t5153;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t5157;
  p_output1[231]=0.25*t5593*t794;
  p_output1[232]=-0.25*t5593*t794;
  p_output1[233]=-0.5;
  p_output1[234]=t5153;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t5157;
  p_output1[238]=0.25*t5615*t794;
  p_output1[239]=-0.25*t5615*t794;
  p_output1[240]=-0.5;
  p_output1[241]=t5153;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t5157;
  p_output1[245]=0.25*t5647*t794;
  p_output1[246]=-0.25*t5647*t794;
  p_output1[247]=-0.5;
  p_output1[248]=t5153;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t5157;
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
