//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<list>
//#include<numeric>
//using namespace std;
///*
//        list���캯��
//list<T> lstT;//list����ģ����ʵ�� �������Ĭ�Ϲ�����ʽ
//list(beg,end);//���캯����[beg,end)�����е�Ԫ�ؿ���������
//list(n,elem);//���캯����n��elem����������
//list(const list &lst);//�������캯��
//
//        list����Ԫ�ز����ɾ������
//push_back(elem);//������β������һ��Ԫ��
//pop_back();//ɾ�����������һ��Ԫ��
//push_front(elem);//��������ͷ����һ��Ԫ��
//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos,elem);//��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
//insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ
//insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//clear();//�Ƴ���������������
//erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
//erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//remove(elem);//ɾ��������������elemֵƥ���Ԫ��
//
//       list��С����
//size();//����������Ԫ�صĸ���
//empty();//�ж������Ƿ�Ϊ��
//resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ0�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(num,elem);//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//
//       list��ֵ����
//assign(beg,end);//
//
//
//
//       list���ݵĴ�ȡ
////front();//���������е�һ������Ԫ��
////back();//�������������һ������Ԫ��
//
//       list��ת����
//reverse();//��ת��������lst����1��3��5Ԫ�أ����д˷�����lst�Ͱ���5��3��1Ԫ��
//sort();//list����
//*/
//void printListInt(list<int>& L)
//{
//    for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << (*it) <<"   ";
//    }
//    cout << endl;
//}
//void test01()
//{
//    list<int> L;
//    L.push_back(10);
//    L.push_back(20);
//    L.push_back(30);
//    L.push_back(40);
//
//    printListInt(L);//10   20   30   40
//    //������+n  ֻ��������ʵ�����֧��
//    //��list�����ĵ�������˫�������  ��֧��+n
//    //L.insert(L.begin() + 2, 3, 100);//err
//    list<int>::iterator it = L.begin();
//    //++ ������ʵ�����  �Լ�  ˫�������  ��֧��
//    it++;
//    it++;
//    L.insert(it, 3, 100);
//    printListInt(L);//10   20   100   100   100   30   40
//
//    //remove(elem);//ɾ��������������elemֵƥ���Ԫ��
//    L.remove(100);//ɾ������100
//    printListInt(L);//10   20   30   40
//
//    //����ת
//    L.reverse();
//    printListInt(L);//40   30   20   10
//
//    //sort��ϵͳ�ṩ���㷨  ��֧��  ������ʵ���������֧��list)
//    //list��������ʹ��ϵͳ�㷨  list���Լ��ṩ�㷨
//    //sort��L.begin(),L.end());
//    L.sort();
//    printListInt(L);//10   20   30   40
//}
//class Person
//{
//public:
//    string name;
//    int age;
//public:
//    Person(string name, int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//    //��Ա��������==�����
//    bool operator==(const Person& ob)
//    {
//        if (this->name == ob.name && this->age == ob.age)
//            return true;
//        return false;
//    }
//    //��Ա��������<�����
//    bool operator<(const Person& ob)
//    {
//        return this->age<ob.age;
//    }
//};
//void printListPerson(list<Person>& L)
//{
//    cout << "--------------" << endl;
//    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << (*it).name << "   "<<(*it).age<<endl;
//    }
//}
//void test02()
//{
//    //����Զ�������
//    list<Person> L;
//    L.push_back(Person("001", 44));
//    L.push_back(Person("002", 35));
//    L.push_back(Person("003", 46));
//    L.push_back(Person("004", 47));
//
//    printListPerson(L);
//
//    //ɾ�� 003
//    Person tmp("003", 46);
//    //����==�����
//    //L.remove(tmp);
//    //printListPerson(L);
//
//}
//bool myComparePerson(const Person& ob1, const Person& ob2)
//{
//    return ob1.age > ob2.age;
//}
//void test03()
//{
//    //����Զ�������
//    list<Person> L;
//    L.push_back(Person("001", 44));
//    L.push_back(Person("002", 35));
//    L.push_back(Person("003", 46));
//    L.push_back(Person("004", 47));
//
//    printListPerson(L);
//
//    //�����Զ�������  ���ǿ�������<�����
//    L.sort();
//    printListPerson(L);
//}
//void test04()
//{
//    //����Զ�������
//    list<Person> L;
//    L.push_back(Person("001", 44));
//    L.push_back(Person("002", 35));
//    L.push_back(Person("003", 46));
//    L.push_back(Person("004", 47));
//
//    printListPerson(L);
//
//    //�����Զ�������  ���ǿ�������<�����
//    L.sort(myComparePerson);
//    printListPerson(L);
//}
//#include<vector>
//void printListPerson(vector<Person>& L)
//{
//    cout << "--------------" << endl;
//    for (vector<Person>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << (*it).name << "   " << (*it).age << endl;
//    }
//}
//class myComparePerson2
//{
//public:
//    bool operator()(Person& ob1, Person& ob2)
//    {
//        return ob1.age < ob2.age;
//    }
//};
//void test05()
//{
//    //����Զ�������
//    vector<Person> v;
//    v.push_back(Person("001", 44));
//    v.push_back(Person("002", 35));
//    v.push_back(Person("003", 46));
//    v.push_back(Person("004", 47));
//    printListPerson(v);
//
//    //Ĭ�ϱȽϷ�ʽ��С����
//    //vector����Զ�������  ��ָ�����������ͨ������
//    sort(v.begin(), v.end(),myComparePerson);
//    printListPerson(v);
//
//    //vector����Զ�������  ��ָ��������򣨷º�����
//    sort(v.begin(), v.end(), myComparePerson2());
//    printListPerson(v);
//}
//void printVectorInt(vector<int>& L)
//{
//    cout << "--------------" << endl;
//    for (vector<int>::iterator it = L.begin(); it != L.end(); it++)
//    {
//        cout << *it<< "   " ;
//    }
//    cout << endl;
//}
//void myPrint01(int val)
//{
//    cout << val << "    ";
//}
//void test06()
//{
//    //����Զ�������
//    vector<int> v;
//    v.push_back(int( 44));
//    v.push_back(int( 35));
//    v.push_back(int( 46));
//    v.push_back(int( 47));
//    //����1.����v����  ��ͨ����
//    printVectorInt(v);
//
//    //����2.����v����  ϵͳ�㷨for_each
//    for_each(v.begin(), v.end(), myPrint01);
//
//    //����3.����v����  lambda���ʽ
//    //[]��ʾ������   ���������б�  {}������
//    for_each(v.begin(), v.end(), [](int val) {
//        cout << val << "  ";
//        });
//}
//int main(int argc, char* argv[])
//{
//	test06();
//	return 0;
//}