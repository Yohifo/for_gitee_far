#define _CRT_SECURE_NO_WARNINGS 1
//重拾代码的第一天,Github!
#include<stdio.h>


//计算n的阶乘
//	int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <+ n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}//利用循环计算阶乘,循环是一种迭代的方式	

//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * Fac(x - 1);
//}//利用递归计算阶乘
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//计算第N个斐波那契数
//int Fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (Fab(n - 1)+Fab(n-2));
//}//大量重复的运算，造成资源浪费，经过测试计算第50个数需要1分33秒而且还溢出了
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fab(n);
//	printf("%d\n", ret);
//	return 0;
//}//利用递归计算此题效率低下

////利用循环
//int Fab(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//跳出while的条件
//	}
//	return c;
//}//使用迭代速度极快
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fab(n);
//	printf("%d\n", ret);
//	return 0;
//}

////数9问题,1到100出现过几个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//计算1/1+1/2-1/3+...+1/100的值
//int main()
//{
//	float i = 0;
//	int n = 1;
//	float add = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (n % 2 != 0)
//			add += 1 / i;
//		else
//			add -= 1 / i;
//		n++;
//	}
//	printf("%f\n", add);
//	return 0;
//}

//int main()
//{
//	float i = 0;
//	int n = 1;
//	float add = 0;
//	int flag = 1;
//	for (i = 1; i < 101; i++)
//	{
//		add += flag * 1 / i;
//		flag = -flag;
//	}//利用flag +-交替的特征，计算加一项减一项
//	printf("%f\n", add);
//	return 0;
//}

//求最大数（通用版）
int main()
{
	int arr[10] = { 0 };
	int max = arr[0];
	int i = 0;
	printf("请输入十个数:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
			max = arr[i];
	}
	printf("十个数的最大值为:%d\n", max);
}

