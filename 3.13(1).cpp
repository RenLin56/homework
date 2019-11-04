#include <string>
#include <iostream>
using namespace std;
//---------------------����ѧ����----------------------------------
class Student
{
	char *specialty;

public:
	Student(const char *pSpec = 0);      		//��ͨ���캯������
	Student(const Student &r);          //�������캯������
	~Student();							//����������������ֻ����һ����
	void Show();                        //��ͨ����
};
//---------------���캯����������������----------------------------
Student::Student(const char *pSpec)           //��ͨ���캯���Ķ���
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}

Student::Student(const Student &r)     //�Զ��忽�����캯��
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	}
	else specialty = 0;
}

Student::~Student()                    //������������
{
	if (specialty)

		delete[]specialty;     	//specialty�Ĵ洢�ռ���new��������䣬����delete�ͷ�

}
//---------------��ͨ��������-------------------------------------
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}

int main()
{
	Student zhang("computer");   //������ͨ���캯������������zhang
	Student wang(zhang);         //���ÿ������캯����Ĭ�ϵĻ��Զ���ģ�
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}
