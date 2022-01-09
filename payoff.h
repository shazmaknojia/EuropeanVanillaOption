#pragma once
#include <algorithm>

class PayOff {

public:
	PayOff() {};
	virtual ~PayOff() {}

	virtual double operator() (const double S) const = 0;

};


class PayOffCall : public PayOff {
private:
	double K; //strike price
public:
	PayOffCall(const double K_) {};
	virtual ~PayOffCall() {};
	virtual double operator() (const double S) const;
};

class PayOffDoubleDigital : public PayOff {
private:
	double U; // Upper strike price
	double D; // Lower strike price
public:
	// Two strike parameters
	PayOffDoubleDigital(const double U, const double D);
	virtual ~PayOffDoubleDigital();
	// Pay-off is t if spot within strike barriers , 0 otherwise
	virtual double operator ( ) (const double S) const;
};