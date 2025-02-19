#include <iostream>
using namespace std;
int main() {
	// Constants
	const int totalcustomers = 16500; // Total number of customers surveyed
	const double percentbuyenergy = 0.15; // 15% purchase energy drinks
	const double percentcitrusflavor = 0.58; // 58% prefer citrus flavor
	// Calculate the number of customers who purchase energy drinks 
	int customersbuyenergy = totalcustomers * percentbuyenergy;
	// Calculate the number of customers who prefer citrus flavor
	int customerscitrusflavor = totalcustomers * percentcitrusflavor;
	// Display results 
	cout << "The number of customers who purchase one or more energy drink per week: " << customersbuyenergy << endl;
	cout << "The number of customers who prefer citrus flavor: " << customerscitrusflavor << endl;
}