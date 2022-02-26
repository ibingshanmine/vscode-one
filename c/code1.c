#include<stdio.h>      //这是编译预处理命令
//c语言是从主函数的第一行代码开始执行的
int main()      //定义主函数
{
    // printf("你好\n");      
    // printf("hello\n");
    // printf("今天阳光明媚\n");
    // printf("可惜有风掠过\n");
    // printf("虽不刺骨\n"); 
    // printf("但依旧寒身\n");
      
//   int a,b,sum;   //本行是程序的声明部分，定义a，b，sum为整形变量   
//   a=128;
//   b=256;
//   sum=a+b;
//   printf("sum is %d\n",sum);


 int max(int x,int y); 
 int a,b,c;
 scanf("%d,%d",&a,&b);
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