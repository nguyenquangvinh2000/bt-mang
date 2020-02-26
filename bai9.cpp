#include<iostream>
#define MAX 200
using namespace std;
int main()
{
    long n;
    cin>>n;
    char listname[MAX][40];
    for(int i = -1;i < n;i++){
        cin.getline(listname[i],40);
    }
    for(int i = 0;i < n;i++){
        cout<<i+1<<". "<<listname[i]<<endl;
    }

    return 0;
}