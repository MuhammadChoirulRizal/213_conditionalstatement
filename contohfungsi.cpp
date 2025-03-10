#include <iostream> 
using namespace std;

float phi = 3.14;
float r, luas;
    
// prosedur input 
void InputData() {
    cout << " Enter Value R :";
    cin >> r;

}
// prosedur hitung luas 
float HitungLuasLingkaran() {;
    return phi * r * r;
}

// prosedur output 
void OutputData(){
    cout << "LuasLingkaran = " << HitungLuasLingkaran();

}
int main () {
    InputData();
    OutputData();
}