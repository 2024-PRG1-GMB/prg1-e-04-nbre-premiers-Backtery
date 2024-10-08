#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int limite;
    string recommencer;

    do {
        //saisie de l'utilisateur
        do {
            cout << "entrer une valeur [2-1000] : ";
            cin >> limite;

        } while (limite < 2 || limite > 1000);

        cout << "Voici la liste des nombres premiers : " << endl;

        int count = 0;

        // calcul des nombres premiers
        for (int n = 2; n <= limite; n++) {
            bool premier = true;
            if (count == 5) {
                cout << endl;
                count = 0;
            }

            for (int j = 2; j < n; j++) {
                if (n % j == 0) {
                    premier = false;
                    break; //évite de calculer le reste
                }
            }

            // affichage en tableau
            if (premier) {
                cout << n << "\t";
                count++;
            }
        }
        do {
            cout << "Voulez-vous recommencer [O/N] ? : ";
            cin >> recommencer;

        //vérifie que cela ne soit que O ou N.
        } while (recommencer != "O" && recommencer != "N");
    } while (recommencer == "O");

    return EXIT_SUCCESS;
}