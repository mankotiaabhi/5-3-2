#include<iostream>
using namespace std;
int main(){
    string str = "aabcaan";
    int l = str.length();
    int a[l];
    for (int i=0;str[i]!='\0';i++){
        a[i]=str[i]-'a';
    }
    int max=a[0];
    for (int i=0;l>i;i++){
        if (max<a[i]){
            max = a[i];
        }
    }
    int freq[max+1]={0};
    for (int i=0;l>i;i++){
        freq[a[i]]++;
    }
    char ch[max+1];
    for (int i=0;max+1>i;i++){
        ch[i]='a'+i;
    }
    for (int i=0;max+1>i;i++){
        if (freq[i]!=0)
        cout <<ch[i]<<freq[i];
    }


}