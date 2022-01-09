#ifndef PAYOFF_CPP
#define PAYOFF_CPP

#include "payoff.h"
#include <cmath>

PayOffCall::PayOffCall(const double _K) { 
	K = _K; 
}
// De s t ruc tor (no need to use v i r t u a l keyword in source f i l e )
PayOffCall::~PayOffCall(){}
// Over􀀀r idden ope rator ( ) method , which turns PayOf fCal l int o a f unc t i on o b j e c t
double PayOffCall::operator ( ) (const double S) const {
	return std::max(S-K, 0.0); // Standard European call payoff
}

// Constructor with two strike parameters , upper and lower barrier
PayOffDoubleDigital::PayOffDoubleDigital(const double _U, const double _D)
{
	U = _U;
	D = _D;
}

// Over-ridden operator ( ) method , which turns
// PayOffDoubleDigital into a function object
double PayOffDoubleDigital::operator() (const double S) const {
	if (S >= D && S <= U) {
		return 1.0;
	}
	else {
		return 0.0;
	}
}


#endif // PAYOFF_CPP
