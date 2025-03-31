#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i>n) return;
    cout<<"kalpana";
    f(i+1,n);
}

//print n
void f(int i,int n){
    if(i>n) return;
    cout<<i;
    f(i+1,n);
}

//sum from 1 to n using paarametrial recursion
void f(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}

//functional recursion
int f(int n){
    if(n==0) return 0;
    return n+ f(n-1);
}

//reverse an array using recursion

/* int ff(int l,int r){
if(l>=r) return;
int a[];
swap(a[l],a[r]);
f(l+1,r-1);
} */

//alt
void q(int i,int arr[],int n){
    if(i >= n/2) return;
    swap(arr[i],arr[n-i-1]);
    q(i+1,arr,n);
}

//palindrome

bool palindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1])return false;
     palindrome(i+1,s);
}