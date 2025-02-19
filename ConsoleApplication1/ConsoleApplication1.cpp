#include <iostream>
int main() {
	// Constants
	const double tankCapacity = 20.0; // Tank capacity in gallons
	const double citymilesPerGallon = 23.5; // Miles per gallon in the city
	const double highwaymilesPerGallon = 28.9; // Miles per gallon on the highway
	// Calculate distance for city driving
	double cityDistance = tankCapacity * citymilesPerGallon;	
	// Calculate distance for highway driving
	double highwayDistance = tankCapacity * highwaymilesPerGallon;	
	// Display the results	
	std::cout << "When driven in town, the car can travel " << cityDistance << " miles on a one tank of gas." << std::endl; 
	std::cout << "when driven on the highway, the car can travel " << highwayDistance << " miles on a one tank of gas." << std::endl;
	return 0;	
}