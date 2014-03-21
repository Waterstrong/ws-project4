// NYOJ779_LanzhouBakedWheatCake.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
�����ձ�
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
�ձ������棬Ҫ����һ�������ձ���Ҫ���涼Ū�ȡ���Ȼ��һ��ֻ��Ūһ���Ļ���Ч�ʾ�̫���ˡ�����ôһ����ƽ�׹���һ�ο���ͬʱ����k�������ձ���һ����������һ�档��������n�������ձ���������Ҫ���ٷ��Ӳ���ȫ�������أ�
����
��������n��k���м��Կո�ָ�������1 <= k,n <= 100000
���
���ȫ������������Ҫ�ķ�����
��������
3 2
�������
3
��ʾ
�����������������ձ����a,b,c������a��b��Ȼ��a��c�����b��c��3�������
�ϴ���
������
*/
#include "stdafx.h"

#include <stdio.h>
int main()
{
	int n, k;
	while(scanf("%d%d", &n, &k) != EOF)
	{
		if (n <= k)
		{
			printf("2\n");
		}
		else
		{
			n = n<<1; //����
			if (n % k == 0)
			{
				printf("%d\n", n/k);
			}
			else
			{
				printf("%d\n", n/k+1);
			}
		}
	}

	return 0;
}
