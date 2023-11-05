#include <iostream>

using namespace std;

int main()
{
    int batas;
    int BilGanjil = 0;
    int BilGenap = 0;
    int BilPrima = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima " << endl;

    cout << "Masukkan batas akhir nya! : ";
    cin >> batas;	// Masukan batas akhirnya

// Bilangan Ganjil

    cout << "Bilangan Ganjil: ";



    for (int i = 0; i <= batas; i++){ //rumus mencari bilangan ganjil
        if (i % 2 != 0){
            cout << i << " "; // Hasil bilangan ganjil
            BilGanjil += i;   // Penjumlahan dari bilangan ganjil
        }
    }

    cout << endl;

// Bilangan Genap

    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2){ //Rumus
        cout << i << " "; //Hasil
        BilGenap += i; //Hasil penjumahan
    }
    cout << endl;

// Bilangan Prima

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++){ //Rumus
        int j;
        for (int j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){
            cout << i << " "; //Hasil
            BilPrima += i; //Hasil penjumlahan
        }
    }
    cout << endl;

// Hasil jumlah dari masing-masing Bilangan

    cout << "Jumlah bilangan ganjil: " << BilGanjil << endl;
    cout << "Jumlah bilangan genap: " << BilGenap << endl;
    cout << "Jumlah bilangan Prima: " << BilPrima << endl;


// Macam Faktor dari Ketiga Bilangan

cout << "Faktor-faktor dari jumlah prima tersebut adalah: ";
	for (int r = 1; r <= BilPrima; r++){
		if (BilPrima % r == 0){
			 cout << r << " ";
			 }
		}
	cout<< endl;
	cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
	for (int s = 1; s <= BilGanjil; s++){
		if (BilGanjil % s == 0){
			 cout << s << " ";
			 }
		}
	cout<< endl;
	cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
	for (int t = 1; t <= BilGenap; t++){
		if (BilGenap % t == 0){
			 cout << t << " ";
			 }
		}
		cout<< endl;
}
