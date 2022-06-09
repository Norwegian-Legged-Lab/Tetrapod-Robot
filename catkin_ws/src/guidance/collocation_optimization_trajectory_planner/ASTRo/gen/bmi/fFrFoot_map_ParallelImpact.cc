/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:57 GMT+02:00
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
  double t5423;
  double t5308;
  double t5336;
  double t5425;
  double t5453;
  double t5457;
  double t5458;
  double t5449;
  double t5460;
  double t5448;
  double t5461;
  double t5447;
  double t5422;
  double t5434;
  double t5436;
  double t5437;
  double t5459;
  double t5462;
  double t5463;
  double t5472;
  double t5467;
  double t5468;
  double t5469;
  double t5466;
  double t5474;
  double t5475;
  double t5512;
  double t5523;
  double t5524;
  double t5525;
  double t5536;
  double t5537;
  double t5542;
  double t5544;
  double t5545;
  double t5546;
  double t5547;
  double t5548;
  double t5549;
  double t5550;
  double t5551;
  double t5552;
  double t5553;
  double t5557;
  double t5558;
  double t5559;
  double t5539;
  double t5540;
  double t5541;
  double t5554;
  double t5555;
  double t5563;
  double t5564;
  double t5565;
  double t5566;
  double t5567;
  double t5568;
  double t5570;
  double t5572;
  double t5574;
  double t5575;
  double t5556;
  double t5560;
  double t5561;
  double t5522;
  double t5527;
  double t5528;
  double t5529;
  double t5530;
  double t5532;
  double t5571;
  double t5576;
  double t5577;
  double t5579;
  double t5580;
  double t5581;
  double t5585;
  double t5586;
  double t5587;
  double t5533;
  double t5534;
  double t5535;
  double t5562;
  double t5588;
  double t5442;
  double t5464;
  double t5465;
  double t5590;
  double t5591;
  double t5592;
  double t5620;
  double t5625;
  double t5631;
  double t5635;
  double t5662;
  double t5667;
  t5423 = Cos(var1[13]);
  t5308 = Cos(var1[14]);
  t5336 = Sin(var1[13]);
  t5425 = Sin(var1[14]);
  t5453 = t5423*t5308;
  t5457 = t5336*t5425;
  t5458 = t5453 + t5457;
  t5449 = Cos(var1[5]);
  t5460 = Sin(var1[12]);
  t5448 = Cos(var1[12]);
  t5461 = Sin(var1[5]);
  t5447 = Cos(var1[4]);
  t5422 = -1.*t5308*t5336;
  t5434 = t5423*t5425;
  t5436 = t5422 + t5434;
  t5437 = Sin(var1[4]);
  t5459 = t5448*t5449*t5458;
  t5462 = -1.*t5460*t5458*t5461;
  t5463 = t5459 + t5462;
  t5472 = Sin(var1[3]);
  t5467 = t5449*t5460*t5458;
  t5468 = t5448*t5458*t5461;
  t5469 = t5467 + t5468;
  t5466 = Cos(var1[3]);
  t5474 = t5447*t5436;
  t5475 = -1.*t5437*t5463;
  t5512 = t5474 + t5475;
  t5523 = t5308*t5336;
  t5524 = -1.*t5423*t5425;
  t5525 = t5523 + t5524;
  t5536 = -1.*t5448;
  t5537 = 1. + t5536;
  t5542 = -1.*t5423;
  t5544 = 1. + t5542;
  t5545 = 0.28121*t5544;
  t5546 = -1.*t5308;
  t5547 = 1. + t5546;
  t5548 = 0.50321*t5547;
  t5549 = 0.19821*t5308;
  t5550 = t5548 + t5549;
  t5551 = t5423*t5550;
  t5552 = -0.305*t5336*t5425;
  t5553 = t5545 + t5551 + t5552;
  t5557 = 0.15121*t5537;
  t5558 = t5448*t5553;
  t5559 = t5557 + t5558;
  t5539 = -0.15121*t5537;
  t5540 = -0.15121*t5448;
  t5541 = -0.15121*t5460;
  t5554 = t5460*t5553;
  t5555 = t5539 + t5540 + t5541 + t5554;
  t5563 = -1.*t5449*t5460;
  t5564 = -1.*t5448*t5461;
  t5565 = t5563 + t5564;
  t5566 = 0.28121*t5336;
  t5567 = -1.*t5550*t5336;
  t5568 = -0.305*t5423*t5425;
  t5570 = t5566 + t5567 + t5568;
  t5572 = t5449*t5559;
  t5574 = -1.*t5555*t5461;
  t5575 = t5572 + t5574;
  t5556 = t5449*t5555;
  t5560 = t5559*t5461;
  t5561 = t5556 + t5560;
  t5522 = t5458*t5437;
  t5527 = t5448*t5449*t5525;
  t5528 = -1.*t5460*t5525*t5461;
  t5529 = t5527 + t5528;
  t5530 = t5447*t5529;
  t5532 = t5522 + t5530;
  t5571 = t5570*t5437;
  t5576 = t5447*t5575;
  t5577 = t5571 + t5576;
  t5579 = t5447*t5570;
  t5580 = -1.*t5437*t5575;
  t5581 = t5579 + t5580;
  t5585 = t5449*t5460*t5525;
  t5586 = t5448*t5525*t5461;
  t5587 = t5585 + t5586;
  t5533 = t5448*t5449;
  t5534 = -1.*t5460*t5461;
  t5535 = t5533 + t5534;
  t5562 = -1.*t5535*t5561;
  t5588 = t5587*t5561;
  t5442 = t5436*t5437;
  t5464 = t5447*t5463;
  t5465 = t5442 + t5464;
  t5590 = t5447*t5458;
  t5591 = -1.*t5437*t5529;
  t5592 = t5590 + t5591;
  t5620 = -1.*t5587*t5561;
  t5625 = t5469*t5561;
  t5631 = -1.*t5570*t5458;
  t5635 = t5570*t5436;
  t5662 = t5535*t5561;
  t5667 = -1.*t5469*t5561;
  p_output1[0]=t5465;
  p_output1[1]=t5466*t5469 - 1.*t5472*t5512;
  p_output1[2]=t5469*t5472 + t5466*t5512;
  p_output1[3]=t5532*(t5562 - 1.*t5447*t5565*t5577 + t5437*t5565*t5581) + t5447*t5565*(t5532*t5577 + t5588 + t5581*t5592);
  p_output1[4]=(t5562 - 1.*t5565*t5575)*t5587 + t5535*(t5458*t5570 + t5529*t5575 + t5588);
  p_output1[5]=t5458*(-1.*t5448*t5555 + t5460*t5559);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t5425 - 0.305*t5308*t5425 - 1.*t5425*t5550;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5447*t5565;
  p_output1[19]=t5466*t5535 + t5437*t5472*t5565;
  p_output1[20]=t5472*t5535 - 1.*t5437*t5466*t5565;
  p_output1[21]=t5465*(-1.*t5532*t5577 - 1.*t5581*t5592 + t5620) + t5532*(t5465*t5577 + t5512*t5581 + t5625);
  p_output1[22]=t5469*(-1.*t5529*t5575 + t5620 + t5631) + t5587*(t5463*t5575 + t5625 + t5635);
  p_output1[23]=t5436*(-1.*t5460*t5525*t5555 - 1.*t5448*t5525*t5559 + t5631) + t5458*(t5458*t5460*t5555 + t5448*t5458*t5559 + t5635);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t5436*(-1.*t5525*t5553 + t5631) + t5458*(t5458*t5553 + t5635);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5532;
  p_output1[37]=t5466*t5587 - 1.*t5472*t5592;
  p_output1[38]=t5472*t5587 + t5466*t5592;
  p_output1[39]=t5465*(t5447*t5565*t5577 - 1.*t5437*t5565*t5581 + t5662) + t5447*t5565*(-1.*t5465*t5577 - 1.*t5512*t5581 + t5667);
  p_output1[40]=t5469*(t5565*t5575 + t5662) + t5535*(-1.*t5436*t5570 - 1.*t5463*t5575 + t5667);
  p_output1[41]=t5436*(t5448*t5555 - 1.*t5460*t5559);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t5436 - 0.15121*t5525;
  p_output1[49]=0.28121*t5308 + 0.305*Power(t5425,2) - 1.*t5308*t5550;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
