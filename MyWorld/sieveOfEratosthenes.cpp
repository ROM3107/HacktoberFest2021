#include<iostream>
#include<climits>
using namespace std;
void primeSieve(int num){
    int isPrime[100]={0};
    for(int i=2;i<num;i++){
        if(isPrime[i]==0){
            for(int j=i*i;j<num;j+=i){
                isPrime[j]=1;
            }
        }
    }
    for(int i=2;i<num;i++){
        if (isPrime[i]==0)
        {
            cout<<i<<" ";
        } 
    }cout<<endl;
    
}
int main(){
    primeSieve(10);
    return 0;
}