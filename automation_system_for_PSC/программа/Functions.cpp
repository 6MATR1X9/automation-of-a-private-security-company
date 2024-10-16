#include "Functions.h"

//ввод данных вручную
void DataEntry(Data* (&d), int& n) {
	cout << "";
	cin >> n;

	//выделение памяти
	d = new Data[n];

	for (int i = 0; i < n; i++) {
		cout << "введите ФИО: ";
		cin >> d[i]._initial.surname;
		cin >> d[i]._initial.name;
		cin >> d[i]._initial.patronymic;

		cout << "Введите дату: " << endl
			<< "!дата вводится в формате дд мм гггг через пробел!";
		cin >> d[i]._date.day;
		cin >> d[i]._date.month;
		cin >> d[i]._date.year;

		cout << "Введите адрес: " << endl
			<< "!адрес вводится в формате город улица дом квартира через пробел!";
		cin >> d[i]._address.city;
		cin >> d[i]._address.street;
		cin >> d[i]._address.home;
		cin >> d[i]._address.room;

		cout << "Введите тариф:" << endl
			<< "!тариф вводится в формате название тарифа стоимость через пробел!";
		cin >> d[i]._praic.praicname;
		cin >> d[i]._praic.cost;

		cout << "Введите дату последней оплаты:" << endl
			<< "!дата вводится в формате дд мм гггг через пробел!";
		cin >> d[i]._Lpraic.Lday;
		cin >> d[i]._Lpraic.Lmonth;
		cin >> d[i]._Lpraic.Lyear;

		cout << "Введиете контактный номер:";
		cin >> d[i]._number.number;

		cout << "Дополнительная информация:" << endl
			<< "!дополнительная информация вводится с нижним подчёркиванием вместо пробела!";
		cin >> d[i]._other.other;
		
		cout << "____________________________________" << endl;
	}
}

//чтение данных из файла
void ReadingData(Data* (&d), int& n, string filename) {
	//создание потока для чтения
	ifstream reading(filename);

	if (reading) {
		reading >> n;

		//выделение памяти
		d = new Data[n];

		for (int i = 0; i < n; i++) {
			reading >> d[i]._initial.surname;
			reading >> d[i]._initial.name;
			reading >> d[i]._initial.patronymic;

			reading >> d[i]._date.day;
			reading >> d[i]._date.month;
			reading >> d[i]._date.year;

			reading >> d[i]._address.city;
			reading >> d[i]._address.street;
			reading >> d[i]._address.home; 
			reading >> d[i]._address.room;

			reading >> d[i]._praic.praicname;
			reading >> d[i]._praic.cost;

			reading >> d[i]._Lpraic.Lday;
			reading >> d[i]._Lpraic.Lmonth;
			reading >> d[i]._Lpraic.Lyear;

			reading >> d[i]._number.number;

			reading >> d[i]._other.other;
		}
		cout << "Данные считаны. " << endl;
	}
	else
		cout << "Ошибка открытия файла. " << endl;
	reading.close();
}

//вывод данных
void Print(Data* d, int n) {
	for (int i = 0; i < n; i++) {
		cout << "" << i + 1 << ":" << endl;

		cout << "ФИО: " << d[i]._initial.surname << " " << d[i]._initial.name << " " << d[i]._initial.patronymic << endl;
		cout << "Дата заключения договора: " << d[i]._date.day << " " << d[i]._date.month << " " << d[i]._date.year << endl;
		cout << "Адрес: " << d[i]._address.city << " " << d[i]._address.street << " " << d[i]._address.home << " " << d[i]._address.room << endl;
		cout << "Тариф: " << d[i]._praic.praicname << " " << d[i]._praic.cost << endl;
		cout << "Дата последней оплаты: " << d[i]._Lpraic.Lday << " " << d[i]._Lpraic.Lmonth << " " << d[i]._Lpraic.Lyear << endl;
		cout << "Контактный номер: " << d[i]._number.number << endl;
		cout << "Дополнительная информация: " << d[i]._other.other << endl;

		cout << "____________________________________" << endl;
	}
}

//изменение данных
void DataChange(Data* (&d), int n) {
	int _n;
	cout << "Введите номер элемента (от 1 до " << n << "): ";
	cin >> _n;
	_n--;

	system("cls");

	//проверка, что введён правильный номер
	if (_n >= 0 && _n < n) {
		cout << "Данные клиента: "; 
		cout << "ФИО: " << d[_n]._initial.surname << " " << d[_n]._initial.name << " " << d[_n]._initial.patronymic << endl;
		cout << "Дата заключения договора: " << d[_n]._date.day << " " << d[_n]._date.month << " " << d[_n]._date.year << endl;
		cout << "Адрес: " << d[_n]._address.city << " " << d[_n]._address.street << " " << d[_n]._address.home << " " << d[_n]._address.room << endl;
		cout << "Тариф: " << d[_n]._praic.praicname << " " << d[_n]._praic.cost << endl;
		cout << "Дата последней оплаты: " << d[_n]._Lpraic.Lday << " " << d[_n]._Lpraic.Lmonth << " " << d[_n]._Lpraic.Lyear << endl;
		cout << "Контактный номер: " << d[_n]._number.number << endl;
		cout << "Дополнительная информация: " << d[_n]._other.other << endl; 

		cout << "введите ФИО: ";
		cin >> d[_n]._initial.surname;
		cin >> d[_n]._initial.name;
		cin >> d[_n]._initial.patronymic;

		cout << "Введите дату: " << endl
			<< "!дата вводится в формате дд мм гггг через пробел!";
		cin >> d[_n]._date.day;
		cin >> d[_n]._date.month;
		cin >> d[_n]._date.year;

		cout << "Введите адрес: " << endl
			<< "!адрес вводится в формате город улица дом квартира через пробел!";
		cin >> d[_n]._address.city;
		cin >> d[_n]._address.street;
		cin >> d[_n]._address.home;
		cin >> d[_n]._address.room;

		cout << "Введите тариф:" << endl
			<< "!тариф вводится в формате название тарифа стоимость через пробел!";
		cin >> d[_n]._praic.praicname;
		cin >> d[_n]._praic.cost;

		cout << "Введите дату последней оплаты:" << endl
			<< "!дата вводится в формате дд мм гггг через пробел!";
		cin >> d[_n]._Lpraic.Lday;
		cin >> d[_n]._Lpraic.Lmonth;
		cin >> d[_n]._Lpraic.Lyear;

		cout << "Введите контактный номер:";
		cin >> d[_n]._number.number;

		cout << "Дополнительная информация:" << endl
			<< "!дополнительная информация вводится с нижним подчёркиванием вместо пробела!";
		cin >> d[_n]._other.other;

		system("cls");

		cout << "Данные изменены. " << endl;
	}
	else
		cout << "Номер введён не верно. " << endl;
}

//удаление данных
void DeleteData(Data* (&d), int& n) {
	int _n;
	cout << "Введите номер элемента (от 1 до " << n << "): ";
	cin >> _n;
	_n--;

	system("cls");

	//проверка, что введён правильный номер
	if(_n >= 0 && _n < n) {
		
		//временный массив
		Data* buf = new Data[n];

		Copy(buf, d, n);

		//выделение новой памяти
		--n;
		d = new Data[n];

		int q = 0;

		//запоминание данных кроме ненужного
		for (int i = 0; i <= n; i++) {
			if (i != _n) {
				d[q] = buf[i];
				++q;
			}
		}

		system("cls");
		delete[]buf;

		cout << "данные удалены. " << endl;
	}
	else
		cout << "номер введён не верно. " << endl;
}

//копия данных
void Copy(Data* (&d_n), Data* (&d_o), int n) {
	for (int i = 0; i < n; i++) {
		d_n[i] = d_o[i];
	}
}

//копия элемента данных
void Copy(Data& d_n, Data& d_o) {
	d_n._initial.surname = d_o._initial.surname;
	d_n._initial.patronymic = d_o._initial.patronymic;
	d_n._initial.name = d_o._initial.name;

	d_n._date.day = d_o._date.day;
	d_n._date.month = d_o._date.month;
	d_n._date.year = d_o._date.year;

	d_n._address.city = d_o._address.city;
	d_n._address.street = d_o._address.street;
	d_n._address.home = d_o._address.home;
	d_n._address.city = d_o._address.room;

	d_n._praic.praicname = d_o._praic.praicname;
	d_n._praic.cost = d_o._praic.cost;

	d_n._Lpraic.Lday = d_o._Lpraic.Lday;
	d_n._Lpraic.Lmonth = d_o._Lpraic.Lmonth;
	d_n._Lpraic.Lyear = d_o._Lpraic.Lyear;
	
	d_n._number.number = d_o._number.number;

	d_n._other.other = d_o._other.other;
}

//добавление данные
void AddDate(Data* (&d), int& n) {
	//временный массив данных
	Data* buf;
	buf = new Data[n];

	//сохраняем данные в временный массив
	Copy(buf, d, n);

	//выделяем новую память
	n++;
	d = new Data[n];

	//возвращаем данные
	Copy(d, buf, --n);

	cout << "введите ФИО: ";
	cin >> d[n]._initial.surname >> d[n]._initial.name >> d[n]._initial.patronymic;

	cout << "Введите дату: " << endl
		<< "!дата вводится в формате дд мм гггг через пробел!";
	cin >> d[n]._date.day >> d[n]._date.month >> d[n]._date.year;

	cout << "Введите адрес: " << endl
		<< "!адрес вводится в формате город улица дом квартира через пробел!";
	cin >> d[n]._address.city >> d[n]._address.street >> d[n]._address.home >> d[n]._address.room;

	cout << "Введите тариф:" << endl
		<< "!тариф вводится в формате название тарифа стоимость через пробел!";
	cin >> d[n]._praic.praicname >> d[n]._praic.cost;

	cout << "Введите дату последней оплаты:" << endl
		<< "!дата вводится в формате дд мм гггг через пробел!";
	cin >> d[n]._Lpraic.Lday >> d[n]._Lpraic.Lmonth >> d[n]._Lpraic.Lyear;

	cout << "Введите контактный номер: ";
	cin >> d[n]._number.number;

	cout << "Дополнительная информация:" << endl
		<< "!дополнительная информация вводится с нижним подчёркиванием вместо пробела!";
	cin >> d[n]._other.other;

	system("cls");

	cout << "Данные добавлены. " << endl;

	delete[]buf;
}

//сортировка данных по фамилиям
void DataSorting(Data* d, int n) {

	//временная переменная
	Data buf;

	//сортировка данных
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d[i]._initial.surname > d[j]._initial.surname) {
				Copy(buf, d[j]);
				Copy(d[j], d[i]);
				Copy(d[i], buf);
			}
		}
	}
	cout << "данные отсортированы. " << endl;
}

//сортировка данных по долгу
void DataSorting1(Data* d, int n) {

	//временная переменная
	Data buf;

	//сортировка данных
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d[i]._Lpraic.Lyear > d[j]._Lpraic.Lyear) {
				Copy(buf, d[j]);
				Copy(d[j], d[i]);
				Copy(d[i], buf);
			}
			else if (d[i]._Lpraic.Lyear > d[j]._Lpraic.Lyear && d[i]._Lpraic.Lmonth > d[j]._Lpraic.Lmonth) {
				Copy(buf, d[j]);
				Copy(d[j], d[i]);
				Copy(d[i], buf);
			}
			else if (d[i]._Lpraic.Lyear > d[j]._Lpraic.Lyear && d[i]._Lpraic.Lmonth > d[j]._Lpraic.Lday && d[i]._Lpraic.Lday > d[j]._Lpraic.Lday) {
				Copy(buf, d[j]);
				Copy(d[j], d[i]);
				Copy(d[i], buf);
			}
		}
	}
	cout << "данные отсортированы. " << endl;
}

//сохранение данных
void SavingData(Data* d, int n, string filename) {
	//создаётся поток для записи
	ofstream record(filename, ios::out);
	if (record) {
		
		record << n << endl;

		for (int i = 0; i < n; i++) {
			record << d[i]._initial.surname << endl;
			record << d[i]._initial.name << endl;
			record << d[i]._initial.patronymic << endl;

			record << d[i]._date.day << " ";
			record << d[i]._date.month << " ";
			record << d[i]._date.year << endl;

			record << d[i]._address.city << " ";
			record << d[i]._address.street << " ";
			record << d[i]._address.home << " ";
			record << d[i]._address.room << endl;

			record << d[i]._praic.praicname << " ";
			record << d[i]._praic.cost << endl;

			record << d[i]._Lpraic.Lday << " ";
			record << d[i]._Lpraic.Lmonth << " ";
			record << d[i]._Lpraic.Lyear << endl;

			record << d[i]._number.number << endl;

			record << d[i]._other.other << endl;
		}
	}
	else
		cout << "ошибка открытия файла. " << endl;

	record.close();
}
