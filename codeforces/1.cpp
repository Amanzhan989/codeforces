


#include<iostream>
using namespace std;
int avga(int a[5][5]){
    int summa1 = 0;
    for(int i = 0; i < 5;i++){
        for(int j = 0; j <5;j++){
        if(j > i) summa1+=a[i][j];}}
    return summa1/10;}
int avgb(int b[7][7]){
    int summa2 = 0;
    for(int i = 0; i < 7;i++){
        for(int j = 0;j < 7;j++){
        if(j > i) summa2+=b[i][j];}}
    return summa2/21;}
int main(){
    int a[5][5];int b[7][7];
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < 5;j++){cin>>a[i][j];}}
    for(int i = 0; i < 7;i++){
        for(int j = 0; j < 7;j++){cin>>b[i][j];}}
    int avg1 = avga(a);int avg2 = avgb(b);
    cout<<avg1<<" "<<avg2;}
     





