 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	while (num > 0)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return 0;
//}
//void reverse_string(char* p, int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	char tmp;
//	while (start < end)
//	{
//		char tmp = p[start];
//		p[start] = p[end];
//		p[end] = tmp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char str[20];
//	scanf("%s", &str);
//	int sz = strlen(str);
//	reverse_string( str, sz);
//	printf("%s", str);
//}
//#include <stdio.h>
//int main()
//{
//    void foo(), f();
//    f();
//}
//void foo()
//{
//    printf("2 ");
//}
//void f()
//{
//    printf("1 ");
//    foo();
//}
//#include <stdio.h>
//int x = 5;
//void main()
//{
//    int x = 3;
//    printf("%d", x);
//    {
//        int x = 4;
//    }
//    printf("%d", x);
//}
//#include <stdio.h>
//static int x = 5;
//void main()
//{
//    x = 9;
//    {
//        int x = 4;
//    }
//    printf("%d", x);
//
//}
//#include <stdio.h>
//int main()
//{
//    foo();
//    foo();
//}
//void foo()
//{
//    int i = 11;
//    printf("%d ", i);
//    static int j = 12;
//    j = j + 1;
//    printf("%d\n", j);
//}
//#include <stdio.h>
//void func();
//int main()
//{
//    static int b = 20;
//    func();
//}
//void func()
//{
//    static int b;
//    printf("%d", b);
//}
#include <stdio.h>
//void main()
//{
//    int x = 5;
//    if (x < 1);
//    printf("Hello");
//
//}
//#include <stdio.h>
//void main()
//{
//    int ch;
//    printf("enter a value between 1 to 2:");
//    scanf("%d", &ch);
//    switch (ch)
//    {
//    case 1:
//        printf("1\n");
//        break;
//        printf("Hi");
//    default:
//        printf("2\n");
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int x = 1;
//    if (x > 0)
//        printf("inside if\n");
//    else if (x > 0)
//        printf("inside elseif\n");
//}
//#include <stdio.h>
//int* f();
//int j = 10;
//
//int main()
//{
//    int* p = f();
//    printf("%d\n", p);
//}
//int* f()
//{
//    return j;
//}

//#include <stdio.h>
//int* f();
//int main()
//{
//    int* p = f();
//    printf("%d\n", *p);
//}
//int* f()
//{
//    int* j = (int*)malloc(sizeof(int));
//    *j = 10;
//    return j;
//}
#include <stdio.h>
//int main()
//{
//    int i = 97, * p = &i;
//    foo(&i);
//    printf("%d ", *p);
//}
//void foo(int* p)
//{
//    int j = 2;
//    p = &j;
//    printf("%d ", *p);
//}
//#include <stdio.h>
//void m(int* p, int* q)
//{
//    int temp = *p; *p = *q; *q = temp;
//}
//void main()
//{
//    int a = 6, b = 5;
//    m(&a, &b);
//    printf("%d %d\n", a, b);
//}
//#include <stdio.h>
//void main()
//{
//    char* s = "hello";
//    char* p = s;
//    printf("%c\t%c", *(p + 3), s[1]);
//}
//#include <stdio.h>
//int* f();
//int j = 10;
//
//int main()
//{
//    int* p = f();
//    printf("%d\n", p);
//}
//int* f()
//{
//    return j;
//}
//#include <stdio.h>
//void main()
//{
//    int x = 5;
//    if (x < 1);
//    printf("Hello");
//
//}
//#include <stdio.h>
//int main()
//{
//    void foo(), f();
//    f();
//}
//void foo()
//{
//    printf("2 ");
//}
//void f()
//{
//    printf("1 ");
//    foo();
//}
//#include <stdio.h>
//int main()
//{
//    int i = 97, * p = &i;
//    foo(&i);
//    printf("%d ", *p);
//}
//void foo(int* p)
//{
//    int j = 2;
//    p = &j;
//    printf("%d ", *p);
//}
//#include <stdio.h>
//int main()
//{
//    int i = 97, * p = &i;
//    foo(&i);
//    printf("%d ", *p);
//}
//void foo(int* p)
//{
//    int j = 2;
//    p = &j;
//    printf("%d ", *p);
//}



//#include <stdio.h>
//void m(int* p, int* q)
//{
//    int temp = *p; *p = *q; *q = temp;
//}
//void main()
//{
//    int a = 6, b = 5;
//    m(&a, &b);
//    printf("%d %d\n", a, b);
//}
//#include <stdio.h>
//void main()
//{
//    char* s = "hello";
//    char* p = s;
//    printf("%c\t%c", *(p + 3), s[1]);
//}
//#include <stdio.h>
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int b[4] = { 1, 2, 3, 4 };
//    int n = &b[3] - &a[2];
//    printf("%d\n", n);
//}

//#include <stdio.h>
//void f(char* k)
//{
//    k++;
//    k[2] = 'm';
//    printf("%c\n", *k);
//}
//void main()
//{
//    char s[] = "hello";
//    f(s);
//}
//#include <stdio.h>
//void main()
//{
//    struct student
//    {
//        int no;
//        char name[20];
//    };
//    struct student s;
//    s.no = 8;
//    printf("%d", s.no);
//}
//#include <stdio.h>
//struct temp
//{
//    int a;
//} s;
//void func(struct temp s)
//{
//    s.a = 10;
//    printf("%d\t", s.a);
//}
//main()
//{
//    func(s);
//    printf("%d\t", s.a);
//}
//#include <stdio.h>
//struct p
//{
//    int x;
//    int y;
//};
//int main()
//{
//    struct p p1[] = { 1, 2, 3, 4, 5, 6 };
//    struct p* ptr1 = p1;
//    printf("%d %d\n", ptr1->x, (ptr1 + 2)->x);
//}
//#include<stdio.h>
//main()
//{
//    typedef int a;
//    a b = 2, c = 8, d;
//    d = (b * 2) / 2 + 8;
//    printf("%d", d);
//}
//#include<stdio.h>
//main()
//{
//    int n;
//    n = f1(4);
//    printf("%d", n);
//}
//f1(int x)
//{
//    int b;
//    if (x == 1)
//        return 1;
//    else
//        b = x * f1(x - 1);
//    return b;
//}

//#include<stdio.h>
//main()
//{
//    int n = 10;
//    int f(int n);
//    printf("%d", f(n));
//}
//int f(int n)
//{
//    if (n > 0)
//        return(n + f(n - 2));
//}
//#include <stdio.h>
//int main()
//{
//    FILE* fp = stdout;
//    int n;
//    fprintf(fp, "%d ", 45);
//    fprintf(stderr, "%d ", 65);
//    return 0;
//}
//#include <stdio.h>
//void main()
//{
//    int k = 5;
//    int* p = &k;
//    int** m = &p;
//    printf("%d%d%d\n", k, *p, **m);
//}
//#include <stdio.h>
//struct student
//{
//    char* c;
//    struct student* point;
//};
//void main()
//{
//    struct student s;
//    printf("%d", sizeof(s));
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    int i = 9;
//    if (isdigit(i))
//        printf("digit\n");
//    else
//        printf("not digit\n");
//    return 0;
//}
//#include<stdio.h>
//enum hello
//{
//    a, b = 99, c, d = -1
//};
//main()
//{
//    enum hello m;
//    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
//}

#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//
//	const char str1[] = "abcdef";
//	const char str2[] = "fgha";
//	char* mat;
//	mat = strpbrk(str1, str2);
//	if (mat)
//		printf("First matching character: %c\n", *mat);
//	else
//		printf("Character not found");
//}

//#define myFunc(s,n) #s #n
//main()
//{
//    printf(myFunc(hello, world));
//}
//#include<stdio.h>
//int main()
//{
//	int i, j, rows;
//	printf("Enter the number of rows: ");
//	scanf("%d", &rows);
//	for (i = 1; i <= rows; ++i) 
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//void transpose(int mat[3][3], int tr[3][3], int N)
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			tr[i][j] = mat[j][i];
//}
//int isSymmetric(int mat[3][3], int N)
//{
//	int tr[N][3];
//	transpose(mat, tr, N);
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (mat[i][j] != tr[i][j])
//				return 0;
//	return 1;
//}
//int main()
//{
//	int mat[3][3] = { { 1, 3, 5 },
//	{ 3, 2, 4 },
//	{ 5, 4, 1 } };
//	if (isSymmetric(mat, 3))
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE* fp1 = fopen("file1.txt", "r");
//	FILE* fp2 = fopen("file2.txt", "r");
//	FILE* fp3 = fopen("file3.txt", "w");
//	char c;
//	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
//	{
//		puts("Could not open files");
//		exit(0);
//	}
//	while ((c = fgetc(fp1)) != EOF)
//		fputc(c, fp3);
//	while ((c = fgetc(fp2)) != EOF)
//		fputc(c, fp3);
//	printf("Merged file1.txt and file2.txt into file3.txt");
//	fclose(fp1);
//	fclose(fp2);
//	fclose(fp3);
//	return 0;
//}
//#include<stdio.h>
//#define PI 3.14
//#define AREA(x) PI*x*x
//int main()
//{
//	float r1, area;
//	printf("Enter 1st radius of circle :-");
//	scanf("%f", &r1);
//	area = AREA(r1);
//	printf("Area of circle =%.2f", area);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void countDown(int count)
//{
//	if (count >= 1) {
//		printf("%d \n", count);
//		countDown(count - 1);
//	}
//}
//int main()
//{
//	countDown(5);
//	return 0;
//}
#include<stdio.h>
int main()
{
	//static int b = 20;
	{
		static int b;
	}
	printf("%d", b);
	func();
}
void func()
{
	printf("%d", b);
}
