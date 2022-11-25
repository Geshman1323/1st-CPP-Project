// my first Program
// This will Include header file
#include <iostream>

using namespace std;

// this is the main is function needed to run this program
int main()
{
    // Concept Decover
    // Basics Intro of C++
    // DataTypes ----> LONG , INT , CHAR , STRING , FLOAT , DOUBLE , bool , Long Double .etc.
    // print Method and Geting Input method what ever you say
    // Operaters Including Arithmatic , Logical , assignment , comparison .etc.
    
    int num1 ,num2;
    string name;

    string Dia1 = "Enter Your name ";

    cout<<Dia1<<"\n";
    cin>>name;

    string Dia2 = "Enter 1st number for sum";

    cout<<name<<", "<<Dia2<<"\n";
    cin>>num1;

    string Dia3 = "Enter 2nd number for sum";

    cout<<Dia3<<"\n";
    cin>>num2;

    cout<<num1 + num2;

    return 0; 
}
