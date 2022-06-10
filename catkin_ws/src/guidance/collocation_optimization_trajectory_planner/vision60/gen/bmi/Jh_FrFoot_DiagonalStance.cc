/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:13 GMT+02:00
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
  double t5190;
  double t1961;
  double t2767;
  double t5641;
  double t4873;
  double t6498;
  double t6594;
  double t33734;
  double t6818;
  double t868;
  double t23236;
  double t33812;
  double t27061;
  double t28420;
  double t30824;
  double t24583;
  double t32816;
  double t33813;
  double t34502;
  double t51395;
  double t51550;
  double t48252;
  double t48426;
  double t48823;
  double t49225;
  double t49241;
  double t49254;
  double t51469;
  double t51478;
  double t51499;
  double t51702;
  double t51843;
  double t51957;
  double t51983;
  double t52074;
  double t52076;
  double t52085;
  double t52118;
  double t52122;
  double t52132;
  double t52133;
  double t52139;
  double t45835;
  double t49357;
  double t51300;
  double t55908;
  double t56354;
  double t56380;
  double t56630;
  double t56652;
  double t56711;
  double t56750;
  double t56770;
  double t56790;
  double t40012;
  double t41230;
  double t44736;
  double t55656;
  double t56514;
  double t56795;
  double t56825;
  double t57025;
  double t57068;
  double t57084;
  double t57111;
  double t57113;
  double t57610;
  double t53924;
  double t53964;
  double t54036;
  double t54136;
  double t56881;
  double t56977;
  double t58219;
  double t58976;
  double t59075;
  double t59212;
  double t59237;
  double t59243;
  double t56981;
  double t58137;
  double t58169;
  double t59087;
  double t59253;
  double t59264;
  double t59316;
  double t59347;
  double t59431;
  double t11981;
  double t37080;
  double t39199;
  double t58191;
  double t59494;
  double t59577;
  double t59611;
  double t59634;
  double t59653;
  double t59686;
  double t59754;
  double t59799;
  double t59772;
  double t59839;
  double t59956;
  double t60168;
  double t60052;
  t5190 = Cos(var1[13]);
  t1961 = Cos(var1[14]);
  t2767 = Sin(var1[13]);
  t5641 = Sin(var1[14]);
  t4873 = t1961*t2767;
  t6498 = -1.*t5190*t5641;
  t6594 = t4873 + t6498;
  t33734 = Sin(var1[12]);
  t6818 = Sin(var1[4]);
  t868 = Cos(var1[12]);
  t23236 = Cos(var1[4]);
  t33812 = Sin(var1[5]);
  t27061 = t5190*t1961;
  t28420 = t2767*t5641;
  t30824 = t27061 + t28420;
  t24583 = Cos(var1[5]);
  t32816 = t24583*t30824;
  t33813 = t33734*t6594*t33812;
  t34502 = t32816 + t33813;
  t51395 = Cos(var1[3]);
  t51550 = Sin(var1[3]);
  t48252 = -1.*t1961*t2767;
  t48426 = t5190*t5641;
  t48823 = t48252 + t48426;
  t49225 = t24583*t48823;
  t49241 = t33734*t30824*t33812;
  t49254 = t49225 + t49241;
  t51469 = -1.*t24583*t33734*t6594;
  t51478 = t30824*t33812;
  t51499 = t51469 + t51478;
  t51702 = t868*t23236*t6594;
  t51843 = -1.*t6818*t34502;
  t51957 = t51702 + t51843;
  t51983 = t23236*t33734;
  t52074 = t868*t6818*t33812;
  t52076 = t51983 + t52074;
  t52085 = -1.*t24583*t33734*t30824;
  t52118 = t48823*t33812;
  t52122 = t52085 + t52118;
  t52132 = t868*t23236*t30824;
  t52133 = -1.*t6818*t49254;
  t52139 = t52132 + t52133;
  t45835 = t868*t30824*t6818;
  t49357 = t23236*t49254;
  t51300 = t45835 + t49357;
  t55908 = -0.0641*t1961;
  t56354 = -0.28*t5641;
  t56380 = t55908 + t56354;
  t56630 = -1.*t1961;
  t56652 = 1. + t56630;
  t56711 = 0.075*t56652;
  t56750 = 0.355*t1961;
  t56770 = -0.0641*t5641;
  t56790 = t56711 + t56750 + t56770;
  t40012 = t33734*t6818;
  t41230 = -1.*t868*t23236*t33812;
  t44736 = t40012 + t41230;
  t55656 = -0.325*t2767;
  t56514 = t5190*t56380;
  t56795 = t2767*t56790;
  t56825 = t55656 + t56514 + t56795;
  t57025 = -1.*t5190;
  t57068 = 1. + t57025;
  t57084 = 0.325*t57068;
  t57111 = -1.*t2767*t56380;
  t57113 = t5190*t56790;
  t57610 = t57084 + t57111 + t57113;
  t53924 = -1.*t868;
  t53964 = 1. + t53924;
  t54036 = -0.1575*t53964;
  t54136 = -0.2255*t868;
  t56881 = -1.*t33734*t56825;
  t56977 = t54036 + t54136 + t56881;
  t58219 = -0.068*t33734;
  t58976 = t868*t56825;
  t59075 = t58219 + t58976;
  t59212 = t24583*t57610;
  t59237 = -1.*t56977*t33812;
  t59243 = t59212 + t59237;
  t56981 = t24583*t56977;
  t58137 = t57610*t33812;
  t58169 = t56981 + t58137;
  t59087 = t59075*t6818;
  t59253 = t23236*t59243;
  t59264 = t59087 + t59253;
  t59316 = t23236*t59075;
  t59347 = -1.*t6818*t59243;
  t59431 = t59316 + t59347;
  t11981 = t868*t6594*t6818;
  t37080 = t23236*t34502;
  t39199 = t11981 + t37080;
  t58191 = -1.*t868*t24583*t58169;
  t59494 = t58169*t52122;
  t59577 = t58169*t51499;
  t59611 = -1.*t58169*t52122;
  t59634 = t868*t24583*t58169;
  t59653 = -1.*t58169*t51499;
  t59686 = -1.*t33734*t59075;
  t59754 = t868*t59075*t30824;
  t59799 = -1.*t868*t59075*t30824;
  t59772 = t868*t59075*t6594;
  t59839 = t33734*t59075;
  t59956 = -1.*t868*t59075*t6594;
  t60168 = t57610*t30824;
  t60052 = -1.*t57610*t48823;
  p_output1[0]=t39199;
  p_output1[1]=t44736;
  p_output1[2]=t51300;
  p_output1[3]=t51395*t51499 - 1.*t51550*t51957;
  p_output1[4]=-1.*t51550*t52076 + t24583*t51395*t868;
  p_output1[5]=t51395*t52122 - 1.*t51550*t52139;
  p_output1[6]=t51499*t51550 + t51395*t51957;
  p_output1[7]=t51395*t52076 + t24583*t51550*t868;
  p_output1[8]=t51550*t52122 + t51395*t52139;
  p_output1[9]=t51300*(t58191 - 1.*t44736*t59264 - 1.*t52076*t59431) + t44736*(t51300*t59264 + t52139*t59431 + t59494);
  p_output1[10]=t51300*(t39199*t59264 + t51957*t59431 + t59577) + t39199*(-1.*t51300*t59264 - 1.*t52139*t59431 + t59611);
  p_output1[11]=t39199*(t44736*t59264 + t52076*t59431 + t59634) + t44736*(-1.*t39199*t59264 - 1.*t51957*t59431 + t59653);
  p_output1[12]=t24583*(t49254*t59243 + t59494 + t59754)*t868 + t52122*(t58191 + t59686 + t33812*t59243*t868);
  p_output1[13]=t52122*(t34502*t59243 + t59577 + t59772) + t51499*(-1.*t49254*t59243 + t59611 + t59799);
  p_output1[14]=t24583*(-1.*t34502*t59243 + t59653 + t59956)*t868 + t51499*(t59634 + t59839 - 1.*t33812*t59243*t868);
  p_output1[15]=t33734*(-1.*t30824*t33734*t56977 + t48823*t57610 + t59754) + t30824*t868*(t59686 - 1.*t56977*t868);
  p_output1[16]=(t30824*t33734*t56977 + t59799 + t60052)*t6594*t868 + t30824*(t59772 + t60168 - 1.*t33734*t56977*t6594)*t868;
  p_output1[17]=t33734*(-1.*t30824*t57610 + t59956 + t33734*t56977*t6594) + t6594*t868*(t59839 + t56977*t868);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.2255*t48823 + 0.1575*t6594;
  p_output1[37]=t30824*(-1.*t30824*t56825 + t60052) + t48823*(t60168 + t56825*t6594);
  p_output1[38]=-0.068*t30824;
  p_output1[39]=-1.*t1961*t56380 + 0.325*t5641 - 1.*t5641*t56790;
  p_output1[40]=0;
  p_output1[41]=-0.325*t1961 - 1.*t56380*t5641 + t1961*t56790;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
