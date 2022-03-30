#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// Пользователь вводит с клавиатуры время в секундах, про-
	// шедшее с начала дня.Вывести на экран текущее время в часах,
	//	минутах и секундах.Посчитать, сколько часов, минут и секунд
	//	осталось до полуночи.

	/*
	int time_user;
	int sec, min, hour, left;

	cout << "Введите вреия в секундах, прошеднее с начала дня: "; cin >> time_user;

	hour = time_user / 60 / 60;
	min = time_user / 60 % 60;
	sec = time_user - (min * 60 + hour * 3600);
	cout << hour << " часов " << min << " минут " << sec << " секунд прошло с начала дня\n ";
	cout << " \n";
	left = 86400 - time_user;
	hour = 0; min = 0; sec = 0;

	hour = left / 60 / 60;
	min = left / 60 % 60;
	sec = left - (min * 60 + hour * 3600);
	cout << hour << " часов " << min << " минут " << sec << " секунд осталось до полуночи\n ";
	*/


	// Пользователь вводит с клавиатуры время в секундах, про-
	// шедшее с начала рабочего дня.Посчитать, сколько целых часов
	//	ему осталось работать если рабочий день — 8 часов.
	/*
	int time_user, hour,time;

	cout << "Введите прошедшее время в секундах: "; cin >> time_user;
	time = 28800 - time_user;
	hour = time / 60 / 60;
	cout << "Осталось работать полных часов: " << hour;
	*/












}
