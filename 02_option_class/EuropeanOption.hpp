

class EuropeanOption {

private:

	void init(); // intialise all default values
	void copy(const EuropeanOption& o2);

	// "Kernel" functions for option calculations
	double CallPrice() const;
	double PutPrice() const;
	double CallDelta() const;
	double PutDelta() const;

public:

	// Public member data for convenience only
	double r;
	double sig;
	double K;
	double T;
	double U;
	double b;

	string optType; // Option type (put or call?)

public:
	// Constructors
	EuropeanOption(); // Default call option
	EuropeanOption(const EuropeanOption& o2); // Constructor for deep copy
	EuropeanOption(const string& optionType); // Create option type

	// Destructor
	virtual ~EuropeanOption();

	// Assignment operator
	EuropeanOption& operator = (const EuropeanOption& option2);

	// Functions that calculate option price and (some) sensitivities
	double Price() const;
	double Delta() const;

	// Modifier functions
	void toggle();  // change option type (C/P, P/C)


};