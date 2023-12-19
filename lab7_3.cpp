#include <iostream>
#include <string>
using namespace std;
char before(char letter){
    if(letter <= 'Z' && letter > 'A' ){
        return letter - 1;
    }
    else if(letter == 'A'){
        return 'Z';
    }
    else{
        return 48;
    }
    
}
int main(){
    char B;
    cin >> B;
    cout << before(B);

}