#include <iostream> 
using namespace std;

float phi = 3.14;
float r, luas;

// prosedur input 
void InputData() {
    cout << " Enter Value R :";
    cin >> r;

}
// fungsi hitung luas / function for counting area of circle
float HitungLuasLingkaran(){
    return phi * r * r ;

}
    // with parameter 
    float HitungLuasLingkaranParameter(float x ){
        return phi * x * x ;

    }
    

// prosedur output 
void OutputData(){
    cout << "Luas Lingkaran =" << HitungLuasLingkaran();
}
// prosedure output data parameter 
void OutputDataParameter(){
    cout << " Luas Lingkaran = " << HitungLuasLingkaranParameter(r);
}
int main () {
    InputData();
    OutputData();
    OutputDataParameter();
}