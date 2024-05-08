/* El siguiente código simula el tirar un dado dentro de un videojuego 
  usando un numero aleatorio entre 1 a 6.
  Dependiendo del resultado se tomara una acción:
  dado = 5 o dado = 2 -> "El personaje se movera"
  dado = 3 o dado = 1 -> "El personaje retrocedera"
  dado = 6 o dado = 4 -> "El personaje se quedara quieto"*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){ 
    srand(time(NULL));
    int d = 1 + rand() % 6;
    cout << "La tirada lanzo un " << d << endl; 
    if (d == 5 || d == 2){
        cout << "El personaje se mueve." <<endl;
    } else if (d == 3 || d == 1) {
        cout << "El personaje retrocede" << endl;
    } else {
        cout << "El personaje se queda quieto" << endl;
    }
    system("pause");
    return 0;
}
