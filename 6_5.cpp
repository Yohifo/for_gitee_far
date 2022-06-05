#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//乘法口诀表
//void print_table(int n)
//{
//int i = 1;//控制行
//for (i = 1; i <= n; i++)
//{
//	int j = 1;//控制列
//	for (j = 1; j <= i; j++)
//	{
//		printf("%d*%d=%-2d ", i, j, i * j);
//	}
//	printf("\n");
//}
//}//打印乘法口诀表的函数print_table
//
//int main()
//{
//	int n = 0;
//	printf("请输入想打印的行数:");
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

////将字符串逆序
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//求字符串长度
//
//void reverse_string(char* arr)
//{
//	char left = 0;
//	char right = my_strlen(arr) - 1;
//	while (left<right)
//	{
//		char tmp = 0;
//		tmp = *(arr+left);//相当于tmp=arr[left]
//		*(arr + left) = *(arr+right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}//字符串逆序
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
////利用递归解决
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//求字符串长度
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//将f放到a的位置
//	*(str + len - 1) = '\0';//f的位置存入\0方便下一次交换
//	if (my_strlen(str + 1) >= 2)//若中间字符小于两个，则不需要逆序
//	{
//		reverse_string(str + 1);//递归逼近条件
//	}
//	*(str + len - 1) = tmp;//将a放到f的位置，如此重复即可逆序
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////输入一个数返回组成它的数字之和
//int DigitSum(int num)
//{
//	if (num < 10)
//		return num;
//	else
//		return num % 10 + DigitSum(num / 10);
//}//利用递归逐层逼近
//int main()
//{
//	int num = 0;
//	printf("请输入一个数:");
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("组成数之和为:%d\n", sum);
//	return 0;
//}

//实现n的k次方
double Pow(int n, int k)
{
	if (0 == k)
		return 1.0;
	else if (0 < k)
		return n * Pow(n, k - 1);
	else//k为正负数都行
		return 1.0 / Pow(n, -k);
}//同上使用递归逐层逼近
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入数字n和次方k:");
	scanf("%d %d", &n, &k);
	double sum=Pow(n, k);
	printf("数字%d的%d次方为:%lf\n", n, k, sum);
	return 0;
}