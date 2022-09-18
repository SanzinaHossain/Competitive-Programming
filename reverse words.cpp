//[9:06 pm, 08/04/2020] shorna😌: #
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
    string str,wd;
    getline(cin,str);

    stringstream ss(str);
    string word;

    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        cout<<word;
        cout<< " ";
    }
    cout<<endl;

}
