#include <iostream>

void PrintGF() {
    char chars[3][3] = {'1', '2', '3',
                       '4', '5', '6',
                       '7', '8', '9'};
    std::cout << chars[0][0] << " | " << chars[0][1] << " | " << chars[0][2] << std::endl <<
                "--+---+--" << std::endl <<
                chars[1][0]  << " | " << chars[1][1] << " | " << chars[1][2] << std::endl <<
                "--+---+--" << std::endl <<
                chars[2][0]  << " | " << chars[2][1] << " | " << chars[2][2] << std::endl;
}
int main() {
    PrintGF();
    return 0;
}
