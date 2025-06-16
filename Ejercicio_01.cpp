#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double radio;
	cout<<"---Calcular área de un circulo---"<<endl<<endl;
	cout<<"Ingrese el radio del circulo: ";
	cin>>radio;
	cout<<"El area del circulo es de "<<(pow(radio, 2)*(M_PI))<<"."<<endl;
	return 0;
}
