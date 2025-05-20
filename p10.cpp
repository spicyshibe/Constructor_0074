// buatlah program c++ berparameter dengan class Barang yang memiliki atribut: namaBarang, kodeBarang
// program memiliki constructor berparameter untuk mengisi nilai namaBarang dan kodeBarang.
// serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
using namespace std;

class barang
{
private:
    string namaBarang;
    int kodeBarang;
public:
    barang(string nama, int kode){

    this->namaBarang = nama;
    this->kodeBarang = kode;
    }

    void output() 
    {
        cout << "nama barang : " << this->namaBarang << endl;
        cout << "Kode Barang : " << this->kodeBarang << endl;

    }
    

};

int main() {
    barang *a = new barang("iPhone 19 plus pro max", 74798);
    a->output();

    return 0;

}
