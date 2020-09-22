#include<iostream>
using namespace std;

int main()
{
    long long t,a,b;
    cin >> t;
    while(t--)
    {
        long long count=0,c=0;
        cin >> a >> b;
        if(a <= b)
            count = b-a;
        else{
            if(a%b == 0)
                count = 0;
            else{
                c = a/b;
                c++;
                c *= b;
                count = abs(c - a);
            } 
        }
        cout << count << endl;
    }
    return 0;   
}
