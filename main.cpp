// 
// Created by Solo_Dance on 9/7/2019. 
 // 
 #include <iostream>
 #include "SCORE.h"


 int main() {
		printf("******************************\n");
	 	printf("       ѧ���ɼ��������ϵͳ        \n");
	 	printf("         Mingfu Yan           \n");
	 	printf("******************************\n\n");
	

		 	// 1. ��ʼ������ 
		 	int N = 0;
	 	SS *pstu = nullptr;
	

		 	// 2. ���ļ��ж�ȡѧ����Ϣ 
		 	pstu = readDataFromFile(&N);
	

		 	//3. ͳ�ƣ�ͳ�Ƹ�ѧ���ܳɼ���������ɼ������� 
		 	calcuScore(pstu, N);
	

		 	//4.  ��ѯ������ѧ�ſɲ�ѯĳ��ѧ���ĳɼ���Ϣ�� 
		 	searchGradeInfo(pstu, N);
	

		 	//5. ������ͳ��ȫ��ѧ���ɼ��ľ�ֵ�ͱ�׼������Գɼ��ֲ���Ҫ������ 
		 	analysisScore(pstu, N);
	

		 	//6. �ͷ��ڴ�ռ� 
		 	delete pstu;
	
		 	std::cout << "\n\n------��ӭʹ��ѧ���ɼ��������ϵͳ!�ټ�!--------\n\n";
	getchar();
	 	return 0;
	
}
