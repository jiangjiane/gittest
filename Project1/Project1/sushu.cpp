#include <iostream>
#include <math.h>
using namespace std;

// ����һ����N���ҳ�2��N֮������������
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
	cout << "-------------------����һ����N���ҳ�2��N֮������������------------------" << endl;
	int i, N;
	static int count = 0;
	cout << "����������ֵN��" << endl;
	cin >> N;
	cout << "2�� "<<N<<" ֮������ֵΪ��" << endl;
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