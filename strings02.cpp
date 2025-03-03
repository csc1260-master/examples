#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream; // It is like a string and like a stream

int CountLetters(const string& str, char c); // counts how many time c appears in str

int main(){
	// CSV
	// JSON
	// stringstream
	// Introduction to arrays
	//
	//
	//
	
	string name;
	int age;
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	stringstream json;
	json << "{\"name\":\"" << name << "\", \"age\":" << age <<"}";

	cout << json.str() << endl;


	string csv = "john,rambo,80,300";
	stringstream csvStream(csv);
	string data;
	while (getline(csvStream, data, ','))
		cout << data << endl;


	cout << CountLetters("arias", 'a') << endl;

	return 0;
}
int CountLetters(const string& str, char c){ // counts how many time c appears in str
	int counter = 0;
	for (size_t i=0; i<str.length(); i++)
		if (str.at(i) == c)
			counter++;
	return counter;
}
