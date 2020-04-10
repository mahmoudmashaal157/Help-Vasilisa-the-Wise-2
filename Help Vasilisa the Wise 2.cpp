#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2];
    int b[2];
    int c[6];
    int r1,r2,c1,c2,d1,d2;
    int flag=1;
    cin>>r1>>r2; c[0]=r1;c[1]=r2;
    cin>>c1>>c2; c[2]=c1; c[3]=c2;
    cin>>d1>>d2;c[4]=d1; c[5]=d2;
    int x= *max_element(c,c+6);
    //cout<<x;
    for(int i=1;i<=x;i++){
        a[0]=i;
        a[1]=r1-a[0];
        b[0]=c1-a[0];
        b[1]=r2-b[0];
        if(a[0]+a[1]==r1&&b[0]+b[1]==r2&&a[0]+b[0]==c1&&a[1]+b[1]==c2&&a[0]+b[1]==d1&&a[1]+b[0]==d2&&a[0]!=b[0]&&a[0]!=a[1]&&a[0]!=b[1]&&b[0]!=a[1]&&b[0]!=b[1]&&a[1]!=b[1]){
        if(a[0]>=1&&a[0]<=9&&a[1]>=1&&a[1]<=9&&b[0]>=1&&b[0]<=9&&b[1]>=1&&b[1]<=9){
            flag=1;
            break;
        }
        }
        else
            flag=0;
    }
    if(flag==1){
        cout<<a[0]<<" "<<a[1]<<endl;
        cout<<b[0]<<" "<<b[1];
    }
    else
        cout<<-1;

}
