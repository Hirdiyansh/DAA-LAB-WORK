#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int m=0;m<t;m++)
    {
      int n,k,count=0,l=0,j=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      cin>>k;
      for(int i=0;i<n;i++)
      {
        if(a[i]!=k)
        {
            j=i;
        }
        else
        {
            l=i;
            break;
        }
      }
      if(l!=0)
      {
        cout<<"Present";
        cout<<l+1;
      }
      else
      {
        cout<<"Not Present";
        cout<<j+1;
       
      }
      cout<<endl;
    }
    return 0;
}