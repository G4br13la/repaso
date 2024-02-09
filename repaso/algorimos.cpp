#include <iostream>
#include <string>

using namespace std;

int main(){
    string tipo_llamada;
    int duracion_llamada;
    float costo_llamada;

    cout<<"ingrese el tipo de llamada(fija, internacipnal, celular): ";
    cin>> tipo_llamada;
    cout << "Ingrese la duracion de la llamada en minutos: ";
    cin >> duracion_llamada;

    if (tipo_llamada == "fija") {
        costo_llamada = duracion_llamada * 200;
        cout << "La llamada es nacional a un telefono fijo" << endl;
    } else if (tipo_llamada == "internacional") {
        costo_llamada = duracion_llamada * 500;
        cout << "La llamada es internacional" << endl;
    } else if (tipo_llamada == "celular") {
        costo_llamada = duracion_llamada * 300;
        cout << "La llamada es nacional a un telefono celular" << endl;
    }

    cout << "La llamada duró " << duracion_llamada << endl;
    cout << "El costo de la llamada es: $" << costo_llamada << endl;

    return 0;
}


