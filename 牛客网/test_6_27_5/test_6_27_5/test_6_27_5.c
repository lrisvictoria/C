#define _CRT_SECURE_NO_WARNINGS 1 
//BC98 序列中删除指定数字
//思路补充：覆盖思想
int main()
{
	int n;
	scanf("%d", &n);
	int arr[50];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del;
	scanf("%d", &del);
	int j = 0;//记录存放数据位置的下标
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != del)
			arr[j++] = arr[i];//先试用，后++，先存放数据，逐渐向后插入数据
		//如果arr[i]==del,那么这个数据略过，不计入数据下标
	}
	for (int i = 0; i < j; i++)//这时j的值就是这个数组中元素的个数
	{
		printf("%d ", arr[i]);
	}
	return 0;
}