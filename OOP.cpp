#include <iostream>
using namespace std;

class Hewan{
    private:
    string jenisKelamin;
    public:
    string tipe;
    string umur;

    void inputData() { 
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
    Hewan hwn;
    hwn.inputData();
    cout << "umurnya adalah " << hwn.umur << endl;
    cout << "tipenya adalah " << hwn.tipe << endl;
    hwn.tampilHewan();
}