#include<bits/stdc++.h>
using namespace std;

//digit concept
void countdigit(){
int n;

while (n>0){
   int  lastdigit = n%10;
    n= n/10;
}
}

//reverse number
int revnum(int n){
    int rn=0;
    while(n>0){
        int ld = n%10;
        rn = (rn*10)+7;
        n=n/10;
    }
    return rn;
}

//check palindrome
bool palindrome(int n){
    int rn=0;
    int dup =n;
    while(n>0){
        int ld = n%10;
        rn = (rn*10)+ld;
        n=n/10;
    }

    if(rn==dup){
        return true;
    }
    return false;
}

//armstrong number
bool armstrong(int n){
    int sum=0;
    int dup=n;
    while(n>10){
int ld=n%10;
sum = sum+(ld*ld*ld);
n=n/10;
    }

    if(sum==dup){
        return true;
    }
    return false;
}

//print divisors

// O(sqrt(n))
void printdivisors(int n){
    vector<int> ls;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls)cout<<it<<" ";
}

//prime or not

bool prime(int n){
    
    int cnt=0;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i==0){
           cnt++;
            if((n/i)!=i){
               cnt++;
        }
    }
    if(cnt==2) return true;

    return false;
}

//eucledian algorithm-->used for finding gcd as it reduces time complexity
int gcd(int a, int b){
    if (a == 0) return b;
    if (b == 0) return a;

    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    return (a == 0) ? b : a;
}


int main(){
    return 0;
}
