#include <iostream>
#include <string>

// #define constante 
using namespace std;

int main (){
    float Grados_F, celsius;
    cout<<"ingrese el grados en fahrenheit: ";
    cin>> Grados_F;

    celsius = (Grados_F * 32) / 1.8;

    return celsius; 
}