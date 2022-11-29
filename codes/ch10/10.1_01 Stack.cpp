
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void pr(int a[],int &t){

    for (int i = 1; i <= t; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void push(int a[],int x,int &t){
    t+=1;
    a[t]=x;
}
bool stackEmpty(int a[],int &t){
    if(t==0) return true;
    else return false;
}
int pop(int a[],int &t){
    if(stackEmpty(a,t)) return -1;
    else{
        a[t]=0;
        t-=1;
        return a[t-1];
    }
}
int top(int a[],int &t){
    return a[t];
}
int main() {
    int n=7;
    int S[n];

    memset(S,0 , sizeof(S));
    int t=0;
    pr(S,t);
    push(S,4,t);
    pr(S,t);
    push(S,1,t);
    pr(S,t);
    push(S,3,t);
    pr(S,t);
    pop(S,t);
    pr(S,t);
    push(S,8,t);
    pr(S,t);
    pop(S,t);
    pr(S,t);
    return 0;
}