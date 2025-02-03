#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum,multiply,subtract;
    float divide;
    char operaters;
    cout<<"Enter your number one :";
    cin>>num1;
    cout<<"Use the following rules (+.-,*,/)";
    cin>>operaters;
    cout<<"Enter your number second :";
    cin>>num2;
switch(operaters){
    case '+':
    sum = num1 + num2;
    cout<<"The sum of the two numbers is :" << sum << endl;
    break;
    case '-':
    subtract = num1 - num2;
    cout<<"The subtraction of the two numbers is :" << subtract << endl;
    break;
    case '*':
    multiply = num1 * num2;
    cout<<"The multiplication of the two numbers is :"<< multiply <<endl;
    break;
    case '/':
    if(num1 != 0){
    divide = num1 / num2;
    cout<<"The divition of the two numbers is :" << divide << endl;
    }
    else{
        cout<<"The xero numbers is entered:" << endl;
    }
    default:
    cout<<"Invalid operation used"<<endl;
    break;

    }
    return 0;
}
