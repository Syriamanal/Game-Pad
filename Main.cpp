#include <iostream>
#include <windows.h>

using namespace std;

void clearscreen();

class Game{
public:
    void Maps(){
        char* currentMap;
        char Map[10][10] = {
                {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#",},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"},
                {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#"}
        };
        int playerRow = 2;
        int playerCol = 2;

        while(true){
            if(GetAsyncKeyState(VK_UP)) {
                playerRow -= 1;
                clearscreen();
            }
            if(GetAsyncKeyState(VK_DOWN)) {
                playerRow += 1;
                clearscreen();
            }
            if(GetAsyncKeyState(VK_RIGHT)) {
                playerCol -= 1;
                clearscreen();
            }
            if(GetAsyncKeyState(VK_LEFT)) {
                playerCol += 1;
                clearscreen();
            }
            

            for(row = 0; row < 10; ++row)
            {
                for(cal = 0; col < 10; ++col)
                {
                    if(row == playerRow && col == playerCol)
                        cout << ">";
                    else
                        cout << currentMap[row][col];
                    if(currentMap[playerRow][playerCol] == "#") {
                        clearscreen();
                        cout << "Game Over!";
                    }
                    else if (currentMap[playerRow][playerCol] == "|"){
                        int playerRow = 2;
                        int playerCol = 2;
                    }
                }
                cout << endl;
            }
        }
        system("pause>nul");
    }
};

int main() {
    Game GP;
    GP.Maps();

    return 0;
}

void clearscreen(){
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}
