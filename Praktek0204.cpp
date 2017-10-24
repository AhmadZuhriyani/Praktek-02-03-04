#include <iostream>
using namespace std;
int main(){
	double luasRumah = 42;
	double lantaiP = 193*1215;
	double luas1Box = lantaiP*8/1000000;
	double jumlahBoxP,biayaP,biayaPG,totalB;
		
	cout << "Luas Rumah		: "<<luasRumah<<" m2"<<endl;
	cout << "Luas 1 Box Parket	: "<<luas1Box<<" m2"<<endl;
	
	jumlahBoxP = luasRumah/luas1Box;
	cout << "Jumlah Box Parket	: "<<jumlahBoxP<<endl;
	biayaP = jumlahBoxP * 500;
	cout << "Biaya Parket (Rp)	: "<<biayaP<<endl;
	biayaPG = luasRumah * 20;
	cout << "Biaya Pasang (Rp)	: "<<biayaPG<<endl;
	totalB = biayaP+biayaPG;
	cout << "Total Biaya (Rp)	: " << totalB<<endl;	
}

