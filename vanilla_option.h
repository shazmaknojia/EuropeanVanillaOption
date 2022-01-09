#ifndef VANILLA_OPTION_H
#define VANILLA_OPTION_H

class VanillaOption {
private:
	void init();
	void copy(const VanillaOption& rhs);
	double K; // Strike price
	double r; // Risk 􀀀f reerate
	double T; // Maturity time
	double S; // Under lying asset price
	double sigma; // Volatility of underlying asset

public:
	VanillaOption(); //default constructor- no parameters
	VanillaOption(const double& _K, const double& _r, const double& _T,
		const double& _S, const double& _sigma); //parameter constructor
	VanillaOption(const VanillaOption& rhs); //copy construtor
	VanillaOption& operator=(const VanillaOption& rhs); //assignment
	virtual ~VanillaOption(); //destructor
	double getK() const;
	double getr() const;
	double getT() const;
	double getS() const;
	double getsigma() const;
	double cal_call_price() const;
	double calc_put_price() const;
};





#endif