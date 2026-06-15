#include<iostream>
using namespace std;
int main(){
    int num , count =0;
    cout<<"enter a number" ;
    cin>>num;
     int i=num;
     
     while(i>=1){
        if(num%i==0){
            count++;
        }
        i--;
     }
     if(count==2){
        cout<<num<<"  number is prime"<<endl;

     }else{
        cout<<num<<"  number is not prime"<<endl;
     }

    
    return 0;
}