#include "SystemManag.h"
#include <stdio.h>
void create_systemmanag(SystemManag *systemanag)
{
	systemanag->ampre = false;
	systemanag->scanlas.sadMod = false;
	systemanag->scanlas.square = 0;
	systemanag->sentemp.amper = 0;
	systemanag->sentemp.tempe = 0;
}

void create_systemmanag(SystemManag* systemanag, bool ampres, double dlength, double dwidth)
{
	double s;
	if (ampres) {
		systemanag->ampre = true;
		dlength *= dwidth;
		systemanag->scanlas.sadMod = true;
		systemanag->scanlas.square = dlength;
		systemanag->sentemp.amper = 220;
		systemanag->sentemp.tempe = 80;
	}
	else {
		create_systemmanag(systemanag);
	}
}
void display_systemmanag(SystemManag systemanag) {
	printf("\n���������� � SystemManag\n");
	if (systemanag.ampre)
		printf("\n���������� : �������\n");
	else 
		printf("���������� : �� �������\n");

	printf("�����������: %f\n ���: %f\n", systemanag.sentemp.tempe, systemanag.sentemp.amper);

}

;