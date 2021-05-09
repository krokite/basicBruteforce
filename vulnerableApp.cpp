/*
Author: KroKite
Description: Basic Bruteforcing Tools
*/

#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

// When passing char arrays as parameters they must be pointers
int main(int argc, char** argv) {
    if (argc < 4) { // Check the value of argc. If not enough parameters than, inform user and exit.
        cout << "Usage is " << argv[0] << " -f <input filename> -p password\n";
        exit(0);
    } else { // if we got enough parameters..
  int i=1;
	while(i<=argc) {
        	if (strcmp(argv[i],"-f") == 0) {
			cout << "File to Open: " << argv[i + 1] << endl;
        	}
		if (strcmp(argv[i],"-p") == 0) {
        		cout <<"Password is : " << argv[i + 1] << endl;
			if(strcmp(argv[i+1], "KroKite") == 0) {
				cout << "File Opening SuccessFul"<< endl;
			} else {
				cout << "Wrong Password"<< endl;
			}
        	}
	i++;
        }
    }
    return 0;
}
