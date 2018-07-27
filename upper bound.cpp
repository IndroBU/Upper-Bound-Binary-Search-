///Binary Search
/// Complexity log2(n)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll N;
    cin>>N;
    ll A[N];
    for(ll I=0; I<N; I++)
    {
        cin>>A[I];
    }
    sort(A,A+N);
    ll Begin=0,End=N-1,Mid,Index=-1,Key;
    cin>>Key;
    while(Begin<=End)
    {
          Mid=(Begin+End)/2;
          if(Key==A[Mid])
          {
              Index=Mid;
              Begin=Mid+1;

          }
         else if(Key>A[Mid]) Begin=Mid+1;
         else if(Key<A[Mid]) End=Mid-1;

    }


       cout<<"Upper Bound = "<<Begin<<endl;

}
