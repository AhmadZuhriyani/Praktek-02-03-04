#include <iostream>
using namespace std;

int main(){
	double ton=3527.92;
	
	double berat;
	cin >> berat;
	
	double ounce =1/ton;
	double beratTon = berat*ounce;
	
	cout << beratTon<<endl;
	
	double jumlah=1/beratTon;
	cout << jumlah;
}
