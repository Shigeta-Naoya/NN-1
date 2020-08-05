#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"

//3入力、4中間層、1出力

//extern double x1, x2, x3;			//入力
//extern double u1, u2, u3, u4;		//中間層
//extern double y;					//出力
//extern double w11, w12, w13, w14;	//x1からu1,u2,u3,u4への重み
//extern double w21, w22, w23, w24;	//x2からu1,u2,u3,u4への重み
//extern double w31, w32, w33, w34;	//x3からu1,u2,u3,u4への重み
//extern double w41, w42, w43, w44;	//x4からu1,u2,u3,u4への重み
//extern double w1, w2, w3, w4;		//u1,u2,u3,u4からyへの重み

double calc_s(double x);
double weight(double x, double w);
double input_rand();

double input_u(double x, double w);
//double input_y(double u, double w);
void print_array(int n, double w[]);
