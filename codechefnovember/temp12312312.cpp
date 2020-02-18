// Example program
#include <bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int> > diagonal(vector<vector<int> > &A) 
{
    int r=A.size();
    int c=A[0].size();
    
    vector<vector<int> > res;
    
    for(int i=0; i<r; i++ )
    {
        vector<int> temp;
        int ii=i, jj=0;
        // (0 <= ii) < r
        // (1/0 < r)
        while(0 <= ii and ii < r and
              0 <= jj and jj < c)
        // while((0<=ii<r)&&(0<=jj<c))
        {
            cout<<" i "<< ii<<" j "<<jj;
            // temp.push_back(A[ii][jj]);
            ii++;
            jj--;
        }
        res.push_back(temp);
    }
    for(int j=0;j<c-1;j++)
    {
        vector<int> temp;
        int ii=j, jj=c-1;
       while(0 <= ii and ii < r and
              0 <= jj and jj < c)
        {
            cout<<" i"<< ii<<" j "<<jj;
            // temp.push_back(A[ii][jj]);
            ii++;
            jj--;
        }
        res.push_back(temp);
    }
    return res;
}
int main()
{
  vector<vector<int> >A;
  for(int i=0;i<3;i++){
        vector<int> s;

      for(int j=0;j<3;j++)
      {
          int temp;
          cin>>temp;
          s.push_back(temp);
        }
      A.push_back(s);
    }
    diagonal(A);
}