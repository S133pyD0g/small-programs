//simple Tic Tac Toe game
// true == X; false == O

#include <iostream>
using namespace std;
#include <unistd.h>

char board[] = {'0','1','2','3','4','5','6','7','8'};
bool gameend = false;
bool playersturn = true;

char game(){

    //turn
    int field;
    cout << "input board field you want to place: ";
    cin >> field;
    if (playersturn == true){
        board[field] = char('X');  
        playersturn = false;     
    }
    else{
        board[field] = char('O');
        playersturn = true;
    } 
    
    //print board
    cout<<"   |   |   \n";
    cout<<" "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<" \n";
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<" \n";
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<" \n";
    cout<<"   |   |   \n";

    //win conditions check
    if((board[0]==board[4] and board[0]==board[8])or
    (board[0]==board[3] and board[0]==board[6])or
    (board[0]==board[1] and board[0]==board[2])or
    (board[4]==board[3] and board[4]==board[5])or
    (board[4]==board[1] and board[4]==board[7])or
    (board[4]==board[6] and board[4]==board[2])or
    (board[8]==board[7] and board[8]==board[6])or
    (board[8]==board[5] and board[8]==board[2])){
        gameend = true;
        return board[field];
    }

    return 0;
}


int main(){

    cout<<"   |   |   \n";
    cout<<" "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<" \n";
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<" \n";
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<" \n";
    cout<<"   |   |   \n"; 

    char winner;
    while(gameend==false){
        winner = game();
    }
    cout<<"the winner is "<<winner;
    sleep(5);
}