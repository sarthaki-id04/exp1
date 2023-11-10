#include<iostream>
using namespace std;
int main()
{
int a[5];
int sum=0,i;
float avg;
    for(i=0;i<5;i++){
        cin>>a[i];}
    for(i=0;i<5;i++){
        cout<<"array elements are"<<a[i]<<"\n";
            sum=sum+a[i];
        }
    cout<<"sum is "<<sum;
    avg=sum/5;
    cout<<"\naverage is "<<avg;   
    return 0;
}
