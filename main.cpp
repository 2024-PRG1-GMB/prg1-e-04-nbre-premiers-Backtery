#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int limite;

    //saisie de l'utilisateur
    do {
        cout << "entrer une valeur [2-1000] : ";
        cin >> limite;

    } while (limite < 2 || limite > 1000);

    int count = 0;
    // calcul des nombres premiers
    for (int i = 2; i <= limite; i++) {
            if (count == 5) {
                cout << endl;
                count = 0;
            }
            if (i % 2 != 0) {
                if (i % 3 != 0) {
                    cout << i << "    ";
                    count++;
                }
            }

    }


    /*affichage en tableau
    cout << "Voici la liste des nombres premiers" << endl;

    for (int j = 0; j < limite; j++) {
        for (int k = 0; k < 5; k++) {
            cout << "*";
            cout << "   ";
        }
        cout << endl;


    };*/




    return EXIT_SUCCESS;
}