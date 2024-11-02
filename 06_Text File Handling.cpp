#include <fstream>
#include <iostream>

using namespace std;

  int main() {
    
    ofstream outFile("example.txt");// Create andopen a file for writing
    
    if(outFile.is_open()) {
      
    outFile <<"Hello, World!\n";// Write tothe file
    outFile <<"This is a text file in C++\n";
    outFile.close();// Close the file
    
    cout<<"Data written to file successfully."<<endl;
    
   }else{
     
    cout<<"Error: Could not open the file."<<endl;
  }
  
  return 0;
}