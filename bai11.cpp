#include<iostream>
#include<string.h>
using namespace std;
#define MAX 200
int main()
{
    long n;
    cout<<"nhap danh ba:"<<endl;
    cout<<"nhap so nguoi trong danh ba:";
    cin>>n;
    char dsht[MAX][40],dssdt[MAX][11];
    char hoten[40];     
    cin.ignore();
    for(int i = 0;i < n;i++){
        cin.getline(dsht[i],40);
        cin.getline(dssdt[i],11);
    }
    for(int i = 0;i < n;i++){
        cout<<i+1<<". "<<dsht[i]<<" - "<<dssdt[i]<<endl;
    }
    cout<<"nhap ten nguoi ban muon tim: ";
    cin>>hoten[40];
    for(int i = 0;i < n;i++){
        cout<<dsht[i]<<endl;
        if(strcmp(hoten,dsht[i]) == 0){
            cout<<"so cua nguoi ban muon tim: "<<dssdt[i];
        }
    }

    return 0;
}