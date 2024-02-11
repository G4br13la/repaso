#include <iostream>
#include <cmath> // Para la función sqrt
#include <string>

using namespace std;

int main(){
    double num1, num2;
    char opcion;
    do{ //me va a permitir realizar en juego una y otra vez mientras el usuario quiera segur jugando
        cout << "ingrese primer numero: "<< endl;
        cin>>num1;
        cout << "ingrese segundo numero: "<<endl;
        cin>>num2;

        //operaciones
        cout << "suma: "<< num1+num2<< endl;
        cin>>num1;
        cout << "resta: "<<num1-num2<< endl;
        cin>>num2;
        cout << "multiplicacion: "<<num1*num2<< endl;
        cin>>num2;
        //divicion
        if(num2!=0){//si el segundo numero es decir num2 el denominador es diferente a cero
            cout << "Division: " << num1 / num2 << endl;//los divide
        }else{
            cout << "Division por cero no definida." << endl;// si no dice que no esta definida
        }
        cout << "Cuadrado de num1: " << num1 * num1 << endl;
        cout << "Raiz cuadrada de num2: " << sqrt(num2) << endl;


        cout<<"¿desea continuar?"<<endl;

    } while (opcion == 's');

    cout << "Fin del juego" << endl;

    return 0;
}
