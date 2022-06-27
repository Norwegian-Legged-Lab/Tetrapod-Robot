/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:37 GMT+02:00
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
  double t372;
  double t56;
  double t79;
  double t433;
  double t548;
  double t550;
  double t555;
  double t547;
  double t4848;
  double t544;
  double t4983;
  double t543;
  double t90;
  double t531;
  double t535;
  double t536;
  double t4824;
  double t5023;
  double t5064;
  double t14686;
  double t12929;
  double t14213;
  double t14336;
  double t12307;
  double t14714;
  double t15682;
  double t16197;
  double t16520;
  double t16577;
  double t16608;
  double t16700;
  double t16745;
  double t16746;
  double t16768;
  double t16779;
  double t16903;
  double t16904;
  double t16920;
  double t16930;
  double t16943;
  double t16974;
  double t17040;
  double t17065;
  double t16657;
  double t16699;
  double t16976;
  double t16980;
  double t17086;
  double t17091;
  double t17092;
  double t17094;
  double t17096;
  double t17097;
  double t17099;
  double t17110;
  double t17119;
  double t17151;
  double t16993;
  double t17068;
  double t17078;
  double t16390;
  double t16406;
  double t16440;
  double t16443;
  double t16447;
  double t16453;
  double t16457;
  double t16472;
  double t16478;
  double t17107;
  double t17156;
  double t17167;
  double t17251;
  double t17252;
  double t17253;
  double t17276;
  double t17277;
  double t17279;
  double t16479;
  double t16482;
  double t16483;
  double t17085;
  double t17280;
  double t539;
  double t5066;
  double t5068;
  double t17286;
  double t17287;
  double t17289;
  double t17375;
  double t17393;
  double t17448;
  double t17461;
  double t17549;
  double t17591;
  t372 = Cos(var1[16]);
  t56 = Cos(var1[17]);
  t79 = Sin(var1[16]);
  t433 = Sin(var1[17]);
  t548 = -1.*t372*t56;
  t550 = -1.*t79*t433;
  t555 = t548 + t550;
  t547 = Cos(var1[5]);
  t4848 = Sin(var1[15]);
  t544 = Cos(var1[15]);
  t4983 = Sin(var1[5]);
  t543 = Cos(var1[4]);
  t90 = -1.*t56*t79;
  t531 = t372*t433;
  t535 = t90 + t531;
  t536 = Sin(var1[4]);
  t4824 = t544*t547*t555;
  t5023 = -1.*t4848*t555*t4983;
  t5064 = t4824 + t5023;
  t14686 = Sin(var1[3]);
  t12929 = t547*t4848*t555;
  t14213 = t544*t555*t4983;
  t14336 = t12929 + t14213;
  t12307 = Cos(var1[3]);
  t14714 = t543*t535;
  t15682 = -1.*t536*t5064;
  t16197 = t14714 + t15682;
  t16520 = -1.*t544;
  t16577 = 1. + t16520;
  t16608 = -0.15121*t16577;
  t16700 = -1.*t372;
  t16745 = 1. + t16700;
  t16746 = -0.28121*t16745;
  t16768 = -1.*t56;
  t16779 = 1. + t16768;
  t16903 = -0.50321*t16779;
  t16904 = -0.19821*t56;
  t16920 = t16903 + t16904;
  t16930 = t372*t16920;
  t16943 = 0.305*t79*t433;
  t16974 = t16746 + t16930 + t16943;
  t17040 = t544*t16974;
  t17065 = t16608 + t17040;
  t16657 = -0.15121*t544;
  t16699 = 0.15121*t4848;
  t16976 = t4848*t16974;
  t16980 = t16608 + t16657 + t16699 + t16976;
  t17086 = t547*t4848;
  t17091 = t544*t4983;
  t17092 = t17086 + t17091;
  t17094 = 0.28121*t79;
  t17096 = t16920*t79;
  t17097 = -0.305*t372*t433;
  t17099 = t17094 + t17096 + t17097;
  t17110 = t547*t17065;
  t17119 = -1.*t16980*t4983;
  t17151 = t17110 + t17119;
  t16993 = t547*t16980;
  t17068 = t17065*t4983;
  t17078 = t16993 + t17068;
  t16390 = t372*t56;
  t16406 = t79*t433;
  t16440 = t16390 + t16406;
  t16443 = t16440*t536;
  t16447 = t544*t547*t535;
  t16453 = -1.*t4848*t535*t4983;
  t16457 = t16447 + t16453;
  t16472 = t543*t16457;
  t16478 = t16443 + t16472;
  t17107 = t17099*t536;
  t17156 = t543*t17151;
  t17167 = t17107 + t17156;
  t17251 = t543*t17099;
  t17252 = -1.*t536*t17151;
  t17253 = t17251 + t17252;
  t17276 = t547*t4848*t535;
  t17277 = t544*t535*t4983;
  t17279 = t17276 + t17277;
  t16479 = -1.*t544*t547;
  t16482 = t4848*t4983;
  t16483 = t16479 + t16482;
  t17085 = -1.*t16483*t17078;
  t17280 = t17279*t17078;
  t539 = t535*t536;
  t5066 = t543*t5064;
  t5068 = t539 + t5066;
  t17286 = t543*t16440;
  t17287 = -1.*t536*t16457;
  t17289 = t17286 + t17287;
  t17375 = -1.*t17279*t17078;
  t17393 = t14336*t17078;
  t17448 = -1.*t17099*t16440;
  t17461 = t17099*t535;
  t17549 = t16483*t17078;
  t17591 = -1.*t14336*t17078;
  p_output1[0]=t5068;
  p_output1[1]=t12307*t14336 - 1.*t14686*t16197;
  p_output1[2]=t14336*t14686 + t12307*t16197;
  p_output1[3]=t17092*(t16478*t17167 + t17280 + t17253*t17289)*t543 + t16478*(t17085 + t17092*t17253*t536 - 1.*t17092*t17167*t543);
  p_output1[4]=(t17085 - 1.*t17092*t17151)*t17279 + t16483*(t16440*t17099 + t16457*t17151 + t17280);
  p_output1[5]=t16440*(-1.*t17065*t4848 + t16980*t544);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t16440 - 0.15121*t555;
  p_output1[16]=0.28121*t433 + t16920*t433 - 0.305*t433*t56;
  p_output1[17]=0;
  p_output1[18]=t17092*t543;
  p_output1[19]=t12307*t16483 + t14686*t17092*t536;
  p_output1[20]=t14686*t16483 - 1.*t12307*t17092*t536;
  p_output1[21]=(-1.*t16478*t17167 - 1.*t17253*t17289 + t17375)*t5068 + t16478*(t16197*t17253 + t17393 + t17167*t5068);
  p_output1[22]=t14336*(-1.*t16457*t17151 + t17375 + t17448) + t17279*(t17393 + t17461 + t17151*t5064);
  p_output1[23]=t535*(t17448 - 1.*t16980*t4848*t535 - 1.*t17065*t535*t544) + t16440*(t17461 + t16980*t4848*t555 + t17065*t544*t555);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t535*(t17448 - 1.*t16974*t535) + t16440*(t17461 + t16974*t555);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16478;
  p_output1[37]=t12307*t17279 - 1.*t14686*t17289;
  p_output1[38]=t14686*t17279 + t12307*t17289;
  p_output1[39]=t17092*(-1.*t16197*t17253 + t17591 - 1.*t17167*t5068)*t543 + t5068*(t17549 - 1.*t17092*t17253*t536 + t17092*t17167*t543);
  p_output1[40]=t14336*(t17092*t17151 + t17549) + t16483*(t17591 - 1.*t17151*t5064 - 1.*t17099*t535);
  p_output1[41]=t535*(t17065*t4848 - 1.*t16980*t544);
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
  p_output1[52]=0.305*Power(t433,2) + 0.28121*t56 + t16920*t56;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
