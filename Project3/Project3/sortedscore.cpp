#include <fstream>  
#include <string>  
#include <iostream>  
using namespace std;

struct student
{
	string name;
	double score;
}student[340];

int main()
{
	cout << "----------------��ȡ�ɼ�-����-д��ɼ�----------------" << endl;
	ifstream in("C:\\Users\\LENOVO\\Desktop\\��̲���\\score1.txt");
	//ofstream out("C:\\Users\\LENOVO\\Desktop\\��̲���\\score2.txt");
	//string name,score;
	//string line;
	if (in) // �и��ļ�  
	{
		/*while (getline(in, line)) // line�в�����ÿ�еĻ��з�  
		{
			cout << line << endl;
			out << line << endl; // ���뵽2.txt�� 
		}*/
		string nam;
		double t;
		for (int i = 0; i < 340; i++)
		{
			in >> student[i].name >> student[i].score;
		}
		for (int j = 0; j < 340;j++)
		{
			for (int k = 0; k < 340 - j;k++)
			{
				if (student[k].score<student[k+1].score)
				{
					t = student[k].score; nam = student[k].name;
					student[k].score = student[k + 1].score; student[k].name = student[k + 1].name;
					student[k + 1].score = t; student[k + 1].name = nam;
				}
			}
		}
		for (int c = 0; c < 340; c++)
		{
			ofstream out("C:\\Users\\LENOVO\\Desktop\\��̲���\\score2.txt");
			out.write(reinterpret_cast<char *>(&student[c]), sizeof(student[c]));
			cout << student[c].name<<"\t"<<student[c].score << endl;
			out.close();
		}
	}
	else // û�и��ļ�  
	{
		cout << "no such file" << endl;
	}
	in.close();
	system("pause");
	return 0;
}
