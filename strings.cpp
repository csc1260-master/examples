#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string data = "juan,pedro,diaz,10,90";
	string currentString;
	size_t pos = data.find(','), lastPos = 0;
	while (pos != string::npos){
		currentString = data.substr(lastPos, pos - lastPos);
		cout << pos<< "\t"  << currentString <<endl;
		lastPos = pos + 1;
		pos = data.find(',', pos + 1);
	}


	return 0;
}
