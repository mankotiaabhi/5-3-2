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
        int sum=0;
        int k=0;
        for (int i=0;n>i;i++){
            sum=sum+a[i];
        }
        int ans;
        for (int i=0;n>i;i++){
            ans=sum-a[i];
            cout << ans <<" ";
        }
    c++;    
    }
}