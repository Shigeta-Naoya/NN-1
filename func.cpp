#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"



double calc_s(double x) {
	double ans = 0;
	ans = 1 / (1 - exp(-x));
	return ans;
}

double weight(double x, double w) {	//x:����,w:�d��
	double ans = 0;
	ans = x * w;
	return ans;						//�o�͐M����Ԃ�
}

double input_rand() {
	int a = (rand() % 200 + 1) - 100;
	double b = (double)a / 100;
	return b;
}