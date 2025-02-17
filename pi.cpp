#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;
using std::endl;
using std::pow;
using std::sqrt;
using std::setprecision;
using std::fixed;



double Pi(int iterations);
double Pi()

int main(){
	double pi;
	cout << setprecision(15) << fixed;
	for (int i=1000; i < 10000; i+=500){
		pi = Pi(i);
		cout << i << "\t" <<  pi << endl;
	}
	return 0;
}



double Pi(int iterations){
	double sum = 0;
	for (int i = 1; i <= iterations; i++)
		sum += 1.0 / pow(i, 2.0);
	return sqrt(6 * sum);
}
double Pi(){
	double sum = 0;
	for (int i = 1; i <= 1000; i++)
		sum += 1.0 / pow(i, 2.0);
	return sqrt(6 * sum);
}
