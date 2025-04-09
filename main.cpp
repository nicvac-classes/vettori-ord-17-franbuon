#include <iostream>
using namespace std;

int main() {
   int N, i, j, t;
   bool scambio;
   scambio=true;
   cout<<"Quanti numeri vuoi generare?"<<endl;
   cin>>N;
   int numpari[N], numdispari[N];
   i=0;
   while(i<=N-1)
   {
      numpari[i]=random()%N;
      if(numpari[i]%2==0)
      {

      }
      else
      {
         numpari[i]=numpari[i]+1;
      }
      numdispari[i]=random()%N;
      if(numdispari[i]%2==0)
      {
         numdispari[i]=numdispari[i]+1;
      }
      i=i+1;
   }
   i=0;
   while(i<N and scambio==true)
   {
      scambio=false;
      j=0;
      while(j<=(N-2)-i)
      {
         if(numpari[j]>numpari[j+1])
         {
            t=numpari[i];
            numpari[i]=numpari[i+1];
            numpari[i+1]=t;
         }
         j=j+1;
      }
      i=i+1;
   }
   i=0;
   while(i<N and scambio==true)
   {
      scambio=false;
      j=0;
      while(j<=(N-2)-i)
      {
         if(numdispari[j]>numdispari[j+1])
         {
            t=numdispari[i];
            numdispari[i]=numdispari[i+1];
            numdispari[i+1]=t;
         }
         j=j+1;
      }
      i=i+1;
   }
   i=0;
   while(i<N)
   {
      cout<<"Il "<<i+1<<"° numero pari è "<<numpari[i]<<endl;
      i=i+1;
   }
   i=0;
   while(i<N)
   {
      cout<<"Il "<<i+1<<"° numero dispari è "<<numdispari[i]<<endl;
      i=i+1;
   }
   for(i=N-1; i>0; i=i-1)
   {
      cout<<"Il "<<i+1<<"° numero dispari è "<<numdispari[i]<<endl;
   }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
