#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key);//prototype

int linearSearch(auto data,auto key){
for(int i=0; i<data.size();i++){
	if (data[i]==key){
		return i;}
}
return -1;
}
void bubbleSort(auto& Data);
 

int main()
{
  vector<string> inputs;
  string search_key, input;
 

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 

bubbleSort(inputs);

for(int i=0; i < inputs.size( );i++){
cout<<inputs[i]<<endl;
}


  
      return 0;
}

void bubbleSort(auto& Data) {
for(int k=0; k<Data.size( ); k++)

for(int i=0; i < Data.size( )-1-k; i++)
if ( Data[i] > Data[i+1]){
swap(Data[i], Data[i+1]);
}
}
	


