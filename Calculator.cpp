#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;
    cout<< "Enter the value of a" << endl;
    cin >> a;
    cout<< "Enter the value of b" << endl;
    cin >> b;
    cout<<"Enter the operation to be done"<< endl;
    cin >> ch;
    int ans;
    
    switch(ch){
        case '+':
            ans = a + b;
            break;
        
        case '-':
            ans = a - b;
            break;
        
        case '*':
            ans = a * b;
            break;
        
        case '/':
            ans = a / b;
            break;
        
        case '%':
            ans = a % b;
            break;
    }
    cout << ans << endl;
}