#include<stdio.h>


int main()

{
    int a;
    float f,c;
    printf("1华转摄\n2摄转华\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("华转摄");
        scanf("%f",&f);
        c=(5.0/9)*(f-32);
        printf("f=%f\nc=%f\n",f,c);
        return 0;

    }
    else if (a==2)
    
    {
        printf("摄转华");
        scanf("%f",&c);
        f=(9*c)/5+32;
        printf("c=%f\nf=%f\n",c,f);
        return 0;
    }
    
    
}

