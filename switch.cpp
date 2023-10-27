#include <iostream>

using namespace std;

int main(){
    
    int x = 2;

    switch(x){

        case 1: 
            cout << "x is 1\n";
            break;

        case 2:
            // cout << "x is 2\n";
            // break;
        
        case 3: 
            cout << "x is 2 or 3";
            break;

        default: 
            cout <<"x is not 1,2 or 3";
            
    }
    return 0;
}