#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout<<"Enter a positive number: ";
    cin>>num;

    n = num;

    do 
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while (num != 0);

    cout<<"The reverse of the number is: "<<rev<<endl;

    if (n == rev){
        cout<<"Number is palindrome"<<endl;
    }
    else 
    {
        cout<<"The Number is not a palindrome"<<endl;
    }

    return 0;
}