#include <iostream>
using namespace std;

class LuasLingkaran{
    double jarijari;
    


    void inputData() {  //metode
        cout << "masukan jarijari = " << endl;
        cin >> jarijari;
    }
    double hitugLuas () {
        return 3.14 * jarijari * jarijari << endl;
    }
};

int main() {
    LuasLingkaran LL;
    LL.inputData();
    cout << endl;
    cout << "luasnya adalah = " << LL.hitungLuas() << endl;
    cout << endl;
    
}