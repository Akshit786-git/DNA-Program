
#include <iostream>
using namespace std;
int main() {
    string s = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<70;i++){
        if(s[i]=='A'){
            a++;
        }else if(s[i]=='G'){
            b++;
        }else if(s[i]=='C'){
            c++;
        }else if(s[i]=='T'){
            d++;
        }
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    
}
