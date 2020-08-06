#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"


int main()
{
    //教師データは複数あるので配列の形がよい
    //    ↓
    //1,1,1
    //0,0,0←
    //1,0,1
    //0,0,1
    //教師データ4,入力数3だったらx[4][3]の多次元配列を作る
    //矢印の場所を参照するにはx[1][2](0が1番目だから)
    double x1, x2, x3;			//入力
    //u[データ数][中間層の素子数]
    double u1, u2, u3, u4;		//中間層
    //y[データ数]
    double y;					//出力
    //教師データの正解ラベルも必要なので
    //(正解ラベル)[データ数]

    //重みをそれぞれ別の変数にすると毎回書かないといけなくなって大変
    //下のような重みならw[4][4]として作る
    //for文とかで回しやすくなる
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


