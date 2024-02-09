#include <iostream>
#include <string>

// #define constante
using namespace std;

int main (){
    int res_usuario;
    int opcion_maquina=0;

    cout<<"¿cara o sello?: ";
    cin>> res_usuario;

    switch(opcion_maquina)
    {
        case 1:
            cout << "La computadora eligió CARA." << endl;
            break;
        case 2:
            cout << "La computadora eligió SELLO." << endl;
            break;
    }

    if(opcion_maquina==res_usuario){
        cout<<"GANASTE!"<< endl;
    }else{
       cout<<"PERDISTE!"<< endl;
    }

    return 0;
}