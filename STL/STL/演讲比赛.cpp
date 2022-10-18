#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include <deque>
#include <functional>
#include<numeric>
using namespace std;

class Speaker  
{
public:
	string name;
	int score[3];
public:
	Speaker()
	{
		;
	}
	Speaker(string name)
	{
		this->name = name;
		memset(score, 0, sizeof(score));
	}
};
void speech_contest(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1);
void printSpeechResault(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1);
void createSpeaker(vector<int> &v, map<int, Speaker> &m)
{
	string tmp = "ABCDEFGHIJKKLMNOPQRSTUVWX";
	for (int i = 0; i < 24; i++)
	{
		//���ѡ�ֱ��
		v.push_back(100 + i);

		//���<��ţ�ѡ��>
		string name = (string)"ѡ��" + tmp[i];
		m.insert(make_pair(i + 100, Speaker(name)));
	}
}
int main(int argc, char* argv[])
{
	//����24��ѡ��  ��ѡ��<��ţ�ѡ��>����map������  ѡ�ֱ�ŷ�vector<>������
	vector<int> v;//ѡ�ֱ��
	map<int, Speaker> m;//<��ţ�ѡ��>
	//����ѡ��24��
	createSpeaker(v, m);
	for (map<int, Speaker>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << "  " << (*it).second.name << endl;
	}
	//��������
	srand(time(NULL));
	//��һ�֣��μӵ�ѡ�ֳ�ǩ
	random_shuffle(v.begin(), v.end());
	//���е�һ�ֱ���
	//1��ʾ��ǰ����  vѡ�ֱ��   mѡ����Ϣ    v1��������
	vector<int> v1;
	speech_contest(1, v, m, v1);
	//��ӡ��һ�ֱ�����������в�������ĳɼ�  ����������
	printSpeechResault(1, v, m, v1);

	//�ڶ��֣��μӵ�ѡ�ֳ�ǩ
	random_shuffle(v1.begin(), v1.end());
	//���еڶ��ֱ���
	//1��ʾ��ǰ����  vѡ�ֱ��   mѡ����Ϣ    v1��������
	vector<int> v2;
	speech_contest(2, v1, m, v2);
	//��ӡ�ڶ��ֱ�����������в�������ĳɼ�  ����������
	printSpeechResault(2, v1, m, v2);

	//�����֣��μӵ�ѡ�ֳ�ǩ
	random_shuffle(v2.begin(), v2.end());
	//���е����ֱ���
	//1��ʾ��ǰ����  vѡ�ֱ��   mѡ����Ϣ    v1��������
	vector<int> v3;
	speech_contest(3, v2, m, v3);
	//��ӡ�����ֱ�����������в�������ĳɼ�  ����������
	printSpeechResault(3, v2, m, v3);
	return 0;
}
void printSpeechResault(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1)
{
	cout << "��" << index << "�۱����ɼ�����" << endl;
	int count = 0;
	int n = 0;
	vector<int>::iterator mit = v1.begin();
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (count % 6 == 0)
		{
			cout << "��" << count / 6 + 1 << "��ĳɼ����£�" << endl;
		}
		count++;

		cout << "������" << m[*it].name << ", �÷֣�" << m[*it].score[index - 1] << endl;

		//ÿ����ĳɼ���ӡ��  �����ӡ��������
		if (count % 6 == 0)
		{
			n++;
			cout << "��" << n << "��Ľ�����������:" << endl;
			for (int i = 0; i < 3; i++, mit++)
			{
				cout << "������" << m[*mit].name << ", �÷֣�" << m[*mit].score[index - 1] << endl;
			}
		}
	}
}
void speech_contest(int index, vector<int>& v, map<int, Speaker>& m, vector<int>& v1)
{
	int count = 0;
	//���һ��<���������>��map����
	multimap<int, int, greater<int>> m2;

	//ѡ����һ��̨����
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		count++;
		//*it  ����һ��ѡ��
		//10����ί���
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//
			d.push_back(score);
		}
		//��d��������
		sort(d.begin(), d.end());
		//ȥ����߷�  �Լ���ͷ�
		d.pop_back();
		d.pop_front();
		//��ȡ�ܷ���
		int sum = accumulate(d.begin(), d.end(), 0);
		//��ƽ����  ����ֵ��ѡ�ֵ�score[index-1]
		//map<int,Speaker>
		int avg = sum / d.size();

		m[*it].score[index - 1] = avg;

		m2.insert(make_pair(avg, *it));

		if (count % 6 == 0)//�պ��Ѿ���6��  �������6�˵ĳɼ�ȡǰ3
		{
			//90  80  70  60  50  40
			//����m2����    ȡ��ǰ3����   ���
			int i = 0;
			for (multimap<int, int, greater<int>>::iterator mit = m2.begin(); mit != m2.end() && i < 3; mit++,i++)
			{
				//�������ı��   ���������������
				v1.push_back((*mit).second);

			}

			//����һ���m2���
			m2.clear();//���
		}
	}
}
