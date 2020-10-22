#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    // EOF ??

    while((cin>>a) && a != EOF)
    {
        cin>>b;
        if(a>b){
            cout<<(a - b)<<endl;

        }
        else
            cout<<(b - a)<<endl;
    }

    return 0;
}
