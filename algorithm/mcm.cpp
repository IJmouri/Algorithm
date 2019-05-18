#include<stdio.h>
/*#include<iostream>
#include<fstream>
using namespace std; */
#include<conio.h>
#include<stdlib.h>
int s[10][10];
void print_opt_parens(int i,int j);
void matrix_chain_order(int p[],int length) {
int n=length-1;
int i,j,k,l,q,m[10][10],n1,l1,j1,i1,nl;
for(i=0;i<=n;i++)
m[i][i]=0;
for(l=2;l<=n;l++) {
for(i=1;i<=nl+1;i++) {
j=i+l1;
m[i][j]=9999999;
for(k=i;k<=j1;
k++) {
q=m[i][k]+m[k+1][j]+p[i1]*
p[k]*p[j];
if(q < m[i][j]) {
m[i][j]=q;
s[i][j]=k;
}}}}
printf("\nprinting optimal parenthesis : \n");
print_opt_parens(1,n);
return;
}
void print_opt_parens(int i,int j) {
if(i==j)
printf(" A%d ",i);
else {
printf(" ( ");
print_opt_parens(i,s[i][j]);
print_opt_parens(s[i][j]+1,j);
printf(" ) ");
} }
int main() {
int p[20],n,i;
printf("\nenter the length of p : ");
scanf("%d",&n);
for(i=0;i<n;i++) {
printf("\nenter p[%d] : ",i);
scanf("%d",&p[i]);
}
printf("\nthe sequence of dimension is : \n");
for(i=0;i<n;i++)
printf("%d\t",p[i]);
matrix_chain_order(p,n);
//system("PAUSE");
getch();
return 0;
}
