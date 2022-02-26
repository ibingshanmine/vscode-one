#include <stdio.h>
//c语言是从主函数的第一行代码开始执行的
int main()      //定义主函数
{


 int max(int x,int y);   //对被调函数max的声明
 int a,b,c;              //定义变量a,b,c
 scanf("%d,%d",&a,&b);   //
 c=max(a,b);
 printf("max=%d\n",c);

    return 0;
}
int max(int x,int y)
{
    int z;
    if (x>y)z=x;
    else z=y;
    return(z);
   
    
}
