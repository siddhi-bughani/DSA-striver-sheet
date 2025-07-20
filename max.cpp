#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size=9;
    
    int num[size];
    for (int i = 0; i < size; i++)
    {   
         cin>>num[i];
    }

    int mx=INT_MIN;
     for (int i = 0; i < size; i++)
     {
          if (num[i]>mx)
          {
               mx=num[i];
          }
          
     }
     cout<<"maximum is "<<mx<<endl;
    
    return 0;
}