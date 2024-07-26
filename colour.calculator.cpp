#include<iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    int main()
    { 
      std::string reset ="\033[0m";
      std::string bold="\033[1;1m";
      std::string italic="\033[1;3m";
      std::string underline="\033[1;4m";
      std::string red="\033[1;31m";
      std::string green="\033[1;32m";
      std::string yellow="\033[1;33m";
      std::string magenta="\033[1;35m";
      std::string cyan="\033[1;36m";
      std::string blue="\033[1;94m";
      std::string cyan_background="\033[1;46m";
    
    char choice;
    int a,b;
    float c,d,f,e;
    do{
    cout<<italic<<bold<<"\n*******************\n"<<reset<<reset;
    cout<<italic<<cyan<<"1 : Addition"<<endl<<reset<<reset; 
    cout<<italic<<cyan<<"2 : multiplication"<<endl<<reset<<reset;
    cout<<italic<<cyan<<"3 : Division"<<endl<<reset<<reset;
    cout<<italic<<cyan<<"4 : Subtraction"<<endl<<reset<<reset; 
    cout<<italic<<cyan<<"q : Quit"<<endl<<reset<<reset;
    cout<<italic<<cyan<<"Enter your choice:"<<reset<<reset; 
    cin>>choice;
    switch (choice)
    {
        case '1':
        cout<<italic<<underline<<"Enter the value of a: "<<reset<<reset;
        cin>>a;
        cout<<italic<<underline<<"Enter the value of b: "<<reset<<reset;
        cin>>b;        
        cout<<cyan_background<<italic<<magenta<<"Addition : "<<a<<"+"<<b<<" = "<<(c=a+b)<<reset<<reset<<reset;
        break;
        case '2':
        cout<<italic<<underline<<"Enter the value of a: "<<reset<<reset;
        cin>>a;
        cout<<italic<<underline<<"Enter the value of b: "<<reset<<reset;
        cin>>b;
        cout<<cyan_background<<italic<<green<<" Multiplication : "<<a<<"*"<<b<<" = "<<(d=a*b)<<reset<<reset<<reset;
        break;
        case '3':
        cout<<italic<<underline<<"Enter the value of a: "<<reset<<reset;
        cin>>a;
        cout<<italic<<underline<<"Enter the value of b: "<<reset<<reset;
        cin>>b;
        cout<<cyan_background<<italic<<yellow<<" Division is : "<<a<<"/"<<b<<" = "<<reset<<reset<<reset;
        if(b==0)
        {    
            cout<<italic<<yellow<<"undefined oo"<<reset<<reset<<endl;   
        }
        else 
        {
            cout<<italic<<yellow<<(f=a/b)<<reset<<reset;
        }
        break;
        case '4':
        cout<<italic<<underline<<"Enter the value of a: "<<reset<<reset;
        cin>>a;
        cout<<italic<<underline<<"Enter the value of b: "<<reset<<reset;
        cin>>b;
        cout<<cyan_background<<italic<<magenta<<" subtraction is:  "<<a<<"-"<<b<<" = "<<(f=a-b)<<reset<<reset<<reset;
        if(choice=='q'||choice=='Q')
        {
            cout<<italic<<blue<<"Good Bye"<<reset<<reset;
        }
    }
    }
    while(choice!='q');
    
          return 0;
   }
   