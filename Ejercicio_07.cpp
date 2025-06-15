/*Juego de Dados por Turnos: Desarrolla un programa que simule un juego entre dos jugadores que lanzan un dado por turnos. Cada dado
genera un número aleatorio entre 1 y 6. El jugador que obtenga el número mayor gana la ronda. El primero en ganar 3 rondas será el
ganador del juego. Muestra el resultado de cada ronda y el marcador acumulado. Usa funciones y números aleatorios (rand de cstdlib).*/
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void dado1() {
    cout << "░░░░░░░░░░░" << endl;
    cout << "░█████████░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░█░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█████████░" << endl;
    cout << "░░░░░░░░░░░" << endl;
    cout << endl;
}

void dado2() {
    cout << "░░░░░░░░░░░" << endl;
    cout << "░█████████░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█████████░" << endl;
    cout << "░░░░░░░░░░░" << endl;
    cout << endl;
}

void dado3(){
    cout << "░░░░░░░░░░░" << endl;
    cout << "░█████████░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░█░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█████████░" << endl;
    cout << "░░░░░░░░░░░" << endl;
    cout << endl;
}

void dado4() {
    cout << "░░░░░░░░░░░" << endl;
    cout << "░█████████░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█████████░" << endl;
    cout << "░░░░░░░░░░░" << endl;
    cout << endl;
}

void dado5() {
    cout << "░░░░░░░░░░░" << endl;
    cout << "░█████████░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░░░█░░░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█████████░" << endl;
    cout << "░░░░░░░░░░░" << endl;
    cout << endl;
}

void dado6() {
    cout << "░░░░░░░░░░░" << endl;
    cout << "░█████████░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█░█░░░█░█░" << endl;
    cout << "░█░░░░░░░█░" << endl;
    cout << "░█████████░" << endl;
    cout << "░░░░░░░░░░░" << endl;
    cout << endl;
}

void dadoAnimacion() {
    cout<<"Tu dado que salio es de..."<<endl;
	dado6(); Sleep(100); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado3(); Sleep(100); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado5(); Sleep(150); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado2(); Sleep(150); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado4(); Sleep(200); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado1(); Sleep(200); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado3(); Sleep(300); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado6(); Sleep(300); system("cls");
	cout<<"Tu dado que salio es de..."<<endl;
	dado2(); Sleep(400); system("cls");
	cout<<endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int jugada1,jugada2;
    int wins1=0, wins2=0, rondas=1;

    cout << "--- Juego de dados ---" << endl << endl;
    cout<<"Por cada turno el jugador 1 y el jugador tiraran el dado..."<<endl;
    cout<<"Presiona enter para comenzar el juego: ";
    cin.get();
    system("cls");

    do {
        cout<<rondas<<"._Ronda: ";
        cin.get();
        system("cls");

        jugada1=rand()%6+1;
        dadoAnimacion();
        
		cout<<"Tu dado que salio es de "<<jugada1<<" caras~!!!"<<endl<<endl;
		
        switch(jugada1){
        	case 1:{
        		dado1();
				break;
			}
			case 2:{
				dado2();
				break;
			}
			case 3:{
				dado3();
				break;
			}
        	case 4:{
        		dado4();
				break;
			}
			case 5:{
				dado5();
				break;
			}
			case 6:{
				dado6();
				break;
			}
			default:{
				cout<<"Error"<<endl;
				break;
			}
		}
        Sleep(2500);

        cout<<"Presiona enter para continuar el juego (jugador 2): ";
        cin.get();
        system("cls");

        jugada2=rand()%6+1;
        dadoAnimacion();
        
        cout<<"Tu dado que salio es de "<<jugada2<<" caras~!!!"<<endl<<endl;
        switch(jugada2){
        	case 1:{
        		dado1();
				break;
			}
			case 2:{
				dado2();
				break;
			}
			case 3:{
				dado3();
				break;
			}
        	case 4:{
        		dado4();
				break;
			}
			case 5:{
				dado5();
				break;
			}
			case 6:{
				dado6();
				break;
			}
			default:{
				cout<<"Error"<<endl;
				break;
			}
		}
        Sleep(2500);
        rondas++;

        if(jugada1>jugada2) {
            cout << "El jugador 1 ha sumado 1 punto..."<<endl;
            wins1++;
            Sleep(2500);
            system("cls");
        } else if(jugada1<jugada2) {
            cout << "El jugador 2 ha sumado 1 punto..."<<endl;
            Sleep(2500);
            system("cls");
            wins2++;
        } else if(jugada1==jugada2) {
            cout<<"Empate~!!!"<<endl;
            Sleep(2500);
            system("cls");
        }

    } while(wins1<3 && wins2<3);

    if(wins1>wins2) {
        cout<<"Felicidades, Jugador 1 gana~!!!"<<endl;
    } else {
        cout<<"Felicidades, Jugador 2 gana~!!!"<<endl;
    }

    return 0;
}