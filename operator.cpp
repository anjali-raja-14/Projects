#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int choice;
    int result;
    int result1;
    int a,b;
    cout<<"Choice 1: Arithmetic Operator"<<endl;
    cout<<"Choice 2: Increment/Decreament Operator"<<endl;
    cout<<"Choice 3: Relational Operator"<<endl;
    cout<<"Choice 4: Logical Operator"<<endl;
    cout<<"Choice 5: Conditional Operator"<<endl;
    cout<<"Choice 6: Other Operator\n\n";
    cout<<"Enter your Choice: ";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
        case 1: cout<<"Enter the First Number: ";
                cin>>a;
                cout<<"Enter the Second Number: ";
                cin>>b;
                cout<<endl;
                cout<<"ARITHMETIC OPERATOR\n\n";
                cout<<"Choice 1: Addition Operator(+)"<<endl;
                cout<<"Choice 2: Multiplication Operator(*)"<<endl;
                cout<<"Choice 3: Division  Operator(/)"<<endl;
                cout<<"Choice 4: Subtraction Operator(-)"<<endl;
                cout<<"Choice 5: Modulus Operator(%)"<<endl<<endl;
                int ch;
                cout<<"Enter your Choice:";
                cin>>ch;
                cout<<endl;
                switch (ch)
                {
                    case 1: cout<<"Addition is: ";
                            result=a+b;
                            cout<<result;
                            break;
                    case 2: cout<<"Multiplication is: ";
                            result=a*b;
                            cout<<result;
                            break;
                    case 3: cout<<"Division is: ";
                             if(b==0)
                        {
                             cout<<"Undefined";
                        }
                             else
                        { 
                             result=a/b;
                             cout<<result;
                        }
                            break;
                    case 4: cout<<"Subtraction is ";
                            result=a-b;
                            cout<<result;
                    default: cout<<"Wrong Choice!!!";
                }
                break;
        
        case 2: cout<<"INCREMENT/DECREMENT OPERATOR\n\n";
                cout<<"Choice 1: Prefix Increment Operator"<<endl;
                cout<<"Choice 2: Prefix Decrement Operator"<<endl;
                cout<<"Choice 3: Postfix Increment Operator"<<endl;
                cout<<"Choice 4: Postfix Decrement Operator"<<endl<<endl;
                int c;
                cout<<"Enter Your Choice: ";
                cin>>c;
                cout<<endl;
                switch(c)
                {
                    int a,b;
                    cout<<"Enter the Value of a: ";
                    cin>>a;
                    cout<<"Enter the Value of b: ";
                    cin>>b;
                    cout<<endl;
                    case 1: cout<<"Prefix Increment Operator: \n\n";
                            b=++a;
                            cout<<"The Value of b is: "<<b<<endl;
                            cout<<"The Value of a is: "<<a<<endl;
                            break;
                    case 2: cout<<"Prefix Decrement Operator: \n\n";
                            b=--a;
                            cout<<"The Value of b is: "<<b<<endl;
                            cout<<"The Value of a is: "<<a<<endl;
                            break;
                    case 3: cout<<"Posfix Increment Operator: \n\n";
                            b=a++;
                            cout<<"The Value of b is: "<<b<<endl;
                            cout<<"The Value of a is: "<<a<<endl;
                            break;
                    case 4: cout<<"Postfix Decrement Operator: \n\n";
                            b=a--;
                            cout<<"The Value of b is: "<<b<<endl;
                            cout<<"The Value of a is: "<<a<<endl;
                            break;
                }
                break;
        case 3: cout<<"Enter the Value of a: ";
                cin>>a;
                cout<<"Enter the Value of b: ";
                cin>>b;
                cout<<endl;
                cout<<"RELATIONAL OPERATOR\n\n";
                cout<<"Choice 1: Comparison(==)"<<endl;
                cout<<"Choice 2: Less than(<)"<<endl;
                cout<<"Choice 3: Less than or Equal to(<=)"<<endl;
                cout<<"Choice 4: Greater than (>)"<<endl;
                cout<<"Choice 5: Not Equal to(>=)"<<endl<<endl;;
                int ch1;
                cout<<"Enter the Choice: ";
                cin>>ch1;
                cout<<endl;
                switch(ch1)
                {
                    case 1: cout<<"COMPARISON\n\n";
                            result=a==b;
                            cout<<result;
                            break;
                    case 2: cout<<"LESS THAN\n\n";
                            result=a<b;
                            cout<<result;
                            break;
                    case 3: cout<<"LESS THAN OR EQUAL TO\n\n";
                            result=a<=b;
                            cout<<result;
                            break;
                    case 4: cout<<"GREATER THAN\n\n";
                            result=a>b;
                            cout<<result;
                            break;
                    case 5: cout<<"GREATER THAN OR EQUAL TO\n\n";
                            result=a>=b;
                            cout<<result;
                            break;
                    case 6: cout<<"NOT EQUAL TO\n\n";
                            result=a!=b;
                            cout<<result;
                            break;
                }
                break;
        case 4: cout<<"Enter the Value of a: ";
                cin>>a;
                cout<<"Enter the Value of b: ";
                cin>>b;
                cout<<endl<<"LOGICAL OPERATOR\n\n";
                cout<<"Choice 1: And Operator"<<endl ;
                cout<<"Choice 2: Or Operator"<<endl;
                cout<<"Choice 3: Not Equal to Operator"<<endl<<endl;
                int ch2;
                cout<<"Enter Your Choice: ";
                cin>>ch2;
                cout<<endl;
                switch(ch2)
                {
                    case 1: cout<<endl<<"And Operator\n\n";
                            result=a&&b;
                            cout<<a<<"&&"<<b<<" is: ";
                            cout<<result;
                            break;
                    case 2: cout<<"Or Operator\n\n";
                            result=a||b;
                            cout<<a<<"||"<<b<<" is: ";
                            cout<<result;
                            break;
                    case 3: cout<<"Not Equal to Operator\n\n";
                            result=(a!=b);
                            cout<<a<<"!="<<b<<" is: ";
                            cout<<result ;
                            break;
                }   
                break;
        case 5: cout<<"Enter the Different Values: \n\n";
                cout<<"Enter the Value of a: ";
                cin>>a;
                cout<<"Enter the Value of b: ";
                cin>>b;
                cout<<endl<<"CONDITIONAL OPERATOR\n\n";
                result=a>b?a:b;
                cout<<result;
                break;
        case 6: cout<<"Enter the Value of a: ";
                cin>>a;
                cout<<"Enter the Value of b: ";
                cin>>b;
                cout<<endl<<"OTHER OPERATOR\n\n";
                cout<<"It will find the Size of a and b\n\n";
                result=sizeof(a);
                cout<<"Size of "<<a<<" is: "<<result;
                result1=sizeof(b);
                cout<<"Size of "<<b<<" is: "<<result1;
                break;
        case 7:
        cout<<"Wrong Choice!!!";
    }
}