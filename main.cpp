#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int limite;

    //saisie de l'utilisateur
    do {
        cout << "entrer une valeur [2-1000] : " << endl;
        cin >> limite;

    } while (limite < 2 || limite > 1000);







    return EXIT_SUCCESS;
}