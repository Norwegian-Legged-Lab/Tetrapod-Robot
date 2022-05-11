/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:10 GMT+01:00
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
  double t526;
  double t541;
  double t545;
  double t550;
  double t448;
  double t472;
  double t478;
  double t479;
  double t483;
  double t491;
  double t569;
  double t571;
  double t451;
  double t615;
  double t649;
  double t548;
  double t747;
  double t751;
  double t755;
  double t761;
  double t585;
  double t712;
  double t685;
  double t689;
  double t690;
  double t741;
  double t743;
  double t744;
  double t768;
  double t576;
  double t772;
  double t555;
  double t760;
  double t800;
  double t801;
  double t820;
  double t673;
  double t775;
  double t650;
  double t839;
  double t773;
  double t774;
  double t776;
  double t780;
  double t781;
  double t782;
  double t783;
  double t784;
  double t842;
  double t817;
  double t818;
  double t819;
  double t821;
  double t822;
  double t823;
  double t824;
  double t825;
  double t852;
  double t857;
  double t859;
  double t862;
  double t865;
  double t876;
  double t882;
  double t883;
  double t792;
  double t900;
  double t802;
  double t927;
  double t886;
  double t762;
  double t525;
  double t547;
  double t566;
  double t567;
  double t577;
  double t580;
  double t581;
  double t494;
  double t503;
  double t962;
  double t600;
  double t608;
  double t967;
  double t639;
  double t641;
  double t663;
  double t671;
  double t679;
  double t682;
  double t684;
  double t965;
  double t968;
  double t969;
  double t971;
  double t972;
  double t973;
  double t693;
  double t698;
  double t725;
  double t726;
  double t730;
  double t735;
  double t736;
  double t746;
  double t759;
  double t766;
  double t767;
  double t769;
  double t770;
  double t771;
  double t975;
  double t976;
  double t977;
  double t979;
  double t980;
  double t981;
  double t786;
  double t787;
  double t798;
  double t799;
  double t805;
  double t809;
  double t813;
  double t834;
  double t835;
  double t840;
  double t841;
  double t843;
  double t844;
  double t848;
  double t890;
  double t985;
  double t986;
  double t987;
  double t988;
  double t901;
  double t992;
  double t993;
  double t994;
  double t995;
  double t908;
  double t909;
  double t997;
  double t998;
  double t999;
  double t1000;
  double t928;
  double t930;
  double t934;
  double t944;
  double t949;
  double t950;
  double t952;
  double t954;
  double t1019;
  double t1020;
  double t1021;
  double t1029;
  double t1030;
  double t1031;
  double t1037;
  double t1039;
  double t1040;
  double t1043;
  double t1044;
  double t1045;
  double t1049;
  double t1050;
  double t1053;
  double t1054;
  double t1056;
  double t1060;
  double t1061;
  double t1062;
  double t1064;
  double t1065;
  double t1066;
  double t1067;
  t526 = Cos(var1[16]);
  t541 = -1.*t526;
  t545 = 1. + t541;
  t550 = Sin(var1[16]);
  t448 = Cos(var1[4]);
  t472 = Cos(var1[15]);
  t478 = -1.*t472;
  t479 = 1. + t478;
  t483 = -0.15121*t479;
  t491 = Sin(var1[15]);
  t569 = -1. + t526;
  t571 = 4.e-6*t569;
  t451 = Cos(var1[5]);
  t615 = Sin(var1[5]);
  t649 = 7.e-6*t545;
  t548 = 2.8e-11*t545;
  t747 = Cos(var1[17]);
  t751 = -1.*t747;
  t755 = 1. + t751;
  t761 = Sin(var1[17]);
  t585 = Sin(var1[4]);
  t712 = -4.e-6*t550;
  t685 = -1.*t448*t451*t491;
  t689 = -1.*t472*t448*t615;
  t690 = t685 + t689;
  t741 = t472*t448*t451;
  t743 = -1.*t448*t491*t615;
  t744 = t741 + t743;
  t768 = 2.8e-11*t755;
  t576 = -7.e-6*t550;
  t772 = -2.8e-11*t545;
  t555 = -1.*t550;
  t760 = 7.e-6*t755;
  t800 = -1. + t747;
  t801 = 4.e-6*t800;
  t820 = 4.e-6*t545;
  t673 = 7.e-6*t550;
  t775 = -7.e-6*t545;
  t650 = 4.e-6*t550;
  t839 = 4.e-6*t761;
  t773 = t772 + t550;
  t774 = t773*t585;
  t776 = t775 + t712;
  t780 = t776*t690;
  t781 = -1.000000000016*t545;
  t782 = 1. + t781;
  t783 = t782*t744;
  t784 = t774 + t780 + t783;
  t842 = 7.e-6*t761;
  t817 = -1.000000000049*t545;
  t818 = 1. + t817;
  t819 = t818*t585;
  t821 = t820 + t576;
  t822 = t821*t690;
  t823 = t772 + t555;
  t824 = t823*t744;
  t825 = t819 + t822 + t824;
  t852 = t820 + t673;
  t857 = t852*t585;
  t859 = -6.5e-11*t545;
  t862 = 1. + t859;
  t865 = t862*t690;
  t876 = t775 + t650;
  t882 = t876*t744;
  t883 = t857 + t865 + t882;
  t792 = -1.*t761;
  t900 = 4.e-6*t755;
  t802 = -7.e-6*t761;
  t927 = -2.8e-11*t755;
  t886 = -7.e-6*t755;
  t762 = -4.e-6*t761;
  t525 = 1.5843479999999999e-12*var1[16];
  t547 = -0.03874900000889869*t545;
  t566 = t548 + t555;
  t567 = -0.281211000004*t566;
  t577 = t571 + t576;
  t580 = -1.8134809999999998e-6*t577;
  t581 = t525 + t547 + t567 + t580;
  t494 = -0.15121*t491;
  t503 = t483 + t494;
  t962 = Sin(var1[3]);
  t600 = 0.15121*t491;
  t608 = t483 + t600;
  t967 = Cos(var1[3]);
  t639 = 3.9608699999999997e-7*var1[16];
  t641 = -1.1787626499999999e-16*t545;
  t663 = t649 + t650;
  t671 = -0.281211000004*t663;
  t679 = t571 + t673;
  t682 = -0.038749000006999997*t679;
  t684 = t639 + t641 + t671 + t682;
  t965 = t451*t962*t585;
  t968 = t967*t615;
  t969 = t965 + t968;
  t971 = t967*t451;
  t972 = -1.*t962*t585*t615;
  t973 = t971 + t972;
  t693 = -2.7726089999999997e-12*var1[16];
  t698 = -0.2812110000084994*t545;
  t725 = t649 + t712;
  t726 = -1.8134809999999998e-6*t725;
  t730 = t548 + t550;
  t735 = -0.038749000006999997*t730;
  t736 = t693 + t698 + t726 + t735;
  t746 = -1.9784030000000015e-12*var1[17];
  t759 = -0.5031510000160505*t755;
  t766 = t760 + t762;
  t767 = -3.367757e-6*t766;
  t769 = t768 + t761;
  t770 = -0.038575000014*t769;
  t771 = t746 + t759 + t767 + t770;
  t975 = -1.*t491*t969;
  t976 = t472*t973;
  t977 = t975 + t976;
  t979 = t472*t969;
  t980 = t491*t973;
  t981 = t979 + t980;
  t786 = 1.1305160000000008e-12*var1[17];
  t787 = -0.03857500001589017*t755;
  t798 = t768 + t792;
  t799 = -0.5031510000080001*t798;
  t805 = t801 + t802;
  t809 = -3.367757e-6*t805;
  t813 = t786 + t787 + t799 + t809;
  t834 = 2.826290000000002e-7*var1[17];
  t835 = -2.18904205e-16*t755;
  t840 = t760 + t839;
  t841 = -0.5031510000080001*t840;
  t843 = t801 + t842;
  t844 = -0.038575000014*t843;
  t848 = t834 + t835 + t841 + t844;
  t890 = t886 + t839;
  t985 = -1.*t448*t773*t962;
  t986 = t776*t977;
  t987 = t782*t981;
  t988 = t985 + t986 + t987;
  t901 = t900 + t842;
  t992 = -1.*t818*t448*t962;
  t993 = t821*t977;
  t994 = t823*t981;
  t995 = t992 + t993 + t994;
  t908 = -6.5e-11*t755;
  t909 = 1. + t908;
  t997 = -1.*t448*t852*t962;
  t998 = t862*t977;
  t999 = t876*t981;
  t1000 = t997 + t998 + t999;
  t928 = t927 + t792;
  t930 = -1.000000000049*t755;
  t934 = 1. + t930;
  t944 = t900 + t802;
  t949 = -1.000000000016*t755;
  t950 = 1. + t949;
  t952 = t927 + t761;
  t954 = t886 + t762;
  t1019 = -1.*t967*t451*t585;
  t1020 = t962*t615;
  t1021 = t1019 + t1020;
  t1029 = t451*t962;
  t1030 = t967*t585*t615;
  t1031 = t1029 + t1030;
  t1037 = -1.*t491*t1021;
  t1039 = t472*t1031;
  t1040 = t1037 + t1039;
  t1043 = t472*t1021;
  t1044 = t491*t1031;
  t1045 = t1043 + t1044;
  t1049 = t967*t448*t773;
  t1050 = t776*t1040;
  t1053 = t782*t1045;
  t1054 = t1049 + t1050 + t1053;
  t1056 = t818*t967*t448;
  t1060 = t821*t1040;
  t1061 = t823*t1045;
  t1062 = t1056 + t1060 + t1061;
  t1064 = t967*t448*t852;
  t1065 = t862*t1040;
  t1066 = t876*t1045;
  t1067 = t1064 + t1065 + t1066;
  p_output1[0]=t448*t451*t503 + t581*t585 - 1.*t448*t608*t615 + t684*t690 + t736*t744 + t771*t784 + t813*t825 + t848*t883 - 0.165712*(t784*t890 + t825*t901 + t883*t909) - 0.038576*(t784*t928 + t825*t934 + t883*t944) - 0.50315*(t784*t950 + t825*t952 + t883*t954) + var1[0];
  p_output1[1]=t1000*t848 - 1.*t448*t581*t962 + t503*t969 + t608*t973 + t684*t977 + t736*t981 + t771*t988 + t813*t995 - 0.165712*(t1000*t909 + t890*t988 + t901*t995) - 0.038576*(t1000*t944 + t928*t988 + t934*t995) - 0.50315*(t1000*t954 + t950*t988 + t952*t995) + var1[1];
  p_output1[2]=t1021*t503 + t1031*t608 + t1040*t684 + t1045*t736 + t1054*t771 + t1062*t813 + t1067*t848 - 0.165712*(t1054*t890 + t1062*t901 + t1067*t909) - 0.038576*(t1054*t928 + t1062*t934 + t1067*t944) - 0.50315*(t1054*t950 + t1062*t952 + t1067*t954) + t448*t581*t967 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rr_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
