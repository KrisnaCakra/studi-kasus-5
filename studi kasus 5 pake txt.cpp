/*
KELOMPOK STORMI :
KRISNA CAKRA NINGRAT (449)
ANELA INDRA (454)
SASQIA AULIA NUR AINI (456)
*/

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

int mhs::rekursif(int j, int i){
	if(i < 0){
		return i;
	}
	else{
		jml_sks += b[i];
		total   += hsks * b[i];
		return rekursif(j, (i-1));
	}
}

void mhs::proses() {
	int j = 1;
	i--;
	rekursif(j,i);
	diskon1   = total * 0.25;
	total_biaya1 = total - diskon1;
}

void mhs::output(){
	ofstream pos;
    pos.open("SKS REKURSIF.txt", ios::out);
	pos << "\n\n=======================================" << endl;
	pos << "||   HASIL DARI PERHITUNGAN REKURSIF ||" << endl;
	pos << "=======================================" << endl;
	pos << "Nama   	                  : " << nama << endl;
	pos << "NIM                       : " << nim << endl;
	pos << "Jumlah SKS                : " << jml_sks << endl;
	pos << "Banyak Mata Kuliah        : " << mata << endl;
	pos << "Pembayaran Awal Kuliah    : " << total << endl;
	pos << "Total Pembayaran (Diskon) : " << total_biaya1 << endl;
	pos << "=======================================" << endl;
	pos.close();
}

int main() {
	mhs a;
	a.input();
	a.proses();
	a.output();
}
