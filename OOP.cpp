#include <iostream>
using namespace std;

class Hewan{
private: //Akses modifier
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void inputData() {  //metode
        cout << "masukan jenis kelamin = " << endl;
        cin >> jenisKelamin;
        cout << "masukan tipe = " << endl;
        cin >> tipe;
        cout << "masukan umur = " << endl;
        cin >> umur;
    }
    void tampilHewan(){
        cout << "jenis kelaminnya asalah " << jenisKelamin << endl;
    }
};
int main() {
    Hewan hwn; //membuat objek
    hwn.inputData();
    cout << "umurnya adalah " << hwn.umur << endl;
    cout << "tipenya adalah " << hwn.tipe << endl;
    hwn.tampilHewan();
}