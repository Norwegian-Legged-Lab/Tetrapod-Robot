/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:19 GMT+02:00
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
  double t5676;
  double t5542;
  double t5668;
  double t5678;
  double t15528;
  double t15543;
  double t15557;
  double t15253;
  double t15575;
  double t12953;
  double t15580;
  double t10378;
  double t5675;
  double t5681;
  double t8976;
  double t9089;
  double t15561;
  double t15584;
  double t15590;
  double t15859;
  double t15653;
  double t15833;
  double t15855;
  double t15645;
  double t16015;
  double t16343;
  double t16362;
  double t16841;
  double t16856;
  double t16889;
  double t16890;
  double t16912;
  double t16913;
  double t16924;
  double t17080;
  double t17084;
  double t17085;
  double t17086;
  double t17087;
  double t17089;
  double t17113;
  double t17200;
  double t17317;
  double t16880;
  double t16881;
  double t16887;
  double t17096;
  double t17102;
  double t17598;
  double t17601;
  double t17788;
  double t17814;
  double t17827;
  double t17828;
  double t17829;
  double t17968;
  double t17972;
  double t17978;
  double t17112;
  double t17321;
  double t17351;
  double t16432;
  double t16450;
  double t16457;
  double t16468;
  double t16469;
  double t16500;
  double t16539;
  double t16589;
  double t16592;
  double t17964;
  double t17979;
  double t17993;
  double t17999;
  double t18010;
  double t18019;
  double t18217;
  double t18224;
  double t18237;
  double t16630;
  double t16660;
  double t16753;
  double t17583;
  double t18277;
  double t10287;
  double t15618;
  double t15627;
  double t18281;
  double t18324;
  double t18327;
  double t18585;
  double t18658;
  double t18673;
  double t18705;
  double t19059;
  double t19077;
  t5676 = Cos(var1[10]);
  t5542 = Cos(var1[11]);
  t5668 = Sin(var1[10]);
  t5678 = Sin(var1[11]);
  t15528 = -1.*t5676*t5542;
  t15543 = -1.*t5668*t5678;
  t15557 = t15528 + t15543;
  t15253 = Cos(var1[5]);
  t15575 = Sin(var1[9]);
  t12953 = Cos(var1[9]);
  t15580 = Sin(var1[5]);
  t10378 = Cos(var1[4]);
  t5675 = -1.*t5542*t5668;
  t5681 = t5676*t5678;
  t8976 = t5675 + t5681;
  t9089 = Sin(var1[4]);
  t15561 = t12953*t15253*t15557;
  t15584 = -1.*t15575*t15557*t15580;
  t15590 = t15561 + t15584;
  t15859 = Sin(var1[3]);
  t15653 = t15253*t15575*t15557;
  t15833 = t12953*t15557*t15580;
  t15855 = t15653 + t15833;
  t15645 = Cos(var1[3]);
  t16015 = t10378*t8976;
  t16343 = -1.*t9089*t15590;
  t16362 = t16015 + t16343;
  t16841 = -1.*t12953;
  t16856 = 1. + t16841;
  t16889 = -1.*t5676;
  t16890 = 1. + t16889;
  t16912 = -0.28121*t16890;
  t16913 = -1.*t5542;
  t16924 = 1. + t16913;
  t17080 = -0.50321*t16924;
  t17084 = -0.23321*t5542;
  t17085 = t17080 + t17084;
  t17086 = t5676*t17085;
  t17087 = 0.27*t5668*t5678;
  t17089 = t16912 + t17086 + t17087;
  t17113 = -0.15121*t16856;
  t17200 = t12953*t17089;
  t17317 = t17113 + t17200;
  t16880 = 0.15121*t16856;
  t16881 = 0.15121*t12953;
  t16887 = 0.15121*t15575;
  t17096 = t15575*t17089;
  t17102 = t16880 + t16881 + t16887 + t17096;
  t17598 = t15253*t15575;
  t17601 = t12953*t15580;
  t17788 = t17598 + t17601;
  t17814 = 0.28121*t5668;
  t17827 = t17085*t5668;
  t17828 = -0.27*t5676*t5678;
  t17829 = t17814 + t17827 + t17828;
  t17968 = t15253*t17317;
  t17972 = -1.*t17102*t15580;
  t17978 = t17968 + t17972;
  t17112 = t15253*t17102;
  t17321 = t17317*t15580;
  t17351 = t17112 + t17321;
  t16432 = t5676*t5542;
  t16450 = t5668*t5678;
  t16457 = t16432 + t16450;
  t16468 = t16457*t9089;
  t16469 = t12953*t15253*t8976;
  t16500 = -1.*t15575*t8976*t15580;
  t16539 = t16469 + t16500;
  t16589 = t10378*t16539;
  t16592 = t16468 + t16589;
  t17964 = t17829*t9089;
  t17979 = t10378*t17978;
  t17993 = t17964 + t17979;
  t17999 = t10378*t17829;
  t18010 = -1.*t9089*t17978;
  t18019 = t17999 + t18010;
  t18217 = t15253*t15575*t8976;
  t18224 = t12953*t8976*t15580;
  t18237 = t18217 + t18224;
  t16630 = -1.*t12953*t15253;
  t16660 = t15575*t15580;
  t16753 = t16630 + t16660;
  t17583 = -1.*t16753*t17351;
  t18277 = t18237*t17351;
  t10287 = t8976*t9089;
  t15618 = t10378*t15590;
  t15627 = t10287 + t15618;
  t18281 = t10378*t16457;
  t18324 = -1.*t9089*t16539;
  t18327 = t18281 + t18324;
  t18585 = -1.*t18237*t17351;
  t18658 = t15855*t17351;
  t18673 = -1.*t17829*t16457;
  t18705 = t17829*t8976;
  t19059 = t16753*t17351;
  t19077 = -1.*t15855*t17351;
  p_output1[0]=t15627;
  p_output1[1]=t15645*t15855 - 1.*t15859*t16362;
  p_output1[2]=t15855*t15859 + t15645*t16362;
  p_output1[3]=t10378*t17788*(t16592*t17993 + t18277 + t18019*t18327) + t16592*(t17583 - 1.*t10378*t17788*t17993 + t17788*t18019*t9089);
  p_output1[4]=(t17583 - 1.*t17788*t17978)*t18237 + t16753*(t16457*t17829 + t16539*t17978 + t18277);
  p_output1[5]=t16457*(t12953*t17102 - 1.*t15575*t17317);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t15557 + 0.15121*t16457;
  p_output1[10]=0.28121*t5678 + t17085*t5678 - 0.27*t5542*t5678;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10378*t17788;
  p_output1[19]=t15645*t16753 + t15859*t17788*t9089;
  p_output1[20]=t15859*t16753 - 1.*t15645*t17788*t9089;
  p_output1[21]=t15627*(-1.*t16592*t17993 - 1.*t18019*t18327 + t18585) + t16592*(t15627*t17993 + t16362*t18019 + t18658);
  p_output1[22]=t15855*(-1.*t16539*t17978 + t18585 + t18673) + t18237*(t15590*t17978 + t18658 + t18705);
  p_output1[23]=t16457*(t15557*t15575*t17102 + t12953*t15557*t17317 + t18705) + t8976*(t18673 - 1.*t15575*t17102*t8976 - 1.*t12953*t17317*t8976);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t16457*(t15557*t17089 + t18705) + t8976*(t18673 - 1.*t17089*t8976);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16592;
  p_output1[37]=t15645*t18237 - 1.*t15859*t18327;
  p_output1[38]=t15859*t18237 + t15645*t18327;
  p_output1[39]=t10378*t17788*(-1.*t15627*t17993 - 1.*t16362*t18019 + t19077) + t15627*(t10378*t17788*t17993 + t19059 - 1.*t17788*t18019*t9089);
  p_output1[40]=t15855*(t17788*t17978 + t19059) + t16753*(-1.*t15590*t17978 + t19077 - 1.*t17829*t8976);
  p_output1[41]=(-1.*t12953*t17102 + t15575*t17317)*t8976;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t5542 + t17085*t5542 + 0.27*Power(t5678,2);
  p_output1[47]=-0.27;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
