#include <iostream>

using namespace std;

int main()
{   char c [26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char x;
    cin>>x ;
    char y ;
    int cipher ;
    int uncipher ;
    for(int i=0 ;i<26;i++){
        if(x==c[i]){
          cipher=(5*i+8)%26;
          cout<<cipher<<endl;
          cout<<c[cipher]<<endl;
          break;
        }

    }
    cout<<c[cipher]<<endl;
    for(int j=0 ;j<26;j++){
        if(c[cipher]==c[j]){
            cout<<j<<endl;
            uncipher=21*(j-8)%26;
            cout<<uncipher<<endl;
            cout<<c[uncipher]<<endl;
            break;
        }


     }


    return 0;
}
