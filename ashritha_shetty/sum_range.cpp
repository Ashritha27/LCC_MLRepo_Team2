/*
Created on Novemberer 08, 2018
@author: ashritha27
*/
//Program to find the sum of numbers in a given range in C++
#include <iostream>

using namespace std;

int main()
{
    int min,max,sum=0;
    cout<<"Enter the limits";
    cin>>min;cin>>max;
    for(int i=min;i<=max;i++){
    sum+=i;
    }
    cout<<sum;
    return 0;
}
