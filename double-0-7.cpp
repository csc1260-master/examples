#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::string;
using std::stringstream;
using std::getline;

// What can we do if a character in the password is close to 255... or c + k > 255 ?????
string Encode(const string& original, int key = 4);
string Decode(const string& coded, int key = 4);
string GetPassword(const string& line);
string GetUsername(const string& line);
int Menu();

int main(){
	string message = "mama%122-*", coded;
	const string FILENAME = "jamesbond.txt";
	int menuOption;
	string user, pass;

	menuOption = Menu();
	while (menuOption != 3){
		if (menuOption == 1){
			cout << "Username: ";
			cin >> user;
			cout << "Password: ";
			cin >> pass;
			coded = Encode(pass);
			ofstream output(FILENAME, ofstream::app);
			output << user << "," << coded << endl;
			output.close();
		}else if (menuOption == 2){
			cout << "Username: ";
			cin >> user;
			cout << "Password: ";
			cin >> pass;
			ifstream input(FILENAME);
			string line, fileUser, filePass;
			bool foundUser = false, matchedPass = false;
			while (getline(input, line)){
				fileUser = GetUsername(line);
				filePass = GetPassword(line);
				if (user == fileUser){
					foundUser = true;
					if (Encode(pass) == filePass){
						cout << "It is a match, you are in" << endl;
						matchedPass = true;
					}else {
						cout << "Password does not match" << endl;
						break;
					}

				}
				if (matchedPass)
					break;
				
			}
			if (!foundUser){
				cout << "The user was not found!" << endl;
			}
			input.close();

		}
		menuOption = Menu();
		
	}
	return 0;
}

string GetPassword(const string& line){
	stringstream lineStream(line);
	string user, pass;
	getline(lineStream, user, ',');
	getline(lineStream, pass, ',');
	return pass;
}
string GetUsername(const string& line){
	stringstream lineStream(line);
	string user, pass;
	getline(lineStream, user, ',');
	return user;
}
string Encode(const string& original, int key){
	string retVal;
	for (size_t i=0; i < original.length(); i++)
		retVal.push_back(original.at(i) + key);
	return retVal;
}
string Decode(const string& coded, int key){
	string retVal;
	for (size_t i=0; i < coded.length(); i++)
		retVal.push_back(coded.at(i) - key);
	return retVal;

}
int Menu(){
	int option = -1;
	while (true){
		cout << "1. Add User and Password" << endl;
		cout << "2. Check User and Password" << endl;
		cout << "3. Finish and Leave" << endl;
		cin >> option;
		if (cin.fail()){
			cin.clear();
			cin.ignore(255, '\n');
			cerr << "Yo! Dummy... I want an integer!" << endl;
		}else {
			if (option < 1 || option > 3){
				cerr << "Yo! Dummy... It is a number 1 2 or 3" << endl;
			}else
				return option;
		}
	}
	return -1;
}



