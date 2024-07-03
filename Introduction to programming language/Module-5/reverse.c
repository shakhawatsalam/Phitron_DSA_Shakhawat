#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int one = N / 1000;
    int oneMod = N % 1000;
    int tow = oneMod / 100;
    int towMod = oneMod % 100;
    int three = towMod / 10;
    int threeMod = towMod % 10;

    printf("%d%d%d%d", threeMod, three, tow, one);

    return 0;
}