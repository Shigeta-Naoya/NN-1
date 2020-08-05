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

double weight(double x, double w) {	//x:入力,w:重み
	double ans = 0;
	ans = x * w;
	return ans;						//出力信号を返す
}

double input_rand() {
	//srand((unsigned int)time(NULL));

	int a = (rand() % 200 + 1) - 100;
	double b = (double)a / 100;
	return b;
}


double input_u(double x[], double w[], int i) {
	double ans = 0;
	for (int j = 0; j < 3; j++) {
		ans += x[j] * w[i];
	}
	return ans;
}

//double input_y(double u, double w) {
//	return u;
//}

void print_array(int n,  double w[]) {
	for (int i = 0; i < n; i++) {
		printf("%lf　", w[i]);
	}
	printf("\n");
}