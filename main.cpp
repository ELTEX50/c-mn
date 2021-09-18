#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    int m;
    ofstream f1("e:\\m.dat");
    while(true){
        cin>>s;
        if(s=="exit")
            break;
        f1<<s<<"\n";
    }
    f1.close();
    /*string s;
    ifstream f2("e:\\m.dat");
    f2>>s;
    while(!f2.eof()){
        cout<<s;
        f2>>s;


    }

    f2.close(); */

    return 0;
}



