
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void pr(int a[],int &t1,int &t2){
    int n= sizeof(a);
    cout <<"s1: ";
    for (int i = 1; i < t1+1; ++i) {
        cout<<a[i]<<" ";
    }
    cout <<"   s2: ";
    for (int i = n/2; i < t2+1; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void push2(int a[],int x,int &t2){
    int n=sizeof(a);
    if(t2>=(n-2)){

        cout<<"overflow_2 By"<<x<<"\n";

    }else{
        t2+=1;
        a[t2]=x;
    }
}
void push1(int a[],int x,int &t1,int &t2){
    int n=sizeof(a);
    if(t1>=(n/2)-1){

        push2(a,x,t2);
    }else{

        t1+=1;
        a[t1]=x;
    }
}
bool stackEmpty1(int a[],int &t1){
    if(t1==0) return true;
    else return false;
}
bool stackEmpty2(int a[],int &t2){
    int n=sizeof (a);
    if(t2==n/2) return true;
    else return false;
}
int pop1(int a[],int &t1){
    if(stackEmpty1(a,t1)) return -1;
    else{
        a[t1]=0;
        t1-=1;
        return a[t1-1];
    }
}
int pop2(int a[],int &t2){
    if(stackEmpty1(a,t2)) return -1;
    else{
        a[t2]=0;
        t2-=1;
        return a[t2-1];
    }
}

int main() {
    int n=7;
    int S[n];
    memset(S,0 , sizeof(S));
    int t1=0,t2=(n/2);
    pr(S,t1,t2);
    push1(S,4,t1,t2);
    push2(S,1,t2);
    pr(S,t1,t2);
    push1(S,5,t1,t2);
    push2(S,2,t2);
    pr(S,t1,t2);
    push1(S,4,t1,t2);
    push2(S,1,t2);
    pr(S,t1,t2);
    push1(S,5,t1,t2);
    push2(S,2,t2);
    pr(S,t1,t2);

    pop1(S,t1);
    pop2(S,t2);
    pr(S,t1,t2);

    return 0;
}