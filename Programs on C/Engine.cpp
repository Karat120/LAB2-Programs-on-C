#define _CRT_SECURE_NO_WARNINGS
#include "Engine.h"
#include "Machin.h"
#include <stdio.h>

void create_engine(Engine *enginer)
{
	enginer->petrol = 0;
	enginer->power = 0;

}

void create_engine(Engine* enginer, int petrols, double powers)
{
	enginer->petrol = petrols;
	enginer->power = powers;
}

void display_engine(Engine enginer)
{
	printf("\n��������� ���������");
	printf("\n�������: %d �. \n ������������ ��������: %f ", enginer.petrol, enginer.power);
}

void widget_engine(Engine* enginer) {
	int petrol;
	double power;
	printf("\n������� ���������� ����������� �������:  ");
	scanf("%d", &petrol);
	printf("\n������� �������� ���������:  ");
	scanf("%lf", &power);
	create_engine(enginer, petrol, power);
};