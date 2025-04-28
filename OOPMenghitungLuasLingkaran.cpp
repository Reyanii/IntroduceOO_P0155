#include <iostream>
using namespace std;

class lingkaran
{
    public:
    double jarijari;
    double luas;

    void inputData()
    {
    cout << "masukkan jari jari = " << endl;
    cin >> jarijari;
    }

    double hitungLuas(){
        return 3.14*jarijari*jarijari;
    }
    void menghitungLuas(){
        cout << " masukkan jarijari " << endl;
        cin >> jarijari;
    }
};   
int main(){
    lingkaran bulat;
    bulat.inputData();
    cout << endl;
    cout << "luasnya adalah = " << bulat.hitungLuas() << endl;
    cout << endl;
}