#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"

//3���́A4���ԑw�A1�o��

//extern double x1, x2, x3;			//����
//extern double u1, u2, u3, u4;		//���ԑw
//extern double y;					//�o��
//extern double w11, w12, w13, w14;	//x1����u1,u2,u3,u4�ւ̏d��
//extern double w21, w22, w23, w24;	//x2����u1,u2,u3,u4�ւ̏d��
//extern double w31, w32, w33, w34;	//x3����u1,u2,u3,u4�ւ̏d��
//extern double w41, w42, w43, w44;	//x4����u1,u2,u3,u4�ւ̏d��
//extern double w1, w2, w3, w4;		//u1,u2,u3,u4����y�ւ̏d��

double calc_s(double x);
double weight(double x, double w);
double input_rand();

double input_u(double x, double w);
//double input_y(double u, double w);
void print_array(int n, double w[]);
