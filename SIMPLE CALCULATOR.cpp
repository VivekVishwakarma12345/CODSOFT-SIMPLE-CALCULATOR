#include <iostream>
using namespace std;
//making a 4 function each functions represent opration
//addition, subtraction, multiplication, and division
float sum(float a,float b){
    float sum = (a+b);
    return sum;
}
float sub(float a,float b){
    float sub = (a-b);
    return sub;
}
float mul(float a,float b){
    float mul = (a*b);
    return mul;
}
float div(float a,float b){
    float div = (a/b);
    return div;
}
void print(float a,float b,int operation){
    switch (operation)
    {
    case 1:
        cout << a << '+' << b << '=' << sum(a,b) ;
        break;
    case 2: 
        cout << a << '-' << b << '=' << sub(a,b) ;
        break;
    case 3: 
        cout << a << '*' << b << '=' << mul(a,b) ;
        break;
    case 4: 
        cout << a << '/' << b << '=' << div(a,b) ;
        break;
    }
}
int main(){
    float a;
    cout << "Enter a Number A : " ;
    cin >> a; 
    float b;
    cout << "Enter a Number B : ";
    cin >> b;
    int operation;
    cout << "1 : Addition +  \n2 : Subtraction - \n3 : Multiplication * \n4 : Division / " << endl;
    cout << "ENTER OPERACTION : ";
    // If user gives invalid input 
    // not need to run again the program
    while (true)
    {  
        cin >> operation;
        if(operation < 0 || operation > 4){
            cout << "INVALID OPERACTION TRY AGAIN : ";
        }
        else{ 
            break;
        }
    }
    print(a,b,operation);
    return 0;

}