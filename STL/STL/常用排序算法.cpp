//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<numeric>
//#include <functional>
//using namespace std;
////���������㷨
////merge�㷨  ����Ԫ�غϲ������洢����һ�������У�ÿ��������������
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//
//	vector<int> v2;
//	v2.push_back(2);
//	v2.push_back(4);
//	v2.push_back(19);
//	v2.push_back(40);
//	v2.push_back(73);
//
//	vector<int> v3;
//	//Ԥ�ȣ�����v3�Ĵ�С
//	v3.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//}
//
////random_shuffle�㷨  ��ָ����Χ�ڵ�Ԫ�������������
//void test02()
//{
//	//srand�����������
//	srand(time(NULL));
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//	//��Ҫ�����������
//	random_shuffle(v1.begin(), v1.end());
//
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//}
////reverse�㷨  ��תָ����Χ��Ԫ��
//void test03()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//	reverse(v1.begin() + 1, v1.end() - 1);
//
//	for_each(v1.begin(), v1.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//}
////���ÿ������滻�㷨
////copy�㷨 ��������ָ����Χ��Ԫ�ؿ�������һ������
//#include<iterator>
//void test04()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//
//	vector<int> v2;
//	//Ԥ�ȣ����ô�С
//	v2.resize(v1.size());
//
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), [](int val) {cout << val << "   "; });
//	cout << endl;
//
//	//��copy���
//	copy(v1.begin(), v1.end(),ostream_iterator<int>(cout,"  "));
//}
////replace �㷨  ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//void test05()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//	//�������е�3�滻��3000
//	replace(v1.begin(), v1.end(), 39, 93);
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//
//	//�������Ĵ���3���滻��3000
//	replace_if(v1.begin(), v1.end(), bind2nd(greater<int>(),3),1000);
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, ","));
//}
////swap�㷨  ��������������Ԫ��
//
////�������������㷨
////accumulate�㷨  ��������Ԫ���ۼ��ܺ�
//void test06()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(39);
//	v1.push_back(40);
//	v1.push_back(53);
//
//	int sum = accumulate(v1.begin(), v1.end(), 100);
//	cout << "sum = " << sum << endl;
//}
////fill�㷨  �����������Ԫ��
//void test07()
//{
//	vector<int> v;
//	v.resize(9);
//	fill(v.begin(), v.end(), 115);
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "  "));
//}
////���ü����㷨
////set_intersection�㷨  ������set���ϵĽ���
//void test08()
//{
//	vector<int> A;
//	A.push_back(1);
//	A.push_back(11);
//	A.push_back(7);
//	A.push_back(9);
//	A.push_back(3);
//
//	vector<int> B;
//	B.push_back(1);
//	B.push_back(13);
//	B.push_back(3);
//	B.push_back(17);
//	A.push_back(9);
//	//�󽻼�
//	vector<int> v1;//��Ž���
//	v1.resize(min(A.size(), B.size()));
//	vector<int>::iterator myEnd;
//	myEnd=set_intersection(A.begin(), A.end(), B.begin(), B.end(), v1.begin());
//	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " ,"));
//	copy(v1.begin(), myEnd, ostream_iterator<int>(cout, " ,"));
//	cout << endl;
//
//	//set_union�㷨  ������set���ϵĲ���
//		//�󲢼�
//	vector<int> v2;//��Ų���
//	v2.resize(A.size() + B.size());
//	vector<int>::iterator myEnd2;
//	myEnd2 = set_union(A.begin(), A.end(), B.begin(), B.end(), v2.begin());
//	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " ,"));
//	copy(v2.begin(), myEnd2, ostream_iterator<int>(cout, " ,"));
//	cout << endl;
//
//	//set_difference�㷨  ������set���ϵĲ
//		//��
//	vector<int> v3;//��Ų
//	v3.resize(max(A.size(), B.size()));
//	vector<int>::iterator myEnd3;
//	myEnd3 = set_difference(A.begin(), A.end(), B.begin(), B.end(), v3.begin());
//	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " ,"));
//	copy(v3.begin(), myEnd3, ostream_iterator<int>(cout, " ,"));
//	cout << endl;
//}
//int main(int argc, char* argv[])
//{
//	test08();
//	return 0;
//}