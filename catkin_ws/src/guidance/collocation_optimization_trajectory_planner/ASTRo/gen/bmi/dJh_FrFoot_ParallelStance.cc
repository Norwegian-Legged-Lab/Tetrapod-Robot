/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:13 GMT+02:00
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
  double t4127;
  double t4128;
  double t4132;
  double t4133;
  double t4137;
  double t4141;
  double t4142;
  double t4144;
  double t4112;
  double t4126;
  double t4145;
  double t4149;
  double t4143;
  double t4146;
  double t4147;
  double t4087;
  double t4150;
  double t4151;
  double t4187;
  double t4191;
  double t4192;
  double t4193;
  double t4195;
  double t4196;
  double t4197;
  double t4198;
  double t4199;
  double t4210;
  double t4212;
  double t4213;
  double t4215;
  double t4217;
  double t4218;
  double t4227;
  double t4228;
  double t4229;
  double t4231;
  double t4232;
  double t4233;
  double t4236;
  double t4237;
  double t4238;
  double t4239;
  double t4240;
  double t4241;
  double t4250;
  double t4251;
  double t4252;
  double t4260;
  double t4261;
  double t4262;
  double t4263;
  double t4264;
  double t4269;
  double t4270;
  double t4272;
  double t4273;
  double t4274;
  double t4275;
  double t4276;
  double t4277;
  double t4259;
  double t4265;
  double t4266;
  double t4267;
  double t4271;
  double t4278;
  double t4279;
  double t4280;
  double t4281;
  double t4282;
  double t4283;
  double t4284;
  double t4285;
  double t4286;
  double t4287;
  double t4291;
  double t4292;
  double t4293;
  double t4268;
  double t4288;
  double t4289;
  double t4302;
  double t4303;
  double t4304;
  double t4256;
  double t4257;
  double t4258;
  double t4297;
  double t4298;
  double t4299;
  double t4310;
  double t4311;
  double t4312;
  double t4328;
  double t4329;
  double t4330;
  double t4382;
  double t4383;
  double t4384;
  double t4300;
  double t4397;
  double t4398;
  double t4399;
  double t4317;
  double t4411;
  double t4412;
  double t4413;
  double t4301;
  double t4305;
  double t4306;
  double t4401;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4410;
  double t4415;
  double t4318;
  double t4319;
  double t4320;
  double t4337;
  double t4348;
  double t4453;
  double t4455;
  double t4463;
  double t4465;
  double t4338;
  double t4339;
  double t4340;
  double t4349;
  double t4350;
  double t4351;
  double t4363;
  double t4374;
  double t4364;
  double t4365;
  double t4366;
  double t4425;
  double t4427;
  double t4504;
  double t4505;
  double t4510;
  double t4512;
  double t4375;
  double t4376;
  double t4377;
  double t4385;
  double t4386;
  double t4387;
  double t4388;
  double t4389;
  double t4390;
  double t4391;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4541;
  double t4542;
  double t4543;
  double t4539;
  double t4406;
  double t4548;
  double t4549;
  double t4550;
  double t4552;
  double t4553;
  double t4554;
  double t4414;
  double t4418;
  double t4419;
  double t4420;
  double t4421;
  double t4424;
  double t4555;
  double t4429;
  double t4430;
  double t4559;
  double t4435;
  double t4436;
  double t4439;
  double t4443;
  double t4444;
  double t4445;
  double t4446;
  double t4447;
  double t4448;
  double t4449;
  double t4450;
  double t4451;
  double t4454;
  double t4458;
  double t4459;
  double t4460;
  double t4461;
  double t4464;
  double t4468;
  double t4469;
  double t4470;
  double t4471;
  double t4590;
  double t4476;
  double t4477;
  double t4594;
  double t4482;
  double t4483;
  double t4486;
  double t4487;
  double t4491;
  double t4492;
  double t4493;
  double t4494;
  double t4495;
  double t4496;
  double t4497;
  double t4498;
  double t4499;
  double t4500;
  double t4501;
  double t4502;
  double t4506;
  double t4511;
  double t4515;
  double t4516;
  double t4517;
  double t4518;
  double t4521;
  double t4617;
  double t4524;
  double t4525;
  double t4621;
  double t4530;
  double t4531;
  double t4534;
  double t4641;
  double t4642;
  double t4643;
  double t4645;
  double t4646;
  double t4647;
  double t4651;
  double t4652;
  double t4653;
  double t4655;
  double t4656;
  double t4657;
  double t4665;
  double t4666;
  double t4667;
  double t4669;
  double t4670;
  double t4671;
  double t4668;
  double t4676;
  double t4677;
  double t4678;
  double t4679;
  double t4681;
  double t4687;
  double t4688;
  double t4689;
  double t4691;
  double t4692;
  double t4693;
  double t4708;
  double t4710;
  double t4727;
  double t4729;
  double t4718;
  double t4644;
  double t4648;
  double t4649;
  double t4748;
  double t4750;
  double t4754;
  double t4204;
  double t4206;
  double t4207;
  double t4790;
  double t4797;
  double t4799;
  double t4637;
  double t4638;
  double t4639;
  double t4245;
  double t4246;
  double t4247;
  double t4832;
  double t4833;
  double t4834;
  double t4835;
  double t4836;
  double t4837;
  double t4839;
  double t4840;
  double t4841;
  double t4845;
  double t4846;
  double t4847;
  double t4838;
  double t4850;
  double t4851;
  double t4856;
  double t4857;
  double t4858;
  double t4853;
  double t4855;
  double t4864;
  double t4865;
  double t4866;
  double t4868;
  double t4869;
  double t4870;
  double t4874;
  double t4875;
  double t4876;
  double t4705;
  double t4706;
  double t4713;
  double t4714;
  double t4716;
  double t4723;
  double t4724;
  double t4725;
  double t4892;
  double t4899;
  double t4741;
  double t4742;
  double t4743;
  double t4921;
  double t4925;
  double t4927;
  double t4881;
  double t4882;
  double t4883;
  double t4776;
  double t4777;
  double t4778;
  double t4779;
  double t4780;
  double t4781;
  double t4782;
  double t4964;
  double t4970;
  t4127 = Cos(var1[13]);
  t4128 = Cos(var1[14]);
  t4132 = t4127*t4128;
  t4133 = Sin(var1[13]);
  t4137 = Sin(var1[14]);
  t4141 = t4133*t4137;
  t4142 = t4132 + t4141;
  t4144 = Cos(var1[12]);
  t4112 = Cos(var1[5]);
  t4126 = Sin(var1[12]);
  t4145 = Sin(var1[5]);
  t4149 = Cos(var1[3]);
  t4143 = t4112*t4126*t4142;
  t4146 = t4144*t4142*t4145;
  t4147 = t4143 + t4146;
  t4087 = Sin(var1[3]);
  t4150 = Cos(var1[4]);
  t4151 = -1.*t4128*t4133;
  t4187 = t4127*t4137;
  t4191 = t4151 + t4187;
  t4192 = t4150*t4191;
  t4193 = Sin(var1[4]);
  t4195 = t4144*t4112*t4142;
  t4196 = -1.*t4126*t4142*t4145;
  t4197 = t4195 + t4196;
  t4198 = -1.*t4193*t4197;
  t4199 = t4192 + t4198;
  t4210 = -1.*t4112*t4126;
  t4212 = -1.*t4144*t4145;
  t4213 = t4210 + t4212;
  t4215 = t4144*t4112;
  t4217 = -1.*t4126*t4145;
  t4218 = t4215 + t4217;
  t4227 = t4128*t4133;
  t4228 = -1.*t4127*t4137;
  t4229 = t4227 + t4228;
  t4231 = t4112*t4126*t4229;
  t4232 = t4144*t4229*t4145;
  t4233 = t4231 + t4232;
  t4236 = t4150*t4142;
  t4237 = t4144*t4112*t4229;
  t4238 = -1.*t4126*t4229*t4145;
  t4239 = t4237 + t4238;
  t4240 = -1.*t4193*t4239;
  t4241 = t4236 + t4240;
  t4250 = -1.*t4191*t4193;
  t4251 = -1.*t4150*t4197;
  t4252 = t4250 + t4251;
  t4260 = -1.*t4128;
  t4261 = 1. + t4260;
  t4262 = 0.50321*t4261;
  t4263 = 0.19821*t4128;
  t4264 = t4262 + t4263;
  t4269 = -1.*t4144;
  t4270 = 1. + t4269;
  t4272 = -1.*t4127;
  t4273 = 1. + t4272;
  t4274 = 0.28121*t4273;
  t4275 = t4127*t4264;
  t4276 = -0.305*t4133*t4137;
  t4277 = t4274 + t4275 + t4276;
  t4259 = 0.28121*t4133;
  t4265 = -1.*t4264*t4133;
  t4266 = -0.305*t4127*t4137;
  t4267 = t4259 + t4265 + t4266;
  t4271 = 0.15121*t4270;
  t4278 = t4144*t4277;
  t4279 = t4271 + t4278;
  t4280 = t4112*t4279;
  t4281 = -0.15121*t4270;
  t4282 = -0.15121*t4144;
  t4283 = -0.15121*t4126;
  t4284 = t4126*t4277;
  t4285 = t4281 + t4282 + t4283 + t4284;
  t4286 = -1.*t4285*t4145;
  t4287 = t4280 + t4286;
  t4291 = t4267*t4193;
  t4292 = t4150*t4287;
  t4293 = t4291 + t4292;
  t4268 = -1.*t4267*t4193;
  t4288 = -1.*t4150*t4287;
  t4289 = t4268 + t4288;
  t4302 = t4150*t4267;
  t4303 = -1.*t4193*t4287;
  t4304 = t4302 + t4303;
  t4256 = t4142*t4193;
  t4257 = t4150*t4239;
  t4258 = t4256 + t4257;
  t4297 = t4112*t4285;
  t4298 = t4279*t4145;
  t4299 = t4297 + t4298;
  t4310 = -1.*t4142*t4193;
  t4311 = -1.*t4150*t4239;
  t4312 = t4310 + t4311;
  t4328 = t4191*t4193;
  t4329 = t4150*t4197;
  t4330 = t4328 + t4329;
  t4382 = -1.*t4112*t4126*t4142;
  t4383 = -1.*t4144*t4142*t4145;
  t4384 = t4382 + t4383;
  t4300 = -1.*t4218*t4299;
  t4397 = -1.*t4112*t4285;
  t4398 = -1.*t4279*t4145;
  t4399 = t4397 + t4398;
  t4317 = t4233*t4299;
  t4411 = -1.*t4112*t4126*t4229;
  t4412 = -1.*t4144*t4229*t4145;
  t4413 = t4411 + t4412;
  t4301 = -1.*t4150*t4213*t4293;
  t4305 = t4193*t4213*t4304;
  t4306 = t4300 + t4301 + t4305;
  t4401 = -1.*t4213*t4299;
  t4402 = -1.*t4218*t4287;
  t4403 = -1.*t4144*t4112;
  t4404 = t4126*t4145;
  t4405 = t4403 + t4404;
  t4410 = t4239*t4299;
  t4415 = t4233*t4287;
  t4318 = t4258*t4293;
  t4319 = t4241*t4304;
  t4320 = t4317 + t4318 + t4319;
  t4337 = -1.*t4233*t4299;
  t4348 = t4147*t4299;
  t4453 = -1.*t4239*t4299;
  t4455 = -1.*t4233*t4287;
  t4463 = t4197*t4299;
  t4465 = t4147*t4287;
  t4338 = -1.*t4258*t4293;
  t4339 = -1.*t4241*t4304;
  t4340 = t4337 + t4338 + t4339;
  t4349 = t4330*t4293;
  t4350 = t4199*t4304;
  t4351 = t4348 + t4349 + t4350;
  t4363 = t4218*t4299;
  t4374 = -1.*t4147*t4299;
  t4364 = t4150*t4213*t4293;
  t4365 = -1.*t4193*t4213*t4304;
  t4366 = t4363 + t4364 + t4365;
  t4425 = Power(t4150,2);
  t4427 = Power(t4193,2);
  t4504 = t4213*t4299;
  t4505 = t4218*t4287;
  t4510 = -1.*t4197*t4299;
  t4512 = -1.*t4147*t4287;
  t4375 = -1.*t4330*t4293;
  t4376 = -1.*t4199*t4304;
  t4377 = t4374 + t4375 + t4376;
  t4385 = var2[0]*t4150*t4384;
  t4386 = t4087*t4193*t4384;
  t4387 = t4149*t4197;
  t4388 = t4386 + t4387;
  t4389 = var2[1]*t4388;
  t4390 = -1.*t4149*t4193*t4384;
  t4391 = t4087*t4197;
  t4392 = t4390 + t4391;
  t4393 = var2[2]*t4392;
  t4394 = -1.*t4213*t4287;
  t4395 = t4300 + t4394;
  t4396 = t4239*t4395;
  t4541 = 0.15121*t4126;
  t4542 = -1.*t4126*t4277;
  t4543 = t4541 + t4542;
  t4539 = t4282 + t4278;
  t4406 = -1.*t4405*t4287;
  t4548 = t4112*t4543;
  t4549 = -1.*t4539*t4145;
  t4550 = t4548 + t4549;
  t4552 = t4112*t4539;
  t4553 = t4543*t4145;
  t4554 = t4552 + t4553;
  t4414 = t4413*t4287;
  t4418 = t4267*t4142;
  t4419 = t4239*t4287;
  t4420 = t4418 + t4317 + t4419;
  t4421 = t4213*t4420;
  t4424 = t4150*t4413*t4306;
  t4555 = -1.*t4218*t4554;
  t4429 = -1.*t4150*t4405*t4293;
  t4430 = t4193*t4405*t4304;
  t4559 = t4233*t4554;
  t4435 = t4150*t4413*t4293;
  t4436 = -1.*t4193*t4413*t4304;
  t4439 = t4150*t4405*t4320;
  t4443 = var2[0]*t4150*t4405;
  t4444 = t4087*t4213;
  t4445 = -1.*t4149*t4193*t4405;
  t4446 = t4444 + t4445;
  t4447 = var2[2]*t4446;
  t4448 = t4149*t4213;
  t4449 = t4087*t4193*t4405;
  t4450 = t4448 + t4449;
  t4451 = var2[1]*t4450;
  t4454 = -1.*t4413*t4287;
  t4458 = -1.*t4267*t4142;
  t4459 = -1.*t4239*t4287;
  t4460 = t4458 + t4337 + t4459;
  t4461 = t4197*t4460;
  t4464 = t4384*t4287;
  t4468 = t4267*t4191;
  t4469 = t4197*t4287;
  t4470 = t4468 + t4348 + t4469;
  t4471 = t4239*t4470;
  t4590 = -1.*t4233*t4554;
  t4476 = -1.*t4150*t4413*t4293;
  t4477 = t4193*t4413*t4304;
  t4594 = t4147*t4554;
  t4482 = t4150*t4384*t4293;
  t4483 = -1.*t4193*t4384*t4304;
  t4486 = t4150*t4384*t4340;
  t4487 = t4150*t4413*t4351;
  t4491 = var2[0]*t4150*t4413;
  t4492 = t4087*t4193*t4413;
  t4493 = t4149*t4239;
  t4494 = t4492 + t4493;
  t4495 = var2[1]*t4494;
  t4496 = -1.*t4149*t4193*t4413;
  t4497 = t4087*t4239;
  t4498 = t4496 + t4497;
  t4499 = var2[2]*t4498;
  t4500 = t4213*t4287;
  t4501 = t4363 + t4500;
  t4502 = t4197*t4501;
  t4506 = t4405*t4287;
  t4511 = -1.*t4384*t4287;
  t4515 = -1.*t4267*t4191;
  t4516 = -1.*t4197*t4287;
  t4517 = t4515 + t4374 + t4516;
  t4518 = t4213*t4517;
  t4521 = t4150*t4384*t4366;
  t4617 = t4218*t4554;
  t4524 = t4150*t4405*t4293;
  t4525 = -1.*t4193*t4405*t4304;
  t4621 = -1.*t4147*t4554;
  t4530 = -1.*t4150*t4384*t4293;
  t4531 = t4193*t4384*t4304;
  t4534 = t4150*t4405*t4377;
  t4641 = -1.*t4127*t4128;
  t4642 = -1.*t4133*t4137;
  t4643 = t4641 + t4642;
  t4645 = t4144*t4112*t4191;
  t4646 = -1.*t4126*t4191*t4145;
  t4647 = t4645 + t4646;
  t4651 = t4112*t4126*t4191;
  t4652 = t4144*t4191*t4145;
  t4653 = t4651 + t4652;
  t4655 = t4150*t4643;
  t4656 = -1.*t4193*t4647;
  t4657 = t4655 + t4656;
  t4665 = t4112*t4126*t4267;
  t4666 = t4144*t4267*t4145;
  t4667 = t4665 + t4666;
  t4669 = t4144*t4112*t4267;
  t4670 = -1.*t4126*t4267*t4145;
  t4671 = t4669 + t4670;
  t4668 = -1.*t4218*t4667;
  t4676 = 0.28121*t4127;
  t4677 = -1.*t4127*t4264;
  t4678 = 0.305*t4133*t4137;
  t4679 = t4676 + t4677 + t4678;
  t4681 = t4233*t4667;
  t4687 = t4679*t4193;
  t4688 = t4150*t4671;
  t4689 = t4687 + t4688;
  t4691 = t4150*t4679;
  t4692 = -1.*t4193*t4671;
  t4693 = t4691 + t4692;
  t4708 = t4267*t4643;
  t4710 = t4191*t4679;
  t4727 = Power(t4144,2);
  t4729 = Power(t4126,2);
  t4718 = -1.*t4679*t4142;
  t4644 = t4643*t4193;
  t4648 = t4150*t4647;
  t4649 = t4644 + t4648;
  t4748 = t4667*t4147;
  t4750 = t4653*t4299;
  t4754 = -1.*t4233*t4667;
  t4204 = t4149*t4147;
  t4206 = -1.*t4087*t4199;
  t4207 = t4204 + t4206;
  t4790 = t4218*t4667;
  t4797 = -1.*t4667*t4147;
  t4799 = -1.*t4653*t4299;
  t4637 = t4126*t4279;
  t4638 = -1.*t4144*t4285;
  t4639 = t4637 + t4638;
  t4245 = t4149*t4233;
  t4246 = -1.*t4087*t4241;
  t4247 = t4245 + t4246;
  t4832 = -0.305*t4128*t4133;
  t4833 = 0.305*t4127*t4137;
  t4834 = t4832 + t4833;
  t4835 = t4112*t4126*t4834;
  t4836 = t4144*t4834*t4145;
  t4837 = t4835 + t4836;
  t4839 = t4144*t4112*t4834;
  t4840 = -1.*t4126*t4834*t4145;
  t4841 = t4839 + t4840;
  t4845 = t4112*t4126*t4643;
  t4846 = t4144*t4643*t4145;
  t4847 = t4845 + t4846;
  t4838 = -1.*t4218*t4837;
  t4850 = -0.305*t4127*t4128;
  t4851 = t4850 + t4276;
  t4856 = t4144*t4112*t4643;
  t4857 = -1.*t4126*t4643*t4145;
  t4858 = t4856 + t4857;
  t4853 = t4233*t4837;
  t4855 = t4847*t4299;
  t4864 = t4851*t4193;
  t4865 = t4150*t4841;
  t4866 = t4864 + t4865;
  t4868 = t4150*t4851;
  t4869 = -1.*t4193*t4841;
  t4870 = t4868 + t4869;
  t4874 = t4229*t4193;
  t4875 = t4150*t4858;
  t4876 = t4874 + t4875;
  t4705 = -1.*t4229*t4277;
  t4706 = t4705 + t4458;
  t4713 = t4277*t4142;
  t4714 = t4468 + t4713;
  t4716 = -1.*t4229*t4267;
  t4723 = -1.*t4144*t4229*t4279;
  t4724 = -1.*t4126*t4229*t4285;
  t4725 = t4458 + t4723 + t4724;
  t4892 = t4191*t4851;
  t4899 = -1.*t4851*t4142;
  t4741 = t4144*t4142*t4279;
  t4742 = t4126*t4142*t4285;
  t4743 = t4468 + t4741 + t4742;
  t4921 = t4837*t4147;
  t4925 = -1.*t4233*t4837;
  t4927 = -1.*t4847*t4299;
  t4881 = t4150*t4229;
  t4882 = -1.*t4193*t4858;
  t4883 = t4881 + t4882;
  t4776 = -0.15121*t4643;
  t4777 = -0.15121*t4142;
  t4778 = t4776 + t4777;
  t4779 = var2[12]*t4778;
  t4780 = -1.*t4126*t4279;
  t4781 = t4144*t4285;
  t4782 = t4780 + t4781;
  t4964 = t4218*t4837;
  t4970 = -1.*t4837*t4147;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t4087*t4147 - 1.*t4149*t4199)*var2[1] + t4207*var2[2];
  p_output1[10]=(t4149*t4193*t4213 - 1.*t4087*t4218)*var2[1] + (t4087*t4193*t4213 + t4149*t4218)*var2[2];
  p_output1[11]=(-1.*t4087*t4233 - 1.*t4149*t4241)*var2[1] + t4247*var2[2];
  p_output1[12]=t4199*var2[0] - 1.*t4087*t4252*var2[1] + t4149*t4252*var2[2] + (t4258*(t4193*t4213*t4289 + t4193*t4213*t4293) + t4241*t4306 + t4150*t4213*(t4241*t4289 + t4241*t4293 + t4258*t4304 + t4304*t4312) - 1.*t4193*t4213*t4320)*var2[3];
  p_output1[13]=-1.*t4193*t4213*var2[0] + t4087*t4150*t4213*var2[1] - 1.*t4149*t4150*t4213*var2[2] + ((-1.*t4241*t4289 - 1.*t4241*t4293 - 1.*t4258*t4304 - 1.*t4304*t4312)*t4330 + t4258*(t4199*t4289 + t4199*t4293 + t4252*t4304 + t4304*t4330) + t4199*t4340 + t4241*t4351)*var2[3];
  p_output1[14]=t4241*var2[0] - 1.*t4087*t4312*var2[1] + t4149*t4312*var2[2] + ((-1.*t4193*t4213*t4289 - 1.*t4193*t4213*t4293)*t4330 + t4150*t4213*(-1.*t4199*t4289 - 1.*t4199*t4293 - 1.*t4252*t4304 - 1.*t4304*t4330) + t4199*t4366 - 1.*t4193*t4213*t4377)*var2[3];
  p_output1[15]=t4385 + t4389 + t4393 + (t4424 + t4258*(t4401 + t4402 - 1.*t4213*t4399*t4425 - 1.*t4213*t4399*t4427 + t4429 + t4430) + t4150*t4213*(-1.*t4193*t4241*t4399 + t4150*t4258*t4399 + t4410 + t4415 + t4435 + t4436) + t4439)*var2[3] + (t4396 + t4233*(-1.*t4213*t4399 + t4401 + t4402 + t4406) + t4218*(t4239*t4399 + t4410 + t4414 + t4415) + t4421)*var2[4];
  p_output1[16]=t4443 + t4447 + t4451 + (t4330*(t4193*t4241*t4399 - 1.*t4150*t4258*t4399 + t4453 + t4455 + t4476 + t4477) + t4258*(-1.*t4193*t4199*t4399 + t4150*t4330*t4399 + t4463 + t4465 + t4482 + t4483) + t4486 + t4487)*var2[3] + (t4147*(-1.*t4239*t4399 + t4453 + t4454 + t4455) + t4461 + t4233*(t4197*t4399 + t4463 + t4464 + t4465) + t4471)*var2[4];
  p_output1[17]=t4491 + t4495 + t4499 + (t4521 + t4330*(t4213*t4399*t4425 + t4213*t4399*t4427 + t4504 + t4505 + t4524 + t4525) + t4150*t4213*(t4193*t4199*t4399 - 1.*t4150*t4330*t4399 + t4510 + t4512 + t4530 + t4531) + t4534)*var2[3] + (t4502 + t4147*(t4213*t4399 + t4504 + t4505 + t4506) + t4218*(-1.*t4197*t4399 + t4510 + t4511 + t4512) + t4518)*var2[4];
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
  p_output1[36]=t4385 + t4389 + t4393 + (t4424 + t4439 + t4258*(t4401 + t4429 + t4430 - 1.*t4213*t4425*t4550 - 1.*t4213*t4427*t4550 + t4555) + t4150*t4213*(t4410 + t4435 + t4436 - 1.*t4193*t4241*t4550 + t4150*t4258*t4550 + t4559))*var2[3] + (t4396 + t4421 + t4233*(t4401 + t4406 - 1.*t4213*t4550 + t4555) + t4218*(t4410 + t4414 + t4239*t4550 + t4559))*var2[4] + t4142*(t4144*t4279 + t4126*t4285 - 1.*t4144*t4539 + t4126*t4543)*var2[5];
  p_output1[37]=t4443 + t4447 + t4451 + (t4486 + t4487 + t4330*(t4453 + t4476 + t4477 + t4193*t4241*t4550 - 1.*t4150*t4258*t4550 + t4590) + t4258*(t4463 + t4482 + t4483 - 1.*t4193*t4199*t4550 + t4150*t4330*t4550 + t4594))*var2[3] + (t4461 + t4471 + t4147*(t4453 + t4454 - 1.*t4239*t4550 + t4590) + t4233*(t4463 + t4464 + t4197*t4550 + t4594))*var2[4] + (t4142*(-1.*t4126*t4142*t4279 + t4142*t4144*t4285 + t4126*t4142*t4539 + t4142*t4144*t4543) + t4191*(t4126*t4229*t4279 - 1.*t4144*t4229*t4285 - 1.*t4126*t4229*t4539 - 1.*t4144*t4229*t4543))*var2[5];
  p_output1[38]=t4491 + t4495 + t4499 + (t4521 + t4534 + t4330*(t4504 + t4524 + t4525 + t4213*t4425*t4550 + t4213*t4427*t4550 + t4617) + t4150*t4213*(t4510 + t4530 + t4531 + t4193*t4199*t4550 - 1.*t4150*t4330*t4550 + t4621))*var2[3] + (t4502 + t4518 + t4147*(t4504 + t4506 + t4213*t4550 + t4617) + t4218*(t4510 + t4511 - 1.*t4197*t4550 + t4621))*var2[4] + t4191*(-1.*t4144*t4279 - 1.*t4126*t4285 + t4144*t4539 - 1.*t4126*t4543)*var2[5];
  p_output1[39]=t4649*var2[0] + (t4149*t4653 - 1.*t4087*t4657)*var2[1] + (t4087*t4653 + t4149*t4657)*var2[2] + (t4306*t4330 + t4258*(t4668 - 1.*t4150*t4213*t4689 + t4193*t4213*t4693) + t4150*t4213*(t4348 + t4349 + t4350 + t4681 + t4258*t4689 + t4241*t4693))*var2[3] + (t4147*t4395 + t4233*(t4668 - 1.*t4213*t4671) + t4218*(t4348 + t4468 + t4469 + t4239*t4671 + t4142*t4679 + t4681))*var2[4] + t4191*t4639*var2[5];
  p_output1[40]=(t4330*t4351 + t4340*t4649 + t4258*(t4293*t4649 + t4304*t4657 + t4330*t4689 + t4199*t4693 + t4748 + t4750) + t4330*(t4374 + t4375 + t4376 - 1.*t4258*t4689 - 1.*t4241*t4693 + t4754))*var2[3] + (t4147*t4470 + t4460*t4653 + t4233*(t4287*t4647 + t4197*t4671 + t4708 + t4710 + t4748 + t4750) + t4147*(t4374 + t4515 + t4516 - 1.*t4239*t4671 + t4718 + t4754))*var2[4] + (t4643*t4725 + t4142*(t4144*t4191*t4279 + t4126*t4191*t4285 + t4708 + t4710 + t4142*t4267*t4727 + t4142*t4267*t4729) + t4191*(-1.*t4142*t4144*t4279 - 1.*t4126*t4142*t4285 + t4515 + t4718 - 1.*t4229*t4267*t4727 - 1.*t4229*t4267*t4729) + t4191*t4743)*var2[5] + (t4643*t4706 + t4142*(t4191*t4277 + t4418 + t4708 + t4710) + t4191*t4714 + t4191*(-1.*t4142*t4277 + t4515 + t4716 + t4718))*var2[12];
  p_output1[41]=t4779 + t4330*var2[0] + t4207*var2[1] + (t4087*t4147 + t4149*t4199)*var2[2] + (t4366*t4649 + t4330*(t4150*t4213*t4689 - 1.*t4193*t4213*t4693 + t4790) + t4150*t4213*(-1.*t4293*t4649 - 1.*t4304*t4657 - 1.*t4330*t4689 - 1.*t4199*t4693 + t4797 + t4799))*var2[3] + (t4501*t4653 + t4147*(t4213*t4671 + t4790) + t4218*(-1.*t4267*t4643 - 1.*t4287*t4647 - 1.*t4197*t4671 - 1.*t4191*t4679 + t4797 + t4799))*var2[4] + t4643*t4782*var2[5];
  p_output1[42]=t4258*var2[0] + t4247*var2[1] + (t4087*t4233 + t4149*t4241)*var2[2] + (t4258*(t4838 - 1.*t4150*t4213*t4866 + t4193*t4213*t4870) + t4306*t4876 + t4150*t4213*(t4853 + t4855 + t4258*t4866 + t4241*t4870 + t4293*t4876 + t4304*t4883))*var2[3] + (t4233*(t4838 - 1.*t4213*t4841) + t4395*t4847 + t4218*(t4229*t4267 + t4239*t4841 + t4142*t4851 + t4853 + t4855 + t4287*t4858))*var2[4] + t4229*t4639*var2[5] + (0.28121*t4128 - 0.305*Power(t4128,2) - 1.*t4128*t4264)*var2[13];
  p_output1[43]=(t4258*t4340 + t4351*t4876 + t4258*(t4317 + t4318 + t4319 + t4330*t4866 + t4199*t4870 + t4921) + t4330*(-1.*t4258*t4866 - 1.*t4241*t4870 - 1.*t4293*t4876 - 1.*t4304*t4883 + t4925 + t4927))*var2[3] + (t4233*t4460 + t4470*t4847 + t4233*(t4317 + t4418 + t4419 + t4197*t4841 + t4892 + t4921) + t4147*(t4716 - 1.*t4239*t4841 - 1.*t4287*t4858 + t4899 + t4925 + t4927))*var2[4] + (t4142*t4725 + t4229*t4743 + t4142*(t4144*t4229*t4279 + t4126*t4229*t4285 + t4418 + t4142*t4727*t4834 + t4142*t4729*t4834 + t4892) + t4191*(-1.*t4144*t4279*t4643 - 1.*t4126*t4285*t4643 + t4716 - 1.*t4229*t4727*t4834 - 1.*t4229*t4729*t4834 + t4899))*var2[5] + (t4142*t4706 + t4229*t4714 + t4142*(t4229*t4277 + t4418 + t4142*t4834 + t4892) + t4191*(-1.*t4277*t4643 + t4716 - 1.*t4229*t4834 + t4899))*var2[12];
  p_output1[44]=t4779 + t4876*var2[0] + (t4149*t4847 - 1.*t4087*t4883)*var2[1] + (t4087*t4847 + t4149*t4883)*var2[2] + (t4258*t4366 + t4330*(t4150*t4213*t4866 - 1.*t4193*t4213*t4870 + t4964) + t4150*t4213*(t4337 + t4338 + t4339 - 1.*t4330*t4866 - 1.*t4199*t4870 + t4970))*var2[3] + (t4233*t4501 + t4147*(t4213*t4841 + t4964) + t4218*(t4337 + t4458 + t4459 - 1.*t4197*t4841 - 1.*t4191*t4851 + t4970))*var2[4] + t4142*t4782*var2[5] + (-0.28121*t4137 + 0.305*t4128*t4137 + t4137*t4264)*var2[13];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
