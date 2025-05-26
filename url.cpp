#include <iostream>

using namespace std;

int main(){
	
	//Program to input a user-supplied URL and return its protocol, server, account, and path individually.
    
	cout << "Enter a URL: ";
	string url;
	cin >> url;
	
    //Finding the protocol from the URL entered.
    
	int index1 = url.find("://");
    string protocol = url.substr(0, index1);
	
	cout << "In the URL entered above, the Protocol is: " << protocol;
	
    //Finding the server from the URL entered.
    
    int index2 = url.find("/", index1 + 3);
    string server = url.substr(index1 + 3, index2 - index1 - 3);
    
	cout << endl << "In the URL entered above, the Server is: " << server;
	
    //Finding the account from the URL entered.
    
    int index3 = url.find("~");
	int index4 = url.find("/", index2 + 1);
    string account = url.substr(index3 + 1, index4 - index3 - 1);
	
	cout << endl << "In the URL entered above, the Account is: " << account;
    
    //Finding the path from the URL entered.
    
    string path = url.substr(index4 + 1);
	
	cout << endl << "In the URL entered above, the Path is: " << path;
	
	//Find and return the file name from the user-supplied URL.
	
	int index5 = url.rfind("/");
	cout << endl << "In the URL entered above, the File Name is: " << url.substr(index5 + 1);
	
	return 0;
} 
