#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
char bidang;
double p,l,a,t,L;
	if (bidang == 'P' || bidang == 'p') {	
		cout << "   Mengitung luas persegi panjang \n";	
		cout << "   Masukkan panjangnya : ";
		cin >> p;
		cout << "   Masukkan lebarnya   : ";
		cin >> l;
		L = p*l;
		cout << "   Luas persegi panjang : "<< L<<endl;
	}
		else if (bidang == 'S' || bidang == 's') {
		cout << "   Mengitung luas segitiga \n";	
		cout << "   Masukkan alasnya   : ";
		cin >> a;
		cout << "   Masukkan tingginya : ";
		cin >> t;
		L = 0.5*a*t;
		cout << "   Luas persegi panjang : "<< L<<endl;
	}	
	else{
		cout<<"Maaf, Anda Salah Memilih"<<endl;
	}
}
