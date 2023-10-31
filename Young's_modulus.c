#include<stdio.h>
#include<math.h>
void main()
{
    int times=1;
    double x1,x2,average,result=0.0,s,u,U;
    u = 0.005*0.683;
    while (times<=12)
    {
        scanf("%lf %lf",&x1,&x2);
        average = (x1+x2)/2;
        s = sqrt((x1-average)*(x1-average)+(x2-average)*(x2-average));
        U = sqrt((1.84*s)*(1.84*s)+u*u);
        result = sqrt(result*result+U*U);
        printf("%lf\n",result);
        times=times+1;
    }
    printf("%lf\n",result);
}