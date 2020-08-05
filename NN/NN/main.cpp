#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"


int main()
{
    double x[3];			//入力
    double u[4];		//中間層
    double y;					//出力
    double w1[4];	//x1からu1,u2,u3,u4への重み
    double w2[4];	//x2からu1,u2,u3,u4への重み
    double w3[4];	//x3からu1,u2,u3,u4への重み
    double w[4];		//u1,u2,u3,u4からyへの重み

    for (int i=0; i < 3; i++) {
        x[i]=i+1 ;      //データから入力
    }

    double e[4][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            e[i][j] = 0.1;
        }
    }
    //printf("%lf", e);


    for (int i=0; i < 4; i++) {
        w1[i]= 0.1;
        w2[i]= 0.1;
        w3[i]= 0.1;
        w[i] = 0.1;
    }
    
    print_array(4, w1);

    //u[1] = x[1] * w1[1] + x[2] * w2[1] + x[3] * w3[1];
    //printf("%lf", u[1]);



    
    return 0;
}


