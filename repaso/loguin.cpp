#include <iostream>
#include <string>

// #define constante
using namespace std;

int main (){
    string nombre;
    string nombre_usuario;
    char contrasena;
    char contrasena1;

    cout << "Ingrese su nombre de usuario: ";
    cin >> nombre;

    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    if (nombre == nombre_usuario && contrasena == contrasena1) { //si tanto la contraseña como el nombre conciden con nombre_usuario contrasena1
        cout << "ingreso exitoso." << endl;//muestra el mensaje de ingreso exoitoso
    } else {
        cout << "Nombre de usuario o contraseña incorrectos. Por favor, inténtelo de nuevo." << endl; // si no, saca error
    }

    return 0;
}