/*Simulación de Tragamonedas Simple: Crea un programa que simule una máquina tragamonedas. El usuario inicia con 100 monedas y puede apostar
entre 1 y 10 por turno. Se generan tres números aleatorios entre 1 y 5. Si los tres son iguales, gana 10 veces su apuesta. Si hay dos iguales,
gana el doble. Si forman una escalera (por ejemplo como 2-3-4 o 4-3-2), gana 5 veces su apuesta. En cualquier otro caso, pierde lo apostado.
El juego continúa hasta que el jugador se quede sin monedas o decida salir. Usa funciones y números aleatorios*/
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void tragamonedas(){

}

void juego(){
	
	
}

int main(){
	int saldo=100;
	int apuesta, eleccion;
	int salir=0, apuestaSalir=0;
	
	do{
		
    cout << "--- Tragamonedas Simple ---" << endl << endl;
    cout<<"Simulacion de un tragamonedas simple"<<endl;
    cout<<"Realiza tu apuesta y gana... o pierde..."<<endl;
    cout<<"Si te salen 3 numeros iguales, gana por 10 lo apostado~!!!"<<endl;
    cout<<"Si te salen 2 numeros iguales, gana por 2 lo apostado~!!!"<<endl;
    cout<<"Se te sale alguna escalera de numeros, gana por 5 lo apostado~!!!"<<endl;
    cout<<"Escoja la opcion que desee:"<<endl;
    cout<<"1) Comenzar el juego..."<<endl;
	cout<<"2) Mostrar el saldo disponible..."<<endl;
    cout<<"3) Salir del juego..."<<endl<<endl;
    cin>>eleccion;

    switch(eleccion){
    	case 1:{
    		do{
    			cout<<endl<<"Ingrese la cantidad que desea apostar: ";
    			cin>>apuesta;
    		
    			if(apuesta>saldo){
    				cout<<endl<<"Saldo insuficiente para apostar!!! Intente de nuevo..."<<endl;
				}else if(apuesta<=0){
    				cout<<endl<<"No puedes apostar esos valores!!!"<<endl;
    			}else{
					apuestaSalir=1;
				}
			}while(apuestaSalir!=1);
    		
    		juego();
    		
			break;
		}
    	case 2:{
    		cout<<endl<<"Tu saldo es de "<<saldo<<" monedas."<<endl;
    		Sleep(1500);
    		system("cls");
			break;
		}
		case 3:{
			salir=1;
			break;
		}
		default:{
			cout<<endl<<"Opcion invalida, intente de nuevo..."<<endl<<endl;
			Sleep (1500);
			system("cls");
			break;
		}
	}
	
	}while(salir!=1);
	
	cout<<endl<<"Saliendo del juego...";

	return 0;
}