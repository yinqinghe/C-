//#include<iostream>
//#include<deque>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<math.h>
//#include<numeric>
//using namespace std;
//
//class Person
//{
//public:
//	string name;
//	int score;
//	Person(string name, int score)
//	{
//		this->name = name;
//		this->score = score;
//	}
//};
//
//void createPerson(vector<Person>& v)
//{
//	//
//	string nameTmp = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameTmp[i];
//		
//		//��ѡ�ֵ�����  ����0  ����vector������
//		v.push_back(Person(name, 0));
//	}
//}
//void printVectorPerson(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//*it==Person
//		cout << (*it).name << "   " << (*it).score << endl;
//	}
//}
//void playGame(vector <Person>& v)
//{
//	//�����������
//	srand(time(NULL));
//
//	//����v�е�ÿ����  ��һ����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//*it==Person
//		//ÿλѡ��  ��Ҫ��10����ί���  ����deque������
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//60~100
//			d.push_back(score);
//		}
//		//��deque��������ί��10������������
//		sort(d.begin(), d.end());//ȥ��һ����ͷ�  ��߷�
//
//		//ȥ��һ����ͷ�
//		d.pop_front();
//		//ȥ��һ����߷�
//		d.pop_back();
//
//		//�õ�ÿ��ѡ�ֵ��ܷ���
//		int sum = accumulate(d.begin(), d.end(), 0);
//
//		//��ȡƽ����  ��ֵ  ѡ�ֵ�score
//		(*it).score = sum / d.size();
//		for (deque<int>::iterator mit = d.begin(); mit != d.end(); mit++)
//		{
//			cout << *mit << "  ";
//		}
//		cout << endl;
//		cout << "-------------"<< endl;
//	}
//}
//int main(int argc, char* argv[])
//{
//	//1.����һ��vector�������5��ѡ��
//	vector<Person> v;
//	createPerson(v);
//	//2.����vector����   5��ѡ��  ��һ����
//	printVectorPerson(v);
//	playGame(v);
//
//	//3.��5��ѡ�ֵĳɼ���ӡ����
//	printVectorPerson(v);
//	return 0;
//}