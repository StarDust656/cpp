#include<bits/stdc++.h>

using namespace std;


int main()
{

stringstream numToString;
numToString << 5;
string val;
numToString >> val; // val is now the string "5"
stringstream stringToNum;
stringToNum << "5";
int val1;
stringToNum >> val1; // val is now the integer 5


//Just as with cin, you can use a stringstream to determine what type the next
//word is. If you try to read from a stringstream into an int but the next word
//is not an integer, the expression will evaluate to false:


stringstream ss;
ss << "notaninteger";

if (ss >> val) {
cout << "read an integer!" << endl;
} else {
cout << "next word was not an integer" << endl;
}

return 0;

}
