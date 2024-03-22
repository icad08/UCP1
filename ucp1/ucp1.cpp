#include <iostream>
using namespace std;

// 1. membandingkan elemen pertama dan kedua, jika elemen pertama lebih besar, maka kedua elemen tersebut ditukar, kemudian elemen yang lebih besar diatas array, sedangkan yang lebih kecil berada dibawahnya, repeat sampai kondisi terpenuhi
// 2. menentukan urutan loncatan, melakukan penyisipan, membandingkan elemen, menukar elemen, repeat  sampai kondisi terpenuhi  
// 3. algoritma yang paling cocok untuk dipilih yaitu insertion sort karena insertion sort secara efisien dapat menangani data yang sudah sebagian berurutan.

int i, j, n, temp;
int irsyad[27];
void input() {
    while (true) {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 27)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 27 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> irsyad[i];
    }
}
void UCP(){
    for (int j = 0; j < n - 1; j++) { //step 1
    int min_index = j; // step 2a
    for (int i = j + 1; i < n - 1; i++) { //step 2b
        if (irsyad[i] < irsyad[min_index]) { //step 2c
            min_index = i; // step 2ci
        }
    }
    swap(irsyad[j], irsyad[min_index]); //step 3
  }
}

void display() {
        cout << endl;
        cout << "=================================" << endl;
        cout << "Element Array yang telah tersusun" << endl;
        cout << "=================================" << endl;
        for (int j = 0; j < n; j++) {
            cout << irsyad[j] << endl; //output setiap element array pada garis baru
        }
        cout << "jumlah pass = " << n - 1 << endl;
        cout << endl;
    }
int main(){
    input();
    UCP();
    display();
}
