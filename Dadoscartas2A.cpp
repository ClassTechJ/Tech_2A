#include <iostream>
#include <time.h> //libreria necesaria para generar número aleatorio.
#include <stdlib.h> //libreria necesaria para generar número aleatorio.
using namespace std;
int main(){ 
    srand(time(NULL)); // Iniciar el número aleatorio.
    cout << "Arrojemos un dado" << endl;
    int dado = 1 + rand() % 6; // Número aleatorio entre 1 a 6.
    cout << "El resultado del dado fue: " << d << endl; 
    if (dado == 1) {
        cout << "Pierdes una carta" << endl;
    } else if (dado == 2){
        cout << "Toma una carta." <<endl;
    } else if (dado == 3){
        cout << "Pierdes 2 cartas" << endl;
    } else if (dado == 4) {
        cout << "Toma dos carta" << endl;
    } else if (dado == 5) {
        cout << "Pierdes toda tu mano de cartas" << endl;
    } else {
        cout << "No haces nada" << endl;
    }
    system("pause");
    return 0;
}
