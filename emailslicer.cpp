//input Email as string, it gets split at "@"

using namespace std;
#include <iostream>
#include <string>
#include <unistd.h>

int main(){

    //input
    string email;
    cin >> email;
    
    //find @ position
    int pos;
    for (int i=0; i<email.length(); i++){
        if (email[i] == '@'){
            pos = i;
            //cout << pos << endl;
        }
    }

    //divide into substrings
    string name = email.substr(0, pos);
    string domain = email.substr(pos+1, email.length());

    //output
    cout << "hello " << name << ", your Email is hosted by " << domain;
    sleep(5);
}
