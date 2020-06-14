#include <cstdio>
#include <iostream>
/*
对于长度为 5 位的一个 01 串，每一位都可能是 0 或 1，一共有 32 种可能
。它们的前几个是：
00000
00001
00010
00011
00100
请按从小到大的顺序输出这 32 种 01 串。
输入格式
本试题没有输入。
输出格式
输出 32 行，按从小到大的顺序每行一个长度为 5 的 01 串。
*/
using namespace std;
int main()
{

	for (int i = 0; i <32; i++)
	{
		printf("%d%d%d%d%d\n", i / 16 % 2, i / 8 % 2, i / 4 % 2, i / 2 % 2,i % 2);
	}
	return 0;



}