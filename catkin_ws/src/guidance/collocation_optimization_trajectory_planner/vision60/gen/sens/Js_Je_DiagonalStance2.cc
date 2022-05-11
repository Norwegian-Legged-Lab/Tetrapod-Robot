/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:26:27 GMT+02:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=2;
  p_output1[6]=2;
  p_output1[7]=2;
  p_output1[8]=3;
  p_output1[9]=3;
  p_output1[10]=3;
  p_output1[11]=3;
  p_output1[12]=3;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=5;
  p_output1[19]=5;
  p_output1[20]=5;
  p_output1[21]=6;
  p_output1[22]=6;
  p_output1[23]=6;
  p_output1[24]=6;
  p_output1[25]=6;
  p_output1[26]=7;
  p_output1[27]=7;
  p_output1[28]=7;
  p_output1[29]=7;
  p_output1[30]=7;
  p_output1[31]=7;
  p_output1[32]=8;
  p_output1[33]=8;
  p_output1[34]=8;
  p_output1[35]=8;
  p_output1[36]=9;
  p_output1[37]=9;
  p_output1[38]=9;
  p_output1[39]=9;
  p_output1[40]=9;
  p_output1[41]=9;
  p_output1[42]=10;
  p_output1[43]=10;
  p_output1[44]=10;
  p_output1[45]=10;
  p_output1[46]=10;
  p_output1[47]=10;
  p_output1[48]=11;
  p_output1[49]=11;
  p_output1[50]=11;
  p_output1[51]=11;
  p_output1[52]=12;
  p_output1[53]=12;
  p_output1[54]=12;
  p_output1[55]=12;
  p_output1[56]=12;
  p_output1[57]=12;
  p_output1[58]=13;
  p_output1[59]=13;
  p_output1[60]=13;
  p_output1[61]=13;
  p_output1[62]=13;
  p_output1[63]=13;
  p_output1[64]=14;
  p_output1[65]=14;
  p_output1[66]=14;
  p_output1[67]=14;
  p_output1[68]=15;
  p_output1[69]=15;
  p_output1[70]=15;
  p_output1[71]=15;
  p_output1[72]=15;
  p_output1[73]=15;
  p_output1[74]=16;
  p_output1[75]=16;
  p_output1[76]=16;
  p_output1[77]=16;
  p_output1[78]=16;
  p_output1[79]=16;
  p_output1[80]=17;
  p_output1[81]=17;
  p_output1[82]=17;
  p_output1[83]=17;
  p_output1[84]=18;
  p_output1[85]=18;
  p_output1[86]=18;
  p_output1[87]=18;
  p_output1[88]=18;
  p_output1[89]=18;
  p_output1[90]=19;
  p_output1[91]=19;
  p_output1[92]=19;
  p_output1[93]=19;
  p_output1[94]=19;
  p_output1[95]=20;
  p_output1[96]=20;
  p_output1[97]=20;
  p_output1[98]=20;
  p_output1[99]=20;
  p_output1[100]=21;
  p_output1[101]=21;
  p_output1[102]=21;
  p_output1[103]=21;
  p_output1[104]=21;
  p_output1[105]=22;
  p_output1[106]=22;
  p_output1[107]=22;
  p_output1[108]=22;
  p_output1[109]=22;
  p_output1[110]=23;
  p_output1[111]=23;
  p_output1[112]=23;
  p_output1[113]=23;
  p_output1[114]=23;
  p_output1[115]=24;
  p_output1[116]=24;
  p_output1[117]=24;
  p_output1[118]=24;
  p_output1[119]=24;
  p_output1[120]=25;
  p_output1[121]=25;
  p_output1[122]=25;
  p_output1[123]=25;
  p_output1[124]=26;
  p_output1[125]=26;
  p_output1[126]=26;
  p_output1[127]=26;
  p_output1[128]=27;
  p_output1[129]=27;
  p_output1[130]=27;
  p_output1[131]=27;
  p_output1[132]=28;
  p_output1[133]=28;
  p_output1[134]=28;
  p_output1[135]=28;
  p_output1[136]=29;
  p_output1[137]=29;
  p_output1[138]=29;
  p_output1[139]=29;
  p_output1[140]=30;
  p_output1[141]=30;
  p_output1[142]=30;
  p_output1[143]=30;
  p_output1[144]=31;
  p_output1[145]=31;
  p_output1[146]=31;
  p_output1[147]=32;
  p_output1[148]=32;
  p_output1[149]=32;
  p_output1[150]=33;
  p_output1[151]=33;
  p_output1[152]=33;
  p_output1[153]=34;
  p_output1[154]=34;
  p_output1[155]=34;
  p_output1[156]=35;
  p_output1[157]=35;
  p_output1[158]=35;
  p_output1[159]=36;
  p_output1[160]=36;
  p_output1[161]=36;
  p_output1[162]=37;
  p_output1[163]=37;
  p_output1[164]=38;
  p_output1[165]=38;
  p_output1[166]=39;
  p_output1[167]=39;
  p_output1[168]=43;
  p_output1[169]=45;
  p_output1[170]=94;
  p_output1[171]=94;
  p_output1[172]=95;
  p_output1[173]=95;
  p_output1[174]=96;
  p_output1[175]=96;
  p_output1[176]=100;
  p_output1[177]=102;
  p_output1[178]=5;
  p_output1[179]=6;
  p_output1[180]=7;
  p_output1[181]=8;
  p_output1[182]=9;
  p_output1[183]=5;
  p_output1[184]=6;
  p_output1[185]=7;
  p_output1[186]=5;
  p_output1[187]=6;
  p_output1[188]=7;
  p_output1[189]=8;
  p_output1[190]=9;
  p_output1[191]=5;
  p_output1[192]=6;
  p_output1[193]=16;
  p_output1[194]=17;
  p_output1[195]=18;
  p_output1[196]=5;
  p_output1[197]=6;
  p_output1[198]=16;
  p_output1[199]=5;
  p_output1[200]=6;
  p_output1[201]=16;
  p_output1[202]=17;
  p_output1[203]=18;
  p_output1[204]=4;
  p_output1[205]=5;
  p_output1[206]=6;
  p_output1[207]=7;
  p_output1[208]=8;
  p_output1[209]=9;
  p_output1[210]=4;
  p_output1[211]=5;
  p_output1[212]=6;
  p_output1[213]=7;
  p_output1[214]=4;
  p_output1[215]=5;
  p_output1[216]=6;
  p_output1[217]=7;
  p_output1[218]=8;
  p_output1[219]=9;
  p_output1[220]=4;
  p_output1[221]=5;
  p_output1[222]=6;
  p_output1[223]=16;
  p_output1[224]=17;
  p_output1[225]=18;
  p_output1[226]=4;
  p_output1[227]=5;
  p_output1[228]=6;
  p_output1[229]=16;
  p_output1[230]=4;
  p_output1[231]=5;
  p_output1[232]=6;
  p_output1[233]=16;
  p_output1[234]=17;
  p_output1[235]=18;
  p_output1[236]=4;
  p_output1[237]=5;
  p_output1[238]=6;
  p_output1[239]=7;
  p_output1[240]=8;
  p_output1[241]=9;
  p_output1[242]=4;
  p_output1[243]=5;
  p_output1[244]=6;
  p_output1[245]=7;
  p_output1[246]=4;
  p_output1[247]=5;
  p_output1[248]=6;
  p_output1[249]=7;
  p_output1[250]=8;
  p_output1[251]=9;
  p_output1[252]=4;
  p_output1[253]=5;
  p_output1[254]=6;
  p_output1[255]=16;
  p_output1[256]=17;
  p_output1[257]=18;
  p_output1[258]=4;
  p_output1[259]=5;
  p_output1[260]=6;
  p_output1[261]=16;
  p_output1[262]=4;
  p_output1[263]=5;
  p_output1[264]=6;
  p_output1[265]=16;
  p_output1[266]=17;
  p_output1[267]=18;
  p_output1[268]=5;
  p_output1[269]=6;
  p_output1[270]=7;
  p_output1[271]=8;
  p_output1[272]=9;
  p_output1[273]=5;
  p_output1[274]=6;
  p_output1[275]=7;
  p_output1[276]=8;
  p_output1[277]=9;
  p_output1[278]=5;
  p_output1[279]=6;
  p_output1[280]=7;
  p_output1[281]=8;
  p_output1[282]=9;
  p_output1[283]=5;
  p_output1[284]=6;
  p_output1[285]=16;
  p_output1[286]=17;
  p_output1[287]=18;
  p_output1[288]=5;
  p_output1[289]=6;
  p_output1[290]=16;
  p_output1[291]=17;
  p_output1[292]=18;
  p_output1[293]=5;
  p_output1[294]=6;
  p_output1[295]=16;
  p_output1[296]=17;
  p_output1[297]=18;
  p_output1[298]=6;
  p_output1[299]=7;
  p_output1[300]=8;
  p_output1[301]=9;
  p_output1[302]=6;
  p_output1[303]=7;
  p_output1[304]=8;
  p_output1[305]=9;
  p_output1[306]=6;
  p_output1[307]=7;
  p_output1[308]=8;
  p_output1[309]=9;
  p_output1[310]=6;
  p_output1[311]=16;
  p_output1[312]=17;
  p_output1[313]=18;
  p_output1[314]=6;
  p_output1[315]=16;
  p_output1[316]=17;
  p_output1[317]=18;
  p_output1[318]=6;
  p_output1[319]=16;
  p_output1[320]=17;
  p_output1[321]=18;
  p_output1[322]=7;
  p_output1[323]=8;
  p_output1[324]=9;
  p_output1[325]=7;
  p_output1[326]=8;
  p_output1[327]=9;
  p_output1[328]=7;
  p_output1[329]=8;
  p_output1[330]=9;
  p_output1[331]=16;
  p_output1[332]=17;
  p_output1[333]=18;
  p_output1[334]=16;
  p_output1[335]=17;
  p_output1[336]=18;
  p_output1[337]=16;
  p_output1[338]=17;
  p_output1[339]=18;
  p_output1[340]=8;
  p_output1[341]=9;
  p_output1[342]=8;
  p_output1[343]=9;
  p_output1[344]=8;
  p_output1[345]=9;
  p_output1[346]=9;
  p_output1[347]=9;
  p_output1[348]=17;
  p_output1[349]=18;
  p_output1[350]=17;
  p_output1[351]=18;
  p_output1[352]=17;
  p_output1[353]=18;
  p_output1[354]=18;
  p_output1[355]=18;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 178, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Je_DiagonalStance2.hh"

namespace SymFunction
{

void Js_Je_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
