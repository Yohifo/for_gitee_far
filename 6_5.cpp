#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�˷��ھ���
//void print_table(int n)
//{
//int i = 1;//������
//for (i = 1; i <= n; i++)
//{
//	int j = 1;//������
//	for (j = 1; j <= i; j++)
//	{
//		printf("%d*%d=%-2d ", i, j, i * j);
//	}
//	printf("\n");
//}
//}//��ӡ�˷��ھ���ĺ���print_table
//
//int main()
//{
//	int n = 0;
//	printf("���������ӡ������:");
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

////���ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//���ַ�������
//
//void reverse_string(char* arr)
//{
//	char left = 0;
//	char right = my_strlen(arr) - 1;
//	while (left<right)
//	{
//		char tmp = 0;
//		tmp = *(arr+left);//�൱��tmp=arr[left]
//		*(arr + left) = *(arr+right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}//�ַ�������
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
////���õݹ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//���ַ�������
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//��f�ŵ�a��λ��
//	*(str + len - 1) = '\0';//f��λ�ô���\0������һ�ν���
//	if (my_strlen(str + 1) >= 2)//���м��ַ�С������������Ҫ����
//	{
//		reverse_string(str + 1);//�ݹ�ƽ�����
//	}
//	*(str + len - 1) = tmp;//��a�ŵ�f��λ�ã�����ظ���������
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////����һ�������������������֮��
//int DigitSum(int num)
//{
//	if (num < 10)
//		return num;
//	else
//		return num % 10 + DigitSum(num / 10);
//}//���õݹ����ƽ�
//int main()
//{
//	int num = 0;
//	printf("������һ����:");
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("�����֮��Ϊ:%d\n", sum);
//	return 0;
//}

//ʵ��n��k�η�
double Pow(int n, int k)
{
	if (0 == k)
		return 1.0;
	else if (0 < k)
		return n * Pow(n, k - 1);
	else//kΪ����������
		return 1.0 / Pow(n, -k);
}//ͬ��ʹ�õݹ����ƽ�
int main()
{
	int n = 0;
	int k = 0;
	printf("����������n�ʹη�k:");
	scanf("%d %d", &n, &k);
	double sum=Pow(n, k);
	printf("����%d��%d�η�Ϊ:%lf\n", n, k, sum);
	return 0;
}