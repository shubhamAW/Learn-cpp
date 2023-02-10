#pragma once

#define E 0.0100

class MeterConverter {
public:
	MeterConverter(int i);

public:
	double ToFoot() const;
	double ToInch() const;
	int ToMeter() const;
	double ToYard() const;
private:
	int m_meter;
};