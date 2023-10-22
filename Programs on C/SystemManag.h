#pragma once




struct LaserScan {
	double square;
	bool sadMod; //сканер поверхности
};

struct SensorTempe {
	double tempe;
	double amper;
};

struct SystemManag {
	bool ampre;
	struct SensorTempe sentemp;
	struct LaserScan scanlas;
};
void create_systemmanag(SystemManag* systemanag);
void create_systemmanag(SystemManag* systemanag, bool ampres, double dlength, double dwidth);
void display_systemmanag(SystemManag systemanag);
