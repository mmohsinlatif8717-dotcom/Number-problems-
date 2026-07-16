#include <iostream>
using namespace std;

int main() {

int n,count;
cout<<"enter number  : ";
cin>>n;
if(n<2){
    cout<<"not";
}
    for(int i=2;i<=n;i++){
        count=0;
        for(int h=2;h<i;h++){
            if(i%h==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<"  ";
        }
    }
}
