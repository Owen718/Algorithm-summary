#include <iostream>
#include <cstdio>
using namespace std;
int fact2(int n)  //转化为二进制
{
	if (n < 2)
		return n;
	else
		return fact2(n / 2) * 10 + n % 2;
	//说明： n=10，第一层： fact(10/2)*10+10%2=101*10+0=1010;
	//第二层  fact(5/2)*10+5%2=10*10+1=101
	//第三层  fact(2/2)*10+2%2=1*10+0=10
	//第四层  return 1
}

int fact3(int n) //转化为三进制
{
	if (n < 3)
		return n;
	else
		return fact3(n / 3) * 10 + n % 3;
}


void fact16(int n)  //转化为16进制
{
	if (n != 0)//写成while(n)出现死循环
	{
		fact16(n >> 4);
		int fbit = n & 0x0f;
		if (fbit <= 9)
		{
			printf("%d", fbit);
		}
		else
		{
			printf("%c", fbit - 10 + 'A');//大于9,输出A-F
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
