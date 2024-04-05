#include <iostream>

using namespace std;

int main(){
    int number = 0;
    int hops = 0;

    cout << "Enter a number: ";
    cin >> number; // reading input user
    while (number != 1){
        cout << "-> " << number<<endl;
        if(number %2 == 0){
            number = number/2;
        } else {
            number = number * 3 + 1;
        }
        hops++;
    }
    cout<<"-> "<<number<<endl;
    cout<<">> hops: "<<hops<<endl;
    return 0;
}