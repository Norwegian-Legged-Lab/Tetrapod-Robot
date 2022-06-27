/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:23 GMT+02:00
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
  double t9392;
  double t9137;
  double t9332;
  double t9393;
  double t9386;
  double t9400;
  double t9468;
  double t14050;
  double t9585;
  double t1716;
  double t9734;
  double t14828;
  double t9768;
  double t9790;
  double t9848;
  double t9764;
  double t10677;
  double t14829;
  double t17002;
  double t22772;
  double t22801;
  double t22574;
  double t22578;
  double t22626;
  double t22670;
  double t22735;
  double t22755;
  double t22775;
  double t22777;
  double t22779;
  double t22802;
  double t22804;
  double t22807;
  double t24447;
  double t24451;
  double t24453;
  double t24523;
  double t24524;
  double t24525;
  double t24579;
  double t24583;
  double t24587;
  double t22569;
  double t22765;
  double t22770;
  double t24634;
  double t24635;
  double t24636;
  double t24638;
  double t24639;
  double t24640;
  double t24645;
  double t24646;
  double t24647;
  double t22439;
  double t22544;
  double t22564;
  double t24626;
  double t24637;
  double t24648;
  double t24649;
  double t24653;
  double t24654;
  double t24655;
  double t24656;
  double t24657;
  double t24658;
  double t24622;
  double t24623;
  double t24624;
  double t24625;
  double t24650;
  double t24651;
  double t24662;
  double t24663;
  double t24668;
  double t24674;
  double t24675;
  double t24676;
  double t24652;
  double t24659;
  double t24660;
  double t24673;
  double t24677;
  double t24678;
  double t24680;
  double t24681;
  double t24682;
  double t9613;
  double t17776;
  double t20922;
  double t24661;
  double t24689;
  double t24698;
  double t24714;
  double t24721;
  double t24726;
  double t24733;
  double t24737;
  double t24746;
  double t24742;
  double t24753;
  double t24764;
  double t24783;
  double t24778;
  t9392 = Cos(var1[10]);
  t9137 = Cos(var1[11]);
  t9332 = Sin(var1[10]);
  t9393 = Sin(var1[11]);
  t9386 = t9137*t9332;
  t9400 = -1.*t9392*t9393;
  t9468 = t9386 + t9400;
  t14050 = Sin(var1[9]);
  t9585 = Sin(var1[4]);
  t1716 = Cos(var1[9]);
  t9734 = Cos(var1[4]);
  t14828 = Sin(var1[5]);
  t9768 = t9392*t9137;
  t9790 = t9332*t9393;
  t9848 = t9768 + t9790;
  t9764 = Cos(var1[5]);
  t10677 = t9764*t9848;
  t14829 = t14050*t9468*t14828;
  t17002 = t10677 + t14829;
  t22772 = Cos(var1[3]);
  t22801 = Sin(var1[3]);
  t22574 = -1.*t9137*t9332;
  t22578 = t9392*t9393;
  t22626 = t22574 + t22578;
  t22670 = t9764*t22626;
  t22735 = t14050*t9848*t14828;
  t22755 = t22670 + t22735;
  t22775 = -1.*t9764*t14050*t9468;
  t22777 = t9848*t14828;
  t22779 = t22775 + t22777;
  t22802 = t1716*t9734*t9468;
  t22804 = -1.*t9585*t17002;
  t22807 = t22802 + t22804;
  t24447 = t9734*t14050;
  t24451 = t1716*t9585*t14828;
  t24453 = t24447 + t24451;
  t24523 = -1.*t9764*t14050*t9848;
  t24524 = t22626*t14828;
  t24525 = t24523 + t24524;
  t24579 = t1716*t9734*t9848;
  t24583 = -1.*t9585*t22755;
  t24587 = t24579 + t24583;
  t22569 = t1716*t9848*t9585;
  t22765 = t9734*t22755;
  t22770 = t22569 + t22765;
  t24634 = -0.0641*t9137;
  t24635 = -0.28*t9393;
  t24636 = t24634 + t24635;
  t24638 = -1.*t9137;
  t24639 = 1. + t24638;
  t24640 = -0.575*t24639;
  t24645 = -0.295*t9137;
  t24646 = -0.0641*t9393;
  t24647 = t24640 + t24645 + t24646;
  t22439 = t14050*t9585;
  t22544 = -1.*t1716*t9734*t14828;
  t22564 = t22439 + t22544;
  t24626 = 0.325*t9332;
  t24637 = t9392*t24636;
  t24648 = t9332*t24647;
  t24649 = t24626 + t24637 + t24648;
  t24653 = -1.*t9392;
  t24654 = 1. + t24653;
  t24655 = -0.325*t24654;
  t24656 = -1.*t9332*t24636;
  t24657 = t9392*t24647;
  t24658 = t24655 + t24656 + t24657;
  t24622 = -1.*t1716;
  t24623 = 1. + t24622;
  t24624 = 0.1575*t24623;
  t24625 = 0.2255*t1716;
  t24650 = -1.*t14050*t24649;
  t24651 = t24624 + t24625 + t24650;
  t24662 = 0.068*t14050;
  t24663 = t1716*t24649;
  t24668 = t24662 + t24663;
  t24674 = t9764*t24658;
  t24675 = -1.*t24651*t14828;
  t24676 = t24674 + t24675;
  t24652 = t9764*t24651;
  t24659 = t24658*t14828;
  t24660 = t24652 + t24659;
  t24673 = t24668*t9585;
  t24677 = t9734*t24676;
  t24678 = t24673 + t24677;
  t24680 = t9734*t24668;
  t24681 = -1.*t9585*t24676;
  t24682 = t24680 + t24681;
  t9613 = t1716*t9468*t9585;
  t17776 = t9734*t17002;
  t20922 = t9613 + t17776;
  t24661 = -1.*t1716*t9764*t24660;
  t24689 = t24660*t24525;
  t24698 = t24660*t22779;
  t24714 = -1.*t24660*t24525;
  t24721 = t1716*t9764*t24660;
  t24726 = -1.*t24660*t22779;
  t24733 = -1.*t14050*t24668;
  t24737 = t1716*t24668*t9848;
  t24746 = -1.*t1716*t24668*t9848;
  t24742 = t1716*t24668*t9468;
  t24753 = t14050*t24668;
  t24764 = -1.*t1716*t24668*t9468;
  t24783 = t24658*t9848;
  t24778 = -1.*t24658*t22626;
  p_output1[0]=t20922;
  p_output1[1]=t22564;
  p_output1[2]=t22770;
  p_output1[3]=t22772*t22779 - 1.*t22801*t22807;
  p_output1[4]=-1.*t22801*t24453 + t1716*t22772*t9764;
  p_output1[5]=t22772*t24525 - 1.*t22801*t24587;
  p_output1[6]=t22779*t22801 + t22772*t22807;
  p_output1[7]=t22772*t24453 + t1716*t22801*t9764;
  p_output1[8]=t22801*t24525 + t22772*t24587;
  p_output1[9]=t22770*(t24661 - 1.*t22564*t24678 - 1.*t24453*t24682) + t22564*(t22770*t24678 + t24587*t24682 + t24689);
  p_output1[10]=t22770*(t20922*t24678 + t22807*t24682 + t24698) + t20922*(-1.*t22770*t24678 - 1.*t24587*t24682 + t24714);
  p_output1[11]=t20922*(t22564*t24678 + t24453*t24682 + t24721) + t22564*(-1.*t20922*t24678 - 1.*t22807*t24682 + t24726);
  p_output1[12]=t24525*(t24661 + t14828*t1716*t24676 + t24733) + t1716*(t22755*t24676 + t24689 + t24737)*t9764;
  p_output1[13]=t24525*(t17002*t24676 + t24698 + t24742) + t22779*(-1.*t22755*t24676 + t24714 + t24746);
  p_output1[14]=t22779*(-1.*t14828*t1716*t24676 + t24721 + t24753) + t1716*(-1.*t17002*t24676 + t24726 + t24764)*t9764;
  p_output1[15]=t1716*(-1.*t1716*t24651 + t24733)*t9848 + t14050*(t22626*t24658 + t24737 - 1.*t14050*t24651*t9848);
  p_output1[16]=t1716*(t24742 + t24783 - 1.*t14050*t24651*t9468)*t9848 + t1716*t9468*(t24746 + t24778 + t14050*t24651*t9848);
  p_output1[17]=t1716*(t1716*t24651 + t24753)*t9468 + t14050*(t24764 + t14050*t24651*t9468 - 1.*t24658*t9848);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.2255*t22626 - 0.1575*t9468;
  p_output1[28]=t22626*(t24783 + t24649*t9468) + t9848*(t24778 - 1.*t24649*t9848);
  p_output1[29]=0.068*t9848;
  p_output1[30]=-1.*t24636*t9137 - 0.325*t9393 - 1.*t24647*t9393;
  p_output1[31]=0;
  p_output1[32]=0.325*t9137 + t24647*t9137 - 1.*t24636*t9393;
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
