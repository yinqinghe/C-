//#include<iostream>
//#include<string>
//using namespace std;
//class Room;//Room��ǰ����
//
//class GoodGay
//{
//public:
//	void visit1(Room& room);
//	void visit2(Room& room);
//};
//class Room
//{
//	//��Ԫ�������Է��������������� ���� ��������ĳ�Ա
//friend void goodGayVisit(Room& room);
////һ���ǵü�������
////friend void GoodGay::visit1(Room& room);
////friend void GoodGay::visit2(Room& room);
//friend class GoodGay;
//private:
//	string bedRoom;
//public:
//	string sittingRoom;
//public:
//	Room()
//	{
//		this->bedRoom = "����";
//		this->sittingRoom = "����";
//	}
//};
//void GoodGay::visit1(Room& room)
//{
//	cout << "�û���visit1���������" << room.sittingRoom << endl;
//	cout << "�û���visit2���������" << room.bedRoom << endl;
//}
//void GoodGay::visit2(Room& room)
//{
//	cout << "�û���visit1���������" << room.sittingRoom << endl;
//	cout << "�û���visit2���������" << room.bedRoom << endl;
//}
//void goodGayVisit(Room& room)
//{
//	cout << "�û��ѷ��������" << room.sittingRoom << endl;
//	cout << "�û��ѷ��������" << room.bedRoom << endl;
//}
//void test01()
//{
//	Room myRoom;
//	//goodGayVisit(myRoom);
//	GoodGay goodgay;
//	goodgay.visit1(myRoom);
//	goodgay.visit2(myRoom);
//
//
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}