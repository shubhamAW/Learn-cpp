#include "Meter.h"

MeterConverter::MeterConverter(int i):m_meter(i){}

double MeterConverter::ToFoot() const {
	return 3.28084 * m_meter;
}

double MeterConverter::ToInch() const {
	return 39.3701 * m_meter;
}

int MeterConverter::ToMeter() const{
	return m_meter;
}

double MeterConverter::ToYard() const {
	return 1.09361 * m_meter;
}