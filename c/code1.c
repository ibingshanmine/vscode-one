//#include<stdio.h>      //这是编译预处理命令
//c语言是从主函数的第一行代码开始执行的
//int main()      //定义主函数
//{
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


 //  int max(int x,int y); 
 //  int a,b,c;
 //  scanf("%d,%d",&a,&b);
 //  c=max(a,b);
 //  printf("max=%d\n",c);

//     return 0;
// }
// int max(int x,int y)
// {
//     int z;
//     if (x>y)z=x;
//     else z=y;
//     return(z);

//   printf("hello world\n");
//   printf("     hello world\n");
//   printf("         hello world\n");
//}


// #include <stdio.h>
// //c语言是从主函数的第一行代码开始执行的
// int main()      //定义主函数
// {


//  int max(int x,int y,int z);   //对被调函数max的声明
//  int a,b,c,d;              //定义变量a,b,c
//  scanf("%d,%d,%d",&a,&b,&c);   //
//  d=max(a,b,c);
//  printf("max=%d\n",d);

//     return 0;
// }
// int max(int x,int y,int z)
// {
//     int m,k;
//     if (x>y)m=x;
//     else m=y;
//     if (z>m)k=z;
//     else k=m;
//     return(k);
   
    
// }


//
#include<stdio.h>

// int main()

// {
//   int a,b,c,d,e,f;
//   scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
//   a=a*b;
//   a=a*c;
//   a=a*d;
//   a=a*e;

//   printf("* is %d\n",a);

// }



// int main()
// {    
//     int a,b;
//      a=1,b=2;
//     while (b<6)
    
//     {
//         a=a*b;
//         b=b+1;

//     }
//     printf("答案%d\n",a);
//     return 0;
// }



int main()

{
    int a;
    printf("1华转摄\n2摄转华\n");
    scanf("%d",&a);
    float f,c;
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
    
    

    // float f,c;
    // scanf("%f",&f);
    // c=(5.0/9)*(f-32);
    // printf("f=%f\nc=%f\n",f,c);
    // return 0;
}