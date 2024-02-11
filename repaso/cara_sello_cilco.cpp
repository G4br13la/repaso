#include <iostream>
#include <string>

// #define constante
using namespace std;

int main (){
    char res_usuario;
    char opcion_maquina;
    char jugarNuevamente;

    do{
    cout<<"¿cara (c) o sello (s)? ";
    cin>> res_usuario;

    int resultado = rand() % 2;

    if (resultado == 0) {
        opcion_maquina='c';
        cout << "El computador escogio cara" << endl;
    } else {
        opcion_maquina='s';
        cout << "El computador escogio sello" << endl;
    }

    cout<< "respuesta de la computadora: "<< opcion_maquina << endl;

    if(res_usuario==opcion_maquina){
        cout<<"Empate"<<endl;
    }else if((res_usuario == 'c' && opcion_maquina == 's') || (res_usuario == 's' && opcion_maquina == 'c')){
        cout<<"Ganaste!"<<endl;
    }

    cout << "¿Quieres jugar otra vez? (s/n): ";
    cin >> jugarNuevamente;

    } while (jugarNuevamente == 's');

    cout << "¡Gracias por jugar!" << endl;

    return 0;
}