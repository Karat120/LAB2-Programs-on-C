#define _CRT_SECURE_NO_WARNINGS
#include "Machin.h"
#include <string.h> 
#include <stdio.h>
#include <Windows.h>

FILE* myinfo;
void create_machine(Machine* variable) {

	variable->start = false;
	variable->form[50] = ' ';
	variable->stuff[50] = ' ';

	create_engine(&variable->engine);
	create_systemmanag(&variable->sysmanag);
}

void create_machine(Machine* variable, bool starts, char stuff[], char form[], double length, double width)
{
	variable->start = starts;
	strcpy(variable->form , form);
	strcpy(variable->stuff , stuff);
	widget_engine(&variable->engine);

	create_systemmanag(&variable->sysmanag, starts, length , width);

}

void launch(Machine *variable)
{
	if (variable->start && variable->sysmanag.ampre) {
		if (variable->sysmanag.sentemp.amper == 220) {
			for (int i = 0; i <= 100; i++)
			{
				system("cls");
				printf("%d", i);
			}
		}
		else {
			printf("������ ����������");
			create_machine(variable);
		}
		printf("\n�����: %s \t ������", variable->form);
	}
}

void square(Machine variable)
{
	int next=2 ,f;
	f = next * 11035155 + 12345;
	f= (f / 6553) % 3276;

	if(variable.sysmanag.sentemp.tempe<=80)
	printf("\n������� ���������� �����  : %f\n", variable.sysmanag.scanlas.square);
	else printf("������ ����������� !!! \n������� ���������� ����� : %f\n", variable.sysmanag.scanlas.square/f);
}
void info() {
	char str[300];
	myinfo = fopen("info.txt", "r");
	while(fgets(str, 250, myinfo)!=NULL)
	printf("%s", str);
	fclose(myinfo);
}

void display_machine(Machine variable)
{
	if (variable.start) {
		printf("\n������ �������\n");
		

	}
	else {
		printf("\n������ ��������\n");
	}
	printf("����� �����������: %s\n", variable.form);
	printf("�������� �����������: %s\n", variable.stuff);

	display_engine(variable.engine);
	display_systemmanag(variable.sysmanag);

}
void widget_machine(Machine* variable) {
	int a;
	char form[50], stuff[50];
	double length;
	double width;
	do {
		printf("�������� ��������� ������ \n1.�������  ��� 2.��������\n");
		scanf("%d", &a);
	} while (a != 1 && a != 2);
	while (getchar() != '\n');
	if (a == 2)
		create_machine(variable);
	else {
		printf("�������� ��������:\n ");
		gets_s(form);
		printf("�������� ����� ���������:\n");
		gets_s(stuff);
		printf("������� ������� ��������� \n ����� :");
		scanf("%lf", &length);
		printf("\n������� ������: ");
		scanf("%lf", &width);

	}
	create_machine(variable, a, stuff, form, length, width);

}