#include<iostream>

using namespace std;

int main()
{ 
     char op;
     double number1, number2;
     cout<<" Enter the operator :"<< endl;
     cin>>op;

     cout<<" Enter both the numbers :" << endl;
     cin>>number1>>number2;

     switch (op)
     {
     case '+' :/* constant-expression */
        /* code */
        cout<< number1 << "+" << number2 << "=" << number1+number2 << endl;
        break;


     case '-' :/* constant-expression */
        /* code */
        cout<< number1 << "-" << number2 << "=" << number1-number2 << endl;
        break;


     case '*' :/* constant-expression */
        /* code */
        cout<< number1 << "*" << number2 << "=" << number1*number2 << endl;
        break;


     case '/' :/* constant-expression */
        /* code */

        if(number2==0){
            cout<< " Division undefined "<< endl;
        }
        else {
        cout<< number1 << "/" << number2 << "=" << number1/number2 << endl;
        break;
     
     }
     default:
     cout<< op << " is not a defined operator in your library. "<< endl;
     }


    return 0;
}