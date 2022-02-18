#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main(int argc, char* argv[]){
	for(int i=1;i<=argc;i++){
		fstream my_file;
                file.open(argv[i],ios::in);
		if(file.is_open()){
			string line;
		   while(getline(file,line)){
			if(line.find(argv[1])!=string::npos){
			        cout<<"STRING IS FOUND IN GIVEN LINE->>"
				        <<line<<endl;
			}

        	   }
                   file.close();		
                 }
        }
}
