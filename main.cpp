#include <iostream>

void PrintGF(char** gf) {
    std::cout << " " << gf[0][0] << " | " << gf[0][1] << " | " << gf[0][2] << std::endl <<
                "---+---+---" << std::endl <<
                " " << gf[1][0]  << " | " << gf[1][1] << " | " << gf[1][2] << std::endl <<
                "---+---+---" << std::endl <<
                " " << gf[2][0]  << " | " << gf[2][1] << " | " << gf[2][2] << std::endl;
}
int main() {
     PrintGF();
    return 0;
}
