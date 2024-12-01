#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<cmath>
#include<fstream>
using namespace std;

/*
1) Inicializar dos variables globales (con valores escogidos por ustedes), una entera y otra flotante.

2) Imprimir los valores de las variables en un mensaje: "la primera tiene un valor de XX y la segunda variable tiene un valor de YY"

3) Calcular el valor de la segunda variable dividida por la primera e imprimir : "El resultado es ZZ"

4) Crear un arreglo con 300 números enteros aleatorios entre 0 y 900.
(ejemplos en: https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/ o https://www.cplusplus.com/reference/cstdlib/rand/ o rand - C++ Reference entre otros)

5) Hacer una iteración para recorrer dicho arreglo e imprimir todos sus elementos.

6) Imprimir el quinto elemento del arreglo

7) Obtener la longitud del arreglo e imprimir: "la longitud del arreglo es XX" (use la función size(), mire cppreference)

8) Haga una función que reciba dos variables una flotante llamada mivarflotante y una entera llamada mivarentera y retorne la variable flotante dividida por la variable entera.

9) Llame su función desde la función main e imprima lo que retorna su función para mivarflotante=17.5 y mivarentera=5.

10) Haga una función que retorne el mínimo del arreglo de números aleatorios antes creado

11) Haga una función que reciba el arreglo de números aleatorios antes creado, imprima los números impares y pare de imprimir al encontrar un número mayor a 800

*/






/*para ver mas ejemplos: https://www.w3schools.com/CPP/cpp_variables.asp*/
double div(double mivarflotante, int mivarentera);
int minimo(int n, int* arreglo);
void impares(int n, int* arreglo);
int main() {
    int a = 12;
    double b = 7.56;
    int aleatorio[300];
    cout << "La primera tiene un valor de " << a << " y la segunda variable tiene un valor de " << b << endl;
    cout << "el resultado es: " << b / a << endl;
    for (int i = 0; i < 300; i++) {
        aleatorio[i] = rand() % 902;
    }

    for (int i = 0; i < 300; i++) {
        cout << aleatorio[i] << " ";
    }
    cout << "\n";
    cout << "el quinto elemento del arreglo es: " << aleatorio[4] << "\n";
    int  t = size(aleatorio);
    cout << "el tamaño del arreglo es: " << t << "\n";
    cout << "la división entre 17.5 y 5 es: " << div(17.5, 5) << "\n";
    cout << "el número mínimo encontrado es: " << minimo(t, aleatorio) << endl;
    impares(t, aleatorio);
    ofstream outfile;
    outfile.open("datos.dat");
    for (int i = 0; i < 300; i++) {
      outfile << aleatorio[i] << endl;
    }
    outfile.close();
    
    return 0;

}


double div(double mivarflotante, int mivarentera) {
    return mivarflotante / mivarentera;
}
int minimo(int n, int* arreglo) {
    int min = arreglo[0];
    for (int i = 0; i < n; i++) {
        if (arreglo[i] <= min) {
            min = arreglo[i];
        }
        else continue;
    }
    return min;
}

void impares(int n, int* arreglo) {
    cout << "los números impares encontrados son: \n";
    for (int i = 0; i < n; i++) {
        if (arreglo[i] < 800) {
            if (arreglo[i] % 2 != 0) {
                cout << arreglo[i] << " ";
            }
        }
        else {
	  cout << "Se encontró un numero mayor a 800"<<endl;
            break;
        }
    }

}
