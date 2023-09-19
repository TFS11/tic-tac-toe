#include <iostream>
char** player_turn(char** GF){
    int i,j;
    bool flag= false;
    std :: cout << "Enter coordinates of cross" << std:: endl;
    while(!flag) {
        std:: cin >> i >> j;
        if (i >= 0 && i <= 2 && j >= 0 && j <= 2 && GF[i][j] == ' ') {
            GF[i][j] = 'X';
            flag= true;
        } else { std:: cout << "Enter another coordinates idiot!!!"<< std:: endl; }
    }
    return GF;
}
