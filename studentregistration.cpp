#include<iostream>
#include<string.h>
using namespace std;

class registration{
    public:
         string name;
         int rollno;
         string branch;
         void getdata();
         void display();
};
template<class T>
 void checkeligible(T &per){
    if(per>80){
        cout<<"You are eligible"<<endl;
    }
}
void registration::getdata(){
    cout<<"Please enter your name."<<endl;
    cin>>name;
    cout<<"Enter the rollno"<<endl;
    cin>>rollno;
    cout<<"Enter the branch in which you want to register"<<endl;
    cin>>branch;
}
void registration::display(){
    cout<<"Details"<<endl;
    cout<<name<<"\t"<<rollno<<"\t"<<branch<<endl;
}
int main(){
    registration s;
    int per;
    s.getdata();
    s.display();
    cout<<"Enter the percentage"<<endl;
    cin>>per;
    try{
        if(per==0)
           throw per;
        else
           cout<<per;
    }
    catch(int x){
        cout<<"percentage can't be 0"<<endl;
    }
    checkeligible(per);
    return 0;
}