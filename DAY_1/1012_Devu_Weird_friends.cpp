#include <iostream>
using namespace std;

int main() {
    long long int t,c=0;
    cin>>t;
    while(t>c){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;n>i;i++){
            cin >> a[i];
        }
        int max= a[0];
       for (int i=0;n>i;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
        int freq[max+1]={0};
        for (int i=0; n>i; i++){
        freq[a[i]]++;
    }
        int count=0;
        for (int i=0;max+1>i;i++){
        if (freq[i]!=0){
            count++;
        }
    }
    cout <<count<<endl;
    c++;    
    }
}