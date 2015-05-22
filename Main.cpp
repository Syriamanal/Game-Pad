#include <iostream>
#include <windows.h>

using namespace std;

class Game{
public:
    void Maps(){
        char* currentMap;
        char Map[10][10] = {
                {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#"},
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
            if(GetAsyncKeyState(VK_UP))
                playerRow -= 1;
            if(GetAsyncKeyState(VK_DOWN))
                playerRow += 1;
            if(GetAsyncKeyState(VK_RIGHT))
                playerCol -= 1;
            if(GetAsyncKeyState(VK_LEFT))
                playerCol += 1;

            for(row = 0; row < 10; ++row)
            {
                for(cal = 0; col < 10; ++col)
                {
                    if(row == playerRow && col == playerCol)
                        cout << ">";
                    else
                        cout << currentMap[row][col];
                    if(currentMap[playerRow][playerCol] == "#") {
                        system("CLS");
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
                system("pause");
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
    //add
}
