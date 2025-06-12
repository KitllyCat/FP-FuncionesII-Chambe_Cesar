/*Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y tijeras contra
la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora generará su jugada de forma
aleatoria. El programa determinará el ganador de cada ronda según las reglas del juego. El juego continuará hasta
que el usuario o la computadora gane 3 rondas. Muestra el resultado final indicando el ganador del juego.*/
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	srand(time(0));
	int com_eleccion, eleccion;
	char com_jugada, jugada;
	char p,r,t; //p = papel, r = piedra, t = tijera

	do{
		cout<<endl<<"---Piedra, papel o tijera---"<<endl;
		cout<<"Ingrese su eleccion():"<<endl;
		cout<<"1)Piedra"<<endl;
		cout<<"2)Papel"<<endl;
		cout<<"3)Tijera"<<endl;
		cin>>eleccion;
		
		if (eleccion>4||eleccion<0){
			cout<<"Eleccion no valida!!!"<<endl;
		}
		
	}while(eleccion>4||eleccion<0);
	
	cout<<"Tu jugada es de '";
	
	if(eleccion==1){
		jugada=r;
		cout<<"piedra'"<<endl;
	}else if(eleccion==2){
		jugada=p;
		cout<<"papel'"<<endl;
	}else{
		jugada=t;
		cout<<"tijera'"<<endl;
	}
	
	cout<<"La jugada de la maquina es de...  '";	
	com_eleccion = rand()%3+1;
	
	if(com_eleccion==1){
		com_jugada=r;
		cout<<"piedra'"<<endl;
	}else if(com_eleccion==2){
		com_jugada=p;
		cout<<"papel'"<<endl;
	}else{
		com_jugada=t;
		cout<<"tijera'"<<endl;
	}	
	        
	return 0;
}
