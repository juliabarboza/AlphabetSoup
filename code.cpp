#include <iostream>
#include <string>
using namespace std;

string AlphabetSoup(string str) { 

  // code goes here
 char temp;
  	for(int i=0;i<str.length()-1;i++)
    {
      	for(int j=0;j<str.length()-i-1;j++)
        {
          		if(str[j]>str[j+1])
                {
                    temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
        }
    }
  	return str;
            
}

int main() { 
  
  // keep this function call here
  cout << AlphabetSoup(gets(stdin));
  return 0;
    
}
