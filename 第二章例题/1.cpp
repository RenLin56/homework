/*++Դ����example2_01.cpp����example2_01.cʵ��ͬ���Ĺ���*/
#include <iostream>
#include<iomanip>
using namespace std;
int digit(int n)
{
	int d = 0;
	while (n)
	{
		n = n / 10;
		d++;
	}
	return d;
}
int main()
{
	char c;                                  		//�������c��a��f��ֵ
	int a;
	float f;
	cin >> c >> a >> f;                           		//�������c��a��f��ֵ
	a = a + c;
	f = f + 2 * a;

	cout << "c=" << c << "  a=" << a << "  f=" << setprecision(digit(int(f)) + 1) << f << endl;  	//�������c��a��f��ֵ
	system("pause");
	return 0;
}

