#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int Even = 0;
    int Odd = 0;
    
    while(num!=0){  
    cout << "Enter an integer: ";
    cin >> num;
    if(num != 0){
    if(num%2==0){
    Even++;
    }
    else{
    Odd++;
    } 
    }
    }
    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd << "\n";
    return 0;
}
