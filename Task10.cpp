#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"Input a year:";
  cin>>year;

  if(year%4==0){
    cout<<"Leap year";
  }else{
    cout<<"Not Leap year";
  }
    return 0;
}