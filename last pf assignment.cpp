#include <iostream>
using namespace std;
int main() {
  
  
  int s,t, sp;
            do{
              cout<<" enter 1 for residential area  and 2 for non residential";
              cin>>t;
              
              if(t==1){
                  cout<<" enter speed";
                  cin>>s;
                  if(s>=50 && s<=65){
                      cout<<" fine is 700";
                  }else if(s>65 && s<=75){
                      cout<<" fine is 1200";
                  }else if( s>75){
                      cout<<" fine is 1500";
                  }else {
                      cout<<" fine is 0";
                  }
                  
                  
        
              }else if(t==2){
                  
                  cout<<" enter speed";
                  cin>>sp;
                  if( sp>=60 && sp<=75){
                      cout<<" fine is 400";
                  }else if(sp>75 && sp<=100){
                      cout<<" fine is 550";
                  }else {
                      cout<<" fine is 700";
                  } 
               
              }
            }while(t!= 1 && t!=2);
            
  return 0;
}
  
            }
  
    
