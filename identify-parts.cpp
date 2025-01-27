#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	const double PI = 3.141592653589;
	double radius;
	int numberOfSpheres = 1;
	double oneSphereVolume, totalVolume;

	cout << "Welcome to the Dragon\'s Sphere Program" << endl;
	cout << endl;
	cout << "What is the radius of the spheres: ";
	cin >> radius;
	cout << "How many spheres have you collected: ";
	cin >> numberOfSpheres;
	oneSphereVolume = 4.0 * PI * radius * radius * radius / 3.0;
	totalVolume = oneSphereVolume * numberOfSpheres;
	cout << "The total volume your sphere(s) are taking is: ";
	cout << totalVolume << "\n\n" 
	     << "Bye Bye... Kamehame.... HA!!!!" << endl;
	return 0;

}
