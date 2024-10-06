#include <iostream>

int main() {
    int a, Fact = 1;
    int i;

    std::cout << "Entrez le nombre dont vous voulez connaître la factorielle : ";
    std::cin >> a;

    if (a < 0) {
        std::cout << "Veuillez entrer un nombre positif." << std::endl;
    } else {
        for (i = 1; i <= a; i++) {
            Fact = Fact * i;
        }
        std::cout << "La factorielle de " << a << " est " << Fact << std::endl;
    }

    return 0;
}
