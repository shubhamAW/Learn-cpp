#pragma once


#if defined(PRACTICEDAY07DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif



struct Circle {
	int radius;
};

struct Triangle {
	struct side {
		int value;
	};
	struct angle {
		double value;
	};
	side a, b, c;

	angle A, B, C;
};

struct Temperature {
	double value;
	char unit[50];
};

struct Pendulum {
	int length;
};

//structure for resistors
struct Resistor {
	double resistance;
};

enum configurations {
	None,
	Series,
	Parallel,
};

//Structure for Circuit
struct Circuit {
	Resistor **resistors;
	int size;
	configurations configuration;
	Circuit* nextCircuit;

};

double EXPIMP CalculateArea(Circle &c);


void EXPIMP ChangeTemperatureUnit(Temperature& t, char* ch);

double EXPIMP CalculatePeriodPendulum(Pendulum& p);

double EXPIMP EffectiveSeriesResistance(Resistor* r[], int n);

double EXPIMP EffectiveParallelResistance(Resistor* r[], int n);



//int EXPIMP get_add(int *a, int *b);