#include<iostream>

using namespace std;

int main()
{
    int n,count = 0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i] == b[j])
                count++;
            if(b[i] == a[j])
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
