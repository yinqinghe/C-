//#include<iostream>
//
//using namespace std;
//
//class TV               //��װ���ӻ���
//{
//	friend class Remote;
//	//Ĭ��Ϊ˽��
//	enum{On,Off};//����״̬
//	enum{minVol,maxVol=100};//������0��100��
//	enum{minChannel=1,maxChannel=255};//Ƶ����1��255
//private:
//	int mState;
//	int mVolume;
//	int mChannel;
//public:
//	TV()
//	{
//		this->mState = Off;//Ĭ�Ϲػ�
//		this->mVolume = minVol;
//		this->mChannel = minChannel;
//	}
//	void onOrOff()//������
//	{
//		this->mState = (this->mState == On ? Off : On);
//
//	}
//	//�Ӵ�����
//	void volumeUp(void)
//	{
//		if (this->mVolume >= maxVol)
//			return;
//		this->mVolume++;
//	}
//	//��С����
//	void volumeDown(void)
//	{
//		if (this->mVolume <= minVol)
//			return;
//		this->mVolume--;
//	}
//
//	void channelUp(void)
//	{
//		if (this->mChannel >= maxChannel)
//			return;
//		this->mChannel++;
//	}
//	void channelDown(void)
//	{
//		if (this->mChannel <= minChannel)
//			return;
//		this->mChannel--;
//	}
//	void showTVState(void)
//	{
//		cout << "���ӻ���״̬Ϊ��" << (this->mState == On ? "����" : "�ػ�") << endl;
//		cout << "���ӻ�������:" << this->mVolume << endl;
//		cout << "���ӻ���Ƶ��:" << this->mChannel << endl;
//	}
//};
////ң������
//class Remote
//{
//private:
//	TV* pTv;
//public:
//	Remote(TV* pTv)
//	{
//		this->pTv = pTv;
//	}
//	//�����ļӼ�
//	void volumeUp(void)
//	{
//		//���ڵ��ӵ�����
//		this->pTv->volumeUp();
//	}
//	void volumeDown(void)
//	{
//		this->pTv->volumeDown();
//	}
//	//Ƶ���ļӼ�
//	void channelUp(void)
//	{
//		this->pTv->channelUp();
//	}
//	void channelDown(void)
//	{
//		this->pTv->channelDown();
//	}
//	//���ӵĿ���
//	void onOrOff(void)
//	{
//		this->pTv->onOrOff();
//	}
//
//	//ң��������Ƶ������
//	void setChannel(int num)
//	{
//		//�ж� Ƶ�� �Ƿ���Ч
//		if (num >= TV::minChannel && num <= TV::maxChannel)
//		{
//			this->pTv->mChannel = num;
//		}
//	}
//	void showTVState(void)
//	{
//		this->pTv->showTVState();
//	}
//};
//
//void test02()
//{
//	TV tv;
//	Remote remote(&tv);
//
//	remote.onOrOff();
//	remote.volumeUp();
//	remote.volumeUp();
//	remote.volumeUp();
//	remote.volumeUp();
//
//	remote.channelUp();
//	remote.channelUp();
//	remote.channelUp();
//
//	remote.showTVState();
//	remote.setChannel(75);
//	remote.showTVState();
//}
//void test01()
//{
//	TV tv;
//	tv.onOrOff();//����
//
//	tv.volumeDown();//���Ĵ�����
//	tv.volumeUp();
//	tv.volumeUp();
//	tv.volumeDown();
//
//	tv.channelUp();//������Ƶ��
//	tv.channelUp();
//	tv.channelUp();
//
//	tv.showTVState();
//
//}
//
//int main(int argv, char* argc[])
//{
//	test02();
//	return 0;
//}