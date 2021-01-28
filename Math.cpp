#include <iostream>
#include <math.h>
using namespace std;

/*
 *    Created by Pedro Lucas 
 *      Date: 28/01/21
 * 
 *
*/

int main(int argc, char *argv[]){
    int x, calculos_num, tabuada, tabuada_destino; 

    inicio: // Inicio goto
    system("cls"); // Limpa a tela, comando windows
    cout << "[1] Calculos Avancados\n[2] Tabuada\n[3] SAIR\n\n[ESCOLHA]: ";
    cin >> x; // Armazena o Numero


    switch(x){
        case 1:
            system("cls");
            cout << "Numero: ";
            cin >> calculos_num; // Armazena o Numero do calculo

            system("cls");
            cout << "\n[Valor Absoluto]: " << abs(calculos_num); // Valor Absoluto
            cout << "\n[Resto do Numero]: " << calculos_num%2; // Resto(Par 0, Impar 1)
            cout << "\n[Raiz Quadrada]: " << sqrt(calculos_num); // Raiz Quadrada
            cout << "\n[Raiz Cubica]: " << cbrt(calculos_num); // Raiz Cubica
            cout << "\n[Cosseno de x]: " << cos(calculos_num); // Cosseno de x
            cout << "\n[Cosseno hiperbolico]: " << cosh(calculos_num); // Cosseno hiperbolico
            cout << "\n[Seno de x]: " << sin(calculos_num); // Seno do numero
            cout << "\n[Tangente de um angulo]: " << tan(calculos_num) << "\n\n"; // Tangente do Numero
            system("pause"); // Congela o programa, comando do windows 
            goto inicio; // Ir para o inicio
  
        case 2: // Caso for 2
            system("cls");
            cout << "Numero da Tabuada: ";
            cin >> tabuada; // Armazena numero da tabuada
            
            cout << "Onde devo parar?: ";
            cin >> tabuada_destino;

            for(int y = 1; y <= tabuada_destino; y++){
                cout << tabuada << " x " << y << " = " << tabuada*y << "\n";
            }
            
            system("pause");
            goto inicio;
            
            
        case 3:
            return 0;
  }
}