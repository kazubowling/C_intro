#include <stdio.h>

int main(void)
{
    const double PI = 3.14; /* 円周率を定数として設定 */
    int pie = 10;
    printf("パイの半径を倍にします\n");
    // PI = 20; /* エラーになる */
    pie = 20;
    printf("半径%dcmのパイの面積は%f\n", pie, pie * pie * PI);
    return 0;
}