//checks user number input for odd or even number

using namespace std;
#include <iostream>

int main(){
    int inp;
    cout << "Bitte geben sie eine ganze Zahl ein: ";
    cin >> inp;
    if (inp%2 == 0){
        cout << "\nNumber is even";
    }
    else{
        cout << "\nNumber is odd";
    }

}