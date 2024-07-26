#include<iostream>
using namespace std;
int main()
{
    string reset="\033[0m";
    string red="\033[1;31m";
    string green="\033[1;32m";
    string yellow="\033[1;33m";
    string blue="\033[1;94m";
    string magenta="\033[1;35m";
    string cyan="\033[1;36m";
    string bold="\033[1;1m";
    string underline="\033[1;4m";
    string italic="\033[1;3m";
    string background="\033[1;47m";
    int a,b,c,d,e;
    cout<<bold<<"******************************************\n"<<reset;
    cout<<underline<<"Select the One Game\n "<<reset;
    cout<<bold<<"Remember your answer is in (0 and 1)only\n"<<reset;
    cout<<blue<<"->Basketball\n"<<reset;
    cout<<blue<<"->Volleyball\n"<<reset; 
    cout<<blue<<"->Football\n"<<reset;
    cout<<blue<<"->Cricket\n"<<reset;
    cout<<blue<<"->Badminton\n"<<reset;

    cout<<underline<<"\nSection 1\n"<<reset;
    cout<<yellow<<"Swimming\n"<<reset;
    cout<<yellow<<"Volleyball\n"<<reset;
    cout<<yellow<<"Soccer\n"<<reset;
    cout<<yellow<<"Tennis\n"<<reset;
    cout<<yellow<<"Badminton\n"<<reset;
    cout<<italic<<"Is your Game here:"<<reset;
    cin>>a;

    cout<<underline<<"\nsection 2\n"<<reset;
    cout<<green<<"football\n"<<reset;
    cout<<green<<" Tennis\n"<<reset;;
    cout<<green<<"Cricket\n"<<reset;;
    cout<<green<<"Swimming\n"<<reset;;
    cout<<green<<"Soccer\n"<<reset;;
    cout<<italic<<"Is your Game here: "<<reset;
    cin>>b;

    cout<<underline<<"\nsection 3\n"<<reset;
    cout<<magenta<<"Volleyball\n"<<reset;
    cout<<magenta<<"Soccer\n"<<reset;
    cout<<magenta<<"Tennis\n"<<reset;
    cout<<magenta<<"Swimming\n"<<reset;
    cout<<magenta<<"Hockey\n"<<reset;
    cout<<italic<<"Is your Game here: "<<reset;
    cin>>c;

    cout<<underline<<"\nsection 4\n"<<reset;
    cout<<cyan<<"soccer\n"<<reset;
    cout<<cyan<<"football\n"<<reset;
    cout<<cyan<<"Swimming"<<reset;
    cout<<cyan<<" Tennis\n"<<reset;
    cout<<cyan<<"Basketball\n"<<reset;
    cout<<italic<<"Is your Game here: "<<reset;
    cin>>d;
    
    cout<<underline<<"\nsection 5\n"<<reset;
    cout<<red<<"Basketball\n"<<reset;
    cout<<red<<" Tennis\n"<<reset;
    cout<<red<<"Swimming\n"<<reset;
    cout<<red<<"Cricket\n"<<reset;
    cout<<red<<"Hokey\n"<<reset;
    cout<<italic<<"Is your Game here: "<<reset;
    cin>>e;
    if(d==1&&e==1)
    {
        cout<<background<<"Your Game is BASKETBALL"<<reset;
    }
    else if(a==1&&c==1)
    {
        cout<<background<<"Your game is VOLLEYBALL"<<reset;
    }
    else if(b==1&&d==1)
    {
        cout<<background<<"Your Game is FOOTBALL"<<reset;
    }
    else if(b==1&&e==1)
    {
        cout<<background<<"Your Game is CRICKET"<<reset;
    }
    else if(a==1)
    {
        cout<<background<<"Your Game is BADMINTON"<<reset;
    }
return 0;
}




