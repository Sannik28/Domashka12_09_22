﻿// Domashka12_09_22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <Windows.h>

using namespace std;

void f1(int* arr1, int* arr2) {
	for (int i = 0; i < 5; i++) {
		*(arr2+i) = *(arr1 + i);
		cout << *(arr2+i)<< endl; //выводим 1 раз
	}
}
void f2(int* arr) {
	int n;
	for (int i = 5, j=0; i >=3, j<3; i--, j++) {
		n = *(arr + j);
		*(arr + j) = *(arr + i);
		*(arr + i) = n;
	}
	for (int i = 0; i < 6; i++) {
		cout << *(arr + i) << endl;
	}
}
void f3(int* arr1, int* arr2) {
	for (int i = 0, j=4; i < 5, j>=0; i++, j--) {
		*(arr2 + i) = *(arr1 + j);
		cout << *(arr2 + i) << endl;
	}
}



int main()
{
	//задание 1
	/*
	int arr1[5] = { 6,8,3,4,5};
	int arr2[5];
	f1(arr1, arr2);
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << " "; //выводим 2й раз для примера
	}
	*/
	//задание 2
	/*
	int arr[6] = { 6,8,3,4,5,9 };
	f2(arr);
	*/
	//задание 3
	/*
	int arr1[5] = { 6,8,3,4,5 };
	int arr2[5];
	f3(arr1, arr2);
	*/
	//задание 4
	/*
	int a = 9, b = 6;
	int* pa;
	int* pb;
	pa = &a;
	pb = &b;
	if (*pa > *pb) cout << *pa;
	else cout << *pb;
	*/
	//задание 5

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.