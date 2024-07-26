#include <iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
int marks,Class;
string Name, School,Father, Mother, Medium,Dob;
void grade()
{
    if(marks>0&&marks<=100)
    {
        if(marks>=90&&marks<=100) 
        {
            cout<<"Grade A+";
        }
        else if(marks>=80&&marks<=90)
        {
            cout<<"Grade A";
        }
        else if(marks>=70&&marks<=80)
        {
            cout<<"Grade B+";
        }
        else if(marks>=60&&marks<=70)
        {
            cout<<"grade B";
        }
        else if(marks>=50&&marks<=60) 
        {
            cout<<"Grade C+";
        }
        else if(marks>=40&&marks<=50)
        {
            cout<<"Grade C";
        }
        else if(marks>=35&&marks<=40)
        {
            cout<<"Grade D";
        }
        else cout<<"Fail";
    }
    else
     cout<<"Marks should less than 100 ";
}
int main()
 {

    cout<<endl;
    cout<<"Enter Your Name: ";
    getline(cin,Name);
    cout<<"Enter Your class: ";
    cin>>Class;
    cin.ignore();
     cout<<"Enter Your Mother's Name: ";
     getline(cin,Mother);    
    cout<<"Enter Your Father's Name: ";
    getline(cin,Father);  
    cout<<"Enter Your School name: ";
    getline(cin,School);
    cout<<"Enter Date of Birth: ";
    getline(cin,Dob);
    cout<<"Enter Your Medium: ";
    cin>>Medium;
    cout<<"Enter Your marks: "<<endl;
    cout<<"English: ";
    cin>>marks;
    grade();
    float EnglishMarks=marks;
    cout<<endl<<endl<<"Maths: ";
    cin>>marks;
    grade();
    float MathsMarks=marks;
    cout<<endl<<endl<<"Hindi: ";
    cin>>marks;
    grade();
    float HindiMarks=marks;
    cout<<endl<<endl<<"Science: ";
    cin>>marks;
    grade();
    float ScienceMarks=marks;
    cout<<endl<<endl<<"SST: ";
    cin>>marks;
    grade();
    float SstMarks=marks;
    cout<<endl<<endl<<"Sanskrit: ";
    cin>>marks;
    grade();
    cout<<endl;
    float SanskritMarks=marks;
    float percent=((EnglishMarks+MathsMarks+HindiMarks+ScienceMarks+SstMarks+SanskritMarks )*100)/600;
    cout<<endl;
    cout<<"School Name:"<<School<<endl;
    cout<<"Class:"<<Class<<endl;
    cout<< "Student Name :"<<Name<<endl;
    cout<<"Father Name:"<<Father<<endl;
    cout<<"Mother Name:"<<Mother<<endl;
    cout<<"Date of Birth:"<<Dob<<endl;
    cout<<"Medium:"<<Medium<<endl;
    cout<<".Subject"<<".Marks"<<".Total"<<endl;
    cout<<"___________________"<<endl;
    cout<<"|English"<<"  "<<"|"<<EnglishMarks<<"|"<<"100|"<<endl;
    cout<<"|Maths"<<"    "<<"|"<<MathsMarks<<"|"<<"100|"<<endl;
    cout<<"|Hindi"<<"    "<<"|"<<HindiMarks<<"|"<<"100|"<<endl;
    cout<<"|science"<<"  "<<"|"<<ScienceMarks<<"|"<<"100|"<<endl;
    cout<<"|SST"<<"      "<<"|"<<SstMarks <<"|"<<"100|"<<endl;
    cout<<"|Sanskrit"<<" "<<"|"<<SanskritMarks <<"|"<<"100|"<<endl;
    cout<<"___________________";
    int Total=EnglishMarks+MathsMarks+HindiMarks+ScienceMarks+SstMarks+SanskritMarks;
    cout<<endl<<"Grand Total:"<<Total<<endl;
    cout<<"Percentage:"<<percent<<"%"<<endl;
    if(percent>90&& percent>=100) 
    {
        cout<<"Excellent Performance!";
    }
    else if(percent>=80&&percent<=90) 
    {
        cout<<"V.Good performance!";
    }
    else if(percent>=70&&percent<=80) 
    {
        cout<<"Good Performance!";
    }
    else if(percent>=35&&percent<70)
    {
        cout<<"Keep it up!";
    }
    else if(percent<=35)
    {
        cout<<"Bad Performance "<<endl;
        cout<<"You are Fail";
    }
    if(percent>35&&Class<12)
    {
        cout<<"Promoted to Class "<<" "<<Class+1;
    }
    else if(percent>35&&Class==12)
    {
        cout<<endl<<"Best of luck for your college life";
    }
    return 0;
}