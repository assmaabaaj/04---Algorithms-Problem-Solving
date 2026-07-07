#include <iostream>   
#include <string>     

using namespace std;

string ReadName()
{
  string Name;
  cout << "Please Enter Your Name: " << endl;
  getline(cin , Name);
  return Name;
}

void PrintName(string Name)
{
    // Print the user's name with a message, adding a newline for formatting.
    cout << "\n Your Name is: " << Name << endl;
}


int main()
{
    PrintName(ReadName());

    return 0;  
}
