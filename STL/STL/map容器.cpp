//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<numeric>
//using namespace std;
////1.����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
////2.���е�Ԫ�ض���pair��ͬʱӵ�м�ֵ��ʵֵ
////��һ����������ֵ  �ڶ���������ʵֵ
//
///*
//           map/multimap����API
//		   map���캯��
//map<T1,T2> mapTT;//mapĬ�Ϲ��캯��
//map(const map &map);//�������캯��
//
//           map��ֵ����
//map& operator=(const map &map);//���صȺŲ�����
//swap(mp);//����������������
//
//           map��С����
//size();//����������Ԫ�ص���Ŀ
//empty();//�ж������Ƿ�Ϊ��
//
//           map��������Ԫ�ز���
//map.insert(...);//����������Ԫ�أ�����Pair<iterator,bool>
//map<int ,string>  mapStu;
////��һ��  ͨ��pair�ķ�ʽ�������
//mapStu.insert(pair<int,string>(3,"����"));
////�ڶ���  ͨ��pair�ķ�ʽ�������
//mapStu.insert(make_pair(-1,"��ʦ"));
////������  ͨ��value_type�ķ�ʽ�������
//mapStu.insert(map<int,string>::value_type(1,"����"));
////������ͨ������ �ķ�ʽ����ֵ
//mapStu[3]="С��";
//mapStu[5]="С��";
//
//          mapɾ������
//clear();//�Ƴ���������������
//erase(beg,end);//ɾ��[beg,end)������������ݣ�������һ�����ݵĵ�����
//erase(pos);//ɾ��pos��������ָ�����ݣ�������һ�����ݵĵ�����
//erase(KeyElem);//ɾ��������keyΪkeyElem�Ķ���
//
//          map���Ҳ���
//find(key);//���Ҽ�Key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ�����  ���������ڣ�����map.end();
//count(key);//����������keyΪkeyElem�Ķ����������map��˵��Ҫô��0��Ҫô��1.
//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�����
//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�����
//equal_range(keyElem);//����������Key��keyElem��ȵ������޵�����������
//
//*/
//
//void myPrintMap01(map<int, string>& m)
//{
//    for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++)
//    {
//        //*it==<int,string>
//        cout << "key = " << (*it).first << ", value" << (*it).second << endl;
//    }
//}
//void test01()
//{
//    //9527--��ү    10086--�ƶ�     10010--��ͨ
//    //intΪ��ֵ������  stringΪʵֵ������
//    map<int, string> m;
//
//    //��һ�֣�
//    m.insert(pair<int, string>(9527, "��ү"));
//    //�ڶ��֣����Ƽ���
//    m.insert(make_pair(10086, "�ƶ�"));
//    //������
//    m.insert(map<int, string>::value_type(10010, "��ͨ"));
//    //������  ��map�������ݵ�ʱ��  �Ƽ�
//    m[10000] = "����";//
//
//    //m[10]  Ѱ��keyΪ10��ʵֵ
//    //���ǣ����������û��keyΪ10  ʹ��m[10]  �ᴴ��һ��keyΪ10ʵֵΪ�յ�  ����
//    //�����������KeyΪ10   ��ôm[10]����key=10��ʵֵ
//    cout << m[10] << endl;
//    myPrintMap01(m);
//    for_each(m.begin(), m.end(), [](pair<int, string> val) {
//        cout << "key = " << val.first << ", value = " << val.second << endl;
//        });
//    cout << endl;
//    //ֻ��鿴Key==9527��ʵֵ
//    cout << m[9527] << endl;//"��ү"
//    cout << m[10010] << endl;//"��ͨ"
//
//    //�������ȷ�� keyֵ�Ƿ����
//    map<int, string>::iterator ret;
//    ret = m.find(10086);
//    if (ret == m.end())
//    {
//        cout << "δ�ҵ���ؽڵ�" << endl;
//    }
//    else
//    {
//        //ret�������key=10086�Ķ���ĵ�����
//        cout << "�ҵ���ؽڵ�:key=" <<(*ret).first<<", value"<<(*ret).second<< endl;
//    }
//}
//#include<vector>
//void test02()
//{
//    //��������
//    srand(time(NULL));
//    //ս������  ��ս�ӱ�ţ�ս�����ƣ�
//    map<int, string> m;
//    m.insert(make_pair(1, "RNG"));
//    m.insert(make_pair(2, "IG"));
//    m.insert(make_pair(3, "WE"));
//    m.insert(make_pair(4, "EDG"));
//
//    //ʹ��vector���ս�ӱ��
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//
//    //�����ǩ��ϴ�ƣ�  ����������Ԫ��˳��
//    random_shuffle(v.begin(), v.end());
//
//    //�������
//    for_each(v.begin(), v.end(), [&](int val) {
//        //val����m�����е�Keyֵ
//        cout << m[val] << "ս�ӳ�����" << endl;
//        });
//}
////multimap����Key��ͬ  ��map������key��ͬ
//void test03()
//{
//    //ս������  ��ս�ӱ�ţ�ս�����ƣ�
//    map<int, string> m;
//    m.insert(make_pair(1, "RNG"));
//    m.insert(make_pair(1, "IG"));
//
//    cout << m[1] << endl;
//    cout << m.count(1) << endl;
//
//    multimap<int, string> m1;
//    m1.insert(make_pair(1, "RNG"));
//    m1.insert(make_pair(1, "IG"));
//
//    //cout << m1[1] << endl;
//    cout << m1.count(1) << endl;
//}
//class Person
//{
//public:
//    string name;
//    int age;
//    Person(string name,int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//};
//void createVectorPerson(vector<Person> &v)
//{
//    v.push_back(Person("Ա��A", 28));
//    v.push_back(Person("Ա��B", 32));
//    v.push_back(Person("Ա��C", 26));
//    v.push_back(Person("Ա��D", 21));
//    v.push_back(Person("Ա��E", 30));
//
//}
//void PersonByGroup(vector<Person>& v, multimap<int, Person>& m)
//{
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        //*it==Person
//        cout << "������" << (*it).name << "��Ҫ����Ĳ��ţ�1��2��3" << endl;
//        int operate=0;
//        cin >> operate;
//        if (operate >= 1 && operate <= 3)
//        {
//            m.insert(make_pair(operate, *it));
//        }
//    }
//}
////void showPersonList(multimap<int, Person>& m)
////{
////    for (multimap<int, Person>::const_iterator it = m.begin(); it != m.end(); it++)
////    {
////        //*it==<int,string>
////        cout << "key = " << (*it).first << ", value" << (*it).second << endl;
////    }
////}
//void showPersonList01(multimap<int, Person>& m,int op)
//{
//    switch (op)
//    {
//    case 1:
//        cout << "�з�����" << endl;
//        break;
//    case 2:
//        cout << "���Բ���" << endl;
//        break;
//    case 3:
//        cout << "���²���" << endl;
//        break;
//    }
//
//    //ע�⣺m�д�ŵ�����<���źţ�Ա����Ϣ>
//    //ͳ�Ʋ��źŵ�Ԫ�ظ���
//    int n = m.count(op);
//    cout << "���ŵ�����������" << n << endl;
//    //����multimap��key�Զ�����  �ظ�  ��ͬKey һ������һ��
//    multimap<int, Person>::const_iterator ret;
//    ret = m.find(op);
//    if (ret != m.end())//Ѱ�ҵ�key
//    {
//        for (int i = 0; i < n; i++, ret++)
//        {
//            //(*ret)==<int,Person>
//            //(*ret).second==Person
//            cout << "name = " << (*ret).second.name << ", age = " << (*ret).second.age << endl;
//        }
//    }
//}
//void test04()
//{
//    //ʹ��vector������Ա����Ϣ�洢����
//    vector<Person> v;
//    //����5��Ա��
//    createVectorPerson(v);
//
//    //��Ա�����䵽��ͬ�Ĳ��ţ�Ա��<���źţ�Ա����Ϣ>)
//    multimap<int, Person> m;//���Ա��<���źţ�Ա����Ϣ>
//    PersonByGroup(v, m);
//  //  showPersonList(m);
//
//    showPersonList01(m,1);
//    showPersonList01(m, 2);
//    showPersonList01(m, 3);
//}
//int main(int argc, char* argv[])
//{
//	test04();
//	return 0;
//}