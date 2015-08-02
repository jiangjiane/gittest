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
	cout << "----------------读取成绩-排序-写入成绩----------------" << endl;
	ifstream in("C:\\Users\\LENOVO\\Desktop\\编程测试\\score1.txt");
	//ofstream out("C:\\Users\\LENOVO\\Desktop\\编程测试\\score2.txt");
	//string name,score;
	//string line;
	if (in) // 有该文件  
	{
		/*while (getline(in, line)) // line中不包括每行的换行符  
		{
			cout << line << endl;
			out << line << endl; // 输入到2.txt中 
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
			ofstream out("C:\\Users\\LENOVO\\Desktop\\编程测试\\score2.txt");
			out.write(reinterpret_cast<char *>(&student[c]), sizeof(student[c]));
			cout << student[c].name<<"\t"<<student[c].score << endl;
			out.close();
		}
	}
	else // 没有该文件  
	{
		cout << "no such file" << endl;
	}
	in.close();
	system("pause");
	return 0;
}
