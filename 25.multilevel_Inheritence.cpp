#include<iostream>
using namespace std;
class student{
    protected:
       int rollno;
    public:
       void setrollno(int);   
       void getrollno(void);   
};
void student :: setrollno(int r){
    rollno = r;
}
void student :: getrollno(){
    cout<<"The rollno is "<<rollno<<endl;
}
class Exam : public student{
    protected:
      float maths;
      float physics; 
    public:
       void setmarks(float,float);
       void getmarks(void);
};
void Exam :: setmarks(float m1,float m2){
     maths = m1;
     physics = m2;
}
void Exam :: getmarks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}
class result : public Exam{
   float percentage;
   public:
    void display_result(){
        getrollno();
        getmarks();
       cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl; 
    }
};
int main(){
    result harry;
    harry.setrollno(420);
    harry.setmarks(94.0,90.0);
    harry.display_result();
    return 0;
}