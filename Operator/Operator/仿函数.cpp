//#include<iostream>
//
//using namespace std;
//
//
//class Fun
//{
//public:
//	int my_add(int x, int y)
//	{
//		return x + y;
//	}
//
//	//重载（）
//	//第一个（）是重载的符号 第三个（）是参数
//	int operator()(int x, int y)
//	{
//		return x + y;
//	}
//};
//
//void test01()
//{
//	Fun fun;
//	cout << fun.my_add(100, 200) << endl;
//	
//	cout << fun.operator()(100, 200)<<endl;
//	//优化
//	cout << fun(100, 200) << endl;
//	//此处 fun(100,200)不是一个真正的函数  仅仅是一个对象名和（）结合  调用（）重载运算符而已
//	//fun不是函数名， 只是fun(100,200)类似一个函数调用 所以将fun(100,200)叫做仿函数
//
//	//此处的Fun是类名称
//	//Fun()是匿名对象
//	cout << Fun()(100, 200) << endl;
//}
//
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}