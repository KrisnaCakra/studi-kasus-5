#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class mhs {
	public :
		void input();
		void proses();
		int rekursif(int j, int i);
		void output();
	private:
		string a[20];
		string nama, prodi;
		int b[8];
		int hsks = 150000;
		int mata, i, nim; 	
		float total, total_biaya1, total_biaya2, jml_sks, diskon1, diskon2;
};

void mhs::input(){
	cout << "\n===================================================" << endl;
	cout << "    Pembayaran SKS Dengan Menggunakan Rekursif      " << endl;
	cout << "===================================================\n" << endl;
	cout << "Masukkan Nama               : "; cin >> nama;
	cout << "Masukkan NIM                : "; cin >> nim;
	cout << "Masukkan Prodi              : "; cin >> prodi;
	cout << "Masukkan banyak Mata Kuliah : "; cin >> mata;
	cout << "---------------------------------------\n" << endl;
	for(i = 0; i < mata; i++){  
			cout << "Masukkan Mata kuliah " << i + 1 << " : ";
			cin >> a[i];	
			cout << "Masukkan SKS           : ";
			cin >> b[i];
			cout << "---------------------------------------"<<endl;
		}
}
