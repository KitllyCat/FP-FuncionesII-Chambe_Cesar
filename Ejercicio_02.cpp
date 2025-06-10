#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	srand(time(0));
	
	int n, rang;
	
	cout<<"Ingrese la cantidad de 'n' números que desea generar: ";
	cin>>n;
	cout<<"Ingrese el rango de hasta cuantos numeros desea generar: ";
	cin>>rang;
	
	for(int i=0;i<n;i++){
		int numRand = rand()% rang + 1;
		cout<<"["<<numRand<<"]";
	}
	
	return 0;
}