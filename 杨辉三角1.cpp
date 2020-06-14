/*它的一个重要性质是：三角形中的每个数字等于它两肩上的数字相加。
下面给出了杨辉三角形的前 4 行：
   1
  1 1
 1 2 1
1 3 3 1
给出 n，输出它的前 n 行。
输入格式
输入包含一个数 n。
输出格式
输出杨辉三角形的前 n 行。每一行从这一行的第一个数开始依次输出，中间
使用一个空格分隔。请不要在前面输出多余的空格
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
			num[i][0] = 1;   //每行的头为1
			num[i][i] = 1;  //每行的末尾为1
			for (int j = 1; j <i; j++)
			{
				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];  //第三行开始，下数为上两数之和。
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

