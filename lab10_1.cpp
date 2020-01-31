#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"} ;
    cout << "Press Enter 3 times to reveal your future." ;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    cout << " You will get ";
    if ( x == 0 ) { cout << grade[0]; }
    else if ( x == 1 )  cout << grade[1]; 
    else if ( x == 2 )  cout << grade[2]; 
    else if ( x == 3 )  cout << grade[3]; 
    else if ( x == 4 )  cout << grade[4];
    else if ( x == 5 )  cout << grade[5];
    else if ( x == 6 )  cout << grade[6]; 
    else if ( x == 7 )  cout << grade[7]; 
    else if ( x == 8 )  cout << grade[8];
    else  cout << grade[9];
    cout << " in this 261102. " ;

}