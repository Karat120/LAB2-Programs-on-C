#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include "Machin.h"
#include "Engine.h"
#include <Windows.h>
#include <malloc.h>


int main() {
	setlocale(LC_ALL, "rus");
	printf("Статическая переменная\n");
	Machine p;
	printf("Обычный конструктор с параметрами: \n");
	char stuff[50]="derevo", form[50]="krug";
	double length=2, width=3;
	create_machine(&p, true, stuff, form, length, width);
	display_machine(p);
	system("pause");
	system("cls");
	printf("Иницилизация полей");
	widget_machine(&p);
	display_machine(p);
	system("pause");
	system("cls");
	
	printf("Динамическая переменная\n");
	Machine* d;
	d =(Machine*)malloc(sizeof(struct Machine));
	widget_machine(d);
	display_machine(*d);
	free(d);
	return 0;
}