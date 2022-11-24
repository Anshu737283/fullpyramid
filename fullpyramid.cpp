#include<iostream>
using namespace std;

int main()
{
    int n,i,j,r=0,t=0;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<(n+n);j++)
        {
           

            if(j<=n)
            {
                 r=(n+1)-j;
                 if(j<=(n-i))
                 {
                     cout<<" ";
                 }
                 else
                 {
                     cout<<r;
                 }
          
           
            }
            else
            {

                t=(j-n)+1;
                if(j<n+i)
                {
                    cout<<t;
                }
                else
                {
                    cout<<" ";
                }
               
                
            }
          
        }
        
        cout<<endl;
    }
   
   
     
    return 0;
}