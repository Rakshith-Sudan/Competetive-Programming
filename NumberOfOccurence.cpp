  #include<iostream>
using namespace std;
class Solution {
         public:
         int count(int arr[], int n, int x){
                  int flag = 0;
                  for(int i =0; i<n; i++){
                           if(x == arr[i])
                           flag++;
                  }
                  return flag;
         }
};
int main(){
         int t;
         cin>>t;
         while (t--){
                 int n,x;
                 cin>>n>>x;
                 int arr[n];
                 for(int i= 0; i<n; i++){
                          cin>>arr[i];
                 }
                 Solution ob;
                 auto ans  = ob.count(arr, n, x);
                 cout<<ans<<endl;
         }
}
