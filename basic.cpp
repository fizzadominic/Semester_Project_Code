#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
    // to write in a text file
    // string text = "fizza dominic";
    // ofstream file("basic.txt");
    // file << text;
    // to read a text file
   
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  3.  Heap " << endl;
                cout<<"Explanation:Static methods are stored in Metaspace space of native heap as they are associated to the class in which they reside not to the objects of that class. But their local variables and the passed arguments are stored in the stack. "<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  2. NO" << endl;
                cout<<"Expalanation: Names can contain letters, digits and underscores"<<endl;
                cout<<"Names must begin with a letter or an underscore (_)"<<endl;
                cout<<"Names are case sensitive (myVar and myvar are different variables)"<<endl;
                cout<<"Names cannot contain whitespaces or special characters like !, #, %, etc."<<endl;
                cout<<"eserved words (like C++ keywords, such as int) cannot be used as names"<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 3. C++ supports both procedural and object oriented programming language  " << endl;
                cout<<"Explanation: C++ supports both procedural(step by step instruction) and object oriented programming (using the concept of classes and objects)."<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  2. #include “userdefined” " << endl;
                cout<<"Explanation: C++ uses double quotes to include a user-defined header file. The correct syntax of including user-defined is #include “userdefinedname” "<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option   4. both // comment or /* comment */ " << endl;
                cout<<"Explanation: Both the ways are used for commenting in C++ programming. // is used for single line comments and /* … */ is used for multiple line comments."<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option   3. h  " << endl;
                cout<<"Explanation: .h extensions are used for user defined header files. To include a user defined header file one should use #include”name.h” i.e. enclosed within double quotes."<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option   1.  VAR_1234   " << endl;
                cout<<"Explanation: The rules for writing an identifier is as follows:"<<endl;
                cout<<"i) may contain lowercase/uppercase letters, digits or underscore(_) only"<<endl;
                cout<<"ii) should start with a non-digit character"<<endl;
                cout<<"iii) should not contain any special characters like @, $, etc."<<endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  Answer: d "<<endl;
                cout<<"Explanation: Friend function is not a constructor whereas others are a type of constructor used for object initialization " << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 3. Bottom-up  "<<endl;
                cout<<"Explanation: C++ is an object-oriented language and OOL uses a bottom-up approach to solve/view a problem" << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 4. delete is used to delete single object whereas delete[] is used to multiple(array/pointer of) objects "<<endl;
                cout<<"Explanation: delete is used to delete a single object initiated using new keyword whereas delete[] is used to delete a group of objects initiated with the new operator." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 3. this pointer is passed as a hidden argument in all non-static functions of a class "<<endl;
                cout<<"Explanation:  As static functions are a type of global function for a class so all the object shares the common instance of that static function whereas all the objects have there own instance for non-static functions and hence they are passed as a hidden argument in all the non-static members but not in static members." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 4. bool "<<endl;
                cout<<"Explanation:  C++ provides the boolean type to handle true and false values whereas no such type is provided in C." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 3. Text  "<<endl;
                cout<<"Explanation: By default, all the files in C++ are opened in text mode. They read the file as normal text.." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 4. int array[10];  "<<endl;
                cout<<"Explanation:  Because array variable and values need to be declared after the datatype only." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 1. Based on the number of bits in the system  "<<endl;
                cout<<"Explanation: Compiler wants to make CPU as more efficient in accessing the next value." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option 4. call by reference"<<endl;
                cout<<"Explanation: In the call by reference, it will just passes the reference of the memory addresses of passed values rather than copying the value to new memories which reduces the overall time and memory use." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  2. #define"<<endl;
                cout<<"Explanation: define is the keyword that is used to define the macros in c++." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout << "Correct answer is option  3. try"<<endl;
                cout<<"Explanation: Code that leads to the abnormal termination of the program should be written under the try block." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
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
                cout << "Correct Answer!" << endl;
                score += 1;
            }
            else{
                cout <<"Correct answer is option  4. C++ technique to avoid multiple copies of the base class into children/derived class"<<endl;
                cout<<"Explanation: Virtual inheritance is a C++ technique with which it ensures that a derived class contains only one copy of the base class's variables. Refer Wikipedia for more info." << endl;
                cout << endl;
                wrong += 1;
                cout << wrong << " wrong answer : " << endl;
            }
        }



       
            
        

    
   
    
       
    }
  }
  return 0;             
 }
  
