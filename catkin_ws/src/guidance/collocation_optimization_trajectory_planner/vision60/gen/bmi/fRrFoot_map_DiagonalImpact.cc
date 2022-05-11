/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:40 GMT+02:00
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
  double t3284;
  double t3273;
  double t3278;
  double t3286;
  double t3282;
  double t3566;
  double t3568;
  double t3734;
  double t4493;
  double t3831;
  double t3897;
  double t3902;
  double t4503;
  double t3267;
  double t3727;
  double t3578;
  double t3907;
  double t4505;
  double t4506;
  double t4571;
  double t4560;
  double t4561;
  double t4563;
  double t4557;
  double t4577;
  double t4578;
  double t4591;
  double t4641;
  double t4643;
  double t4645;
  double t4647;
  double t4648;
  double t4650;
  double t4651;
  double t4652;
  double t4653;
  double t4639;
  double t4646;
  double t4654;
  double t4655;
  double t4663;
  double t4666;
  double t4667;
  double t4669;
  double t4670;
  double t4673;
  double t4631;
  double t4632;
  double t4634;
  double t4635;
  double t4657;
  double t4659;
  double t4708;
  double t4709;
  double t4744;
  double t4746;
  double t4763;
  double t4764;
  double t4682;
  double t4684;
  double t4688;
  double t4662;
  double t4674;
  double t4679;
  double t4611;
  double t4616;
  double t4617;
  double t4745;
  double t4775;
  double t4776;
  double t4605;
  double t4623;
  double t4624;
  double t4628;
  double t4629;
  double t4630;
  double t4914;
  double t4917;
  double t4918;
  double t4941;
  double t4945;
  double t4946;
  double t4680;
  double t4959;
  double t4997;
  double t5146;
  double t4790;
  double t4791;
  double t4876;
  double t3642;
  double t4507;
  double t4510;
  double t4974;
  double t4977;
  double t4981;
  double t5349;
  double t5359;
  double t8931;
  double t5392;
  double t9062;
  double t9037;
  double t9082;
  double t9088;
  double t9094;
  double t9099;
  t3284 = Cos(var1[16]);
  t3273 = Cos(var1[17]);
  t3278 = Sin(var1[16]);
  t3286 = Sin(var1[17]);
  t3282 = t3273*t3278;
  t3566 = -1.*t3284*t3286;
  t3568 = t3282 + t3566;
  t3734 = Cos(var1[5]);
  t4493 = Sin(var1[15]);
  t3831 = t3284*t3273;
  t3897 = t3278*t3286;
  t3902 = t3831 + t3897;
  t4503 = Sin(var1[5]);
  t3267 = Cos(var1[15]);
  t3727 = Cos(var1[4]);
  t3578 = Sin(var1[4]);
  t3907 = t3734*t3902;
  t4505 = t4493*t3568*t4503;
  t4506 = t3907 + t4505;
  t4571 = Sin(var1[3]);
  t4560 = -1.*t3734*t4493*t3568;
  t4561 = t3902*t4503;
  t4563 = t4560 + t4561;
  t4557 = Cos(var1[3]);
  t4577 = t3267*t3727*t3568;
  t4578 = -1.*t3578*t4506;
  t4591 = t4577 + t4578;
  t4641 = -0.0641*t3273;
  t4643 = -0.28*t3286;
  t4645 = t4641 + t4643;
  t4647 = -1.*t3273;
  t4648 = 1. + t4647;
  t4650 = -0.575*t4648;
  t4651 = -0.295*t3273;
  t4652 = -0.0641*t3286;
  t4653 = t4650 + t4651 + t4652;
  t4639 = 0.325*t3278;
  t4646 = t3284*t4645;
  t4654 = t3278*t4653;
  t4655 = t4639 + t4646 + t4654;
  t4663 = -1.*t3284;
  t4666 = 1. + t4663;
  t4667 = -0.325*t4666;
  t4669 = -1.*t3278*t4645;
  t4670 = t3284*t4653;
  t4673 = t4667 + t4669 + t4670;
  t4631 = -1.*t3267;
  t4632 = 1. + t4631;
  t4634 = -0.1575*t4632;
  t4635 = -0.2255*t3267;
  t4657 = -1.*t4493*t4655;
  t4659 = t4634 + t4635 + t4657;
  t4708 = -0.068*t4493;
  t4709 = t3267*t4655;
  t4744 = t4708 + t4709;
  t4746 = t3734*t4673;
  t4763 = -1.*t4659*t4503;
  t4764 = t4746 + t4763;
  t4682 = t4493*t3578;
  t4684 = -1.*t3267*t3727*t4503;
  t4688 = t4682 + t4684;
  t4662 = t3734*t4659;
  t4674 = t4673*t4503;
  t4679 = t4662 + t4674;
  t4611 = -1.*t3273*t3278;
  t4616 = t3284*t3286;
  t4617 = t4611 + t4616;
  t4745 = t4744*t3578;
  t4775 = t3727*t4764;
  t4776 = t4745 + t4775;
  t4605 = t3267*t3902*t3578;
  t4623 = t3734*t4617;
  t4624 = t4493*t3902*t4503;
  t4628 = t4623 + t4624;
  t4629 = t3727*t4628;
  t4630 = t4605 + t4629;
  t4914 = t3727*t4744;
  t4917 = -1.*t3578*t4764;
  t4918 = t4914 + t4917;
  t4941 = -1.*t3734*t4493*t3902;
  t4945 = t4617*t4503;
  t4946 = t4941 + t4945;
  t4680 = -1.*t3267*t3734*t4679;
  t4959 = t4679*t4946;
  t4997 = -1.*t4493*t4744;
  t5146 = t3267*t4744*t3902;
  t4790 = t3727*t4493;
  t4791 = t3267*t3578*t4503;
  t4876 = t4790 + t4791;
  t3642 = t3267*t3568*t3578;
  t4507 = t3727*t4506;
  t4510 = t3642 + t4507;
  t4974 = t3267*t3727*t3902;
  t4977 = -1.*t3578*t4628;
  t4981 = t4974 + t4977;
  t5349 = t4679*t4563;
  t5359 = -1.*t4679*t4946;
  t8931 = -1.*t3267*t4744*t3902;
  t5392 = t3267*t4744*t3568;
  t9062 = t4673*t3902;
  t9037 = -1.*t4673*t4617;
  t9082 = t3267*t3734*t4679;
  t9088 = -1.*t4679*t4563;
  t9094 = t4493*t4744;
  t9099 = -1.*t3267*t4744*t3568;
  p_output1[0]=t4510;
  p_output1[1]=t4557*t4563 - 1.*t4571*t4591;
  p_output1[2]=t4563*t4571 + t4557*t4591;
  p_output1[3]=t4630*(t4680 - 1.*t4688*t4776 - 1.*t4876*t4918) + t4688*(t4630*t4776 + t4959 + t4918*t4981);
  p_output1[4]=t4946*(t4680 + t3267*t4503*t4764 + t4997) + t3267*t3734*(t4628*t4764 + t4959 + t5146);
  p_output1[5]=t3267*t3902*(-1.*t3267*t4659 + t4997) + t4493*(-1.*t3902*t4493*t4659 + t4617*t4673 + t5146);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t3568 + 0.2255*t4617;
  p_output1[16]=-0.325*t3286 - 1.*t3273*t4645 - 1.*t3286*t4653;
  p_output1[17]=-0.0641;
  p_output1[18]=t4688;
  p_output1[19]=t3267*t3734*t4557 - 1.*t4571*t4876;
  p_output1[20]=t3267*t3734*t4571 + t4557*t4876;
  p_output1[21]=t4630*(t4510*t4776 + t4591*t4918 + t5349) + t4510*(-1.*t4630*t4776 - 1.*t4918*t4981 + t5359);
  p_output1[22]=t4946*(t4506*t4764 + t5349 + t5392) + t4563*(-1.*t4628*t4764 + t5359 + t8931);
  p_output1[23]=t3267*t3568*(t3902*t4493*t4659 + t8931 + t9037) + t3267*t3902*(-1.*t3568*t4493*t4659 + t5392 + t9062);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t3902*(-1.*t3902*t4655 + t9037) + t4617*(t3568*t4655 + t9062);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4630;
  p_output1[37]=t4557*t4946 - 1.*t4571*t4981;
  p_output1[38]=t4571*t4946 + t4557*t4981;
  p_output1[39]=t4510*(t4688*t4776 + t4876*t4918 + t9082) + t4688*(-1.*t4510*t4776 - 1.*t4591*t4918 + t9088);
  p_output1[40]=t4563*(-1.*t3267*t4503*t4764 + t9082 + t9094) + t3267*t3734*(-1.*t4506*t4764 + t9088 + t9099);
  p_output1[41]=t3267*t3568*(t3267*t4659 + t9094) + t4493*(t3568*t4493*t4659 - 1.*t3902*t4673 + t9099);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t3902;
  p_output1[52]=0.325*t3273 - 1.*t3286*t4645 + t3273*t4653;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
