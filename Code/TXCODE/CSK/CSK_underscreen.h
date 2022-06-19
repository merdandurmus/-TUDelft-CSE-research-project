/*!
 *  @file CSK_underscrren.h
 *
 *  Software License Agreement (BSD License)
 *
 *  Copyright (c) 2021, Hanting Ye
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *  1. Redistributions of source code must retain the above copyright
 *  notice this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *  notice, this list of conditions and the following disclaimer in the
 *  documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holders nor the
 *  names of its contributors may be used to endorse or promote products
 *  derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
 *  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
 *  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 *  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 *  DAMAGE.
 */
 
 //8CSK modulation
 //Grey code
 //000, 001, 011, 010, 110, 111, 101, 100
 //(0.3819,0.5481), (0.1886,0.5785), (0.4013,0.4032), (0.2141, 0.3762), (0.4773, 0.3091), (0.3108, 0.2312), (0.1736, 0.0915), (0.6544, 0.3205)
 
  typedef enum{
	 CSK0_R = 43,
	 CSK1_R = 4,
	 CSK3_R = 49,
	 CSK2_R = 12,
	 CSK6_R = 65,
	 CSK7_R = 33,
	 CSK5_R = 8,
	 CSK4_R = 100,
 }CBC_PWM_R;
 
   typedef enum{
	 CSK0_G = 80,
	 CSK1_G = 45,
	 CSK3_G = 50,
	 CSK2_G = 52,
	 CSK6_G = 28,
	 CSK7_G = 24,
	 CSK5_G = 0,
	 CSK4_G = 0,
 }CBC_PWM_G;

  typedef enum{
	 CSK0_B = 0,
	 CSK1_B = 9,
	 CSK3_B = 16,
	 CSK2_B = 21,
	 CSK6_B = 18,
	 CSK7_B = 25,
	 CSK5_B = 42,
	 CSK4_B = 0,
 }CBC_PWM_B;

//What is the _8 after the line?

 typedef enum{
	CSK0_R_8 = 20,
	CSK1_R_8 = 4,
	CSK3_R_8 = 49,
	CSK2_R_8 = 12,
	CSK6_R_8 = 65,
	CSK7_R_8 = 33,
	CSK5_R_8 = 60,
	CSK4_R_8 = 100,
}CBC_PWM_R_8;
 
  typedef enum{
	CSK0_G_8 = 78,
	CSK1_G_8 = 45,
	CSK3_G_8 = 41,
	CSK2_G_8 = 59,
	CSK6_G_8 = 69, //16
	CSK7_G_8 = 18,
	CSK5_G_8 = 10,
	CSK4_G_8 = 0,
}CBC_PWM_G_8;

 typedef enum{
	CSK0_B_8 = 30,
	CSK1_B_8 = 9,
	CSK3_B_8 = 16,
	CSK2_B_8 = 22,
	CSK6_B_8 = 18,
	CSK7_B_8 = 25,
	CSK5_B_8 = 42,
	CSK4_B_8 = 79,
}CBC_PWM_B_8;


//15cm
 typedef enum{
	CSK0_R_8_15cm = 43,
	CSK1_R_8_15cm = 4,
	CSK3_R_8_15cm = 49,
	CSK2_R_8_15cm = 12,
	CSK6_R_8_15cm = 65,
	CSK7_R_8_15cm = 33,
	CSK5_R_8_15cm = 8,
	CSK4_R_8_15cm = 100,
}CBC_PWM_R_8_15cm;
 
  typedef enum{
	CSK0_G_8_15cm = 100,
	CSK1_G_8_15cm = 100,
	CSK3_G_8_15cm = 51,
	CSK2_G_8_15cm = 64,
	CSK6_G_8_15cm = 19, //16
	CSK7_G_8_15cm = 20,
	CSK5_G_8_15cm = 0,
	CSK4_G_8_15cm = 0,
}CBC_PWM_G_8_15cm;

 typedef enum{
	CSK0_B_8_15cm = 0,
	CSK1_B_8_15cm = 10,
	CSK3_B_8_15cm = 14,
	CSK2_B_8_15cm = 25,
	CSK6_B_8_15cm = 18,
	CSK7_B_8_15cm = 29,
	CSK5_B_8_15cm = 72,
	CSK4_B_8_15cm = 0,
}CBC_PWM_B_8_15cm;


//20cm
 typedef enum{
	CSK0_R_8_20cm = 43,
	CSK1_R_8_20cm = 4,
	CSK3_R_8_20cm = 49,
	CSK2_R_8_20cm = 12,
	CSK6_R_8_20cm = 65,
	CSK7_R_8_20cm = 33,
	CSK5_R_8_20cm = 8,
	CSK4_R_8_20cm = 100,
}CBC_PWM_R_8_20cm;
 
  typedef enum{
	CSK0_G_8_20cm = 100,
	CSK1_G_8_20cm = 100,
	CSK3_G_8_20cm = 51,
	CSK2_G_8_20cm = 64,
	CSK6_G_8_20cm = 18, //16
	CSK7_G_8_20cm = 20,
	CSK5_G_8_20cm = 0,
	CSK4_G_8_20cm = 0,
}CBC_PWM_G_8_20cm;

 typedef enum{
	CSK0_B_8_20cm = 0,
	CSK1_B_8_20cm = 10,
	CSK3_B_8_20cm = 14,
	CSK2_B_8_20cm = 25,
	CSK6_B_8_20cm = 18,
	CSK7_B_8_20cm = 29,
	CSK5_B_8_20cm = 72,
	CSK4_B_8_20cm = 0,
}CBC_PWM_B_8_20cm;


//25cm
 typedef enum{
	CSK0_R_8_25cm = 83,
	CSK1_R_8_25cm = 4,
	CSK3_R_8_25cm = 88,
	CSK2_R_8_25cm = 12,
	CSK6_R_8_25cm = 100,
	CSK7_R_8_25cm = 33,
	CSK5_R_8_25cm = 8,
	CSK4_R_8_25cm = 100,
}CBC_PWM_R_8_25cm;
 
  typedef enum{
	CSK0_G_8_25cm = 100,
	CSK1_G_8_25cm = 100,
	CSK3_G_8_25cm = 61,
	CSK2_G_8_25cm = 64,
	CSK6_G_8_25cm = 20, //16
	CSK7_G_8_25cm = 18,
	CSK5_G_8_25cm = 0,
	CSK4_G_8_25cm = 0,
}CBC_PWM_G_8_25cm;

 typedef enum{
	CSK0_B_8_25cm = 0,
	CSK1_B_8_25cm = 9,
	CSK3_B_8_25cm = 16,
	CSK2_B_8_25cm = 22,
	CSK6_B_8_25cm = 18,
	CSK7_B_8_25cm = 25,
	CSK5_B_8_25cm = 72,
	CSK4_B_8_25cm = 0,
}CBC_PWM_B_8_25cm;


//30cm
 typedef enum{
	CSK0_R_8_30cm = 83,
	CSK1_R_8_30cm = 4,
	CSK3_R_8_30cm = 88,
	CSK2_R_8_30cm = 12,
	CSK6_R_8_30cm = 100,
	CSK7_R_8_30cm = 40,
	CSK5_R_8_30cm = 8,
	CSK4_R_8_30cm = 100,
}CBC_PWM_R_8_30cm;
 
  typedef enum{
	CSK0_G_8_30cm = 100,
	CSK1_G_8_30cm = 100,
	CSK3_G_8_30cm = 61,
	CSK2_G_8_30cm = 64,
	CSK6_G_8_30cm = 20, //16
	CSK7_G_8_30cm = 18,
	CSK5_G_8_30cm = 0,
	CSK4_G_8_30cm = 0,
}CBC_PWM_G_8_30cm;

 typedef enum{
	CSK0_B_8_30cm = 0,
	CSK1_B_8_30cm = 9,
	CSK3_B_8_30cm = 16,
	CSK2_B_8_30cm = 27,
	CSK6_B_8_30cm = 18,
	CSK7_B_8_30cm = 35,
	CSK5_B_8_30cm = 100,
	CSK4_B_8_30cm = 0,
}CBC_PWM_B_8_30cm;


 //16CSK modulation
 //Grey code
 //0000, 0001, 0011, 0010, 0110, 0111, 0101, 0100, 
 //1100, 1101, 1111, 1110, 1010, 1011, 1001, 1000, 
 //(0.3046,0.6129), (0.1886,0.6279), (0.3374,0.5258), (0.2285, 0.5046), (0.1637, 0.4433), (0.3116, 0.4416), (0.1596, 0.2863), (0.2820, 0.3105)
 //(0.2642,0.1544), (0.4056,0.3632), (0.4338,0.2180), (0.4826, 0.2928), (0.4838, 0.4037), (0.5896, 0.3038), (0.5754, 0.3871), (0.4400, 0.5000)
 typedef enum{
	CSK0_R_16 = 27,
	CSK1_R_16 = 3,
	CSK3_R_16 = 34,
	CSK2_R_16 = 13,
	CSK6_R_16 = 1,
	CSK7_R_16 = 30,
	CSK5_R_16 = 3,
	CSK4_R_16 = 26,
	CSK12_R_16 = 25,
	CSK13_R_16 = 50,
	CSK15_R_16 = 58,
	CSK14_R_16 = 66,
	CSK10_R_16 = 65,
	CSK11_R_16 = 87,
	CSK9_R_16 = 83,
	CSK8_R_16 = 55,
}CBC_PWM_R_16;
 
  typedef enum{
	CSK0_G_16 = 100,//100,80
	CSK1_G_16 = 80,//47,55
	CSK3_G_16 = 77,//88
	CSK2_G_16 = 87,//81
	CSK6_G_16 = 52,//56 
	CSK7_G_16 = 61,
	CSK5_G_16 = 52,//42
	CSK4_G_16 = 37,//41
	CSK12_G_16 = 11,
	CSK13_G_16 = 47,
	CSK15_G_16 = 10,//8
	CSK14_G_16 = 22,
	CSK10_G_16 = 47, 
	CSK11_G_16 = 15,//12
	CSK9_G_16 = 35,
	CSK8_G_16 = 72,
}CBC_PWM_G_16;

 typedef enum{
	CSK0_B_16 = 0,
	CSK1_B_16 = 10,//5
	CSK3_B_16 = 8,
	CSK2_B_16 = 16,//15
	CSK6_B_16 = 19,
	CSK7_B_16 = 15,//15
	CSK5_B_16 = 34,
	CSK4_B_16 = 25,//25
	CSK12_B_16 = 38,//44
	CSK13_B_16 = 16,//20
	CSK15_B_16 = 23,//32
	CSK14_B_16 = 15,//21
	CSK10_B_16 = 8,//10
	CSK11_B_16 = 9,//10
	CSK9_B_16 = 0,
	CSK8_B_16 = 0,
}CBC_PWM_B_16;




 //32CSK modulation
 //Grey code
 //00000, 00001, 00011, 00010, 00110, 00111, 00101, 00100, 
 //01100, 01101, 01111, 01110, 01010, 01011, 01001, 01000, 
 //11000, 11001, 11011, 11010, 11110, 11111, 11101, 11100,
 //10100, 10101, 10111, 10110, 10010, 10011, 10001, 10000
 //(0.1776,0.7188), (0.1761,0.5907), (0.2352,0.4632), (0.1661, 0.4726), (0.2538, 0.4004), (0.1646, 0.3947), (0.2125, 0.3634), (0.1577, 0.3223)
 //(0.2695,0.3384), (0.1440,0.2178), (0.2336,0.2489), (0.1917, 0.1007), (0.2733, 0.1600), (0.3261, 0.2620), (0.3575, 0.1894), (0.3546, 0.3140)
 //(0.4030,0.2555), (0.4579,0.2350), (0.4139,0.3137), (0.5466, 0.2739), (0.4903, 0.3354), (0.5928, 0.3645), (0.4318, 0.3891), (0.5064, 0.4398)
 //(0.4481,0.4460), (0.3786,0.4154), (0.4234,0.5051), (0.3764, 0.4746), (0.3683, 0.5534), (0.3322, 0.5072), (0.2751, 0.6356), (0.3350, 0.3722)
 typedef enum{
	CSK0_R_32 = 0,
	CSK1_R_32 = 2,
	CSK3_R_32 = 15,
	CSK2_R_32 = 1,
	CSK6_R_32 = 20,
	CSK7_R_32 = 2,
	CSK5_R_32 = 12,
	CSK4_R_32 = 2,
	CSK12_R_32 = 24,
	CSK13_R_32 = 1,
	CSK15_R_32 = 18,
	CSK14_R_32 = 12,
	CSK10_R_32 = 27,
	CSK11_R_32 = 36,
	CSK9_R_32 = 43,
	CSK8_R_32 = 41,
	CSK24_R_32 = 51,
	CSK25_R_32 = 62,
	CSK27_R_32 = 53,
	CSK26_R_32 = 79,
	CSK30_R_32 = 67,
	CSK31_R_32 = 87,
	CSK29_R_32 = 55,
	CSK28_R_32 = 69,
	CSK20_R_32 = 57,
	CSK21_R_32 = 44,
	CSK23_R_32 = 52,
	CSK22_R_32 = 43,
	CSK18_R_32 = 40,
	CSK19_R_32 = 34,
	CSK17_R_32 = 20,
	CSK16_R_32 = 36,
}CBC_PWM_R_32;
 
  typedef enum{
	CSK0_G_32 = 100,
	CSK1_G_32 = 72,//77
	CSK3_G_32 = 78,//55
	CSK2_G_32 = 67,//66
	CSK6_G_32 = 58,//52 
	CSK7_G_32 = 55,//53
	CSK5_G_32 = 58,//51
	CSK4_G_32 = 50,
	CSK12_G_32 = 49,//47
	CSK13_G_32 = 32,//30
	CSK15_G_32 = 31,
	CSK14_G_32 = 0,
	CSK10_G_32 = 11, 
	CSK11_G_32 = 32,//24
	CSK9_G_32 = 10,
	CSK8_G_32 = 39,//30
    CSK24_G_32 = 21,//19
	CSK25_G_32 = 10,
	CSK27_G_32 = 35,//25
	CSK26_G_32 = 12,
	CSK30_G_32 = 30,//24 
	CSK31_G_32 = 28,
	CSK29_G_32 = 48,//38
	CSK28_G_32 = 48,//42
	CSK20_G_32 = 55,//45
	CSK21_G_32 = 64,//46
	CSK23_G_32 = 78,//59
	CSK22_G_32 = 80,//54
	CSK18_G_32 = 94,//67
	CSK19_G_32 = 81,//65
	CSK17_G_32 = 100,//92
	CSK16_G_32 = 59,//49
}CBC_PWM_G_32;

 typedef enum{
	CSK0_B_32 = 0,
	CSK1_B_32 = 9,//10
	CSK3_B_32 = 18,//15
	CSK2_B_32 = 17,
	CSK6_B_32 = 17,
	CSK7_B_32 = 22,
	CSK5_B_32 = 25,//22
	CSK4_B_32 = 29,
	CSK12_B_32 = 22,
	CSK13_B_32 = 39,//37
	CSK15_B_32 = 32,
	CSK14_B_32 = 50,//44
	CSK10_B_32 = 40,//32
	CSK11_B_32 = 30,//26
	CSK9_B_32 = 37,//29
	CSK8_B_32 = 24,//21
	CSK24_B_32 = 28,//22
	CSK25_B_32 = 27,//22
	CSK27_B_32 = 23,//18
	CSK26_B_32 = 16,//13
	CSK30_B_32 = 16,//12
	CSK31_B_32 = 0,
	CSK29_B_32 = 16,//12
	CSK28_B_32 = 0,
	CSK20_B_32 = 8,//7
	CSK21_B_32 = 15,//13
	CSK23_B_32 = 0,
	CSK22_B_32 = 10,
	CSK18_B_32 = 0,
	CSK19_B_32 = 10,
	CSK17_B_32 = 0,
	CSK16_B_32 = 20,//18
}CBC_PWM_B_32;



//4CSK original modulation
 //Grey code
 //00, 01, 11, 10
 //(0.3209,0.3701), (0.1776,0.7188), (0.6544,0.3205), (0.1307, 0.0711)
  typedef enum{
	CSK0_R_ori4 = 48,//33
	CSK1_R_ori4 = 0,
	CSK3_R_ori4 = 100,
	CSK2_R_ori4 = 0,
}CBC_PWM_R_ori4;
 
  typedef enum{
	CSK0_G_ori4 = 28,//48,38,32
	CSK1_G_ori4 = 100,
	CSK3_G_ori4 = 0,
	CSK2_G_ori4 = 0,
}CBC_PWM_G_ori4;

 typedef enum{
	CSK0_B_ori4 = 25,//18,15,32
	CSK1_B_ori4 = 0,
	CSK3_B_ori4 = 0,
	CSK2_B_ori4 = 100,
}CBC_PWM_B_ori4;


 
//8CSK original modulation
 //Grey code
 //000, 001, 011, 010, 110, 111, 101, 100
 //(0.1776,0.7188), (0.1620,0.5029), (0.4877,0.3453), (0.3365, 0.5860), (0.3926, 0.1958), (0.6544, 0.3205), (0.2258, 0.2206), (0.1307, 0.0711)
/*
  typedef enum{
	CSK0_R_ori8 = 0,
	CSK1_R_ori8 = 0,
	CSK3_R_ori8 = 67,
	CSK2_R_ori8 = 33,
	CSK6_R_ori8 = 60,
	CSK7_R_ori8 = 100,
	CSK5_R_ori8 = 17,
	CSK4_R_ori8 = 0,
}CBC_PWM_R_ori8;
 
  typedef enum{
	CSK0_G_ori8 = 40,
	CSK1_G_ori8 = 45,//70,77,57,62
	CSK3_G_ori8 = 32,//15,22,18,48,18
	CSK2_G_ori8 = 40,//54,77,66
	CSK6_G_ori8 = 0, 
	CSK7_G_ori8 = 0,
	CSK5_G_ori8 = 20,
	CSK4_G_ori8 = 0,
}CBC_PWM_G_ori8;

 typedef enum{
	CSK0_B_ori8 = 0,
	CSK1_B_ori8 = 50,//18,30
	CSK3_B_ori8 = 12,//10,12,37
	CSK2_B_ori8 = 0,
	CSK6_B_ori8 = 57,//22,30,29
	CSK7_B_ori8 = 0,
	CSK5_B_ori8 = 21,//29,34
	CSK4_B_ori8 = 43,
}CBC_PWM_B_ori8;
*/
 
 //30W parameter
/*
   typedef enum{
	CSK0_R_ori8 = 0,
	CSK1_R_ori8 = 20,
	CSK3_R_ori8 = 60,
	CSK2_R_ori8 = 67,
	CSK6_R_ori8 = 33,
	CSK7_R_ori8 = 100,
	CSK5_R_ori8 = 0,
	CSK4_R_ori8 = 0,
}CBC_PWM_R_ori8;
 
  typedef enum{
	CSK0_G_ori8 = 45,
	CSK1_G_ori8 = 20,//70,77,57,62
	CSK3_G_ori8 = 0,//15,22,18,48,18
	CSK2_G_ori8 = 32,//54,77,66
	CSK6_G_ori8 = 40, 
	CSK7_G_ori8 = 0,
	CSK5_G_ori8 = 0,
	CSK4_G_ori8 = 40,
}CBC_PWM_G_ori8;

 typedef enum{
	CSK0_B_ori8 = 50,
	CSK1_B_ori8 = 34,//18,30
	CSK3_B_ori8 = 57,//10,12,37
	CSK2_B_ori8 = 15,
	CSK6_B_ori8 = 0,//22,30,29
	CSK7_B_ori8 = 0,
	CSK5_B_ori8 = 43,//29,34
	CSK4_B_ori8 = 0,
}CBC_PWM_B_ori8;
*/

 //50W parameter
/* 
   typedef enum{
	CSK0_R_ori8 = 0,
	CSK1_R_ori8 = 48,
	CSK3_R_ori8 = 81,
	CSK2_R_ori8 = 100,
	CSK6_R_ori8 = 33,
	CSK7_R_ori8 = 100,
	CSK5_R_ori8 = 0,
	CSK4_R_ori8 = 0,
}CBC_PWM_R_ori8;
 
  typedef enum{
	CSK0_G_ori8 = 50,
	CSK1_G_ori8 = 30,//70,77,57,62
	CSK3_G_ori8 = 0,//15,22,18,48,18
	CSK2_G_ori8 = 45,//54,77,66
	CSK6_G_ori8 = 40, 
	CSK7_G_ori8 = 0,
	CSK5_G_ori8 = 0,
	CSK4_G_ori8 = 65,
}CBC_PWM_G_ori8;

 typedef enum{
	CSK0_B_ori8 = 50,
	CSK1_B_ori8 = 50,//18,30
	CSK3_B_ori8 = 60,//10,12,37
	CSK2_B_ori8 = 22,
	CSK6_B_ori8 = 0,//22,30,29
	CSK7_B_ori8 = 0,
	CSK5_B_ori8 = 45,//29,34
	CSK4_B_ori8 = 0,
}CBC_PWM_B_ori8;
*/





//50W parameter XIAOMIMIX4
   typedef enum{
	CSK0_R_mix4_ori8 = 0,
	CSK1_R_mix4_ori8 = 27,
	CSK3_R_mix4_ori8 = 67,
	CSK2_R_mix4_ori8 = 100,
	CSK6_R_mix4_ori8 = 33,
	CSK7_R_mix4_ori8 = 100,
	CSK5_R_mix4_ori8 = 0,
	CSK4_R_mix4_ori8 = 0,
}CBC_PWM_R_mix4_ori8;
 
  typedef enum{
	CSK0_G_mix4_ori8 = 47,
	CSK1_G_mix4_ori8 = 40,//70,77,57,62
	CSK3_G_mix4_ori8 = 0,//15,22,18,48,18
	CSK2_G_mix4_ori8 = 50,//54,77,66
	CSK6_G_mix4_ori8 = 75, 
	CSK7_G_mix4_ori8 = 0,
	CSK5_G_mix4_ori8 = 0,
	CSK4_G_mix4_ori8 = 100,
}CBC_PWM_G_mix4_ori8;

 typedef enum{
	CSK0_B_mix4_ori8 = 60,
	CSK1_B_mix4_ori8 = 100,//18,30
	CSK3_B_mix4_ori8 = 100,//10,12,37
	CSK2_B_mix4_ori8 = 28,
	CSK6_B_mix4_ori8 = 0,//22,30,29
	CSK7_B_mix4_ori8 = 0,
	CSK5_B_mix4_ori8 = 100,//29,34
	CSK4_B_mix4_ori8 = 0,
}CBC_PWM_B_mix4_ori8;


//50W parameter 6m

   typedef enum{
	CSK0_R_ori8 = 0,
	CSK1_R_ori8 = 27,
	CSK3_R_ori8 = 100,
	CSK2_R_ori8 = 100,
	CSK6_R_ori8 = 33,
	CSK7_R_ori8 = 100,
	CSK5_R_ori8 = 0,
	CSK4_R_ori8 = 0,
}CBC_PWM_R_ori8;
 
  typedef enum{
	CSK0_G_ori8 = 47,
	CSK1_G_ori8 = 40,//70,77,57,62
	CSK3_G_ori8 = 0,//15,22,18,48,18
	CSK2_G_ori8 = 50,//54,77,66
	CSK6_G_ori8 = 75, 
	CSK7_G_ori8 = 0,
	CSK5_G_ori8 = 0,
	CSK4_G_ori8 = 100,
}CBC_PWM_G_ori8;

 typedef enum{
	CSK0_B_ori8 = 60,
	CSK1_B_ori8 = 100,//18,30
	CSK3_B_ori8 = 100,//10,12,37
	CSK2_B_ori8 = 28,
	CSK6_B_ori8 = 0,//22,30,29
	CSK7_B_ori8 = 0,
	CSK5_B_ori8 = 100,//29,34
	CSK4_B_ori8 = 0,
}CBC_PWM_B_ori8;






 //100W parameter 3m
/*
   typedef enum{
	CSK0_R_ori8 = 0,
	CSK1_R_ori8 = 56,
	CSK3_R_ori8 = 80,
	CSK2_R_ori8 = 100,
	CSK6_R_ori8 = 53,
	CSK7_R_ori8 = 100,
	CSK5_R_ori8 = 0,
	CSK4_R_ori8 = 0,
}CBC_PWM_R_ori8;
 
  typedef enum{
	CSK0_G_ori8 = 50,
	CSK1_G_ori8 = 37,//70,77,57,62
	CSK3_G_ori8 = 0,//15,22,18,48,18
	CSK2_G_ori8 = 45,//54,77,66
	CSK6_G_ori8 = 70, 
	CSK7_G_ori8 = 0,
	CSK5_G_ori8 = 0,
	CSK4_G_ori8 = 100,
}CBC_PWM_G_ori8;

 typedef enum{
	CSK0_B_ori8 = 95,
	CSK1_B_ori8 = 100,//18,30
	CSK3_B_ori8 = 100,//10,12,37
	CSK2_B_ori8 = 57,
	CSK6_B_ori8 = 0,//22,30,29
	CSK7_B_ori8 = 0,
	CSK5_B_ori8 = 100,//29,34
	CSK4_B_ori8 = 0,
}CBC_PWM_B_ori8;
*/

 
 //16CSK original modulation
 //Grey code
 //0000, 0001, 0011, 0010, 0110, 0111, 0101, 0100, 
 //1100, 1101, 1111, 1110, 1010, 1011, 1001, 1000, 
 //(0.1716,0.6901), (0.2279,0.5743), (0.1677,0.4755), (0.2239, 0.3597), (0.3404, 0.3426), (0.4006, 0.4413), (0.3443, 0.5572), (0.5170, 0.4242)
 //(0.5131,0.2097), (0.5733,0.3084), (0.3364,0.1280), (0.3966, 0.2268), (0.1637, 0.2610), (0.2200, 0.1451), (0.1598, 0.0464), (0.6897, 0.2913)
 /*
  typedef enum{
	CSK0_R_ori16 = 0,
	CSK1_R_ori16 = 36,
	CSK3_R_ori16 = 0,
	CSK2_R_ori16 = 32,
	CSK6_R_ori16 = 60,
	CSK7_R_ori16 = 82,
	CSK5_R_ori16 = 40,
	CSK4_R_ori16 = 100,
	CSK12_R_ori16 = 80,
	CSK13_R_ori16 = 100,
	CSK15_R_ori16 = 58,
	CSK14_R_ori16 = 77,
	CSK10_R_ori16 = 0,
	CSK11_R_ori16 = 64,
	CSK9_R_ori16 = 0,
	CSK8_R_ori16 = 100,
}CBC_PWM_R_ori16;
 
  typedef enum{
	CSK0_G_ori16 = 50,
	CSK1_G_ori16 = 42,
	CSK3_G_ori16 = 25,
	CSK2_G_ori16 = 21,
	CSK6_G_ori16 = 36, 
	CSK7_G_ori16 = 50,
	CSK5_G_ori16 = 40,
	CSK4_G_ori16 = 27,
	CSK12_G_ori16 = 0,
	CSK13_G_ori16 = 20,
	CSK15_G_ori16 = 0,
	CSK14_G_ori16 = 30,
	CSK10_G_ori16 = 19, 
	CSK11_G_ori16 = 35,
	CSK9_G_ori16 = 0,
	CSK8_G_ori16 = 0,
}CBC_PWM_G_ori16;

 typedef enum{
	CSK0_B_ori16 = 0,
	CSK1_B_ori16 = 13,
	CSK3_B_ori16 = 15,
	CSK2_B_ori16 = 21,
	CSK6_B_ori16 = 35,
	CSK7_B_ori16 = 18,
	CSK5_B_ori16 = 0,
	CSK4_B_ori16 = 0,
	CSK12_B_ori16 = 9,
	CSK13_B_ori16 = 13,
	CSK15_B_ori16 = 37,
	CSK14_B_ori16 = 38,
	CSK10_B_ori16 = 17,
	CSK11_B_ori16 = 52,
	CSK9_B_ori16 = 43,
	CSK8_B_ori16 = 0,
}CBC_PWM_B_ori16;
*/
 
 
 //50W parameter backup 1m: which is finally used 
 
 /*
   typedef enum{
	CSK0_R_ori16 = 0,
	CSK1_R_ori16 = 36,
	CSK3_R_ori16 = 0,
	CSK2_R_ori16 = 27,
	CSK6_R_ori16 = 36,
	CSK7_R_ori16 = 78,
	CSK5_R_ori16 = 40,
	CSK4_R_ori16 = 94,
	CSK12_R_ori16 = 75,
	CSK13_R_ori16 = 100,
	CSK15_R_ori16 = 69,
	CSK14_R_ori16 = 73,
	CSK10_R_ori16 = 0,
	CSK11_R_ori16 = 40,
	CSK9_R_ori16 = 0,
	CSK8_R_ori16 = 100,
}CBC_PWM_R_ori16;
 
  typedef enum{
	CSK0_G_ori16 = 65,
	CSK1_G_ori16 = 72,
	CSK3_G_ori16 = 50,
	CSK2_G_ori16 = 32,
	CSK6_G_ori16 = 42, 
	CSK7_G_ori16 = 75,
	CSK5_G_ori16 = 65,
	CSK4_G_ori16 = 39,
	CSK12_G_ori16 = 0,
	CSK13_G_ori16 = 35,
	CSK15_G_ori16 = 0,
	CSK14_G_ori16 = 30,
	CSK10_G_ori16 = 42, 
	CSK11_G_ori16 = 45,
	CSK9_G_ori16 = 0,
	CSK8_G_ori16 = 0,
}CBC_PWM_G_ori16;

 typedef enum{
	CSK0_B_ori16 = 0,
	CSK1_B_ori16 = 23,
	CSK3_B_ori16 = 20,
	CSK2_B_ori16 = 30,
	CSK6_B_ori16 = 23,
	CSK7_B_ori16 = 28,
	CSK5_B_ori16 = 0,
	CSK4_B_ori16 = 0,
	CSK12_B_ori16 = 30,
	CSK13_B_ori16 = 23,
	CSK15_B_ori16 = 50,
	CSK14_B_ori16 = 45,
	CSK10_B_ori16 = 50,
	CSK11_B_ori16 = 52,
	CSK9_B_ori16 = 45,
	CSK8_B_ori16 = 0,
}CBC_PWM_B_ori16;
*/


 //100W parameter MIMO 3m 
 
 
   typedef enum{
	CSK0_R_ori16 = 0,
	CSK1_R_ori16 = 50,
	CSK3_R_ori16 = 0,
	CSK2_R_ori16 = 40,
	CSK6_R_ori16 = 52,
	CSK7_R_ori16 = 83,
	CSK5_R_ori16 = 70,
	CSK4_R_ori16 = 100,
	CSK12_R_ori16 = 80,
	CSK13_R_ori16 = 100,
	CSK15_R_ori16 = 69,
	CSK14_R_ori16 = 76,
	CSK10_R_ori16 = 0,
	CSK11_R_ori16 = 39,
	CSK9_R_ori16 = 0,
	CSK8_R_ori16 = 100,
}CBC_PWM_R_ori16;
 
  typedef enum{
	CSK0_G_ori16 = 100,
	CSK1_G_ori16 = 72,
	CSK3_G_ori16 = 85,
	CSK2_G_ori16 = 48,
	CSK6_G_ori16 = 52, 
	CSK7_G_ori16 = 75,
	CSK5_G_ori16 = 75,
	CSK4_G_ori16 = 40,
	CSK12_G_ori16 = 0,
	CSK13_G_ori16 = 36,
	CSK15_G_ori16 = 0,
	CSK14_G_ori16 = 55,
	CSK10_G_ori16 = 60, 
	CSK11_G_ori16 = 55,
	CSK9_G_ori16 = 0,
	CSK8_G_ori16 = 0,
}CBC_PWM_G_ori16;

 typedef enum{
	CSK0_B_ori16 = 0,
	CSK1_B_ori16 = 63,
	CSK3_B_ori16 = 96,
	CSK2_B_ori16 = 55,
	CSK6_B_ori16 = 55,
	CSK7_B_ori16 = 50,
	CSK5_B_ori16 = 0,
	CSK4_B_ori16 = 0,
	CSK12_B_ori16 = 62,
	CSK13_B_ori16 = 42,
	CSK15_B_ori16 = 85,
	CSK14_B_ori16 = 81,
	CSK10_B_ori16 = 100,
	CSK11_B_ori16 = 95,
	CSK9_B_ori16 = 100,
	CSK8_B_ori16 = 0,
}CBC_PWM_B_ori16;

 
  //50W parameter backup 230mA
 
/*
   typedef enum{
	CSK0_R_ori16 = 0,
	CSK1_R_ori16 = 36,
	CSK3_R_ori16 = 0,
	CSK2_R_ori16 = 25,
	CSK6_R_ori16 = 36,
	CSK7_R_ori16 = 78,
	CSK5_R_ori16 = 40,
	CSK4_R_ori16 = 94,
	CSK12_R_ori16 = 75,
	CSK13_R_ori16 = 100,
	CSK15_R_ori16 = 69,
	CSK14_R_ori16 = 73,
	CSK10_R_ori16 = 0,
	CSK11_R_ori16 = 40,
	CSK9_R_ori16 = 0,
	CSK8_R_ori16 = 100,
}CBC_PWM_R_ori16;
 
  typedef enum{
	CSK0_G_ori16 = 65,
	CSK1_G_ori16 = 75,
	CSK3_G_ori16 = 50,
	CSK2_G_ori16 = 32,
	CSK6_G_ori16 = 42, 
	CSK7_G_ori16 = 75,
	CSK5_G_ori16 = 65,
	CSK4_G_ori16 = 39,
	CSK12_G_ori16 = 0,
	CSK13_G_ori16 = 35,
	CSK15_G_ori16 = 0,
	CSK14_G_ori16 = 30,
	CSK10_G_ori16 = 42, 
	CSK11_G_ori16 = 45,
	CSK9_G_ori16 = 0,
	CSK8_G_ori16 = 0,
}CBC_PWM_G_ori16;

 typedef enum{
	CSK0_B_ori16 = 0,
	CSK1_B_ori16 = 23,
	CSK3_B_ori16 = 20,
	CSK2_B_ori16 = 30,
	CSK6_B_ori16 = 23,
	CSK7_B_ori16 = 28,
	CSK5_B_ori16 = 0,
	CSK4_B_ori16 = 0,
	CSK12_B_ori16 = 30,
	CSK13_B_ori16 = 23,
	CSK15_B_ori16 = 50,
	CSK14_B_ori16 = 45,
	CSK10_B_ori16 = 52,
	CSK11_B_ori16 = 52,
	CSK9_B_ori16 = 45,
	CSK8_B_ori16 = 0,
}CBC_PWM_B_ori16;
*/
 
 
  //50W parameter new
  
  /*
    typedef enum{
	CSK0_R_ori16 = 0,
	CSK1_R_ori16 = 36,
	CSK3_R_ori16 = 0,
	CSK2_R_ori16 = 27,
	CSK6_R_ori16 = 36,
	CSK7_R_ori16 = 78,
	CSK5_R_ori16 = 43,
	CSK4_R_ori16 = 94,
	CSK12_R_ori16 = 75,
	CSK13_R_ori16 = 100,
	CSK15_R_ori16 = 69,
	CSK14_R_ori16 = 73,
	CSK10_R_ori16 = 0,
	CSK11_R_ori16 = 43,
	CSK9_R_ori16 = 0,
	CSK8_R_ori16 = 100,
}CBC_PWM_R_ori16;
 
  typedef enum{
	CSK0_G_ori16 = 65,
	CSK1_G_ori16 = 70,
	CSK3_G_ori16 = 50,
	CSK2_G_ori16 = 32,
	CSK6_G_ori16 = 42, 
	CSK7_G_ori16 = 75,
	CSK5_G_ori16 = 65,
	CSK4_G_ori16 = 39,
	CSK12_G_ori16 = 0,
	CSK13_G_ori16 = 35,
	CSK15_G_ori16 = 0,
	CSK14_G_ori16 = 30,
	CSK10_G_ori16 = 40, 
	CSK11_G_ori16 = 45,
	CSK9_G_ori16 = 0,
	CSK8_G_ori16 = 0,
}CBC_PWM_G_ori16;

 typedef enum{
	CSK0_B_ori16 = 0,
	CSK1_B_ori16 = 23,
	CSK3_B_ori16 = 20,
	CSK2_B_ori16 = 30,
	CSK6_B_ori16 = 23,
	CSK7_B_ori16 = 25,
	CSK5_B_ori16 = 0,
	CSK4_B_ori16 = 0,
	CSK12_B_ori16 = 30,
	CSK13_B_ori16 = 25,
	CSK15_B_ori16 = 50,
	CSK14_B_ori16 = 46,
	CSK10_B_ori16 = 50,
	CSK11_B_ori16 = 52,
	CSK9_B_ori16 = 45,
	CSK8_B_ori16 = 0,
}CBC_PWM_B_ori16;
*/


