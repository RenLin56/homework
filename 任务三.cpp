#include <iostream>
using namespace  std;


//------------------��child�ࡿ-----------------------------------
class Child             //1.����С���ѽڵ���
{
public:
	int childNo;         //��ǰС���ı��
	Child* leftchild;    //��¼С����������ھ�
	Child* rightchild;   //��¼С����������ھ�

public:

	Child(int id = 0) 	  //���캯��
	{
		childNo = id;
		leftchild = NULL;
		rightchild = NULL;
	}
};
//-------------------��Circle�ࡿ----------------------------------

class Circle               // ����ԲȦ��Ϸ��
{
public:
	int scale;             //��ǰ-���ڲ�����Ϸ������
	Child children[1000];  //���-������Ϸ��С������

public:
	Circle(int num = 1000) // ��Ĭ��ֵ���캯������ʼ��С���ڵ�
	{
		scale = num;


		for (int i = 1; i <= num; i++)
		{
			children[i] = Child(i);
		}
	};

	//�����ڵ��ѭ����������ȷ��ÿ��С���������ھ�
	void Build()
	{
		for (int i = 1; i <= scale; i++)
		{
			if (i == 1)
			{
				children[i].leftchild = &children[scale];
				children[i].rightchild = &children[2];

			}
			if (i == scale)
			{

				children[i].leftchild = &children[i - 1];
				children[i].rightchild = &children[1];
			}
			else
			{
				children[i].leftchild = &children[i - 1];
				children[i].rightchild = &children[i + 1];

			}                                              //���������ھ�


			/*----��ͬѧ�����в�ȫ����----*/
		}
	}
	//��Ϸ���к������ӵ�ǰ�ڵ�˳ʱ��ѭ����ʼ��num����
	void Run(int T)
	{
		//int num = scale;
		int k;
		cout << "С���ı��:";
		for (int i = 1; i <= scale; i++)
		{
			cout << children[i].childNo << '\t';
		}
		cout << endl << "��ʼ���ӵڼ���С����ʼ��Ϸ����������(k<109)��" << endl;
		cin >> k;
		//do {
		int count = 1;
		Child* current = &children[k];
		cout << "����С���ı�ţ�\t";
		while (scale > 1)
		{

			//Quit the circle��С���˳���ǰԲȦ
			if (count == T)
			{
				current->leftchild->rightchild = current->rightchild;
				current->rightchild->leftchild = current->leftchild;
				count = 1;
				scale--;
				cout << current->childNo << '\t';
				current = current->rightchild;

				/*----��ͬѧ�����в�ȫ�������----*/
			}


			else  //Count the next������������Ϸ	            		
			{

				count++;
				current = current->rightchild;

				/*----��ͬѧ�����в�ȫ�������----*/

			}

		}
		cout << endl << "The last child id is " << current->childNo << endl;
		//cout << "�ӵڼ���С����ʼ��Ϸ����������(k<109����-1��ֹ)��" << endl;
		//cin >> k;
		//scale = num;

	//} while (k != -1);
	}
};


//----------------------------������----------------------------------

int main()
{
	Circle nodes(21); // ԲȦ������21���ڵ����С����

	nodes.Build();


	nodes.Run(7);      // ��ʼѭ����������7������Ϸ��������������߱��

	system("pause");

	return 0;
}

