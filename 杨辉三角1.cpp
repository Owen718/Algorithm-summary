/*����һ����Ҫ�����ǣ��������е�ÿ�����ֵ����������ϵ�������ӡ�
�����������������ε�ǰ 4 �У�
   1
  1 1
 1 2 1
1 3 3 1
���� n���������ǰ n �С�
�����ʽ
�������һ���� n��
�����ʽ
�����������ε�ǰ n �С�ÿһ�д���һ�еĵ�һ������ʼ����������м�
ʹ��һ���ո�ָ����벻Ҫ��ǰ���������Ŀո�
*/
#include <iostream>
#include <cstdio>
using namespace std;
#define MAX 100


int main()
{
	int n;
	int num[MAX][MAX] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
			num[i][0] = 1;   //ÿ�е�ͷΪ1
			num[i][i] = 1;  //ÿ�е�ĩβΪ1
			for (int j = 1; j <i; j++)
			{
				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];  //�����п�ʼ������Ϊ������֮�͡�
			}
	}


	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n - i; k++)
			printf(" ");

		for (int j = 0; j <=i; j++)
		{

			printf("%d ", num[i][j]);
		}
		printf("\n");
	}

	return 0;



}

