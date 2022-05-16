/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:48 GMT+02:00
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
  double t48927;
  double t27347;
  double t45308;
  double t49024;
  double t50135;
  double t50150;
  double t50151;
  double t50103;
  double t50242;
  double t50090;
  double t50245;
  double t50087;
  double t48770;
  double t49028;
  double t49109;
  double t49118;
  double t50239;
  double t50261;
  double t50263;
  double t50443;
  double t50421;
  double t50432;
  double t50434;
  double t50403;
  double t50448;
  double t50452;
  double t50462;
  double t50595;
  double t50619;
  double t50624;
  double t50625;
  double t50626;
  double t50630;
  double t50633;
  double t50635;
  double t50638;
  double t50642;
  double t50643;
  double t50644;
  double t50646;
  double t50656;
  double t50661;
  double t50665;
  double t50620;
  double t50621;
  double t50623;
  double t50647;
  double t50651;
  double t50674;
  double t50677;
  double t50683;
  double t50685;
  double t50686;
  double t50755;
  double t50767;
  double t50783;
  double t50785;
  double t50786;
  double t50655;
  double t50667;
  double t50668;
  double t50514;
  double t50524;
  double t50533;
  double t50544;
  double t50546;
  double t50552;
  double t50561;
  double t50566;
  double t50572;
  double t50782;
  double t50788;
  double t50789;
  double t50803;
  double t50804;
  double t50805;
  double t50813;
  double t50814;
  double t50816;
  double t50574;
  double t50582;
  double t50588;
  double t50672;
  double t50820;
  double t50071;
  double t50268;
  double t50380;
  double t50826;
  double t50827;
  double t50828;
  double t51061;
  double t51075;
  double t51105;
  double t51112;
  double t51223;
  double t51232;
  t48927 = Cos(var1[10]);
  t27347 = Cos(var1[11]);
  t45308 = Sin(var1[10]);
  t49024 = Sin(var1[11]);
  t50135 = -1.*t48927*t27347;
  t50150 = -1.*t45308*t49024;
  t50151 = t50135 + t50150;
  t50103 = Cos(var1[5]);
  t50242 = Sin(var1[9]);
  t50090 = Cos(var1[9]);
  t50245 = Sin(var1[5]);
  t50087 = Cos(var1[4]);
  t48770 = -1.*t27347*t45308;
  t49028 = t48927*t49024;
  t49109 = t48770 + t49028;
  t49118 = Sin(var1[4]);
  t50239 = t50090*t50103*t50151;
  t50261 = -1.*t50242*t50151*t50245;
  t50263 = t50239 + t50261;
  t50443 = Sin(var1[3]);
  t50421 = t50103*t50242*t50151;
  t50432 = t50090*t50151*t50245;
  t50434 = t50421 + t50432;
  t50403 = Cos(var1[3]);
  t50448 = t50087*t49109;
  t50452 = -1.*t49118*t50263;
  t50462 = t50448 + t50452;
  t50595 = -1.*t50090;
  t50619 = 1. + t50595;
  t50624 = -1.*t48927;
  t50625 = 1. + t50624;
  t50626 = -0.28121*t50625;
  t50630 = -1.*t27347;
  t50633 = 1. + t50630;
  t50635 = -0.50321*t50633;
  t50638 = -0.23321*t27347;
  t50642 = t50635 + t50638;
  t50643 = t48927*t50642;
  t50644 = 0.27*t45308*t49024;
  t50646 = t50626 + t50643 + t50644;
  t50656 = -0.15121*t50619;
  t50661 = t50090*t50646;
  t50665 = t50656 + t50661;
  t50620 = 0.15121*t50619;
  t50621 = 0.15121*t50090;
  t50623 = 0.15121*t50242;
  t50647 = t50242*t50646;
  t50651 = t50620 + t50621 + t50623 + t50647;
  t50674 = t50103*t50242;
  t50677 = t50090*t50245;
  t50683 = t50674 + t50677;
  t50685 = 0.28121*t45308;
  t50686 = t50642*t45308;
  t50755 = -0.27*t48927*t49024;
  t50767 = t50685 + t50686 + t50755;
  t50783 = t50103*t50665;
  t50785 = -1.*t50651*t50245;
  t50786 = t50783 + t50785;
  t50655 = t50103*t50651;
  t50667 = t50665*t50245;
  t50668 = t50655 + t50667;
  t50514 = t48927*t27347;
  t50524 = t45308*t49024;
  t50533 = t50514 + t50524;
  t50544 = t50533*t49118;
  t50546 = t50090*t50103*t49109;
  t50552 = -1.*t50242*t49109*t50245;
  t50561 = t50546 + t50552;
  t50566 = t50087*t50561;
  t50572 = t50544 + t50566;
  t50782 = t50767*t49118;
  t50788 = t50087*t50786;
  t50789 = t50782 + t50788;
  t50803 = t50087*t50767;
  t50804 = -1.*t49118*t50786;
  t50805 = t50803 + t50804;
  t50813 = t50103*t50242*t49109;
  t50814 = t50090*t49109*t50245;
  t50816 = t50813 + t50814;
  t50574 = -1.*t50090*t50103;
  t50582 = t50242*t50245;
  t50588 = t50574 + t50582;
  t50672 = -1.*t50588*t50668;
  t50820 = t50816*t50668;
  t50071 = t49109*t49118;
  t50268 = t50087*t50263;
  t50380 = t50071 + t50268;
  t50826 = t50087*t50533;
  t50827 = -1.*t49118*t50561;
  t50828 = t50826 + t50827;
  t51061 = -1.*t50816*t50668;
  t51075 = t50434*t50668;
  t51105 = -1.*t50767*t50533;
  t51112 = t50767*t49109;
  t51223 = t50588*t50668;
  t51232 = -1.*t50434*t50668;
  p_output1[0]=t50380;
  p_output1[1]=t50403*t50434 - 1.*t50443*t50462;
  p_output1[2]=t50434*t50443 + t50403*t50462;
  p_output1[3]=t50572*(t50672 - 1.*t50087*t50683*t50789 + t49118*t50683*t50805) + t50087*t50683*(t50572*t50789 + t50820 + t50805*t50828);
  p_output1[4]=(t50672 - 1.*t50683*t50786)*t50816 + t50588*(t50533*t50767 + t50561*t50786 + t50820);
  p_output1[5]=t50533*(t50090*t50651 - 1.*t50242*t50665);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t50151 + 0.15121*t50533;
  p_output1[10]=0.28121*t49024 - 0.27*t27347*t49024 + t49024*t50642;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t50087*t50683;
  p_output1[19]=t50403*t50588 + t49118*t50443*t50683;
  p_output1[20]=t50443*t50588 - 1.*t49118*t50403*t50683;
  p_output1[21]=t50380*(-1.*t50572*t50789 - 1.*t50805*t50828 + t51061) + t50572*(t50380*t50789 + t50462*t50805 + t51075);
  p_output1[22]=t50434*(-1.*t50561*t50786 + t51061 + t51105) + t50816*(t50263*t50786 + t51075 + t51112);
  p_output1[23]=t49109*(-1.*t49109*t50242*t50651 - 1.*t49109*t50090*t50665 + t51105) + t50533*(t50151*t50242*t50651 + t50090*t50151*t50665 + t51112);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t49109*(-1.*t49109*t50646 + t51105) + t50533*(t50151*t50646 + t51112);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t50572;
  p_output1[37]=t50403*t50816 - 1.*t50443*t50828;
  p_output1[38]=t50443*t50816 + t50403*t50828;
  p_output1[39]=t50380*(t50087*t50683*t50789 - 1.*t49118*t50683*t50805 + t51223) + t50087*t50683*(-1.*t50380*t50789 - 1.*t50462*t50805 + t51232);
  p_output1[40]=t50434*(t50683*t50786 + t51223) + t50588*(-1.*t49109*t50767 - 1.*t50263*t50786 + t51232);
  p_output1[41]=t49109*(-1.*t50090*t50651 + t50242*t50665);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t27347 + 0.27*Power(t49024,2) + t27347*t50642;
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
