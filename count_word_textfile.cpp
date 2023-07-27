#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
int choice;
  while(1)
{
 ifstream fin("my_data2.txt"); //opening text file
 int count=0;
 char ch[20],word[20];
 cout<<"Enter a word to count:";
 gets(word);
 
 while(fin)
 {
  fin>>ch;
  if(strcmp(ch,word)==0)
   count++;
 } 
 
 cout<<"Occurrence = "<<count-1<<"n";
 fin.close(); 
} 

 return 0;
}