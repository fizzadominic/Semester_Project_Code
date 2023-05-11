#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>
#include <stdlib.h>  
using namespace std;

// void basic(); 
void timer();


int main(){   
    cout<<"Baisc challange is about to begin : "<<endl;
    bool start = false;
    if(!start){
       start = true;
        timer();

   int answer;
    int score = 0;
    int wrong = 0;
    
    srand(time(NULL));
       
    int arr[] = {0, 1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    int questions = sizeof(arr) / sizeof(arr[0]);
        for(int i=0; i<questions; i++){
         int randomIndex = rand() % questions;
     

         bool alreadyGenerated = false;
         for(int i=0; i<questions; i++){
         if(arr[i] == randomIndex){
                 alreadyGenerated =true;
         }       break; 

         }
         if(!alreadyGenerated){

         
        //x Q no 01
        if (arr[0] == arr[randomIndex]){
        ifstream file("basic.txt"); 
     
        string line;
        int lineCount =0;
            
            while (getline(file, line) && lineCount < 3)
            {
                lineCount++;
                if (lineCount < 1)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 3)
                {
                    break;
                }
            }
            
          
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;  

            if (answer == 1)
            {  
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else
            {
                cout << "Correct answer is option  1 . Bjarne Stroustrup " << endl;
                cout<<"Introduction: Bjarne Stroustrup is a Danish computer scientist, most notable for the invention and development of the C++ programming language. Stroustrup has served as an adjunct professor of computer science at Columbia University in the City of New York since 2014"<<endl;
                cout << endl<<endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
            }
            
            // system("CLS");
            
        }
        // Q no 02
        if (arr[1] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 6)
            {
                lineCount++;
                if (lineCount < 4)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 6)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  3 . three " << endl;
                cout<<"Explanation :For Loop."<<endl;
                cout<<"While Loop."<<endl;
                cout<<"Do While Loop."<<endl; 
                
                cout <<endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
            }
        }
        //  Q no 03
         if (arr[2] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 9)
            {
                lineCount++;
                if (lineCount < 7)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 9)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  4 . four " << endl;
                cout<<"Explanatiom: Function with no argument and no return value"<<endl;
                cout<<"Function with no argument but return value"<<endl;
                cout<<"Function with argument but no return value"<<endl;
                cout<<"Function with argument and return value."<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
            }
        } 
    }
  }
   } 
  
 return 0;
}

void timer(){
     string start;
   
   string end =  "End";
   cout<<"To start enter  yes : ";
   cin>>start;
   cout<<endl;

    short minutes = 3 , seconds = 0; int time;
   
   time =(minutes !=0)? minutes*60 : 0;
   time += seconds;
   for(int i=time; i>0 ;i-- ){
    system("cls");
    cout<<"the time remaining is 0 : "<<minutes<<":" << seconds<<endl;
     minutes = (i%60==0) ?--minutes:minutes;
     seconds = (seconds==0)?59: --seconds;
    //  system("TIMEOUT 1");
     sleep(1);
     

   }
   system("cls");
   cout<<"***************\n Timer Ended \n********************************************************"<<endl;
 
}