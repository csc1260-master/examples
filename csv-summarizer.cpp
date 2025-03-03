#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>


using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stringstream;
using std::ifstream;
using std::getline;
using std::cerr;
using std::stoi;


/**
 * We want to create a program that reads a CSV file
 * the file has 4 numbers per line (row)
 * the program will add these 4 numbers together and output
 * the sum of this numbers to screen
 * At the end of the program it will output the
 * sum of all these numbers.
 * Challenge:
 *   Calculate the Average per row
 *   Calculate the Standard Deviation for all the data
 *
 */ 

int Sum(const string& line);

int main(){
	string filename = "data.csv", line;
//	cout << "Filename: ";
//	cin >> filename;

	ifstream input(filename); // Constructor
	if (input.fail()){
		cerr << "I cannot open file " << filename << endl;
		return 1;
	}
	
	while (getline(input, line)){
		if (line.length() != 0){	
			cout << line << endl;
			cout << Sum(line) << endl;
		}
	}

	input.close();
	return 0;
}
int Sum(const string& line){
	int sum = 0;
	string part;
	stringstream ss(line);
	while (getline(ss, part, ',')){
		sum += stoi(part);
	}
	return sum;
}


