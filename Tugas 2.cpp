 #include <iostream>

using namespace std;
int main(){
    int n;

	cout << "Piramida Bintang"<<endl;
	cout << "Masukkan tinggi piramida: "; cin >> n; //untuk memasukan tinggi segitiga

	char Segitiga = '*';
	for (int i = 0; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
    for (int k = 1; k <= i; k++){
		cout << Segitiga << " ";
		}
		cout << endl;
		}

return 0;
}
