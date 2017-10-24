#include <iostream>
using namespace std;
int main(){
	double luasRumah = 42;
	double lantaiP = 193*1215;
	double luas1Box = lantaiP*8/1000000;
	
	cout << "Luas Rumah		: "<<luasRumah<<" m2"<<endl;
	cout << "Luas 1 Box Parket	: "<<luas1Box<<" m2"<<endl;
	double jumlahBoxP,biayaP,biayaPG,taotalB;
	jumlahBoxP = luasRumah/luas1Box;
	cout << "Jumlah Box Parket	: "<<jumlahBoxP<<endl;
	jumlahBoxP * 500;
	cout << "Biaya Parket (Rp)	: "<<biayaP<<endl;
		
}

