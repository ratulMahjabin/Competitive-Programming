#include <bits/stdc++.h>

using namespace std;

int main()
{
    string o;
    int flag = 0, p=0;
    string n;
    
    cin>>o;
    for(int i=0; i< o.size(); )
    {
        if(o[i]=='W' && o[i+1]=='U' &&  o[i+2]=='B')
        {
           if(flag==0 && p!=0)
           {

               n+=' '; //first e logical character thakle character newar por space dewar jonno
               i+=3;
               //p++; 
               flag = 1;
           }
           else  
                i+=3; //ekta WUB er por jodi aro WUB thake
        }
        else 
        {
            n+= o[i];
            i++;
            p++;
            flag=0;
        }

    }

    cout<<n;
    
    
    return 0;
}