#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>

using namespace std;

/*
	������:
	1. �������� 
	2. ����
	3. �����
	4. �����
	5. ���� ��������� ������
	6. �����
	7. �������������� ����������
*/

//��������� ���������
struct Initial {
	string surname,
		patronymic,
		name;
};

//��������� ����
struct Date {
	int day,
		month,
		year;
};

//��������� ������
struct Address {
	string city;
	string street;
	string home;
	string room;
};

//��������� �����-�����
struct Praic {
	string praicname,
		cost;
};

//��������� ���� ��������� ������
struct LPraic {
	int Lday,
		Lmonth,
		Lyear;
};

//��������� ����������� ������
struct Number {
	string number;
};

//��������� �������������� ����������
struct Other {
	string other;
};

//��������� ������
struct Data {
	Initial _initial;
	Date _date;
	Address _address;
	Praic _praic;
	LPraic _Lpraic;
	Number _number;
	Other _other;
};

//��������� �������
void DataEntry(Data* (&d), int& n); //���� ������ �������
void ReadingData(Data* (&d), int& n, string filename); //������ ������ �� �����
void Print(Data* d, int n); //����� ������
void DataChange(Data* (&d), int n); //��������� ������
void DeleteData(Data* (&d), int& n); //�������� ������
void Copy(Data* (&d_n), Data* (&d_o), int n); //����� ������
void Copy(Data& d_n, Data& d_o); //����� �������� ������
void AddDate(Data* (&d), int& n); //���������� ������
void DataSorting(Data* d, int n); //���������� ������ �� ��������
void DataSorting1(Data* d, int n); //���������� ������ �� �����
void SavingData(Data* d, int n, string filename); //���������� ������