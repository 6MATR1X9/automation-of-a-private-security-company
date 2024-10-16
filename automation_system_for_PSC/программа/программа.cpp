//основная программа
#include "Functions.h"

//объявление переменных для учёта состояния меню
int _stateMenu; 
int _stateMenugl;
int _stateMenucl;

//главное меню
void Menugl() {
    std::cout << "Выберете кто будет пользоваться программой:" << endl
        << "(0) Выход из программы." << endl
        << "(1) Клиент." << endl
        << "(2) Сотрудник." << endl
        << "Ваш выбор: ";
    cin >> _stateMenugl;
}

//меню для клиентов
void Menucl() {
    std::cout << "Меню:" << endl
        << "(0) Выход из программы." << endl
        << "(1) Контактные номера компании." << endl
        << "(2) Тарифы." << endl
        << "(3) Дополнительные услуги." << endl
        << "(4) Выход в главное меню." << endl
        << "Ваш выбор: ";
    cin >> _stateMenucl;
}

//меню для сотрудников
void Menu(){
    std::cout << "МЕНЮ:" << endl
        << "(0) Выход из программы." << endl
        << "(1) Ввод данных." << endl
        << "(2) Вывод данных." << endl
        << "(3) Изменение данных." << endl
        << "(4) Удаление данных." << endl
        << "(5) Добавление данных." << endl
        << "(6) Сортировка по фамилиям." << endl
        << "(7) Сортировка по долгу." << endl
        << "(8) Сохранение данных." << endl
        << "(9) Выход в главное меню." << endl
        << "Ваш выбор: ";
    cin >> _stateMenu;
}

//основная часть программы  
void main(){       
    //русификация консоли ввода/вывода
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Menugl();
    //инициализация данных
    int _actions,
    amountOfData = 0; 
    string filename;
    //массив данных
    Data* d = new Data[amountOfData];
    while (_stateMenugl != 0) {
        switch (_stateMenugl) {
        case 1:
            system("cls"); //очистка консоли
            Menucl();
            while (_stateMenucl != 4 ) {
                switch (_stateMenucl) {
                case 1:
                    system("cls"); //очистка консоли
                    std::cout << "Контактные номера:" << endl
                        << "+7(911)911-22-20 - служба поддержки." << endl
                        << "+7(911)911-22-21 - служба быстрого реагирования." << endl
                        << "+7(911)911-22-22 - магазин дополнительных услуг." << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menucl();
                    ////////////////////////////////////////////////////
                case 2:
                    system("cls"); //очистка консоли
                    std::cout << "Тарифы:" << endl
                        << "Эконом - 1200 р." << endl
                        << "Базовый - 2000 р." << endl
                        << "Улучшенный - 5000 р." << endl
                        << "!Стоимость тарифов может меняться взависимости от типа охраняемого объекта" << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menucl();
                    ////////////////////////////////////////////////////
                case 3:
                    system("cls"); //очистка консоли
                    std::cout << "Дополнительные услуги:" << endl
                        << "Установка системы видеонаблюдения - от  50000 р." << endl
                        << "Постоянное патрулирование объекта охранниками - от 100000 р." << endl
                        << "По всем дополнительным вопросам обращайтесь по телефону +7(911)911-22-22." << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menucl();
                    ////////////////////////////////////////////////////
                case 4:
                    system("cls"); //очистка консоли
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menugl();
                    break;
                    ////////////////////////////////////////////////////
                default:
                    cout << "неверно введён номер действия " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menucl();
                    break;
                }
            }
        case 2:
            system("cls"); //очистка консоли
            Menu();
            while (_stateMenu != 9) {
                switch (_stateMenu) {
                case 1:
                    system("cls"); //очистка консоли  
                    cout << "Введите название файла: ";
                    cin >> filename;//Input.txt
                    ReadingData(d, amountOfData, filename);
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 2:
                    system("cls"); //очистка консоли
                    if (amountOfData != 0) {
                        Print(d, amountOfData);
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 3:
                    system("cls"); //очистка консоли
                    if (amountOfData != 0) {
                        DataChange(d, amountOfData);
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 4:
                    system("cls"); //очистка консоли
                    if (amountOfData != 0) {
                        DeleteData(d, amountOfData);
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 5:
                    system("cls"); //очистка консоли
                    if (amountOfData != 0) {
                        AddDate(d, amountOfData);
                        amountOfData++;
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 6:
                    system("cls"); //очистка консоли
                    if (amountOfData != 0) {
                        DataSorting(d, amountOfData);
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                case 7:
                    system("cls"); //очистка консоли
                    if (amountOfData != 0) {
                        DataSorting1(d, amountOfData);
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 8:
                    system("cls"); //очистка консоли
                    cout << "";
                    cin >> filename;
                    if (amountOfData != 0) {
                        SavingData(d, amountOfData, filename);
                    }
                    else
                        cout << "Данные пусты. " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menu();
                    break;
                    ////////////////////////////////////////////////////
                case 9:
                    system("cls"); //очистка консоли
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menugl();
                    break;
                    ////////////////////////////////////////////////////
                default:
                    cout << "неверно введён номер действия " << endl;
                    system("pause"); //задержка консоли
                    system("cls"); //очистка консоли
                    Menugl();
                    break;
                }
           
            }
        default:
            system("pause"); //задержка консоли
            system("cls"); //очистка консоли
            Menugl();
            break;
        }
    }
}