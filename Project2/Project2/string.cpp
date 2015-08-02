#include<iostream>
#include<string>
using namespace std;

//统计一个给定字符串中指定的字符出现的次数
int main()
{
	cout << "-------------------统计一个给定字符串中指定的字符出现的次数----------------" << endl;
	char *q, b[5];
	char *p, a[81];
	int n, i;
	cout << "请输入一个长度小于5的字符串：" << endl;
	cin.getline(b, 5);
	cout << "请输入一个长度小于80的字符串：" << endl;
	cin.getline(a, 81);
	char search;
	char j;
	cout << "检索a中出现b中各字符次数：" << endl;
	cout << "字符处为空白时代表空格" << endl;
	q = b;
	cout << "字符" << "\t" << "出现次数" << endl;
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