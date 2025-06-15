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
    cout<<endl;
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado6(); Sleep(100); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado3(); Sleep(100); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado5(); Sleep(150); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado2(); Sleep(150); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado4(); Sleep(200); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado1(); Sleep(200); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado3(); Sleep(300); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado6(); Sleep(300); system("cls");
	cout<<"Tu dado que salio es de..."<<endl<<endl;
	dado2(); Sleep(400); system("cls");
	cout<<endl;
}

int mostrarPuntos(int wins1, int wins2){
	int punto;
	cout<<"---"<<wins1<<"-"<<wins2<<"---"<<endl<<endl;
	Sleep(1500);
	system("cls");
	return punto;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int jugada1,jugada2;
    int wins1=0, wins2=0, rondas=1,punto;

    cout << "--- Juego de dados ---" << endl << endl;
    cout<<"Por cada turno el jugador 1 y el jugador 2 tiraran el dado..."<<endl;
    cout<<"Asegurate de presionar enter por cada ronda..."<<endl;
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
        Sleep(1000);
        rondas++;

        if(jugada1>jugada2) {
            cout << "El jugador 1 ha sumado 1 punto..."<<endl;
            wins1++;
            Sleep(2000);
            system("cls");
        } else if(jugada1<jugada2) {
            cout << "El jugador 2 ha sumado 1 punto..."<<endl;
            Sleep(2000);
            system("cls");
            wins2++;
        } else if(jugada1==jugada2) {
            cout<<"Empate~!!!"<<endl;
            Sleep(2000);
            system("cls");
        }
        punto=mostrarPuntos(wins1, wins2);

    } while(wins1<3 && wins2<3);

    if(wins1>wins2) {
        cout<<"Felicidades, Jugador 1 gana~!!!"<<endl;
        cin.get();
    } else {
        cout<<"Felicidades, Jugador 2 gana~!!!"<<endl;
        cin.get();
    }

    return 0;
}