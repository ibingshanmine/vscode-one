#include <stdio.h>
//c语言是从主函数的第一行代码开始执行的
int main()      //定义主函数
{


 int max(int x,int y,int z);   //对被调函数max的声明
 int a,b,c,d;              //定义变量a,b,c
 scanf("%d,%d,%d",&a,&b,&c);   //
 d=max(a,b,c);
 printf("max=%d\n",d);

    return 0;
}
int max(int x,int y,int z)
{
    int m,k;
    if (x>y)m=x;
    else m=y;
    if (z>m)k=z;
    else k=m;
    return(k);
   
    
}