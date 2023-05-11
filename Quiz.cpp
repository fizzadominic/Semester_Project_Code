#include <iostream>
#include <Windows.h>
#include <unistd.h>
using namespace std;
void  Basic();
void  Functions();
void  Array();

int main()
{
      cout <<"______________________________________________________________________ "<<endl;
    cout<<"     "<< "        Welcome to C++ challange             " << endl;
    cout <<"______________________________________________________________________ "<<endl; 
     cout<<endl;
    int toStart;
    cout << "Enter 1 to start : ";
    cin >> toStart;  
    if (toStart == 1){
        sleep(1);
        cout << "     About challange   " << endl;
        cout<<endl;
        sleep(1.5);
        cout << "    "<< " This challange is consist of three categories" << endl;
        cout<<endl;
        sleep(1);
        cout<<"      "<<"Catogory 1 : Basic  C++ "<<endl;
        cout<<"      "<<"Catogory 2 : Functions  C++ "<<endl;
        cout<<"      "<<"Catogory 3 : Array  C++ "<<endl;
        sleep(1);
        cout<<endl;
        cout<<"  " << "In this basic C++, all the questions are going to be randomly generated on your screen, questions will be based on the MCQ's"<<endl;
        cout<<endl;
        sleep(1);
        cout<<"     "<< "Basic  C++"<<endl;
        cout<<endl;
        cout<<"          "<< " Loops "<<endl; 
        cout<<"          "<< " Switch Case "<<endl; 
        cout<<"          "<< " Varaibles "<<endl; 
        cout<<"          "<< " Data types "<<endl; 
        cout<<"          "<< " Conditional statments"<<endl; 
        cout<<endl;
        sleep(1);
        cout<<"     "<<"Functions in c++"<<endl;
        cout<<"          "<<"Basics of Function"<<endl;
        cout<<"          "<<"All types of Function"<<endl;
         cout<<endl;
        sleep(1);
        cout<<"     "<<"Array in c++"<<endl;
        cout<<"          "<<"Basics of Array "<<endl;
        cout<<"          "<<"All types of array"<<endl;
        cout<<endl;

        sleep(1);
        cout<<"Each session has 5 questions"<<endl;
        cout<<"Each Question carries a 1 mark"<<endl;
        cout<<"Top Scores will be displayed on the screem"<<endl;
        cout<<"Rank 1 : 10 : "<<endl; 
        cout<<"Rank 2 : 8 : "<<endl; 
        cout<<"Rank 3 : 6 : "<<endl; 
        cout<<"Rank 4 : 4 : "<<endl; 
        cout<<"Rank 5 : 2: "<<endl; 
    }
      sleep(1);
    cout<<"       " <<" Choose the Category you want to answer :"<<endl;
    
    int category;
    cout<<"Catogory 1 : Basic  C++  "<<endl;
    cout<<"Enter  : 1 "<<endl;
    cout<<"Catogory 2 : Functions  C++ "<<endl;
    cout<<"Enter  : 2 "<<endl;
    cout<<"Catogory 3 : Array  C++ "<<endl;
    cout<<"Enter  : 3 "<<endl;
    
    cout<<"Enter Category : ";
    cin>>category;
    if(category==1){
       Basic(); 
    }else if(category==2 ){
       Functions();
    }else{
        Array();
    }
    return 0;
}


void  Basic(){
  cout<<"You chose category one"<<endl;
  int answer;
  int score = 0;
  int wrong = 0;
  string BasicQuestion[50] ={"Who is the founder of C++?", "How many loops are there in c++?"};
  cout<<endl;


  cout<<BasicQuestion[0]<<endl;
  cout<<endl;
  cout<<"Your options are : "<<endl;
  cout<<"1 . Bjarne Stroustrup " <<" \t "<<"\t" << "2. Dennis M. Ritchie"<<endl<<"3 .Guido van Rossum " <<" \t "<<"\t" << "4. Brendan Eich"<<endl;
  cout<<endl;
  cout<<"Enter your answer  : ";

  cin>>answer;
   
  if(answer == 1  ){
     cout<<"Correct Answer!";
     score += 1;
  }else{
    cout<<"Correct answer is option  1 . Bjarne Stroustrup "<<endl;
    cout<<endl;
    wrong +=  1;
    cout<<wrong<<" wrong answer : ";
  }

  
}
void  Functions(){
  cout<<"You chose category two "<<endl; 
}
void  Array(){
  cout<<"You chose category three"<<endl;
}


