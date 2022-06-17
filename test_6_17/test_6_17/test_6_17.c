#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//BC36 健康评估
//BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，
//是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//例如：一个人的身高为1.75米，体重为68千克，
// 他的BMI=68/(1.75^2)=22.2（千克/米^2）。
//当BMI指数为18.5～23.9时属正常，
//否则表示身体存在健康风险。编程判断人体健康情况。
//输入：68 1.75
//输出：Normal
//67.5 1.65
//Abnormal
#include<stdio.h>
int main()
{
    int weight;
    float height;
    scanf("%d %f", &weight, &height);
    float BMI;
    BMI = weight / (height * height);
    if (BMI >= 18.5 && BMI <= 23.9)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Abnormal\n");
    }
    return 0;
}