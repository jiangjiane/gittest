#include <iostream>
#include <math.h>
using namespace std;

// 输入一个数N，找出2到N之间的素数并输出
int prime(int i)
{
	int j;
	for (j = 2; j <= sqrt(i); j++)
		if (i%j == 0)
			return 0;
	if (j>sqrt(i))
		return 1;
}
int main()
{
	cout << "-------------------输入一个数N，找出2到N之间的素数并输出------------------" << endl;
	int i, N;
	static int count = 0;
	cout << "请输入上限值N：" << endl;
	cin >> N;
	cout << "2到 "<<N<<" 之间素数值为：" << endl;
	for (i = 2; i <= N; i++)
	{
		if (prime(i) == 1)
		{
			cout << i << "\t";
			count++;
			if (count == N)
			{
				return 0;
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}