/*Amplía el ejercicio anterior definiendo una función void llamada calcularRaices que reciba los coeficientes de la
ecuación (a, b, c) por valor y las variables donde se almacenarán las raíces por referencia. Además, incluye una
variable por referencia que indique si las raíces son reales o complejas. La función debe calcular las raíces utilizando
la fórmula general y actualizar las variables correspondientes.*/
#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a,double b,double c,double &resul1,double &resul2,bool &esReal){
    
	double discriminante = b*b - 4*a*c;

    if(discriminante >= 0){
        esReal=true;
        resul1=(-b + sqrt(discriminante)) / (2*a);
        resul2=(-b - sqrt(discriminante)) / (2*a);
    }else{
    	esReal=false;
        resul1= -b / (2*a);
        resul2= sqrt(-discriminante) / (2*a);
    }
}

int main(){
    double a,b,c;
    double discriminante,resul1,resul2;
    double resulReal, resulImag;
    bool esReal;

    cout<<"---Calcular Raices Cuadraticas---"<<endl<<endl;
    cout<<"ax^2 + bx + c = 0"<<endl<<endl;
    cout<<"Ingrese el primer coeficiente (a): ";
    cin>>a;
    cout<<"Ingrese el segundo coeficiente (b): ";
    cin>>b;
    cout<<"Ingrese el tercer coeficiente (c): ";
    cin>>c;
    cout<<endl;

    if(a == 0){
        cout<<"No es una ecuacion cuadrática ('a' no puede ser cero)"<<endl;
        return 1;
    }

    calcularRaices(a,b,c,resul1,resul2,esReal);

    if (esReal){
        if (resul1 == resul2){
        	cout<<"Resultado con raiz real doble:"<<endl;
        	cout<<"Resultado es de: "<<resul1<<endl;
        }else{
        	cout<<"Resultado con raices reales y distintas:"<<endl;
        	cout<<"Primer resultado(+): " << resul1<<endl;
        	cout<<"Segundo resultado(-): " << resul2<<endl;
        }
    }else{
        resulReal= resul1;
        resulImag= resul2;
        cout << "Resultado con raices complejas:" << endl;
        cout << "Primer resultado: "<<resulReal<<" + "<<resulImag<<"i"<<endl;
        cout << "Segundo resultado: "<<resulReal<<" - "<<resulImag<<"i"<<endl;
    }
    return 0;
}
