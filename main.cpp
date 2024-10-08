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

    // calcul des nombres premiers et affichage en tableau
    cout << "Voici la liste des nombres premiers : " << endl;

    int count = 0;
    int check = 0;
    for (int i = 1; i <= limite; i++) {
        if (count == 5) {
                cout << endl;
                count = 0;
        }
            if (limite % check == 0) {
                    cout << i << "    ";
                    count++;
            } else {
                check++;
            }
    }


    return EXIT_SUCCESS;
}