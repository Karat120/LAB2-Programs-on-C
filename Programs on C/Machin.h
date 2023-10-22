#pragma once
#include "Engine.h"
#include "SystemManag.h"



struct Machine {
	bool start;
	char stuff[60];
	char form[60];
	double length;
	double width;
	struct Engine engine;
	struct SystemManag sysmanag;
};

void create_machine(Machine* variable);

void create_machine(Machine* variable, bool starts, char stuff[], char form[] , double length, double width);

void launch(Machine *variable);
void square(Machine variable);
void info();
void display_machine(Machine variable);
void widget_machine(Machine* variable);