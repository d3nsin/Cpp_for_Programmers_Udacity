#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard::Gameboard()
{
    for(int row=0; row<4; row++)
    {
        for(int col=0; col<4; col++)
        {
            gameSpace[row][col] = '-';
        }
    }
}

void Gameboard::setGameSpace(int row,int column, char value) //x,y,or '-' in each game square
{
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
    return gameSpace[row][column];
}

int Gameboard::fourInRow() //four 'x's in any row 'wins'
{
    for(int row=0; row<4; row++)
    {
        int count = 0;
        for(int col=0; col<4; col++)
        {
            if (gameSpace[row][col] == 'x')
            {
                count++;
            }
            if (count == 4)
               return 1;
        }
    }
    return 0;
}


void Gameboard::printInfo() //print the game board in a 4x4 matrix
{
    for(int row=0; row<4; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<gameSpace[row][col]<<" ";
        }
        cout<<"\n";
    }    
}

int main()
{
    Gameboard game1;
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'x');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'x');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'x');
    
    if(game1.fourInRow() == 1)
    {
        cout<<"X got four in a row! \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}