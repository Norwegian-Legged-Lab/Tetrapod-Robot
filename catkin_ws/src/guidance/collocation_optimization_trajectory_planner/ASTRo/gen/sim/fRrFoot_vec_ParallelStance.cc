/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:38 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t72;
  double t7983;
  double t465;
  double t17306;
  double t17311;
  double t17285;
  double t17313;
  double t622;
  double t17370;
  double t17373;
  double t17374;
  double t8040;
  double t17340;
  double t17465;
  double t17466;
  double t17467;
  double t7507;
  double t8472;
  double t14098;
  double t17643;
  double t17502;
  double t17310;
  double t17326;
  double t17336;
  double t17392;
  double t17435;
  double t17447;
  double t17468;
  double t17471;
  double t17472;
  double t17647;
  double t17652;
  double t17654;
  double t17659;
  double t17660;
  double t17662;
  double t17664;
  double t17665;
  double t17667;
  double t17671;
  double t17672;
  double t17674;
  double t17677;
  double t17678;
  double t17680;
  double t17349;
  double t17455;
  double t17456;
  double t17704;
  double t17706;
  double t17707;
  double t17711;
  double t17712;
  double t17714;
  double t17715;
  double t17716;
  double t17718;
  double t17719;
  double t17720;
  double t17721;
  double t17722;
  double t17725;
  double t17730;
  double t17731;
  double t17708;
  double t17710;
  double t17726;
  double t17727;
  double t17735;
  double t17736;
  double t17737;
  double t17738;
  double t17740;
  double t17741;
  double t17742;
  double t17729;
  double t17732;
  double t17733;
  double t17739;
  double t17743;
  double t17744;
  double t17763;
  double t17770;
  double t17774;
  double t17464;
  double t17481;
  double t17482;
  double t17734;
  double t17778;
  double t17801;
  double t17808;
  double t17822;
  double t17827;
  double t17874;
  double t17880;
  t72 = Cos(var1[4]);
  t7983 = Cos(var1[15]);
  t465 = Cos(var1[5]);
  t17306 = Cos(var1[17]);
  t17311 = Sin(var1[16]);
  t17285 = Cos(var1[16]);
  t17313 = Sin(var1[17]);
  t622 = Sin(var1[15]);
  t17370 = -1.*t17306*t17311;
  t17373 = t17285*t17313;
  t17374 = t17370 + t17373;
  t8040 = Sin(var1[5]);
  t17340 = Sin(var1[4]);
  t17465 = -1.*t17285*t17306;
  t17466 = -1.*t17311*t17313;
  t17467 = t17465 + t17466;
  t7507 = t465*t622;
  t8472 = t7983*t8040;
  t14098 = t7507 + t8472;
  t17643 = Cos(var1[3]);
  t17502 = Sin(var1[3]);
  t17310 = t17285*t17306;
  t17326 = t17311*t17313;
  t17336 = t17310 + t17326;
  t17392 = t7983*t465*t17374;
  t17435 = -1.*t622*t17374*t8040;
  t17447 = t17392 + t17435;
  t17468 = t7983*t465*t17467;
  t17471 = -1.*t622*t17467*t8040;
  t17472 = t17468 + t17471;
  t17647 = -1.*t7983*t465;
  t17652 = t622*t8040;
  t17654 = t17647 + t17652;
  t17659 = t465*t622*t17374;
  t17660 = t7983*t17374*t8040;
  t17662 = t17659 + t17660;
  t17664 = t72*t17336;
  t17665 = -1.*t17340*t17447;
  t17667 = t17664 + t17665;
  t17671 = t465*t622*t17467;
  t17672 = t7983*t17467*t8040;
  t17674 = t17671 + t17672;
  t17677 = t72*t17374;
  t17678 = -1.*t17340*t17472;
  t17680 = t17677 + t17678;
  t17349 = t17336*t17340;
  t17455 = t72*t17447;
  t17456 = t17349 + t17455;
  t17704 = -1.*t7983;
  t17706 = 1. + t17704;
  t17707 = -0.15121*t17706;
  t17711 = -1.*t17285;
  t17712 = 1. + t17711;
  t17714 = -0.28121*t17712;
  t17715 = -1.*t17306;
  t17716 = 1. + t17715;
  t17718 = -0.50321*t17716;
  t17719 = -0.19821*t17306;
  t17720 = t17718 + t17719;
  t17721 = t17285*t17720;
  t17722 = 0.305*t17311*t17313;
  t17725 = t17714 + t17721 + t17722;
  t17730 = t7983*t17725;
  t17731 = t17707 + t17730;
  t17708 = -0.15121*t7983;
  t17710 = 0.15121*t622;
  t17726 = t622*t17725;
  t17727 = t17707 + t17708 + t17710 + t17726;
  t17735 = 0.28121*t17311;
  t17736 = t17720*t17311;
  t17737 = -0.305*t17285*t17313;
  t17738 = t17735 + t17736 + t17737;
  t17740 = t465*t17731;
  t17741 = -1.*t17727*t8040;
  t17742 = t17740 + t17741;
  t17729 = t465*t17727;
  t17732 = t17731*t8040;
  t17733 = t17729 + t17732;
  t17739 = t17738*t17340;
  t17743 = t72*t17742;
  t17744 = t17739 + t17743;
  t17763 = t72*t17738;
  t17770 = -1.*t17340*t17742;
  t17774 = t17763 + t17770;
  t17464 = t17374*t17340;
  t17481 = t72*t17472;
  t17482 = t17464 + t17481;
  t17734 = -1.*t17654*t17733;
  t17778 = t17662*t17733;
  t17801 = t17654*t17733;
  t17808 = -1.*t17674*t17733;
  t17822 = -1.*t17662*t17733;
  t17827 = t17674*t17733;
  t17874 = -1.*t17738*t17336;
  t17880 = t17738*t17374;
  p_output1[0]=t17482*var2[0] + t14098*t72*var2[1] + t17456*var2[2];
  p_output1[1]=(t17643*t17674 - 1.*t17502*t17680)*var2[0] + (t14098*t17340*t17502 + t17643*t17654)*var2[1] + (t17643*t17662 - 1.*t17502*t17667)*var2[2];
  p_output1[2]=(t17502*t17674 + t17643*t17680)*var2[0] + (-1.*t14098*t17340*t17643 + t17502*t17654)*var2[1] + (t17502*t17662 + t17643*t17667)*var2[2];
  p_output1[3]=(t14098*(t17456*t17744 + t17667*t17774 + t17778)*t72 + t17456*(t17734 + t14098*t17340*t17774 - 1.*t14098*t17744*t72))*var2[0] + (t17482*(-1.*t17456*t17744 - 1.*t17667*t17774 + t17822) + t17456*(t17482*t17744 + t17680*t17774 + t17827))*var2[1] + (t14098*(-1.*t17482*t17744 - 1.*t17680*t17774 + t17808)*t72 + t17482*(-1.*t14098*t17340*t17774 + t17801 + t14098*t17744*t72))*var2[2];
  p_output1[4]=(t17662*(t17734 - 1.*t14098*t17742) + t17654*(t17336*t17738 + t17447*t17742 + t17778))*var2[0] + (t17674*(-1.*t17447*t17742 + t17822 + t17874) + t17662*(t17472*t17742 + t17827 + t17880))*var2[1] + (t17674*(t14098*t17742 + t17801) + t17654*(-1.*t17374*t17738 - 1.*t17472*t17742 + t17808))*var2[2];
  p_output1[5]=t17336*(-1.*t17731*t622 + t17727*t7983)*var2[0] + (t17374*(t17874 - 1.*t17374*t17727*t622 - 1.*t17374*t17731*t7983) + t17336*(t17880 + t17467*t17727*t622 + t17467*t17731*t7983))*var2[1] + t17374*(t17731*t622 - 1.*t17727*t7983)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t17336 - 0.15121*t17467)*var2[0] + (-0.15121 + t17374*(-1.*t17374*t17725 + t17874) + t17336*(t17467*t17725 + t17880))*var2[1];
  p_output1[16]=(0.28121*t17313 - 0.305*t17306*t17313 + t17313*t17720)*var2[0] + (0.28121*t17306 + 0.305*Power(t17313,2) + t17306*t17720)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
