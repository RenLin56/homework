#include<iostream>
#include"Student2.h"

using namespace std;
int main()
{
	char *m = new char[10];                                                                //����ָ�룬�����䶯̬�ռ�
	m = "XiaoMing";
	Student stu[N] = { Student(m), Student("WangYing", "2018110002", 20, "ShangHai") };    //����������飬��Ϊstu[0],st[1]��ֵ�����������޲ι��캯����ʼ��                                             //����ѧ����Ķ�������
	Student stu1(m);                                                                      //�������stu1�������вι��캯��
	Student stu2(stu1);                                                                   //�������stu2�����ÿ������캯��
	stu1.display();
	stu2.display();
	cout << "Please select:" << endl;
	int c = menu();
	for (c; c != 4;)
	{
		op(c, stu);
		cout << "Please select(input a number):" << endl;
		cin >> c;
	}
	system("pause");
	return 0;

}
