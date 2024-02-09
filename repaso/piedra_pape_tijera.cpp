#include <iostream>
#include <string>

// #define constante
using namespace std;

int main (){
    int res_usuario;
    int opcion_maquina=0;

    cout<<"¿piedra, papel o tijera?: ";
    cin>> res_usuario;

    switch(opcion_maquina)
    {
        case 1:
            cout << "La computadora eligió Piedra." << endl;
            break;
        case 2:
            cout << "La computadora eligió Papel." << endl;
            break;
        case 3:
            cout << "La computadora eligió Tijera." << endl;
            break;
    }

    if(opcion_maquina==res_usuario){
        cout<<"EMPATE!"<< endl;
    }else if ((res_usuario == 1 && opcion_maquina == 3) || (res_usuario == 2 && opcion_maquina == 1) ||
            (res_usuario == 3 && opcion_maquina == 2)){
       cout<<"GANADOR!"<< endl;
    }else{
        cout<<"PERDEDOR!"<< endl;
    }

    return 0;
}