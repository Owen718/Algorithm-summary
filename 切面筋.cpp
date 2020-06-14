/*一根面条筋，连续对折10次，中间切一刀，得到几条？*/
#include <iostream>
using namespace std;
int main()
{
	int num = 2;
	for (int i = 1; i <= 10; i++)
	{
		num = num * 2 - 1;   //对折一下，去掉本身重复的。
		cout << i <<" "<< num << endl;
	
	}
	return 0;


}