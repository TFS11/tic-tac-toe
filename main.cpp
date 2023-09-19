#include <iostream>

char** playerTurn(char** GF){
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

void printGF(char** gf) {
    std::cout << " " << gf[0][0] << " | " << gf[0][1] << " | " << gf[0][2] << std::endl <<
                "---+---+---" << std::endl <<
                " " << gf[1][0]  << " | " << gf[1][1] << " | " << gf[1][2] << std::endl <<
                "---+---+---" << std::endl <<
                " " << gf[2][0]  << " | " << gf[2][1] << " | " << gf[2][2] << std::endl;
}

int checkGameState(char** gf)
{
    if ((gf[0][0] == 'X' && gf[1][1] == 'X' && gf[2][2] == 'X') or
        (gf[2][0] == 'X' && gf[1][1] == 'X' && gf[0][2] == 'X'))
    {
        return 0;
    }

    if ((gf[0][0] == 'O' && gf[1][1] == 'O' && gf[2][2] == 'O') or
        (gf[2][0] == 'O' && gf[1][1] == 'O' && gf[0][2] == 'O'))
    {
        return 1;
    }

    int used_cells = {0};
    for (int line = 0; line < 3; line++)
    {
        int lines_x_count = 0;
        int lines_o_count = 0;

        for (int ix = 0; ix < 3; ix++)
        {
            if (gf[line][ix] == ' ') {break;}
            if (gf[line][ix] == 'X') {lines_x_count++;};
            if (gf[line][ix] == 'O') {lines_o_count++;};
        }

        int columns_x_count = 0;
        int columns_o_count = 0;

        for (int ix = 0; ix < 3; ix++)
        {
            if (gf[ix][line] == ' ') {break;}
            if (gf[ix][line] == 'X') {columns_x_count++;};
            if (gf[ix][line] == 'O') {columns_o_count++;};
        }

        if (columns_x_count == 3 || lines_x_count == 3) {return 0;};
        if (lines_o_count == 3 || columns_o_count == 3) {return 1;};

        used_cells += columns_x_count + columns_o_count;
    }

    if (used_cells == 9)
    {
        return 2;
    }

    return 3;
}

// 0 - X wins (player)
// 1 - O wins (AI)
// 2 - draw
// 3 - in game

int main() {
    char** gf = new char* [3];

    gf[0] = new char [3] {'O', ' ', ' '};
    gf[1] = new char [3] {' ', 'X', 'O'};
    gf[2] = new char [3] {'O', 'X', 'O'};

    std::cout << checkGameState(gf) << "\n";
    return 0;
}
