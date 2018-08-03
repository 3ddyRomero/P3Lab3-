#include <iostream>
#include <math.h>
#include <iomanip>

#define PI  3.1415926535897

using namespace std;

int menu();
int Eluno();
double ElDos();
int pascal();
int fact();
int ElTres();
int ElCuatro();
long facto();

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
	case 4:{
	    ElCuatro();
	    break;
	}
        case 5:
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
    cout << "3. Ejercicio 3 (Con Numeros)." << endl;
    cout << "4. Ejercicio 3 (Con Caracteres)." << endl;
    cout << "5. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}


int Eluno(){
int a,b,c,p1=0,contax=0,p2;
int result;
int poli[2];

	cout<<"Ingrese el valor de x^2: ";
	cin>>a;
	cout<<"Ingrese el valor de x: ";
	cin>>b;
	cout<<"ingrese el valor constante: ";
	cin>>c;
	
	/*for(int i = 0;i<=poli.length();i++){
		
	}*/

	poli[a];
       	poli[b];
	poli[c];

	int bcuad = pow(b,2);
	
	int interior = bcuad-(4*a*c);

	if(interior<0){
		cout<<"****No es Factorizable****"<<endl;
	}else{
		result = -b + sqrt(interior);
		cout<<"(x + "<<(result/2*a)*-1<<")"
		    <<"(x + "<<(result/2*a)*-1<<")"<<endl;

	}


return 0;
}

double ElDos(){
double x;
double rad;
double a,b;

cout<<"Ingrese el grado: ";
cin>>x;

rad = x * (180/PI);
for(int i=0;i<=15;i++){
     a = ((pow(-1,i)) / facto((2*i)+1)) * pow(rad,(2*i)+1);

}



return 0.0;

}

long facto(int n){
{
    if(n<2){

        return 1;
    }else{

        return n * fact(n-1);
    }

}


int fact(int n){
    if(n<2){
	    
        return 1;
    }else{
	    
        return n * fact(n-1);
    }
}

int pascal(int a, int b){

	if(b == 1){
	   return a;
	}else{
        if (a == b)
            return 1;
        else{
            return fact(a)/ (fact(b) * fact(a - b));
	}
    }

}



int ElTres(){
int SIZE; 
int t=30;


        cout<<"Ingrese el tamaño de la secuaencia: "<<endl;
	cin>>SIZE;

    for(int i=0; i<=SIZE; i++) {
	     cout<<setw(t-i);
        for(int c = 0; c<=i; c++)
      	     
	cout << pascal(i, c) << " ";
	    
	cout<<endl;
    }

    return 0;
}

int ElCuatro(){
int SIZE;
int t=30;
 
 
         cout<<"Ingrese el tamaño de la secuaencia: "<<endl;
         cin>>SIZE;
 
     for(int i=0; i<=SIZE; i++) {
              cout<<setw(t-i);
         for(int c = 0; c<=i; c++)
           if (i%2==0)    
         //cout << pascal(i, c) << " ";
             cout<<" * ";        
           else 
              cout<<" . ";
         cout<<endl;
     }
 
     return 0;


}
