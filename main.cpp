#include <iostream>

int main() {
    int m[4][4];
    int n;
    for (int i = 0; i < 4; i++) {
        for (int l = 0; l < 4; l++) {
            std::cout << "Enter an array element: ";
            std::cin >> n;
            m[i][l] = n;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int l = 0; l < 4; l++) {
            std::cout << m[i][l] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n\n";
    for (int i = 0; i < 4; i++) {
        for (int l = 0; l < 4; l++) {
            if (i != l) {
                m[i][l] = 0;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int l = 0; l < 4; l++) {
            std::cout << m[i][l] << " ";
        }
        std::cout << "\n";
    }
}
