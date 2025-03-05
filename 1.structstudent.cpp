#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int marks;
    float cgp;
    string course;
}s1,s2,s3;
int main(){
    student s1,s2,s3;
    cout<<"Enter s1 name"<<endl;
    cin>>s1.name;
    cout<<"Enter s1 marks"<<endl;
    cin>>s1.marks;
    cout<<"Enter s1 cgp"<<endl;
    cin>>s1.cgp;
    cout<<"Enter s1 course"<<endl;
    cin>>s1.course;

    cout<<"Enter s2 name"<<endl;
    cin>>s2.name;
    cout<<"Enter s2 marks"<<endl;
    cin>>s2.marks;
    cout<<"Enter s2 cgp"<<endl;
    cin>>s2.cgp;
    cout<<"Enter s2 course"<<endl;
    cin>>s2.course;
    
    cout<<"Enter s3 name"<<endl;
    cin>>s3.name;
    cout<<"Enter s3 marks"<<endl; 
    cin>>s3.marks;
    cout<<"Enter s3 cgp"<<endl;
    cin>>s3.cgp;
    cout<<"Enter s3 course"<<endl;
    cin>>s3.course;
    
    cout<<" Name "<<"/t" <<" Marks "<<"/t"<<" cgp "<<" course "<<endl;
// print for s1
    cout<<s1.name<<"\t";
    cout<<s1.marks<<"\t";
    cout<<s1.cgp<<"\t";
    cout<<s1.course<<"\t";
    cout<<endl;
// print for s2
    cout<<s2.name<<"\t";
    cout<<s2.marks<<"\t";
    cout<<s2.cgp<<"\t";
    cout<<s2.course<<"\t";
    cout<<endl;
// print for s3
    cout<<s3.name<<"\t";
    cout<<s3.marks<<"\t";
    cout<<s3.cgp<<"\t";
    cout<<s3.course<<"\t";
    return 0;
}
