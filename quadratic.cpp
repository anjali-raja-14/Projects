    //QUADRATIC EQUATION 
    #include <iostream>
    #include <math.h>
    float a,b,c,root1,root2,delta;
    using std::cout;
    using std::cin;
    using std::endl;
    int main()
    {
    cout<<"Quadratic Equation"<<endl;
    cout<<"ax^2+bx+c(a!=0)"<<endl; 
    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the Value of b: ";
    cin>>b;
    cout<<"Enter the Value of c: ";
    cin>>c;
    delta=b*b-4*a*c;
    if(a==0)
    {
        cout<<" Value of 'a' Should not be Zero"<<endl; 
    } 
    else 
        { 
            if(delta>0)
            {
            root1=(-b+sqrt(delta))/2*a;
            root2=(b+sqrt(delta))/2*a;
            cout<<"Roots are Real and Unequal"<<endl; 
            cout<<"Root 1: "<<root1<<endl;
            cout<<"Root 2: "<<root2;
            }
            else if(delta==0)
            {
            root1=-b/(2*a);
            cout<<" Roots are Real and Equal"<<endl;
            cout<<"Root 1"<<root1;
            cout<<"Root 2"<<root1;
            }
            else 
            { 
            cout<<"Roots are Complex and Imaginary";
            }
        }
    }



