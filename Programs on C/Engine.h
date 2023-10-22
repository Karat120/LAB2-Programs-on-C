#pragma once



struct Engine {
	int petrol;
	double power;
};

void create_engine(Engine* enginer);
void create_engine(Engine* enginer, int petrols, double powers);
void display_engine(Engine enginer);
void widget_engine(Engine* enginer);