#include <iostream> /* This Will Include a Library / header file to our current project or document this header file is called input output stream */

using namespace std; /* Namspaces dosen't discover yet */

int main() /* All code inside this function would be excuted first and given priority */
{
    // Concept Decover
    // Basics Intro of C++
    // DataTypes ----> LONG , INT , CHAR , STRING , FLOAT , DOUBLE , bool , Long Double .etc.
    // print Method and Geting Input method what ever you say
    // Operaters Including Arithmatic , Logical , assignment , comparison .etc.
    // Basically most of the things i've learnt is similar to previous languages I have learnt in the past
    
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
