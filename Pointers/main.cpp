//Персональный шаблон проекта с++
#include <iostream>
using namespace std;

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
void ref_swap(int &refn1, int &refn2) {
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp;

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 15;


	// Указатели на переменные
	/*cout << "Адрес n = " << &n << '\n';

	int* pn; // объявляем указатель pn

	pn = &n; // направляем указатель на переменную n

	cout << "pn =  " << pn << "\n";
	cout << "n = " << n << "\n";
	cout << "*pn = " << *pn << "\n"; // Используя разыменование выводим n
	*pn = 20;// Используя разыменование меняем значение n
	cout << "Новая  n = " << n << "\n";
	pn = &m; //Перенаправляем указатель на адрес m
	cout << "Адрес m = " << &m << "\n";
	cout << "     pn = " << pn << '\n';
	int* pm = &m;
	cout << "   pm = " << pm << "\n";*/

	//Указатели на массивы
	/*int mass[5]{5,8,0,11,7};

	int* pm2 = &mass[2];

	cout << *pm2 << '\n';
	pm2++;
	cout << *pm2 << "\n";

	cout << mass << "\n";//адрес 1-го элемента массива
	pm2 = mass;
	cout << *pm2 << "\n";//5
	cout << "Массив: \n";
	for (int i = 0; i < 5; i++)
		//cout << mass[i] << ", ";
	cout << *(pm2 + i) << ", ";
	cout << "\b\b.\n";

	// mass = &n; // ошибка*/

	//Задача. Создать функцию,меняющую значение двух переменных местами.

	/*cout << n << " " << m << "\n";//10,15
	//my_swap(n, m); // не работает, т.к. параметры - это копии
	pswap(&n, &m);

	cout << n << " " << m << "\n";*/

	//Ccылки на переменные

	cout << n << " " << m << "\n";//10,15
	//my_swap(n, m); // не работает, т.к. параметры - это копии
	//pswap(&n, &m);//неудобно, т.к.передает адреса
	ref_swap(n, m);

	cout << n << " " << m << "\n"; 
	/*int* pn = &n;

	cout << "*pn = " << *pn << "\n"; //разыменование неудобно
	int& refn = n;
	cout << "refn = " << refn << "\n";
	refn = 20;
	cout << "Новая n = " << n << "\n";*/

	return 0;
}