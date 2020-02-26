#include<iostream>
using namespace std;
#define MAX 200
int main()
{
    long n;
    cin>>n;
    char dsht[MAX][40];
    char dssdt[MAX][11];
    cin.ignore();
    for(int i = 0;i < n;i++){
        cin.getline(dsht[i],40);
        cin.getline(dssdt[i],11);
    }
    for(int i=0;i < n;i++){
        cout<<i+1<<". "<<dsht[i]<<" - "<<dssdt[i]<<endl;
    }

    return 0;
}