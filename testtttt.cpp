#include <iostream>
#include <string>
using namespace std;
int main(){
	string a = "I am Carlos";
	for (int i=0; i<a.size(); i++)
		cout << a.at(i) << endl;
	return 0;
}
