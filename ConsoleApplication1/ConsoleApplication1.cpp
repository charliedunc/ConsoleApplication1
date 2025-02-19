#include <iostream>	
using namespace std;
int main() {
	// The rate of rise in millimeters per year
	const double rateofrise = 1.5; // millimeters per year
	// Years of future projections
	int years[] = { 5, 7, 10 };
	//Loop through each year and calculate the ocean's rise level
	for (int i = 0; i < 3; i++) {
		int currentYear = years[i];
		double rise = rateofrise * currentYear; // Calculate the rise in millimeters
		cout << " millimeters higher." << endl;
	}
}