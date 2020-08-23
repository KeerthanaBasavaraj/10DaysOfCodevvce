#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
 int n; cin>>n;
 int op[n-1][n-1];
 bool isProcessed[n][n];
 for(int k=1;k<=n-1;k++)
 {
 for(int l=k;l<=n-1;l++)
 {
  int a[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      a[i][j]=0;
  int count[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      count[i][j]=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      isProcessed[i][j]=false;
  queue< pair<int,int> > qu;
  qu.push(make_pair(n-1,n-1));
  isProcessed[n-1][n-1]=true;
  int x,y;
  int _count;

  while(qu.size()!=0)
  {
    x = qu.front().first;
    y = qu.front().second;
    a[x][y] = 1;
    _count = count[x][y];

    qu.pop();

    int p,q;

    p = x+k;
    q = y+l;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
        count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x+k;
    q = y-l;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
        count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x-k;
    q = y+l;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
        count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x-k;
    q = y-l;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
      count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x+l;
    q = y+k;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
      count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x+l;
    q = y-k;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
      count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x-l;
    q = y+k;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
      count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
    p = x-l;
    q = y-k;
    if(p>=0 && q>=0 && p<n && q<n)
    {
      if(a[p][q]!=0)
        count[p][q] = min(count[p][q],_count+1);
      else
      {
        count[p][q] = _count+1;
        if(p==0 && q==0)
        {
          a[0][0]=1;
          break;
        }
        count[p][q]=min(count[p][q],_count+1);
        if(isProcessed[p][q]==false)
        {
          qu.push(make_pair(p,q));
          isProcessed[p][q]=true;
        }
      }
    }
  }
  int ans=-1;
  if(a[0][0]==1) ans = count[x][y]+1;
  op[k-1][l-1] = ans ;
  op[l-1][k-1] = ans ;
 }
}
for(int i=0;i<n-1;i++)
{
 for(int j=0;j<n-1;j++)
  cout<<op[i][j]<<" ";
 cout<<endl;
 }
}
