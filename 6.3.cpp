#define _CRT_SECURE_NO_WARNINGS 1
//��ʰ����ĵ�һ��,Github!
#include<stdio.h>


//����n�Ľ׳�
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
//}//����ѭ������׳�,ѭ����һ�ֵ����ķ�ʽ	

//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * Fac(x - 1);
//}//���õݹ����׳�
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

//�����N��쳲�������
//int Fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (Fab(n - 1)+Fab(n-2));
//}//�����ظ������㣬�����Դ�˷ѣ��������Լ����50������Ҫ1��33����һ������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fab(n);
//	printf("%d\n", ret);
//	return 0;
//}//���õݹ�������Ч�ʵ���

////����ѭ��
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
//		n--;//����while������
//	}
//	return c;
//}//ʹ�õ����ٶȼ���
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fab(n);
//	printf("%d\n", ret);
//	return 0;
//}

////��9����,1��100���ֹ�����9
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

//����1/1+1/2-1/3+...+1/100��ֵ
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
//	}//����flag +-����������������һ���һ��
//	printf("%f\n", add);
//	return 0;
//}

//���������ͨ�ð棩
int main()
{
	int arr[10] = { 0 };
	int max = arr[0];
	int i = 0;
	printf("������ʮ����:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
			max = arr[i];
	}
	printf("ʮ���������ֵΪ:%d\n", max);
}

