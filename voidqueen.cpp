#include "voidqueen.h"

int A[30],counter=0;

int position(int pos) {

int j;

for (j=1;j<pos;j++) {

if((A[j]==A[pos])||((abs(A[j]-A[pos])==abs(j-pos))))

return 0;

}

return 1;

}

void print(int n) {

int i,j;

counter++;

cout<<"\nSolution #"<<counter<<":\n";

for (i=1;i<=n;i++) {

for (j=1;j<=n;j++) {

if(A[i]==j)

cout<<"Q\t";

else

cout <<"*\t";

}

cout<<"\n";

}

}


void queen(int b) {

int q=1;

A[q]=0;

while(q!=0) {

A[q]=A[q]+1;

while((A[q]<=b)&&!position(q))

A[q]++;

if(A[q]<=b) {

if(q==b)

print(b);
else{

q++;

A[q]=0;

}

} else

q--;

}

}

