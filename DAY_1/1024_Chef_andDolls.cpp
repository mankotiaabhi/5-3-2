#include<iostream>
using namespace std;
int main() {
    long long int t,c=0;
    cin>>t;
    long long int count=0;
    while(t>c){
        int n;
        cin >> n;
        int a[n];
        int sum=0;
        for (int i=0;n>i;i++){
            cin>>a[i];
        }
        for (int i=0;n>i;i++){
            sum^=a[i];
        }
        cout << sum <<endl;
    c++;    
    }
}    
    
    
  
    
    