/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:04 GMT+02:00
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
  double t3162;
  double t430;
  double t615;
  double t3216;
  double t2334;
  double t3868;
  double t6240;
  double t8339;
  double t6255;
  double t144;
  double t8241;
  double t8347;
  double t8315;
  double t8327;
  double t8337;
  double t8314;
  double t8338;
  double t8348;
  double t8357;
  double t8617;
  double t8627;
  double t8558;
  double t8559;
  double t8562;
  double t8570;
  double t8591;
  double t8600;
  double t8618;
  double t8621;
  double t8625;
  double t8629;
  double t8631;
  double t8634;
  double t8704;
  double t8706;
  double t8709;
  double t8747;
  double t8748;
  double t8749;
  double t8754;
  double t8763;
  double t8765;
  double t8557;
  double t8611;
  double t8613;
  double t8808;
  double t8809;
  double t8810;
  double t8812;
  double t8813;
  double t8814;
  double t8817;
  double t8818;
  double t8821;
  double t8477;
  double t8531;
  double t8556;
  double t8806;
  double t8811;
  double t8822;
  double t8823;
  double t8829;
  double t8830;
  double t8833;
  double t8835;
  double t8836;
  double t8837;
  double t8802;
  double t8803;
  double t8804;
  double t8805;
  double t8824;
  double t8825;
  double t8854;
  double t8860;
  double t8862;
  double t8866;
  double t8867;
  double t8868;
  double t8827;
  double t8843;
  double t8845;
  double t8863;
  double t8870;
  double t8871;
  double t8873;
  double t8875;
  double t8877;
  double t8189;
  double t8358;
  double t8360;
  double t8846;
  double t8881;
  double t8889;
  double t8896;
  double t8903;
  double t8915;
  double t8926;
  double t8930;
  double t8940;
  double t8935;
  double t8948;
  double t8963;
  double t9009;
  double t9000;
  t3162 = Cos(var1[10]);
  t430 = Cos(var1[11]);
  t615 = Sin(var1[10]);
  t3216 = Sin(var1[11]);
  t2334 = t430*t615;
  t3868 = -1.*t3162*t3216;
  t6240 = t2334 + t3868;
  t8339 = Sin(var1[9]);
  t6255 = Sin(var1[4]);
  t144 = Cos(var1[9]);
  t8241 = Cos(var1[4]);
  t8347 = Sin(var1[5]);
  t8315 = t3162*t430;
  t8327 = t615*t3216;
  t8337 = t8315 + t8327;
  t8314 = Cos(var1[5]);
  t8338 = t8314*t8337;
  t8348 = t8339*t6240*t8347;
  t8357 = t8338 + t8348;
  t8617 = Cos(var1[3]);
  t8627 = Sin(var1[3]);
  t8558 = -1.*t430*t615;
  t8559 = t3162*t3216;
  t8562 = t8558 + t8559;
  t8570 = t8314*t8562;
  t8591 = t8339*t8337*t8347;
  t8600 = t8570 + t8591;
  t8618 = -1.*t8314*t8339*t6240;
  t8621 = t8337*t8347;
  t8625 = t8618 + t8621;
  t8629 = t144*t8241*t6240;
  t8631 = -1.*t6255*t8357;
  t8634 = t8629 + t8631;
  t8704 = t8241*t8339;
  t8706 = t144*t6255*t8347;
  t8709 = t8704 + t8706;
  t8747 = -1.*t8314*t8339*t8337;
  t8748 = t8562*t8347;
  t8749 = t8747 + t8748;
  t8754 = t144*t8241*t8337;
  t8763 = -1.*t6255*t8600;
  t8765 = t8754 + t8763;
  t8557 = t144*t8337*t6255;
  t8611 = t8241*t8600;
  t8613 = t8557 + t8611;
  t8808 = -0.0641*t430;
  t8809 = -0.28*t3216;
  t8810 = t8808 + t8809;
  t8812 = -1.*t430;
  t8813 = 1. + t8812;
  t8814 = -0.575*t8813;
  t8817 = -0.295*t430;
  t8818 = -0.0641*t3216;
  t8821 = t8814 + t8817 + t8818;
  t8477 = t8339*t6255;
  t8531 = -1.*t144*t8241*t8347;
  t8556 = t8477 + t8531;
  t8806 = 0.325*t615;
  t8811 = t3162*t8810;
  t8822 = t615*t8821;
  t8823 = t8806 + t8811 + t8822;
  t8829 = -1.*t3162;
  t8830 = 1. + t8829;
  t8833 = -0.325*t8830;
  t8835 = -1.*t615*t8810;
  t8836 = t3162*t8821;
  t8837 = t8833 + t8835 + t8836;
  t8802 = -1.*t144;
  t8803 = 1. + t8802;
  t8804 = 0.1575*t8803;
  t8805 = 0.2255*t144;
  t8824 = -1.*t8339*t8823;
  t8825 = t8804 + t8805 + t8824;
  t8854 = 0.068*t8339;
  t8860 = t144*t8823;
  t8862 = t8854 + t8860;
  t8866 = t8314*t8837;
  t8867 = -1.*t8825*t8347;
  t8868 = t8866 + t8867;
  t8827 = t8314*t8825;
  t8843 = t8837*t8347;
  t8845 = t8827 + t8843;
  t8863 = t8862*t6255;
  t8870 = t8241*t8868;
  t8871 = t8863 + t8870;
  t8873 = t8241*t8862;
  t8875 = -1.*t6255*t8868;
  t8877 = t8873 + t8875;
  t8189 = t144*t6240*t6255;
  t8358 = t8241*t8357;
  t8360 = t8189 + t8358;
  t8846 = -1.*t144*t8314*t8845;
  t8881 = t8845*t8749;
  t8889 = t8845*t8625;
  t8896 = -1.*t8845*t8749;
  t8903 = t144*t8314*t8845;
  t8915 = -1.*t8845*t8625;
  t8926 = -1.*t8339*t8862;
  t8930 = t144*t8862*t8337;
  t8940 = -1.*t144*t8862*t8337;
  t8935 = t144*t8862*t6240;
  t8948 = t8339*t8862;
  t8963 = -1.*t144*t8862*t6240;
  t9009 = t8837*t8337;
  t9000 = -1.*t8837*t8562;
  p_output1[0]=t8360;
  p_output1[1]=t8556;
  p_output1[2]=t8613;
  p_output1[3]=t8617*t8625 - 1.*t8627*t8634;
  p_output1[4]=t144*t8314*t8617 - 1.*t8627*t8709;
  p_output1[5]=t8617*t8749 - 1.*t8627*t8765;
  p_output1[6]=t8625*t8627 + t8617*t8634;
  p_output1[7]=t144*t8314*t8627 + t8617*t8709;
  p_output1[8]=t8627*t8749 + t8617*t8765;
  p_output1[9]=t8613*(t8846 - 1.*t8556*t8871 - 1.*t8709*t8877) + t8556*(t8613*t8871 + t8765*t8877 + t8881);
  p_output1[10]=t8613*(t8360*t8871 + t8634*t8877 + t8889) + t8360*(-1.*t8613*t8871 - 1.*t8765*t8877 + t8896);
  p_output1[11]=t8360*(t8556*t8871 + t8709*t8877 + t8903) + t8556*(-1.*t8360*t8871 - 1.*t8634*t8877 + t8915);
  p_output1[12]=t8749*(t8846 + t144*t8347*t8868 + t8926) + t144*t8314*(t8600*t8868 + t8881 + t8930);
  p_output1[13]=t8749*(t8357*t8868 + t8889 + t8935) + t8625*(-1.*t8600*t8868 + t8896 + t8940);
  p_output1[14]=t8625*(-1.*t144*t8347*t8868 + t8903 + t8948) + t144*t8314*(-1.*t8357*t8868 + t8915 + t8963);
  p_output1[15]=t144*t8337*(-1.*t144*t8825 + t8926) + t8339*(-1.*t8337*t8339*t8825 + t8562*t8837 + t8930);
  p_output1[16]=t144*t6240*(t8337*t8339*t8825 + t8940 + t9000) + t144*t8337*(-1.*t6240*t8339*t8825 + t8935 + t9009);
  p_output1[17]=t144*t6240*(t144*t8825 + t8948) + t8339*(t6240*t8339*t8825 - 1.*t8337*t8837 + t8963);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t6240 - 0.2255*t8562;
  p_output1[28]=t8337*(-1.*t8337*t8823 + t9000) + t8562*(t6240*t8823 + t9009);
  p_output1[29]=0.068*t8337;
  p_output1[30]=-0.325*t3216 - 1.*t430*t8810 - 1.*t3216*t8821;
  p_output1[31]=0;
  p_output1[32]=0.325*t430 - 1.*t3216*t8810 + t430*t8821;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
