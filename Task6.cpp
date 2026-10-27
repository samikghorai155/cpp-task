#include<iostream>
using namespace std;
  int main(){
    int num;
     
    cout<<"Enter a num:";
   cin>>num;
    if (num>0){
     cout<<"Positive";
    }else if (num<0){
   cout<<"Negetive";
    }else{
        cout<<"Zero";
    }

    return 0;
  }