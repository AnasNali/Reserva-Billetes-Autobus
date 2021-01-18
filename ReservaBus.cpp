#include <iostream>
using namespace std;


int main () {

    double precioMadBase = 18.39;
    double precioBcnBase = 35.25;
    double precioZrgBase = 28.12;
    double precioBioBase = 39.25;
    double precioBase;
    int destino;

    cout << "Selecciona a que destino quieres ir: " << endl;
    cout << "1. Madrid " << endl;
    cout << "2. Barcelona " << endl;
    cout << "3. Zaragoza " << endl;
    cout << "4. Bilbao " << endl;

    cin >> destino;

    if (destino == 1){
        precioBase = precioMadBase;
        cout<< "El billete a Madrid cuesta "<< precioBase << " EUROS"<<endl; 
    }

    if (destino == 2){
        precioBase = precioBcnBase;
        cout<< "El billete a Barcelona cuesta "<< precioBase << " EUROS"<<endl;
    }

    if (destino == 3){
        precioBase = precioZrgBase;
        cout<< "El billete a Zaragoza cuesta "<< precioBase << " EUROS"<<endl;
    }

    if (destino == 4){
        precioBase = precioBioBase;
        cout<< "El billete a Bilbao cuesta "<< precioBase << " EUROS"<<endl;
    }


    else
    {
    cout<< "Introduce un destino valido"<< endl;    
    }

//  APARTIR DE AQUI DECLARAMOS LOS DESCUENTOS

    
    double dtoGeneral = 0.90;
    double dtoEspecial = 0.80;
    double dtoEmpleado = 0.50;
    double descuento;
    int numEmpleado;

    cout << "Tienes uno de los siguientes descuentos para aplicar? " << endl;
    cout << "1. Familia Numerosa General " << endl;
    cout << "2. Familia Numerosa Especial " << endl;
    cout << "3. Empleado " << endl;
    cout << "4. No " << endl;

    cin >> descuento;

    if (descuento == 1){
        cout<<"El precio con descuento Familia Numerosa General es de: "<< precioBase * dtoGeneral << " euros"<<endl;
    }


    if (descuento == 2){
        cout<<"El precio con descuento Familia Numerosa Especial es de: "<< precioBase * dtoEspecial << " euros"<<endl;
        }


    if (descuento == 3){
        cout <<"Introduce tu numero de empleado: " << endl;
        cin>> numEmpleado;
        cout<<"El precio con descuento para el empleado numero: " << numEmpleado << ", es de: "<< precioBase * dtoEmpleado << " euros"<<endl;
    }


    if (descuento == 4){
        cout<<"El precio total sin descuentos es de: "<< precioBase << " euros"<<endl;
    }

        system("PAUSE");
        return 0;
    
}


/* 

Cosas por mejorar: que si se introduce un destino invalido que no de la opción de escoger descuento.

Optimizar el codigo con Arrays.



*/ 