#include <iostream>
using namespace std;
int main() {
         int  b,a,room_type, room_cost,staying_days=1,no_of_rooms=1,no_of_meal=1,total_bill,basic_charge, meal_cost;
    
        cout<<" here are the rooms we are offering  : "<<endl;
        cout<<" Standard room ha 3000 per day       : "<<endl;
        cout<<" Delucxe room has 4000 per day       : "<<endl;
        cout<<" Luxury room has 6000 per day        : "<<endl;
        cout<<" Suite room has 8000 per day         : "<<endl;
        
        do{
        cout<<" type 1 for Standard , 2 for Deluxe , 3 for Luxury , 4 for suite  ";
        cin>>a;
        if(a==1){
            room_cost =3000;
            basic_charge=3000;     
            cout<<"enter no_of_rooms  ";
            cin>>no_of_rooms;
                   room_type=1;
                   cout<<"enter statying days  ";
                   cin>>staying_days;
                      room_cost=room_cost*no_of_rooms;
                      room_cost=room_cost*staying_days;
        }else if(a==2){
            room_cost=4000;
                 basic_charge=4000; 
            cout<<"enter no_of_rooms   ";
            cin>>no_of_rooms;
             
                   room_type=2;
                    cout<<"enter statying days  ";
                   cin>>staying_days;
                      room_cost=room_cost*no_of_rooms;
                      room_cost=room_cost*staying_days;
        }else if( a==3){
             room_cost =6000;
          basic_charge=6000; 
            cout<<"enter no_of_rooms  ";
            cin>>no_of_rooms;
                
                   room_type=3;
                    cout<<"enter statying days  ";
                   cin>>staying_days;
                      room_cost=room_cost*no_of_rooms;
                      room_cost=room_cost*staying_days;
        }else if(a==4){
               room_cost =8000;
           basic_charge=8000; 
            cout<<"enter no_of_rooms  ";
            cin>>no_of_rooms;
                 
                   room_type=4;
                   cout<<"enter statying days  ";
                   cin>>staying_days;
                      room_cost=room_cost*no_of_rooms;
                      room_cost=room_cost*staying_days;
                   break;
        }
        }while(a>4);
        
        
        cout<<" here is the  manu of meal : "<<endl;
        cout<<" Breakfast     250 "<<endl;
        cout<<" Lunch         450 "<<endl;
        cout<<" Dinner        395 "<<endl;
        
     do{   
        cout<<" enter 1 for breakfast , 2 for lunch , 3 for Dinner "<<endl;
                     cin>>b;
                if(b==1){
                     cout<<"enter no of brealfast";
                     cin>>no_of_meal;
                     meal_cost=meal_cost*no_of_meal;
                     
                }else if(b==2){
                    cout<<" enter no of lunch ";
                    cin>>no_of_meal;
                    meal_cost=meal_cost*no_of_meal;
                    
                } else if(b==3){
                     cout<<" enter no of dinner ";
                    cin>>no_of_meal;
                    meal_cost=meal_cost*no_of_meal;
                    break;
                }    
     }while(b>3);
     total_bill=meal_cost+ room_cost;
               cout<<"no_of_rooms are   : "<<no_of_rooms<<endl;
               cout<<" room you booked  : "<<room_type<<endl;
               cout<<"staying_days      : "<<staying_days<<endl;
               cout<<"basic room charges: "<<basic_charge<<endl;
               cout<<"cost of room      : "<<room_cost<<endl;
               cout<<"no_of_meals       : "<<no_of_meal<<endl;
               cout<<"cost of meals     : "<<meal_cost<<endl;
               cout<<" total bill is    : "<<total_bill<<endl;
               
}
  
    
