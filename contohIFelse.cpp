#include <iostream>
using namespace std;
float phi = 3.14;
float r, luas;
// prosedur input 
void InputData(){
    cout << "Enter Value of r:";
    cin >> r;
}
// fungsi hitung luas 
float hitungluaslingkaran(){
    return phi * r * r;

}
// dengan parameter 
float hitungluaslingkaranparameter(float X){
    return phi * X * X;

}
// fungsi untuk cek status 
string statusbesaranlingkaran(float luas){
    if(luas > 30){
        return "Besar";
    }
    else{
        return "Kecil";
    }
}
// prosedur output 
void outputData(){
    cout << "Luas lingkaran = "<< hitungluaslingkaran();

}
// prosedur output 
void outputDataParameter(){
    cout << "Luas lingkaran ="<< hitungluaslingkaranparameter(r) << endl;
    cout << "besaran lingkarannya" <<statusbesaranlingkaran(hitungluaslingkaranparameter(r));

}
int main ()
{
    InputData();
    outputData();
    outputDataParameter();
}