#include<iostream>
using namespace std;
int main(){
 int marks;
  cout<<"Enter marks:";
  cin>>marks;

   if(marks>=90){
    cout<<"A";
   }else if(marks>=75 && marks<90){
    cout<<"B";
   }else if(marks>=50 && marks<75){
    cout<<"C";
   }else{
    cout<<"Fail";
   }

    return 0;
}