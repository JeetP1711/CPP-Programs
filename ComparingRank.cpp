#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int math, phy, chem , total, rank;
};

bool comparetwostudents(Student a, Student b){
    if(a.total!=b.total)
    return a.total>b.total;
    if(a.math!=b.math)
    return a.math>b.math;
    if(a.phy!=b.phy)
    return a.phy>b.phy;

    return a.chem>b.chem;
}

void computeRanks(Student a[], int n){
    for(int i=0; i<n ; i++){
        a[i].total=a[i].math+a[i].chem+a[i].phy;

        sort(a,a+n,comparetwostudents);

        for(int i=0 ; i<n ; i++)
        a[i].rank=i+1;
    }
}

int main(){
    int n=5;
    Student a[n];

    a[0].name="Jeet";
    a[0].math=80;
    a[0].phy=95;
    a[0].chem=90;
}