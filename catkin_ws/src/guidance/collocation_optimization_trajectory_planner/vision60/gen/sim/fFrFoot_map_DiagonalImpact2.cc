/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:32 GMT+02:00
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
  double t10554;
  double t7303;
  double t7328;
  double t10571;
  double t10451;
  double t10580;
  double t10596;
  double t10620;
  double t10638;
  double t10621;
  double t10622;
  double t10629;
  double t10642;
  double t7104;
  double t10613;
  double t10598;
  double t10637;
  double t10643;
  double t10646;
  double t10662;
  double t10656;
  double t10657;
  double t10658;
  double t10655;
  double t10663;
  double t10665;
  double t10666;
  double t10781;
  double t10784;
  double t10786;
  double t10789;
  double t10791;
  double t10793;
  double t10794;
  double t10795;
  double t10801;
  double t10779;
  double t10787;
  double t10802;
  double t10805;
  double t10810;
  double t10813;
  double t10814;
  double t10818;
  double t10819;
  double t10820;
  double t10773;
  double t10776;
  double t10777;
  double t10778;
  double t10806;
  double t10808;
  double t10836;
  double t10837;
  double t10839;
  double t10841;
  double t10846;
  double t10849;
  double t10833;
  double t10834;
  double t10835;
  double t10809;
  double t10823;
  double t10824;
  double t10763;
  double t10764;
  double t10765;
  double t10840;
  double t10851;
  double t10856;
  double t10762;
  double t10767;
  double t10768;
  double t10770;
  double t10771;
  double t10772;
  double t10873;
  double t10874;
  double t10877;
  double t10881;
  double t10882;
  double t10883;
  double t10829;
  double t10885;
  double t10908;
  double t10916;
  double t10859;
  double t10862;
  double t10863;
  double t10605;
  double t10649;
  double t10653;
  double t10894;
  double t10896;
  double t10897;
  double t10975;
  double t10982;
  double t10994;
  double t10990;
  double t11007;
  double t11000;
  double t11032;
  double t11038;
  double t11044;
  double t11051;
  t10554 = Cos(var1[13]);
  t7303 = Cos(var1[14]);
  t7328 = Sin(var1[13]);
  t10571 = Sin(var1[14]);
  t10451 = t7303*t7328;
  t10580 = -1.*t10554*t10571;
  t10596 = t10451 + t10580;
  t10620 = Cos(var1[5]);
  t10638 = Sin(var1[12]);
  t10621 = t10554*t7303;
  t10622 = t7328*t10571;
  t10629 = t10621 + t10622;
  t10642 = Sin(var1[5]);
  t7104 = Cos(var1[12]);
  t10613 = Cos(var1[4]);
  t10598 = Sin(var1[4]);
  t10637 = t10620*t10629;
  t10643 = t10638*t10596*t10642;
  t10646 = t10637 + t10643;
  t10662 = Sin(var1[3]);
  t10656 = -1.*t10620*t10638*t10596;
  t10657 = t10629*t10642;
  t10658 = t10656 + t10657;
  t10655 = Cos(var1[3]);
  t10663 = t7104*t10613*t10596;
  t10665 = -1.*t10598*t10646;
  t10666 = t10663 + t10665;
  t10781 = -0.0641*t7303;
  t10784 = -0.28*t10571;
  t10786 = t10781 + t10784;
  t10789 = -1.*t7303;
  t10791 = 1. + t10789;
  t10793 = 0.075*t10791;
  t10794 = 0.355*t7303;
  t10795 = -0.0641*t10571;
  t10801 = t10793 + t10794 + t10795;
  t10779 = -0.325*t7328;
  t10787 = t10554*t10786;
  t10802 = t7328*t10801;
  t10805 = t10779 + t10787 + t10802;
  t10810 = -1.*t10554;
  t10813 = 1. + t10810;
  t10814 = 0.325*t10813;
  t10818 = -1.*t7328*t10786;
  t10819 = t10554*t10801;
  t10820 = t10814 + t10818 + t10819;
  t10773 = -1.*t7104;
  t10776 = 1. + t10773;
  t10777 = -0.1575*t10776;
  t10778 = -0.2255*t7104;
  t10806 = -1.*t10638*t10805;
  t10808 = t10777 + t10778 + t10806;
  t10836 = -0.068*t10638;
  t10837 = t7104*t10805;
  t10839 = t10836 + t10837;
  t10841 = t10620*t10820;
  t10846 = -1.*t10808*t10642;
  t10849 = t10841 + t10846;
  t10833 = t10638*t10598;
  t10834 = -1.*t7104*t10613*t10642;
  t10835 = t10833 + t10834;
  t10809 = t10620*t10808;
  t10823 = t10820*t10642;
  t10824 = t10809 + t10823;
  t10763 = -1.*t7303*t7328;
  t10764 = t10554*t10571;
  t10765 = t10763 + t10764;
  t10840 = t10839*t10598;
  t10851 = t10613*t10849;
  t10856 = t10840 + t10851;
  t10762 = t7104*t10629*t10598;
  t10767 = t10620*t10765;
  t10768 = t10638*t10629*t10642;
  t10770 = t10767 + t10768;
  t10771 = t10613*t10770;
  t10772 = t10762 + t10771;
  t10873 = t10613*t10839;
  t10874 = -1.*t10598*t10849;
  t10877 = t10873 + t10874;
  t10881 = -1.*t10620*t10638*t10629;
  t10882 = t10765*t10642;
  t10883 = t10881 + t10882;
  t10829 = -1.*t7104*t10620*t10824;
  t10885 = t10824*t10883;
  t10908 = -1.*t10638*t10839;
  t10916 = t7104*t10839*t10629;
  t10859 = t10613*t10638;
  t10862 = t7104*t10598*t10642;
  t10863 = t10859 + t10862;
  t10605 = t7104*t10596*t10598;
  t10649 = t10613*t10646;
  t10653 = t10605 + t10649;
  t10894 = t7104*t10613*t10629;
  t10896 = -1.*t10598*t10770;
  t10897 = t10894 + t10896;
  t10975 = t10824*t10658;
  t10982 = -1.*t10824*t10883;
  t10994 = -1.*t7104*t10839*t10629;
  t10990 = t7104*t10839*t10596;
  t11007 = t10820*t10629;
  t11000 = -1.*t10820*t10765;
  t11032 = t7104*t10620*t10824;
  t11038 = -1.*t10824*t10658;
  t11044 = t10638*t10839;
  t11051 = -1.*t7104*t10839*t10596;
  p_output1[0]=t10653;
  p_output1[1]=t10655*t10658 - 1.*t10662*t10666;
  p_output1[2]=t10658*t10662 + t10655*t10666;
  p_output1[3]=t10772*(t10829 - 1.*t10835*t10856 - 1.*t10863*t10877) + t10835*(t10772*t10856 + t10885 + t10877*t10897);
  p_output1[4]=t10620*(t10770*t10849 + t10885 + t10916)*t7104 + t10883*(t10829 + t10908 + t10642*t10849*t7104);
  p_output1[5]=t10638*(-1.*t10629*t10638*t10808 + t10765*t10820 + t10916) + t10629*t7104*(t10908 - 1.*t10808*t7104);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t10596 + 0.2255*t10765;
  p_output1[13]=0.325*t10571 - 1.*t10571*t10801 - 1.*t10786*t7303;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10835;
  p_output1[19]=-1.*t10662*t10863 + t10620*t10655*t7104;
  p_output1[20]=t10655*t10863 + t10620*t10662*t7104;
  p_output1[21]=t10772*(t10653*t10856 + t10666*t10877 + t10975) + t10653*(-1.*t10772*t10856 - 1.*t10877*t10897 + t10982);
  p_output1[22]=t10883*(t10646*t10849 + t10975 + t10990) + t10658*(-1.*t10770*t10849 + t10982 + t10994);
  p_output1[23]=t10596*(t10629*t10638*t10808 + t10994 + t11000)*t7104 + t10629*(-1.*t10596*t10638*t10808 + t10990 + t11007)*t7104;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t10629*(-1.*t10629*t10805 + t11000) + t10765*(t10596*t10805 + t11007);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10772;
  p_output1[37]=t10655*t10883 - 1.*t10662*t10897;
  p_output1[38]=t10662*t10883 + t10655*t10897;
  p_output1[39]=t10653*(t10835*t10856 + t10863*t10877 + t11032) + t10835*(-1.*t10653*t10856 - 1.*t10666*t10877 + t11038);
  p_output1[40]=t10620*(-1.*t10646*t10849 + t11038 + t11051)*t7104 + t10658*(t11032 + t11044 - 1.*t10642*t10849*t7104);
  p_output1[41]=t10638*(t10596*t10638*t10808 - 1.*t10629*t10820 + t11051) + t10596*t7104*(t11044 + t10808*t7104);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t10629;
  p_output1[49]=-1.*t10571*t10786 - 0.325*t7303 + t10801*t7303;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
