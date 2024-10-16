#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>

using namespace std;

/*
	Данные:
	1. Инициалы 
	2. Дата
	3. Адрес
	4. Тариф
	5. Дата последней оплаты
	6. Номер
	7. Дополнительная информация
*/

//структура инициалов
struct Initial {
	string surname,
		patronymic,
		name;
};

//структура даты
struct Date {
	int day,
		month,
		year;
};

//структура адреса
struct Address {
	string city;
	string street;
	string home;
	string room;
};

//структура прайс-листа
struct Praic {
	string praicname,
		cost;
};

//структура даты последней оплаты
struct LPraic {
	int Lday,
		Lmonth,
		Lyear;
};

//структура контактного номера
struct Number {
	string number;
};

//структура дополнительной информации
struct Other {
	string other;
};

//структура данных
struct Data {
	Initial _initial;
	Date _date;
	Address _address;
	Praic _praic;
	LPraic _Lpraic;
	Number _number;
	Other _other;
};

//прототипы функций
void DataEntry(Data* (&d), int& n); //ввод данных вручную
void ReadingData(Data* (&d), int& n, string filename); //чтение данных из файла
void Print(Data* d, int n); //вывод данных
void DataChange(Data* (&d), int n); //изменение данных
void DeleteData(Data* (&d), int& n); //удаление данных
void Copy(Data* (&d_n), Data* (&d_o), int n); //копия данных
void Copy(Data& d_n, Data& d_o); //копия элемента данных
void AddDate(Data* (&d), int& n); //добавление данные
void DataSorting(Data* d, int n); //сортировка данных по фамилиям
void DataSorting1(Data* d, int n); //сортировка данных по долгу
void SavingData(Data* d, int n, string filename); //сохранение данных