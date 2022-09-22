#include<stdio.h>
int main()
{
    double x, a=0 , s = 20, r=0 ;
    while (s - a >= 0.00001)
    {
        x = r;
        while (r < s)
        {
            a += 2 * 0.00001;
            r += 5 * 0.00001;
            s -= 3 * 0.00001;
        }
        printf("%f\n", r - x);
        x = r;
        while (r > a)
        {
            a += 2 * 0.00001;
            r -= 5 * 0.00001;
            s -= 3 * 0.00001;
        }
        printf("%f\n", x - r);
    }
}