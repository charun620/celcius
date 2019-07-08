#include <iostream>
#include <string>
using namespace std;
int main() {


	cout << "PROGARM F TO C\n";
	float F, C;
	cout << "Enter Celcius :";
	cin >> C;
	F = 32 + (C * 1.8);
	cout << "Falenhight = " << F << endl;
	cout << ((F >= 70) ? "To hot" : "so cool");
	cout << endl;
	return (0);
}