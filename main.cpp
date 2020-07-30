#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"


int main()
{
    double x1, x2, x3;			//入力
    double u1, u2, u3, u4;		//中間層
    double y;					//出力
    double w11, w12, w13, w14;	//x1からu1,u2,u3,u4への重み
    double w21, w22, w23, w24;	//x2からu1,u2,u3,u4への重み
    double w31, w32, w33, w34;	//x3からu1,u2,u3,u4への重み
    double w41, w42, w43, w44;	//x4からu1,u2,u3,u4への重み
    double w1, w2, w3, w4;		//u1,u2,u3,u4からyへの重み

    w11, w12 = 0.5;
    printf("%lf\n", w11);
    printf("%lf\n", w12);
    input_rand();
    
    return 0;
}


