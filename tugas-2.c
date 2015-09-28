#include "stdio.h"
#include "math.h"
int main ()
{
    int a = 1,b = 5,c = 4;
    float d, X1, X2, X;
    printf("akar-akar persamaan kuadrat ax*x+bx+c=0\n");
    printf("Masukkan nilai koefisien a, b, dan c:\n");
d = b*b-4*a*c;
printf("Diskriminan = %g\n", d);
printf("Akar persamaan %iX2 + %iX + %i = 0 adalah:\n", a,b,c);
if (d > 0) {
X1 = (-b+sqrt(d))/(2*a);
X2 = (-b-sqrt(d))/(2*a);
printf("X1 = %g\n", X1);
printf("X2 = %g\n", X2);
}
else if (d == 0) {
X = -b/(2*a);
printf("X1 = X2 = %g\n", X);
}
return 0;
}
