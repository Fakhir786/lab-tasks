#include<iostream>
using namespace std;
//Sum function
int sum(int a,int b)
{
    int c;
     return c=a+b;
}
//Subtraction function
int subtract(int a,int b)
{
    int c;
    return c=a-b;
}
//Multiplication function
int product(int a,int b)
{
    int c;
    return c=a*b;
}
//Division function
float division(int a,int b)
{
    
    float c;
    if(b==0)
    {
        cout<<"Division by zero is not allowed"<<endl;
    }
    else
    { c= a/b;} 
    return c; 
}
//Power function
int power(int base,int exponent)
{
    int c=1;
    for(int i=c;i<=exponent;i++)
    {
        c=c*base;
    }
    return c;
}


int main()
{
    int num1,num2;
    char choice;
    cout<<"Name: Fakhir Ashar Chaudhry"<<endl<<"Sap_id: 72990"<<endl;

    cout<<"1. Addition(+)......."<<endl<<"2. Subtraction(-)......."<<endl<<"3. Multiplication(*)......."<<endl<<"4. Division(/)........"<<endl<<"5. Power(p)........"<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case '+':
        cout<< "Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number "<<endl;
        cin>>num2;
        cout<<"Sum of number is:"<<sum(num1,num2)<<endl;
        break;
        case '-':
        cout<< "Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number "<<endl;
        cin>>num2;
        cout<<"Subtraction of number is:"<<subtract(num1,num2)<<endl;
        break;
        case '*':
        cout<< "Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number "<<endl;
        cin>>num2;
        cout<<"Multiplication of number is:"<<product(num1,num2)<<endl;
        break;
        case '/':      
        cout<< "Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        cout<<"Division of number is:"<<division(num1,num2)<<endl;
        break;
        case 'p':
        cout<< "Enter the base"<<endl;
        cin>>num1;
        cout<<"Enter the exponent"<<endl;
        cin>>num2;
        cout<<"Power of number is:"<<power(num1,num2)<<endl;
        break;
        default:
        cout<<"Invalid fyunction"<<endl;
    }
    return 0;
}