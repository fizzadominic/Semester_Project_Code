#include<iostream>
#include<stdlib.h>  // standard library for clear screen function
using namespace std;

int main()
{
   string start;
   
   string end =  "End";
   cout<<"To start enter : yes";
   cin>>start;
   cout<<endl;
   if(start == "yes" || "Yes"){ 
    int hr =0 , min =0, sec= 0, snanosec = 0;
    while(true){
       system("cls");
       cout<<"                                "<<"   Timer  "<<"                "<<endl;
       cout<<"                                "<< hr<< " : " <<min<<" : " <<sec<<endl;
       snanosec++ ;
       if(snanosec==60){
        sec++;
        snanosec = 0;
        if(sec==60){
            min++;
            sec =0;
            if(min==60){
                hr ++;
                min =0;
            }
        } 
       }
    }
   }
   else{
    cout<<"hey! have a good day :";
   }
 return 0;
}