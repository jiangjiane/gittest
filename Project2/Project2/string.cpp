#include<iostream>
#include<string>
using namespace std;

//ͳ��һ�������ַ�����ָ�����ַ����ֵĴ���
int main()
{
	cout << "-------------------ͳ��һ�������ַ�����ָ�����ַ����ֵĴ���----------------" << endl;
	char *q, b[5];
	char *p, a[81];
	int n, i;
	cout << "������һ������С��5���ַ�����" << endl;
	cin.getline(b, 5);
	cout << "������һ������С��80���ַ�����" << endl;
	cin.getline(a, 81);
	char search;
	char j;
	cout << "����a�г���b�и��ַ�������" << endl;
	cout << "�ַ���Ϊ�հ�ʱ����ո�" << endl;
	q = b;
	cout << "�ַ�" << "\t" << "���ִ���" << endl;
	for (int k = 0; k < strlen(b); k++)
	{
		j = *q;
		search = j;
		p = a;
		n = 0;
		for (i = 0; i < strlen(a); i++)
		{
			if (search == *p)
				n++;
			*p++;
		}
		cout << j<<"\t"<<n << endl;
		*q++;
	}
	system("pause");
	return 0;
}