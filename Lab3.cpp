#include <iostream>
#include <math.h>
#include <iomanip>

#define PI  3.1415926535897

using namespace std;

int menu();
int Eluno();
int ElDos();
int ElTres();


int main(){
    char ejecucion = 'y';
    do{
        switch (menu()){
        case 1:{
            Eluno();
            break;
        }
        case 2:{
            ElDos();
            break;
        }
        case 3:{
            ElTres();
            break;
        }
        case 4:
            ejecucion = 'n';
            cout<<"La ejecución ha finalizado "<< endl;
            cout<< "****\\\\Buen dia//****" << endl;
            break;

        } //end switch
    } while (ejecucion != 'n');

    return 0;
}


int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 3 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Ejercicio 1." << endl;
    cout << "2. Ejercicio 2." << endl;
    cout << "3. Ejercicio 3." << endl;
    cout << "4. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}


int Eluno(){
int a,b,c;
	cout<<"Ingrese el valor de x^2: ";
	cin>>a;
	cout<<"Ingrese el valor de x: ";
	cin>>b;
	cout<<"ingrese el valor constante: ";
	cin>>c;





return 0;
}

int ElDos(){

}


int ElTres(){


}
