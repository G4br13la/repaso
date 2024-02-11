#include <iostream>
#include <string>

// #define constante
using namespace std;

int main (){
    char res_Usuario, Res_Computadora;

    cout<<"¿iniciar juego? (s,n): ";
    cin>>res_Usuario;

    while(res_Usuario=='s'){
        cout << "Elije piedra (r), papel (p) o tijera (t): ";
        cin >> res_Usuario;

        int opcionAleatoria = rand() % 3;
        if (opcionAleatoria == 0){
            Res_Computadora = 'r';
        }else if (opcionAleatoria == 1){
            Res_Computadora = 'p';
        }else{
            Res_Computadora = 't';
        }

        cout<< "respuesya de la computadora: "<< endl;

        if(res_Usuario==Res_Computadora){
            cout<<"Empate"<<endl;
        }else if((res_Usuario == 'r' && Res_Computadora == 't') || (res_Usuario == 'p' && Res_Computadora == 'r') ||
            (res_Usuario == 't' && Res_Computadora == 'p')){
            cout<<"Ganaste!"<<endl;
        }else{
            cout<<"Perdiste :("<<endl;
        }
    }
    return 0;
}