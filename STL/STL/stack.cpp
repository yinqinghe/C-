//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<stack>
//#include<numeric>
////��֧����������
//using namespace std;
///*
//      stack���캯��
//stack<T> stkT;//stack����ģ����ʵ��  ��  stack�����Ĭ�Ϲ�����ʽ��
//stack(const stack &stk);//�������캯��
//
//       stack��ֵ����
//stack& operator=(const stack &stk);//���صȺŲ�����
//
//      stack���ݴ�ȡ����
//push(elem);//��ջ�����Ԫ��
//pop();//��ջ���Ƴ���һ��Ԫ��
//top();//����ջ��Ԫ��
//
//      stack��С����
//empty();//�ж϶�ջ�Ƿ�Ϊ��
//size();//���ض�ջ�Ĵ�С
//*/
//void test01()
//{
//    stack<int> s;
//    s.push(10);
//    s.push(11);
//    s.push(22);
//    s.push(33);
//
//    if (s.empty())
//    {
//        cout << "ջ����Ϊ��" << endl;
//    }
//    else
//    {
//        cout << "ջ������Ϊ��" << endl;
//        cout << "size = " << s.size() << endl;
//    }
//    while (!s.empty())//�ǿ�  ����false
//    {
//        cout << s.top() << endl;
//        //��ջ
//        s.pop();
//    }
//}
///*
//       queue���캯��
//queue<T>  queT;//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ��캯��
//queue(const queue &que);//�������캯��
//
//       queue��ȡ�������ɾ������
//push(elem);//����β���Ԫ��
//pop();//�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();//�������һ��Ԫ��
//front();//���ص�һ��Ԫ��
//
//       queue��ֵ����
//queue& operator=��const queue &que);//���صȺŲ�����
//
//       queue��С����
//empty();//�ж϶����Ƿ�Ϊ��
//size();//���ض��еĴ�С
//*/
//#include<queue>
//void test02()
//{
//    queue<int> q;
//    q.push(10);
//    q.push(20);
//    q.push(30);
//    q.push(40);
//
//    if (q.empty())
//    {
//        cout << "����Ϊ��" << endl;
//    }
//    else
//    {
//        cout << "�����ǿ�" << endl;
//        cout << "size = " << q.size() << endl;
//        cout << "��ͷԪ�� = " << q.front() << endl;//10
//        cout << "��βԪ�� = " << q.back() << endl;//40
//    }
//    cout << "��������" << endl;
//    while (!q.empty())
//    {
//        cout << q.front() << "  ";
//        q.pop();//����
//    }
//    cout << "size = " << q.size() << endl;
//}
//
//
//
//int main(int argc, char* argv[])
//{
//    test02();
//	return 0;
//}