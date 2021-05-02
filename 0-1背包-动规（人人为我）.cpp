#include <iostream>
using namespace std;
int main(){
    int n,weight;
    cin>>weight>>n;
    int w[10000],d[10000];
    for(int i=1;i<=n;i++){
        cin>>w[i]>>d[i];
    }
    int val[10000]={0};
    for(int i=1;i<=n;i++){
        for(int j=weight;j>=w[i];j--){
            if(j+w[i]>=0){
                val[j]=max(val[j-w[i]]+d[i],val[j]);
            }
        }
    }
    cout<<val[weight];
    return 0;
}
