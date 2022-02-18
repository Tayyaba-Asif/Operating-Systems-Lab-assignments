#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
	for(int i=1;i<=argc;i++){
        	fstream my_file;
                my_file.open(argv[i],ios::in);
                
        if(my_file.is_open()){
		char ch;
		while(my_file){
                	ch=my_file.get();
                	cout<<ch;
                }        
                my_file.close();
        }
        }
        return 0;
}
