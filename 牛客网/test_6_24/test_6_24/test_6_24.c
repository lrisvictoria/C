#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//BC26 计算三角形的周长和面积
//输入：三条边，用空格隔开
//输出：周长和面积(保留两位小数)
//3 3 3
//circumference=9.00 area=3.90
//思路：求面积用海伦公式
//S=√p(p-a)(p-b)(p-c)
//p=(a+b+c)/2
//开平方 - sqrt - double sqrt(double x);
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double circumference = 0.0;
//    circumference = a + b + c;
//    double p = circumference / 2;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2lf area=%.2lf", circumference, area);
//    return 0;
//}
//BC50 计算单位阶跃函数
//多组输入 每行输入一个t
//t>0 - 1
//t=0 - 0.5
//t<0 - 0
//#include<stdio.h>
//int main()
//{
//    int t;
//    while (scanf(" %d", &t) == 1)
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        else if (t == 0)
//        {
//            printf("0.5\n");
//        }
//        else
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}
//BC51 三角形判断
//输入三条边，如果能构成三角形，
//判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入：多组输入，三个数字，用空格分开
//针对每组输入数据，输出占一行，如果能构成三角形，
//等边三角形则输出“Equilateral triangle!”，
//等腰三角形则输出“Isosceles triangle!”，
//其余的三角形则输出“Ordinary triangle!”，
//反之输出“Not a triangle!”。
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if ((a + b > c) && (a + c > b) && (b + c) > a)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}
//科普：打印eof的返回值
//int main()
//{
//    printf("%d\n", EOF);
//}
//BC52 衡量人体胖瘦程度
//BMI 老生常谈 相信都知道
//输入：多组输入 体重(kg) 身高(cm)
//输出：根据数据
//<18.5 - Underweight
//>=18.5&&<=23.9 - Normal
//>23.8&&<=27.9 - Overweight
//>27.9 - Obese
//#include<stdio.h>
//int main()
//{
//    double weight = 0.0;
//    double height = 0.0;
//    double BMI = 0.0;
//    while (scanf("%lf %lf", &weight, &height) == 2)
//    {
//        BMI = weight / ((height / 100) * (height / 100));
//        if (BMI < 18.5)
//            printf("Underweight\n");
//        else if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        else if (BMI > 23.9 && BMI <= 27.9)
//            printf("Overweight\n");
//        else
//            printf("Obese\n");
//    }
//    return 0;
//}
//BC53 计算一元二次方程
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根,
//当a = 0时，输出“Not quadratic equation”，
//当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
//输入：多组输入，一行三个浮点数，空格分隔
//针对每组输入，输出一行，输出一元二次方程ax2 + bx +c = 0的根的情况。
//如果a = 0，输出“Not quadratic equation”；
//如果a ≠  0，分三种情况：
//△ = 0，则两个实根相等，输出形式为：x1 = x2 = ...。
//△ > 0，则两个实根不等，输出形式为：x1 = ...; x2 = ...，其中x1 <= x2。
//△ < 0，则有两个虚根，则输出：x1 = 实部 - 虚部i; x2 = 实部 + 虚部i，
//即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。
//实部 = -b / (2 * a), 虚部 = sqrt(-△) / (2 * a)
//所有实数部分要求精确到小数点后2位，数字、符号之间没有空格。
//*****************************************************
//注意点1：0没有正负
//注意点2：双重符号不可取
//#include<stdio.h>
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    double x1 = 0.0;
//    double x2 = 0.0;
//    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
//    {
//        double n = (b * b) - (4 * a * c);
//        if (a != 0)
//        {
//            if (n == 0)
//            {
//                x1 = -b / (2 * a);
//                //0没有符号
//                if (b == 0)
//                    printf("x1=x2=%.2lf\n", 0);
//                else
//                    printf("x1=x2=%.2lf\n", x1);
//            }
//            else if (n > 0)
//            {
//                x1 = (-b - sqrt(n)) / (2 * a);
//                x2 = (-b + sqrt(n)) / (2 * a);
//                printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
//            }
//            else
//            {
//                double real = -b / (2 * a);
//                double dash = sqrt(-n) / (2 * a);
//                //dash为负时，对于结果会有两个符号的错误表示
//                if (dash < 0)
//                    dash = -dash;
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, dash, real, dash);
//            }
//        }
//        else
//            printf("Not quadratic equation\n");
//    }
//    return 0;
//}
//BC54 获得月份天数
//输入:多组输入，表示年份和月份，用空格分隔。
//2008 2
//29
int main()
{
    int year, month;
    while (scanf("%d %d", &year, &month) == 2)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            printf("%d\n", 31);
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            printf("%d\n", 30);
        else
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                printf("%d\n", 29);
            else
                printf("%d\n", 28);
        }
    }
    return 0;
}