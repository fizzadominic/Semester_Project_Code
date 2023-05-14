//  FIZZA DOMINIC KHOKHAR
//  ID: SP23-BSCS-0029
#include <iostream>
#include <Windows.h> // for adding delay after each cout statment
#include <unistd.h>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <fstream>
using namespace std;

void  Basic();
void  Functions();
void  Array();

bool timeUp()   // timer function
{
    static std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point current = std::chrono::steady_clock::now();
    int timeElapsed = std::chrono::duration_cast<std::chrono::seconds>(current - begin).count();
    // Define total time
    int totalTime = 10;
    if (timeElapsed > totalTime)
    {
        return true;
    }

    return false;
}

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
    int maxAnswers = 0;
    int answer;
    int attempt= 0;
    int score = 0;
    int wrong = 0;
    
    srand(time(NULL));

    int arr[] = {0, 1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};
    int questions = sizeof(arr) / sizeof(arr[0]);
    
        

        for(int i=0; i<questions; i++){   
         int randomIndex = rand() % questions;
     

         bool alreadyGenerated = false;
         for(int i=0; i<questions; i++){
         if(arr[i] == randomIndex){
                alreadyGenerated =true;
                break; 
         }      

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
                cout<<endl;
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
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else
            {
                cout << "Correct answer is option  1 . Bjarne Stroustrup " << endl;
                cout<<"\n";
                cout<<"Introduction: Bjarne Stroustrup is a Danish computer scientist, most notable for the invention and development of the C++ programming language. Stroustrup has served as an adjunct professor of computer science at Columbia University in the City of New York since 2014"<<endl;
                cout << endl;
                wrong += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                attempt += 1;
            }
            
            // system("CLS");
            if(timeUp() == true){
                       break;

                }
            
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
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  3 . three " << endl;
                cout<<"\n";
                cout<<"Explanation :For Loop."<<endl;
                cout<<"While Loop."<<endl;
                cout<<"Do While Loop."<<endl; 
                
                cout <<endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

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
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  4 . four " << endl;
                cout<<"\n";
                cout<<"Explanatiom: Function with no argument and no return value"<<endl;
                cout<<"Function with no argument but return value"<<endl;
                cout<<"Function with argument but no return value"<<endl;
                cout<<"Function with argument and return value."<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 04 
         if (arr[3] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 12)
            {
                lineCount++;
                if (lineCount < 10)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 12)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  3.  Heap " << endl;
                cout<<"\n";
                cout<<"Explanation:Static methods are stored in Metaspace space of native heap as they are associated to the class in which they reside not to the objects of that class. But their local variables and the passed arguments are stored in the stack. "<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 05 
        if (arr[4] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 14)
            {
                lineCount++;
                if (lineCount < 13)
                {
                    continue;
                }
                
                cout << line<<endl;
                if (lineCount == 14)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  2. NO" << endl;
                cout<<"\n";
                cout<<"Expalanation: Names can contain letters, digits and underscores"<<endl;
                cout<<"Names must begin with a letter or an underscore (_)"<<endl;
                cout<<"Names are case sensitive (myVar and myvar are different variables)"<<endl;
                cout<<"Names cannot contain whitespaces or special characters like !, #, %, etc."<<endl;
                cout<<"eserved words (like C++ keywords, such as int) cannot be used as names"<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 06
        if (arr[5] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 19)
            {
                lineCount++;
                if (lineCount < 15)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 19)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 3. C++ supports both procedural and object oriented programming language  " << endl;
                cout<<"\n";
                cout<<"Explanation: C++ supports both procedural(step by step instruction) and object oriented programming (using the concept of classes and objects)."<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 07
        if (arr[6] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 22)
            {
                lineCount++;
                if (lineCount <20)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 22)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  2. #include “userdefined” " << endl;
                cout<<"\n";
                cout<<"Explanation: C++ uses double quotes to include a user-defined header file. The correct syntax of including user-defined is #include “userdefinedname” "<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 08
        if (arr[7] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 25)
            {
                lineCount++;
                if (lineCount <23)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 25)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option   4. both // comment or /* comment */ " << endl;
                cout<<"\n";
                cout<<"Explanation: Both the ways are used for commenting in C++ programming. // is used for single line comments and /* … */ is used for multiple line comments."<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 09
       if (arr[8] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 28)
            {
                lineCount++;
                if (lineCount <26)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 28)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option   3. h  " << endl;
                cout<<"\n";
                cout<<"Explanation: .h extensions are used for user defined header files. To include a user defined header file one should use #include”name.h” i.e. enclosed within double quotes."<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 010
       if (arr[9] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 31)
            {
                lineCount++;
                if (lineCount <29)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 31)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option   1.  VAR_1234   " << endl;
                cout<<"\n";
                cout<<"Explanation: The rules for writing an identifier is as follows:"<<endl;
                cout<<"i) may contain lowercase/uppercase letters, digits or underscore(_) only"<<endl;
                cout<<"ii) should start with a non-digit character"<<endl;
                cout<<"iii) should not contain any special characters like @, $, etc."<<endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            cout<<endl;
            if(timeUp() == true){
                       break;

                }
        }
        // q no 11
         if (arr[10] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 34)
            {
                lineCount++;
                if (lineCount <32)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 34)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  Answer: d "<<endl;
                cout<<"\n";
                cout<<"Explanation: Friend function is not a constructor whereas others are a type of constructor used for object initialization " << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 12
       if (arr[11] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 37)
            {
                lineCount++;
                if (lineCount <35)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 37)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 3. Bottom-up  "<<endl;
                 cout<<"\n";
                cout<<"Explanation: C++ is an object-oriented language and OOL uses a bottom-up approach to solve/view a problem" << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 13
        if (arr[12] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 42)
            {
                lineCount++;
                if (lineCount <38)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 42)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 4. delete is used to delete single object whereas delete[] is used to multiple(array/pointer of) objects "<<endl;
                 cout<<"\n";
                cout<<"Explanation: delete is used to delete a single object initiated using new keyword whereas delete[] is used to delete a group of objects initiated with the new operator." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 14
        if (arr[13] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 47)
            {
                lineCount++;
                if (lineCount <43)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 47)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 3. this pointer is passed as a hidden argument in all non-static functions of a class "<<endl;
                 cout<<"\n";
                cout<<"Explanation:  As static functions are a type of global function for a class so all the object shares the common instance of that static function whereas all the objects have there own instance for non-static functions and hence they are passed as a hidden argument in all the non-static members but not in static members." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 15
         if (arr[14] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 50)
            {
                lineCount++;
                if (lineCount <48)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 50)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 4. bool "<<endl;
                cout<<"Explanation:  C++ provides the boolean type to handle true and false values whereas no such type is provided in C." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 16
        if (arr[15] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 53)
            {
                lineCount++;
                if (lineCount <51)
                {
                    continue;
                }

                cout << line<<endl;
                if (lineCount == 53)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 3. Text  "<<endl;
                 cout<<"\n";
                cout<<"Explanation: By default, all the files in C++ are opened in text mode. They read the file as normal text.." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 17
         if (arr[16] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 56)
            {
                lineCount++;
                if (lineCount <54)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 56)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 4. int array[10];  "<<endl;
                 cout<<"\n";
                cout<<"Explanation:  Because array variable and values need to be declared after the datatype only." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 18
        if (arr[17] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 59)
            {
                lineCount++;
                if (lineCount < 57)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 59)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 1. Based on the number of bits in the system  "<<endl;
                 cout<<"\n";
                cout<<"Explanation: Compiler wants to make CPU as more efficient in accessing the next value." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 19
        if (arr[18] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 64)
            {
                lineCount++;
                if (lineCount < 60)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 64)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option 4. call by reference"<<endl;
                 cout<<"\n";
                cout<<"Explanation: In the call by reference, it will just passes the reference of the memory addresses of passed values rather than copying the value to new memories which reduces the overall time and memory use." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 20
        if (arr[19] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 67)
            {
                lineCount++;
                if (lineCount < 65)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 67)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  2. #define"<<endl;
                 cout<<"\n";
                cout<<"Explanation: define is the keyword that is used to define the macros in c++." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 21
       if (arr[20] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 70)
            {
                lineCount++;
                if (lineCount < 68)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 70)
                {
                    break;
                }
            }
            file.close();
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout << "Correct answer is option  3. try"<<endl;
                cout<<"\n";
                cout<<"Explanation: Code that leads to the abnormal termination of the program should be written under the try block." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 22
        if (arr[21] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 75)
            {
                lineCount++;
                if (lineCount < 71)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 75)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  4. C++ technique to avoid multiple copies of the base class into children/derived class"<<endl;
                 cout<<"\n";
                cout<<"Explanation: Virtual inheritance is a C++ technique with which it ensures that a derived class contains only one copy of the base class's variables. Refer Wikipedia for more info." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 23
        if (arr[22] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 78)
            {
                lineCount++;
                if (lineCount < 76)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 78)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 3. # "<<endl;
                cout<<"\n";
                cout<<"Explanation: All Preprocessor directives begin with the # (hash) symbol. C++ compilers use the same C preprocessor.." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 24
        if (arr[23] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 83)
            {
                lineCount++;
                if (lineCount < 79)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 83)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 3. class having many forms"<<endl;
                cout<<"\n";
                cout<<"Explanation: Polymorphism means many forms, and it occurs when we have many classes that are related to each other by inheritance." << endl;
                cout << endl;
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 25
        if (arr[24] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 87)
            {
                lineCount++;
                if (lineCount < 84)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 87)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 4. Class specifically used as a base class with atleast one pure virtual functions"<<endl;
                cout<<"\n";
                cout<<"Explanation: An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier ( = 0 ) in the declaration of a virtual member function in the class declaration." << endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 26
        if (arr[25] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 90)
            {
                lineCount++;
                if (lineCount < 88)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 90)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 2. Default constructor"<<endl;
                cout<<"\n";
                cout<<"Explanation:  If we have not defined a constructor in our class, then the C++ compiler will automatically create a default constructor with an empty code and no parameters." << endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 27
        if (arr[26] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount < 95)
            {
                lineCount++;
                if (lineCount < 91)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 95)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 2.In Structures, members are public by default whereas, in Classes, they are private by default"<<endl;
                cout<<"\n";
                cout<<"Explanation:  The C++ class is an extension of the C language structure. Because the only difference between a structure and a class is that structure members have public access by default and class members have private access by default, you can use the keywords class or struct to define equivalent classes." << endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 28
        if (arr[27] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <100)
            {
                lineCount++;
                if (lineCount < 96)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 100)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 4.Type safety"<<endl;
                cout<<"\n";
                cout<<"Explanation: C++ input and output are type safety that means we don't need to specify the type of variable we are printing. eg: in C we need to specify %d showing that an integer will be printed, whereas in C++ we just cout the variable." << endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 29
        if (arr[28] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <103)
            {
                lineCount++;
                if (lineCount < 101)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 103)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 1   "<<endl;
                cout<<"\n";
                // cout<<"Explanation: C++ input and output are type safety that means we don't need to specify the type of variable we are printing. eg: in C we need to specify %d showing that an integer will be printed, whereas in C++ we just cout the variable." << endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 30
        if (arr[29] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <106)
            {
                lineCount++;
                if (lineCount < 104)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 106)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  2. VAR_123   "<<endl;
                cout<<"\n";
                cout<<"Explanation:     Names can contain letters, digits and underscores"<<endl;
                      cout<<"Names must begin with a letter or an underscore (_)"<<endl;
                      cout<<"Names are case sensitive ( myVar and myvar are different variables)"<<endl;
                      cout<<"Names cannot contain whitespaces or special characters like !, #, %, etc." << endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 31
        if (arr[30] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <109)
            {
                lineCount++;
                if (lineCount < 107)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 109)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 3. &    "<<endl;
                cout<<"\n";
                cout<<"Explanation: & operator is called address operator and is used to access the address of a variable."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 32
        if (arr[31] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <112)
            {
                lineCount++;
                if (lineCount < 110)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 112)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 4. All of the above   "<<endl;
                cout<<"\n";
                cout<<"Explanation: In contrast, it is necessary for a programming language that it must support all three features of Encapsulation, Inheritance, and Polymorphism completely to become a Pure Object-Oriented Language."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 33
        if (arr[32] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <115)
            {
                lineCount++;
                if (lineCount < 113)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 115)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  4. Extensible   "<<endl;
                cout<<"\n";
                cout<<"Explanation: When a language has the capability to produce new data types, it is said to be extensible."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 34
        if (arr[33] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <118)
            {
                lineCount++;
                if (lineCount < 116)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 118)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. get(ch)    "<<endl;
                cout<<"\n";
                cout<<"Explanation: Which of the following is the correct syntax to read the single character to console in the C++ language? Explanation: The cin. get() is one of the several functions provided in C++ language that is used to read the single or multiple characters to console.."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 35
        if (arr[34] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <121)
            {
                lineCount++;
                if (lineCount < 119)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 121)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. Variables other than passed parameters in a function     "<<endl;
                cout<<"\n";
                cout<<"Explanation: Which of the following statements is correct about the formal parameters in C++? Explanation: Parameters that are used in the body of the function are known as formal parameters. These parameters represent the parameters passed to the function and are only used inside the function's body."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 36
        if (arr[35] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <124)
            {
                lineCount++;
                if (lineCount < 122)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 124)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. Semi Object-oriented or Partial Object-oriented  "<<endl;
                cout<<"\n";
                cout<<"Explanation: The common thing about the Pure Object-oriented language it provides three basic features like Inheritance, Encapsulation, and Polymorphism. Each programming language that supports these entire three features is known as the Pure-Object oriented language. Whereas if a programming language support all these three features but not support completely are known as the Partial-Object oriented languages or the Semi Object-oriented languages"<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 37
        if (arr[36] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <127)
            {
                lineCount++;
                if (lineCount < 125)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 127)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. Middle-level language  "<<endl;
                cout<<"\n";
                cout<<"Explanation: C++ contains the features of both types of high and Low-level programming languages, and it is also not wrong if we call it the combination of both high and low-level languages."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 38
        if (arr[37] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <130)
            {
                lineCount++;
                if (lineCount < 128)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 130)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  1  "<<endl;
                cout<<"\n";
                cout<<"Explanation: To insert a new line or to jump on to the next line, one can use the \n In c++, there is also an alternative is available that is  endl  which is also used for breaking a line in the output. Let see the example of both the \n and endl."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 39
        if (arr[38] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <133)
            {
                lineCount++;
                if (lineCount < 131)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 133)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  2. \t  "<<endl;
                cout<<"\n";
                cout<<"Explanation: The \t is a type of space sequence representing the tab, which means a set of blank space adds to the line."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 40
        if (arr[39] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <138)
            {
                lineCount++;
                if (lineCount < 134)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 138)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. In the C++ programming language, there are two types of arrays  "<<endl;
                cout<<"\n";
                cout<<"Explanation:  In the C++ programming language, there are mainly two types of arrays that are Single Dimension arrays and Multi-Dimension arrays. In Single-Dimension arrays, the same types of values are hold in the form of a List, while on the other hand, in Multi-Dimension arrays; values are stored in the form of a matrix."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 41
        if (arr[40] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <143)
            {
                lineCount++;
                if (lineCount < 139)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 143)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. It returns the dimension of the specified array  "<<endl;
                cout<<"\n";
                cout<<"Explanation: In C++, one can use the rank function where he wants to know about the dimensions( e.g., single-dimension, multi-dimension) of a specific array by just passing it to the rank() function."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 42
        if (arr[41] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <148)
            {
                lineCount++;
                if (lineCount < 144)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 148)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  1. An object is an instance of its class "<<endl;
                cout<<"\n";
                cout<<"Explanation:  Generally, an object is an instance of a class, e.g., an object represents the class."<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 43
        if (arr[42] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <153)
            {
                lineCount++;
                if (lineCount < 149)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 153)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  3. A structure can have the member functions "<<endl;
                cout<<"\n";
                cout<<"Explanation: In C, structures are not allowed to have member functions; while on the other hand, C++ allows the structure to have the member functions. Members of the class are generally private by default, and those of the structures are public. So it is a completely false statement that classes can not private members. "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 44
        if (arr[43] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <160)
            {
                lineCount++;
                if (lineCount < 154)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 160)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option  2. Only I"<<endl;
                cout<<"\n";
                cout<<"Explanation: In a procedure programming language such as C, we do not have the concept of Polymorphism, so all function calls are resolved at the compile-time while, on the other hand, In an Object-Oriented language, through the concept of Polymorphism, all function calls cannot be resolved at the compile-time. "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 45
        if (arr[44] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <163)
            {
                lineCount++;
                if (lineCount < 161)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 163)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 1. Constructor "<<endl;
                cout<<"\n";
                cout<<"Explanation: In C++, we cannot use the virtual keyword with the Constructor because constructors are generally defined to initialize the object of a specific class; hence no other class requires the other class's object. "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 46
        if (arr[45] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <166)
            {
                lineCount++;
                if (lineCount < 164)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 166)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 1. Constructor "<<endl;
                cout<<"\n";
                cout<<"Explanation: In C++, we cannot use the virtual keyword with the Constructor because constructors are generally defined to initialize the object of a specific class; hence no other class requires the other class's object. "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 47
        if (arr[46] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <171)
            {
                lineCount++;
                if (lineCount < 167)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 171)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 3. Virtual Functions "<<endl;
                cout<<"\n";
                cout<<"Explanation:  A virtual function can be used for implementing the concept of late binding. For example - Binding the actual functions to their corresponding calls. "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 48
        if (arr[47] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <174)
            {
                lineCount++;
                if (lineCount < 172)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 174)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 1. In C++, both the Static and Dynamic type checking are allowed "<<endl;
                cout<<"\n";
                cout<<"Explanation:  In C++, both types of static and dynamic checking are allowed. "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 49
        if (arr[48] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <177)
            {
                lineCount++;
                if (lineCount < 175)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 177)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 1. Distributed"<<endl;
                cout<<"\n";
                cout<<"Explanation:  In the C++ program, if we use a class without assigning a name. As a result, it will not be going to have a destructor, but it will have the object. To understand it in more detail, consider the following program: "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        // q no 50
        if (arr[49] == arr[randomIndex]){
            ifstream file("basic.txt");
            string line;
            int lineCount = 0;
            while (getline(file, line) && lineCount <180)
            {
                lineCount++;
                if (lineCount < 178)
                {
                    continue;
                }

                cout << line <<endl;
                if (lineCount == 180)
                {
                    break;
                }
            }
            file.close();
            cout << endl;
            cout << "Enter your answer  : ";

            cin >> answer;

            if (answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                cout<<endl;
                score += 1;
                attempt += 1;
            }
            else{
                cout <<"Correct answer is option 3. Data hiding  "<<endl;
                cout<<"\n";
                cout<<"Explanation:  The dynamic loading is referred to as the concept of adding a new component to the program as it runs.  "<<endl;
                cout << endl;
                
                wrong += 1;
                attempt += 1;
                cout<<endl;
                cout << wrong << " wrong answer : " << endl;
                cout<<endl;
            }
            if(timeUp() == true){
                       break;

                }
        }
        
    }
  }
    
    if (score > maxAnswers)
    {
        maxAnswers = score;
    }
    std::cout << "Time's up! Maximum answers given: " << maxAnswers << std::endl;
    std::cout << " Wrong answers given: " << wrong << std::endl;
    std::cout << " Your total score is : " << score << std::endl;
    std::cout << " Your total attempts are : " << attempt << std::endl;
 

  
}
void  Functions(){
   int maxAnswers = 0;
     int answer = 0;
     int score= 0;
     int wrong = 0;
     int attempt = 0;

     srand(time(NULL));
     int arr[] = {0, 1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};

     int questions = sizeof(arr) / sizeof(arr[0]);

     for(int i=0 ; i<questions; i++){
            int randomIndex = rand() % questions;
            bool alreadyGenerated = false;
            for(int i=0; i<questions; i++){
            if(arr[i] == randomIndex){
             alreadyGenerated = true;
             
            } break;
            
            }
        if(!alreadyGenerated){
                // 01
                if(arr[0] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 3){
                    lineCount++;
                   if(lineCount < 1){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 3){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 1. int   " << endl;
                     cout<<"\n";
                     cout<<"Explanation: C++ uses int as the default return values for functions. It also restricts that the return type of the main function must be int."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 02
            if(arr[1] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 9){
                    lineCount++;
                   if(lineCount < 4){
                     continue;
                   }
                  
                   cout<<line<<endl;
                   if(lineCount == 9){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 3. It becomes an inline function of the class " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Any function which is defined inside a class and has no complex operations like loops, a large number of lines then it is made inline."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 03
            if(arr[2] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 14){
                    lineCount++;
                   if(lineCount < 10){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 14){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 1. A function that is expanded at each call during execution  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Inline function is those which are expanded at each call during the execution of the program to reduce the cost of jumping during execution."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 04
            if(arr[3] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 17){
                    lineCount++;
                   if(lineCount < 15){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 17){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 1. compile-time  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: An inline function is expanded during the compile-time of a program."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 05
            if(arr[4] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 24){
                    lineCount++;
                   if(lineCount < 18){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 24){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 4. i, iii, iv  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: A function is not inline if it has static variables, loops or the function is having any recursive calls."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 06
            if(arr[5] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 27){
                    lineCount++;
                   if(lineCount < 25){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 27){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 2. When a function is declared" << endl;
                     cout<<"\n";
                     cout<<"Explanation: Default values for a function is defined when the function is declared inside a program."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 07
            if(arr[6] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 32){
                    lineCount++;
                   if(lineCount < 28){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 32){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                }
                else{
                     cout << "Correct answer is option 1. To the rightmost side of the parameter list " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Default parameters are defined to the rightmost side of parameter list in a function to differentiate between the normal and default parameters for example if a function is defined as fun(int x = 5, int y) then if we call fun(10) then 10 should be given to x or y because one can apply both logics like x = 10 already defined and 10 passed is for y but if compiler reads it from left to right it will think it is for x and no parameter is given for y, therefore, the compiler will give error."<<endl;
                     cout << endl;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 08
            if(arr[7] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 35){
                    lineCount++;
                   if(lineCount < 33){
                     continue;
                   }
                  
                   cout<<line<<endl;
                   if(lineCount == 35){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option   2. It cannot be modified inside the function" << endl;
                     cout<<"\n";
                     cout<<"Explanation: A function is not allowed a constant member of the parameter list."<<endl;
                     cout << endl;
                     wrong += 1;
                     attempt += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 09
            if(arr[8] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 38){
                    lineCount++;
                   if(lineCount < 36){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 38){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 2. Polymorphism" << endl;
                     cout<<"\n";
                     cout<<"Explanation: Both of the above types allows a function overloading which is the basic concept of Polymorphism."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 10
            if(arr[9] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 41){
                    lineCount++;
                   if(lineCount < 39){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 41){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 2. main() function" << endl;
                     cout<<"\n";
                     cout<<"Explanation: The execution of a C++ program starts from the main() function."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 11
            if(arr[10] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 44){
                    lineCount++;
                   if(lineCount < 42){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 44){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 3. Both return type and function name  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: The important things required in a function is its return type and its name other than that parameter list are optional which a function may or may not have."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 12
            if(arr[11] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 47){
                    lineCount++;
                   if(lineCount < 45){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 47){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 2. Main() " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 13
            if(arr[12] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 50){
                    lineCount++;
                   if(lineCount < 48){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 50){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 1. Virtual void foo() =0 ;  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: A is the correct declaration of pure virtual function in a class in C++.NOTE: Pure virtual function is used in an Interface or an abstract class"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 14
            if(arr[13] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 53){
                    lineCount++;
                   if(lineCount < 51){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 53){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 2. Only inside the {} block " << endl;
                     cout<<"\n";
                     cout<<"Explanation: The variable is valid only in the function block as in other."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 15
            if(arr[14] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 56){
                    lineCount++;
                   if(lineCount < 54){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 56){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option  2. Polymorphism " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Both of the features allow one function name to work for different parameter.."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 16
            if(arr[15] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 61){
                    lineCount++;
                   if(lineCount < 57){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 61){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option  4. 3.1" << endl;
                     cout<<"\n";
                     cout<<"Explanation: The output for the following code is 3.1"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 17
            if(arr[16] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 66){
                    lineCount++;
                   if(lineCount < 62){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 66){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 3. All the parameters of a function can be default parameters." << endl;
                     cout<<"\n";
                     cout<<"Explanation: All the parameters of a function can be default parameters statement is correct."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 18
            if(arr[17] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 69){
                    lineCount++;
                   if(lineCount < 67){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 69){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 1. int foo(int x, int y =5, int z=10) " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Default arguments in a function in C++ program is initialized from right to left."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 19
            if(arr[18] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 69){
                    lineCount++;
                   if(lineCount < 67){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 69){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 2. 1" << endl;
                     cout<<"\n";
                     cout<<"Explanation: The main function is the mandatory part, it is needed for the execution of the program to start."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 20
            if(arr[19] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 80){
                    lineCount++;
                   if(lineCount < 73){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 80){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option 3. Only i,iii & iv " << endl;
                     cout<<"\n";
                     cout<<"Explanation: 1 is the minimum numbers of functions need to be presented in c++."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 21
            if(arr[20] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 83){
                    lineCount++;
                   if(lineCount < 81){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 83){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is option  4. : " << endl;
                     cout<<"\n";
                     cout<<"Explanation: 1 is the minimum numbers of functions need to be presented in c++."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 22
            if(arr[21] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 98){
                    lineCount++;
                   if(lineCount < 84){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 98){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 3. compile time error : " << endl;
                     cout<<"\n";
                     cout<<"Explanation: We have to use the semicolon to declare the function in line 3. If we did means, the program will execute"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 23
            if(arr[22] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 115){
                    lineCount++;
                   if(lineCount < 99){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 115){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 1. 10 " << endl;
                     cout<<"\n";
                     cout<<"Explanation: In this program, we called by value so the value will not be changed, So the output is 10"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 24
            if(arr[23] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 133){
                    lineCount++;
                   if(lineCount < 116){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 133){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 3. x =4, y =10, z =14" << endl;
                     cout<<"\n";
                     cout<<"Explanation: Because we multiplied the values by 2 in the copy function."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 25
            if(arr[24] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 149){
                    lineCount++;
                   if(lineCount < 134 ){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 149){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 2. New value of p is 30" << endl;
                     cout<<"\n";
                     cout<<"Explanation: As we passed by reference, the value is changed and it is returned as 30."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 26
            if(arr[25] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 167){
                    lineCount++;
                   if(lineCount < 150){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 167){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 3. segmentation fault " << endl;
                     cout<<"\n";
                     cout<<"Explanation: As we have given in the function as p+1, it will exceed the size and so it arises the segmentation fault."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 27
            if(arr[26] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 183){
                    lineCount++;
                   if(lineCount < 168){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 183){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 4. 30 " << endl;
                     cout<<"\n";
                     cout<<"Explanation: We have increased the p value in operand as p+1, so it will return as 30."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 28
            if(arr[27] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 205){
                    lineCount++;
                   if(lineCount < 184){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 205){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 4. 1" << endl;
                     cout<<"\n";
                     cout<<"Explanation: In this program, we are finding the gcd of the number. Output:"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 29
            if(arr[28] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 224){
                    lineCount++;
                   if(lineCount < 206){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 224){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 1. 5555.263" << endl;
                     cout<<"\n";
                     cout<<"Explanation: In this program, we are printing the values and the values will be print(5) will be printed first because of the order of the execution."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 30 
            if(arr[29] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 245){
                    lineCount++;
                   if(lineCount < 225){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 245){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  4. 10 2.5" << endl;
                     cout<<"\n";
                     cout<<"Explanation: In this program, we are divide and multiply the values. Output:"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 31
            if(arr[30] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 248){
                    lineCount++;
                   if(lineCount < 246){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 248){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  4. Both B and C are incorrect." << endl;
                     cout<<"\n";
                     cout<<"Explanation: Both B and C are incorrect."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 32
            if(arr[31] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 251){
                    lineCount++;
                   if(lineCount < 249){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 251){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  4. All the above" << endl;
                     cout<<"\n";
                     cout<<"Explanation: All functions are provided by compiler if we don't write in a class"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 33
            if(arr[32] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 254){
                    lineCount++;
                   if(lineCount < 252){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 254){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  4. 127" << endl;
                     cout<<"\n";
                     cout<<"Explanation: None."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 34
            if(arr[33] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 262){
                    lineCount++;
                   if(lineCount < 255){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 262){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  3. Only ii,iii,v    " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 35
            if(arr[34] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 265){
                    lineCount++;
                   if(lineCount < 263){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 265){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 1. Inverse Cosine of x    " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 36
            if(arr[35] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 270){
                    lineCount++;
                   if(lineCount < 266){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 270){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 4. A function can be overloaded more than once." << endl;
                     cout<<"\n";
                     cout<<"Explanation: None."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 37
            if(arr[36] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 273){
                    lineCount++;
                   if(lineCount < 271){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 273){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 2. Void display() const" << endl;
                     cout<<"\n";
                     cout<<"Explanation: Constant function in a class is used to prevent modification of class member variables inside its body. When we only want to read member variable and use it in function body with no modification then we should use const function."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 38
            if(arr[37] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 276){
                    lineCount++;
                   if(lineCount < 274){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 276){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 2. Main function" << endl;
                     cout<<"\n";
                     cout<<"Explanation: Normally the execution of the program in c++ starts from main only"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 39
            if(arr[38] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 279){
                    lineCount++;
                   if(lineCount < 277){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 279){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 1. TRUE " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 40
            if(arr[39] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 282){
                    lineCount++;
                   if(lineCount < 280){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 282){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 1. .h extension " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 41
            if(arr[40] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 289){
                    lineCount++;
                   if(lineCount < 283){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 289){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 4. Both A and B" << endl;
                     cout<<"\n";
                     cout<<"Explanation: Since the second argument is mandatory, any call should have at least the first two parameters. Some compilers expect the optional parameters to follow the others. Such compilers give a compilation error"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 42
            if(arr[41] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 303){
                    lineCount++;
                   if(lineCount < 290){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 303){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 3. It prints 1 1 2  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Here the default parameter passing mechanism of pass by value will be used. Any change done to the parameter will not be reflected outside the function. So, b retains its value 2."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 43
            if(arr[42] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 306){
                    lineCount++;
                   if(lineCount < 304){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 306){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 4. Both A and C  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Each occurrence of the inline function call wiIl be replaced by its body. No function call overhead will be there but the size of the code will increase."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 44
            if(arr[43] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 309){
                    lineCount++;
                   if(lineCount < 307){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 309){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 3){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 3. if it is equated to 0  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 45
            if(arr[44] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 312){
                    lineCount++;
                   if(lineCount < 310){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 312){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is 4. Both A & C  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: None"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 46
            if(arr[45] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 315){
                    lineCount++;
                   if(lineCount < 313){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 315){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  2. Pass by reference  " << endl;
                     cout<<"\n";
                     cout<<"Explanation: As such C does not support pass by reference. But it can be simulated by using pointers."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 47
            if(arr[46] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 320){
                    lineCount++;
                   if(lineCount < 316){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 320){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  4. Both A and B " << endl;
                     cout<<"\n";
                     cout<<"Explanation: Macros do not have an address associated with them as they are processed by the pre-processor. They cannot be passed as arguments to a function, etc. Also, macros are replaced in a blind manner without any regard to the context which may result in a stupid code, like #define mul(a,b) a*b The macro call mul(a, b + 1) will be expanded as a *b+ 1, but our intention was to get a * (b+ 1 ) ."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 48
            if(arr[47] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 323){
                    lineCount++;
                   if(lineCount < 321){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 323){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 2){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is  2. rand ( ) % 6 + 1 " << endl;
                     cout<<"\n";
                     cout<<"Explanation: It should randomly generate any integer between 1 and 6. rand( ) % 6 returns an integer from 0 to 5. To make it 1 to 6, we need to add 1"<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 49
            if(arr[48] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 326){
                    lineCount++;
                   if(lineCount < 324){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 326){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 4){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     cout << "Correct answer is   4. four " << endl;
                     cout<<"\n";
                     cout << "Correct answer is option  4 . four " << endl;
                     cout<<"\n";
                     cout<<"Explanatiom: Function with no argument and no return value"<<endl;
                     cout<<"Function with no argument but return value"<<endl;
                     cout<<"Function with argument but no return value"<<endl;
                     cout<<"Function with argument and return value."<<endl;
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }
            // 50
            if(arr[49] == arr[ randomIndex]){
                ifstream file01("function.txt");
                string line; 
                int lineCount = 0;
                while(getline(file01, line) && lineCount < 329){
                    lineCount++;
                   if(lineCount < 327){
                     continue;
                   }
                   
                   cout<<line<<endl;
                   if(lineCount == 329){
                    break;
                   }
                }
                cout<<endl;
                cout<<"Enter your answer  :"<<endl;
                cin>>answer;
                if(answer == 1){
                cout<<endl;
                cout << "Correct Answer!" << endl;
                score += 1;
                attempt += 1;
                }
                else{
                     
                     cout << "Correct answer is option  1. return type, function name " << endl;
                     cout<<"\n";
                     cout<<"Explanation: In a function, return type and function name are mandatory all else are just used as a choice. "<<endl;
                     
                     cout << endl;
                     attempt += 1;
                     wrong += 1;
                     cout<<endl;
                     cout << wrong << " wrong answer : " << endl;
                    }
                    if(timeUp() == true){
                        break;
                    }

                }

            }
     }

     if (score >= maxAnswers){
        maxAnswers = score;
    }
    std::cout << "Time's up! Maximum answers given: " << maxAnswers << std::endl;
    std::cout << " Wrong answers given: " << wrong << std::endl;
    std::cout << " No. of question you've attempted: " << attempt << std::endl;
    std::cout << " Your total score is : " << score << std::endl;
}
void  Array(){
  cout<<"You chose category three"<<endl;
}


