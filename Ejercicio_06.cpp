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
	int wins=0, com_wins=0;
	//se quito porque al final resulto siendo basura

	do{
		cout<<endl<<"---Piedra, papel o tijera---"<<endl;
		cout<<"Ingrese su eleccion(1,2,3):"<<endl;
		cout<<"1)Piedra"<<endl;
		cout<<"2)Papel"<<endl;
		cout<<"3)Tijera"<<endl;
		cin>>eleccion;
		
		cout<<"Tu jugada es de '";
	
		if(eleccion==1){
			cout<<"piedra'"<<endl;
		}else if(eleccion==2){
			cout<<"papel'"<<endl;
		}else{
			cout<<"tijera'"<<endl;
		}
	
		cout<<"La jugada de la maquina es de...  '";	
		com_eleccion = rand()%3+1;
	
		if(com_eleccion==1){
			cout<<"piedra'"<<endl;
		}else if(com_eleccion==2){
			cout<<"papel'"<<endl;
		}else{
			cout<<"tijera'"<<endl;
		}
		
		switch(eleccion){
        	case 1: // Piedra
        	    if (com_eleccion == 1){
        	        cout<<"Empate"<<endl;
        	    }else if (com_eleccion == 2){
        	        cout<<"Perdiste"<<endl;
        	        com_wins++;
				}else{
        	        cout<<"Ganaste"<<endl;
        	        wins++;
        	    }
        	    break;
        	case 2: // Papel
        	    if (com_eleccion == 1){
        	        cout<<"Ganaste"<<endl;
        	        wins++;
        	    }else if(com_eleccion == 2){
        	        cout<<"Empate"<<endl;
        	    }else{
        	        cout<<"Perdiste"<<endl;
        	        com_wins++;
        		}
        	    break;
        	case 3: // Tijera
        	    if (com_eleccion == 1){
        	        cout<<"Perdiste"<<endl;
        	        com_wins++;
				}else if (com_eleccion == 2){
        	        cout<<"Ganaste"<<endl;
        	        wins++;
        	    }else{
        	        cout<<"Empate"<<endl;
        	    }
        	    break;
        	default:
        	    cout<<"Opción inválida"<<endl;
        	    break;
    	}
    	cout<<endl<<"Actualmente vas "<<wins<<" victorias y la computadora va "<<com_wins<<" victorias."<<endl;
    	
	}while(wins<3 && com_wins<3);

	if(wins == 3){
		cout<<"¡Ganaste el juego!"<<endl;
	}else{
		cout<<"La computadora ganó el juego. ¡Mejor suerte la próxima vez!"<<endl;
	}
	
	return 0;
}
