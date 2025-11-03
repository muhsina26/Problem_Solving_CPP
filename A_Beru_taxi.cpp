#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b;
 cin>>a>>b;
 double ans=LONG_LONG_MAX;

 int n;
 cin>>n;
 while(n--){
    int x,y,speed;
    cin>>x>>y>>speed;
    double time=0;

   double distance=sqrt(pow(x-a,2)+pow(y-b,2));
    time=distance/speed;
    ans=min(ans,time);


 }
 cout<<fixed<<setprecision(20)<<ans<<endl;
}