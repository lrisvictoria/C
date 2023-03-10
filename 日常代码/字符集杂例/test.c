#define _CRT_SECURE_NO_WARNINGS 1 

/*
* 这是一个探究fgets/fputs时偶然发现的一个问题，很有趣
* 于是将其记录下来
*/

#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");

	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}

	char arr[20] = "###########";
	// fputs("圣光背叛了我", pf);
	fgets(arr, 20, pf);
	printf("%s", arr);
	fclose(pf);
	pf = NULL;
	return 0;
}

// 没更改字符集时，从后台写入，直接读取为乱码
// 使用fputs写入，fgets读取才正常

// 这里其实是一个字符编码集的问题。
// 我们平常的设备默认的字符编码集是`UTF - 8`的。
// 但是我们从程序里面读取数据的时候，放到运行的黑框中，
// 它的默认显示的字符集是`GB2312`的。然
// 后就导致它们两个的字符集不一样了。
// 写入的字符集和打印输出的字符集不同，就显示就乱码了。
// 而我们用`fputs`写入用`fgets`读取是正常的是因为它们的字符集是一样的，
// 不存在写入的软件和读取的软件的程序字符集不一样的情况。
// 
// 这里的解决方案就是更改文件默认字符集与电脑一致为UTF-8，
// 将电脑默认字符集和程序显示字符集相同，这样就可以解决问题
// 
// 就可以直接后台对文件写入，然后在文件中直接使用fgets读取