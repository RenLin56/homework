#pragma once 
// 
 // Created by Solo_Dance on 9/7/2019. 
 // 


#ifndef SCORE_H
 #define SCORE_H


 #include <iostream>


 /*----------------------------------*
 	   ѧ����Ϣ-�ṹ�����
 *-----------------------------------*/
 typedef struct student {
	 	char number[20]; // ѧ�� 
	 	char name[20]; // ���� 
	 	float dailyScore; // ƽʱ�ɼ� 
	 	float testScore; // ʵ��ɼ� 
	 	float finalScore; // ��ĩ�ɼ� 
	 	float generalScore; // �ܳɼ� 
	 	int rank; // ���� 
	
}SS;


 /*---------------��������-------------------*/
 // 1. ���룺���ļ�data.txt�ж�ȡ����ѧ���ɼ���Ϣ 
 SS* readDataFromFile(int *N);




 //2. ͳ�ƣ�ͳ�Ƹ�ѧ���ܳɼ���������ɼ������� 
 void calcuScore(SS stu[], int N);




 //3.  ��ѯ������ѧ�ſɲ�ѯĳ��ѧ���ĳɼ���Ϣ�� 
 void searchGradeInfo(SS stu[], int N);




 // 4. ������ͳ��ȫ��ѧ���ɼ��ľ�ֵ�ͱ�׼������Գɼ��ֲ���Ҫ������ 
 void analysisScore(SS stu[], int N);








 #endif
#pragma once
