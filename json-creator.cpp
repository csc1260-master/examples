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
using std::ofstream;



/**
 * We want to create a program that reads data from the user and it outputs
 * this data to a JSON file.
 * We will visualize the data afterwards.
 *
 */ 

int main(){
	string make, model;
	int year;
	double price;
	int counter = 0;
	stringstream json;
	ofstream output("naruto.json");
	cout << "Make: ";
	cin >> make;
	output << "[";	
	while (true){
		json.str("");
		if (make == "lemon")
			break;
		cout << "Model: ";
		cin >> model;
		cout << "Year: ";
		cin >> year;
		cout << "Price: ";
		cin >> price;
		json	<< "{\"make\": \"" << make << "\"," 
			<< "\"model\": \"" << model << "\", " 
			<< "\"year\": " << year << ", " 
			<< "\"price\": " << price << "}";

		
		cout << "Make: ";
		cin >> make;
		if (make != "lemon")
			json << ", ";
		
		output << json.str() << endl;
		counter++;
		
	}
	output << "]";
	output.close();
	cout << "Total Cars = " << counter << endl;
	return 0;
}


