#include <iostream>
#include <cstdio>
using namespace std;
int fact2(int n)  //ת��Ϊ������
{
	if (n < 2)
		return n;
	else
		return fact2(n / 2) * 10 + n % 2;
	//˵���� n=10����һ�㣺 fact(10/2)*10+10%2=101*10+0=1010;
	//�ڶ���  fact(5/2)*10+5%2=10*10+1=101
	//������  fact(2/2)*10+2%2=1*10+0=10
	//���Ĳ�  return 1
}

int fact3(int n) //ת��Ϊ������
{
	if (n < 3)
		return n;
	else
		return fact3(n / 3) * 10 + n % 3;
}


void fact16(int n)  //ת��Ϊ16����
{
	if (n != 0)//д��while(n)������ѭ��
	{
		fact16(n >> 4);
		int fbit = n & 0x0f;
		if (fbit <= 9)
		{
			printf("%d", fbit);
		}
		else
		{
			printf("%c", fbit - 10 + 'A');//����9,���A-F
		}
	}
}



int main()
{
	int n;
	cin >> n ;
	fact16(n);
	return 0;
}
