#include<iostream>
using namespace std;
bool solve( string s )
{
bool b;
    for ( int i=0;i<s.length();i++)
    {


        if ( s[i]=='0'){
            b=true;
        }
        else if(s[i]=='1')
            {
            b=true;
        }
         else if ( s[i]=='2')
            {
            b=true;
        }
                 else if ( s[i]=='3')
                    {
            b=true;
        }    else if ( s[i]=='4')
        {
            b=true;
        }
         else if ( s[i]=='5'){
            b=true;
        }
                 else  if( s[i]=='6')
                    {
            b=true;
        }
                 else if ( s[i]=='7')
                    {
            b=true;
        }
                 else if ( s[i]=='8'){
            b=true;
        }
                 else if ( s[i]=='9'){
            b=true;
        }


    else b=false;

    }
    return b ;
}

int main()

{
    string s;
    cout<<"Enter the string number: ";
    cin>>s;
    if(solve(s)==true)
        cout<<"this is a number" <<endl;
    else
        cout<<"this is not a number" <<endl;
}
