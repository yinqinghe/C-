//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<set>
//#include<numeric>
//using namespace std;
////set�����ļ�ֵ  ��������ͬ
////set�����ṩ����ֻ�����������������û��޸�Ԫ�ص����ݣ�
///*
//         set���캯��
//set<T> st;//setĬ�Ϲ��캯��
//mulitest<T> mst;//multisetĬ�Ϲ��캯��
//set(const set &st);//�������캯��
//
//         set��ֵ����
//set& operator=(const set &st);//���صȺŲ�����
//swap(st);//����������������
//
//         set��С����
//size();//����������Ԫ�صĸ���
//empty();//�ж������Ƿ�Ϊ��
//         set�����ɾ������
//insert(elem);//�������в���Ԫ��
//clear();//�Ƴ���������������
//erase(beg,end);//ɾ��[beg,end)������������ݣ�������һ�����ݵĵ�����
//erase(pos);//ɾ��pos��������ָ�����ݣ�������һ�����ݵĵ�����
//erase(elem);//ɾ��������ֵΪelem��Ԫ��
//*/
//void test01()
//{
//    set<int> s;
//    //set�����Զ����ݼ�ֵ����
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });//10   20   30   40   50
//    cout << endl;
//
//    //set�����ṩ����ֻ��������const_iterator
//    //�û��������޸�set������Ԫ��
//    set<int>::const_iterator it = s.begin();
//    //*it=100;//err
//    cout << "size = " << s.size() << endl;
//
//    //ɾ����ʼλ�õ�Ԫ��
//    s.erase(s.begin());
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });//   20   30   40   50
//    cout << endl;
//
//    //����Ԫ��ɾ��
//    s.erase(30);
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });//10   20      40   50
//    cout << endl;
//}
///*
//         set���Ҳ���
//find(key);//���Ҽ�Key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ�����  ���������ڣ�����set.end();
//count(key);//���Ҽ�key��Ԫ�ظ���
//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�����
//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�����
//equal_range(keyElem);//����������Key��keyElem��ȵ������޵�����������
//
//*/
//void test02()
//{
//    set<int> s;
//    //set�����Զ����ݼ�ֵ����
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    //find(key);//���Ҽ�Key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ�����  ���������ڣ�����set.end();
//    set<int>::iterator ret ;
//    ret = s.find(200);
//    if (ret == s.end())
//    {
//        cout << "û���ҵ�" << endl;
//    }
//    else
//    {
//        cout << "�ҵ�" << *ret << endl;
//    }
//
//    //count(key);//���Ҽ�key��Ԫ�ظ���
//    //set�����ļ�ֵ  �ǲ��ظ���  ��ôcount(key)ֻ����1��0
//    cout << s.count(20) << endl;//1
//    cout << s.count(200) << endl;//0
//}
//void test03()
//{
//    set<int> s;
//    //set�����Զ����ݼ�ֵ����
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    //lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�����
//    set<int>::const_iterator lower_ret;
//    lower_ret = s.lower_bound(30);
//    if (lower_ret == s.end())
//    {
//        cout << "û���ҵ�30������" << endl;
//    }
//    else
//    {
//        cout << "�ҵ�30�����ޣ�" << *lower_ret << endl;
//    }
//    //upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�����
//    set<int>::const_iterator up_ret;
//    up_ret = s.upper_bound(30);
//    if (up_ret == s.end())
//    {
//        cout << "û���ҵ�30������" << endl;
//    }
//    else
//    {
//        cout << "�ҵ�30�����ޣ�" << *up_ret << endl;
//    }
//    //equal_range(keyElem);//����������Key��keyElem��ȵ������޵�����������
//    //equal_range���ص��Ƕ���
//    //first�����е�һ��ֵ  second�����еڶ���ֵ
//    pair< set<int>::const_iterator, set<int>::const_iterator> pair_ret;
//    pair_ret = s.equal_range(30);
//    //���ޣ�lower_bound
//    if (pair_ret.first == s.end())
//    {
//        cout << "û���ҵ�����" << endl;
//    }
//    else
//    {
//        cout << "�ҵ����ޣ�" << *(pair_ret.first)<< endl;
//    }
//    //���ޣ�upper_bound
//    if (pair_ret.second == s.end())
//    {
//        cout << "û���ҵ�����" << endl;
//    }
//    else
//    {
//        cout << "�ҵ����ޣ�" << *(pair_ret.second) << endl;
//    }
//}
//void test04()
//{
//    //9527--��ү    10086--�ƶ�     10010--��ͨ
//    //������鷽ʽ1��
//    pair<int, string> pair1(9527, "��ү");
//    cout << "��ţ�" << pair1.first << ",���" << pair1.second << endl;
//
//    //������鷽ʽ1��(�Ƽ�)
//    pair<int, string> pair2(10086, "�ƶ�");
//    cout << "��ţ�" << pair2.first << ",���" << pair2.second << endl;
//}
//class MyGreater
//{
//public:
//    bool operator()(int val1,int val2)  const
//    {
//        return val1 > val2;
//    }
//};
//bool myGreater(int v1, int v2)
//{
//    return v1 > v2;
//}
////����setĬ���������
//void test05()
//{
//    //Ĭ�ϴ�С-->����
//    //�ĳɴӴ�-->С��
//    //set<int,�������> s
//    //����������Ҫ��������Ҳ�Ǻ���������ʹ�÷º���
//    set<int,MyGreater> s;
//    //set�����Զ����ݼ�ֵ����
//    s.insert(30);
//    s.insert(10);
//    s.insert(20);
//    s.insert(40);
//    s.insert(50);
//
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "   ";
//        });
//    cout << endl;
//}
//class Person
//{
//public:
//    string name;
//    int age;
//    Person(string name, int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//    //����һ������<�����  С-->��
//    bool operator<(const Person& ob) const
//    {
//        return this->age < ob.age;
//    }
//};
////������������<�����  С-->��
//class myGreaterPerson
//{
//public:
//    bool operator()(const Person& ob1, const Person& ob2)const
//    {
//        return ob1.age > ob2.age;
//    }
//};
//void test06()
//{
//    set<Person,myGreaterPerson> s;
//    s.insert(Person("���", 25));
//    s.insert(Person("����", 35));
//    s.insert(Person("��˹��³��", 29));
//    s.insert(Person("���˶�", 21));
//
//    for_each(s.begin(), s.end(), [](Person val) {
//        cout << "name = " << val.name << ", age =" << val.age << endl;
//        });
//}
//void test07()
//{
//    set<int> s;
//    pair<set<int>::const_iterator, bool> ret1;
//    pair<set<int>::const_iterator, bool> ret2;
//
//    ret1 = s.insert(10);
//    if (ret1.second == true)
//    {
//        cout << "��һ�β���ɹ�" << endl;
//    }
//    else
//    {
//        cout << "��һ�β���ʧ��" << endl;
//    }
//    ret2 = s.insert(10);
//    if (ret2.second == true)
//    {
//        cout << "�ڶ��β���ɹ�" << endl;
//    }
//    else
//    {
//        cout << "�ڶ��β���ʧ��" << endl;
//    }
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val<<"    " << endl;
//        });
//}
//void test08()
//{
//
//    //���Բ����ظ��ļ�ֵ
//    multiset<int> s;
//
//    s.insert(10);
//    s.insert(10);
//
//    for_each(s.begin(), s.end(), [](int val) {
//        cout << val << "    " << endl;
//        });
//    cout << endl;
//}
//int main(int argc, char* argv[])
//{
//	test08();
//	return 0;
//}