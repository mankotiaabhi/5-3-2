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
        int sum;
        int k=0;
        for (int i=0;n>i;i++){
            sum=0;
            for (int j=0;n>j;j++){
                if (j!=k){
                sum+=a[j];
                }
            }
            k++;
        cout << sum <<"   " ;
        }
    c++;    
    }
}