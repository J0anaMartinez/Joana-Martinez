#include <iostream>

using namespace std;

int main(){

int opcion,numeroIngresado, multiplicacionInversa,restaParaMultiplicar;

do{
    cout << "menu de opciones/n";
    cout << "1. Determinar si un anio es bisiesto/n ";
    cout << "2. Tabla de multiplicacion inversar/n ";
    cout << "3. FizzBuzz/n";
    cout << "4. salir/n";
    cin >> opcion;

    switch(opcion){
            case 1: cout << "anio bisiesto";
                int anioBiciesto
     cout << "ingrese un anio " >> endl;
     cin >> anioIngresado;



            break;

            case 2: cout << "Tabla de multiplicacion inversa";
       cout << "ingrese un numero: ";
       cin >> numeroIngresado;


       for (int i = 1; i <= 10; i++){

           restaParaMultiplicar = 11 - i;
            multiplicacionInversa = numeroIngresado*restaParaMultiplicar;
            cout << numeroIngresado << "x" << restaParaMultiplicar << "=" << multiplicacionInversa << endl;

       }
            break;

            case 3: cout << "FizzBuzz/n";
            break;


        }
        cout << endl;

    }while(opcion != 4);



    return 0;
}
