#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int mod=1000000007;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int *arr=new int[n+2];
        arr[0]=-1;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        arr[n+1]=INT_MAX;

        bool first=false;
        bool last=false;
        bool mid=false;
        if(arr[1]==1){
            first=true;
            last=false;
            mid=false;
        }
       else if(arr[n]==1){
            first=false;
            mid=false;
            last=true;


        }
        else{
            mid=true;
            first=false;
            last=false;

        }
        int q;
        cin>>q;
        while(q--){
            int r;
            cin>>r;
           int chef=0;
           int chefu=0;
           int currturn=0;
           bool chefturn=true;
           bool chefuturn=false;
           if(n==1){
               if(first){
                   cout<<(r*1)%mod<<endl;

               }
               else{
                   if(arr[1]%2==0){
                      int  temp=((arr[1]-1)*r)%mod;
                      cout<<(temp+1)%mod<<endl;

                   }
                   else{
                       cout<<(arr[1]*r)%mod<<endl;
                   }
               }


           }
           else{

               if(first){
                   if(r<=n){
                       cout<<1<<endl;
                   }
                    currturn=0;
                   if(r>n){

                       if(r%n==1||r%n==0){
                           cout<<(r/n)<<endl;
                       }
                       else{
                           cout<<(r/n)+1<<endl;
                       }

                   }

               }
              else if(last){
                   if(r<=n){
                       int ans=0;
                       int currturn=1;
                       for(int i=1;i<=n;i++){
                           if(currturn==r&&r<n){
                               ans=(ans+arr[i])%mod;
                               break;
                           }
                           if(currturn==r){
                               ans+=1;
                            //  cout<<"i am last";
                               break;
                           }
                         else if(arr[i]%2==0){
                               ans=(ans+arr[i])%mod;
                           }
                           else{
                            ans=(ans+arr[i]-1)%mod;
                           }
                           currturn++;

                       }
                       cout<<ans<<endl;
                   }
                   else{
                       int ans=0;
                       int currturn=0;
                       for(int i=1;i<=n;i++){
                           if(i==n){
                               ans=(ans+arr[i])%mod;
                               break;
                           }
                           if((arr[i]%2)==0){
                            ans=(ans+arr[i])%mod;
                           }
                           else{
                               ans=(ans+arr[i]-1)%mod;
                           }


                       }
                       ans=(ans*(r/n))%mod;
                       int restelemet=r%n;
                       for(int i=1;i<=restelemet;i++){
                           if(i==restelemet){
                               ans=(ans+arr[i])%mod;

                           }
                           else{
                               if(arr[i]%2==0){
                                   ans=(ans+arr[i])%mod;
                               }
                               else{
                                    ans=(ans+arr[i]-1)%mod;

                               }
                           }
                       }
                       cout<<ans<<endl;


                   }

               }
             else if(mid){
                   if(r<=n){
                       int currturn=1;
                       int ans=0;
                       for(int i=1;i<=n;i++){
                          if(i==n||i==r){
                              ans=(ans+arr[i])%mod;
                              break;
                          }
                         else if(arr[i]==1&&i!=r){
                              if(arr[i-1]%2==0){
                                  ans=(ans-1)%mod;
                              }
                              else{
                                  ans=(ans+1)%mod;
                              }
                          }
                          else{
                              if(arr[i]%2==0){
                                  ans=(ans+arr[i])%mod;

                              }
                              else{
                                  ans=(ans+arr[i]-1)%mod;

                              }

                          }



                       }


                   cout<<ans<<endl;
                   }
                   else{
                       int ans=0;
                       for(int i=1;i<=n;i++){
                           if(i==n){
                               if(arr[i]%2==0){
                                   ans=(ans+arr[i]-1)%mod;
                               }
                               else{
                                   ans=(ans+arr[i])%mod;
                               }

                           }
                         else if(arr[i]==1){
                               if(arr[i-1]%2==0){
                                   ans=(ans-1)%mod;
                               }
                               else{
                                   ans=(ans+1)%mod;
                               }

                           }
                        else{
                            if(arr[i]%2==0){
                                ans=(ans+arr[i])%mod;
                            }
                            else{
                                ans=(ans+arr[i]-1)%mod;

                            }
                        }
                       }
                    if(r%n==0){
                        int p=(r/n)-1;
                        ans=(ans*p)%mod;
                         for(int i=1;i<=n;i++){
                          if(i==n){
                              ans=(ans+arr[i])%mod;
                              break;
                          }
                         else if(arr[i]==1&&i!=n){
                              if(arr[i-1]%2==0){
                                  ans=(ans-1)%mod;
                              }
                              else{
                                  ans=(ans+1)%mod;
                              }
                          }
                          else{
                              if(arr[i]%2==0){
                                  ans=(ans+arr[i])%mod;

                              }
                              else{
                                  ans=(ans+arr[i]-1)%mod;

                              }

                          }



                       }


                   cout<<ans<<endl;




                    }
                    else{
                        ans=(ans*(r/n))%mod;
                        int remainingelement=r%n;
                         for(int i=1;i<=remainingelement;i++){
                          if(i==remainingelement||i==remainingelement){
                              ans=(ans+arr[i])%mod;
                              break;
                          }
                         else if(arr[i]==1&&i!=remainingelement){
                              if(arr[i-1]%2==0){
                                  ans=(ans-1)%mod;
                              }
                              else{
                                  ans=(ans+1)%mod;
                              }
                          }
                          else{
                              if(arr[i]%2==0){
                                  ans=(ans+arr[i])%mod;

                              }
                              else{
                                  ans=(ans+arr[i]-1)%mod;

                              }

                          }



                       }


                   cout<<ans<<endl;

                    }

                   }

               }
               else{
                   int ans=0;
                   if(r<=n){
                       for(int i=1;i<=n;i++){
                           if(i==r){
                                ans=(ans+arr[i])%mod;
                                break;
                           }
                          else if(arr[i]%2==0){
                               ans=(ans+arr[i])%mod;
                           }
                           else{
                               ans=(ans+arr[i]-1)%mod;
                           }
                       }
                       cout<<ans<<endl;
                   }
                   if(r>n){
                       int ans=0;
                       if(r%n==0){
                           for(int i=1;i<=n;i++){
                               if(i==n){
                                   if(arr[i]%2==0){
                                       ans=(ans+arr[i]-1)%mod;
                                   }
                                   else{
                                       ans=(ans+arr[i])%mod;
                                   }
                                   break;


                               }
                               else{
                                   if(arr[i]%2==0){
                                       ans=(ans+arr[i])%mod;
                                   }
                                   else{
                                       ans=(ans+arr[i]-1)%mod;
                                   }

                               }


                           }
                           int l=r/n;
                           l=l-1;
                           ans=(ans*l)%mod;
                            for(int i=1;i<=n;i++){
                               if(i==n){

                                       ans=(ans+arr[i])%mod;

                                   break;


                               }
                               else{
                                   if(arr[i]%2==0){
                                       ans=(ans+arr[i])%mod;
                                   }
                                   else{
                                       ans=(ans+arr[i]-1)%mod;
                                   }

                               }


                           }
                           cout<<ans<<endl;
                       }
                       else{
                           for(int i=1;i<=n;i++){
                               if(i==n){
                                   if(arr[i]%2==0){
                                       ans=(ans+arr[i]-1)%mod;
                                   }
                                   else{
                                       ans=(ans+arr[i])%mod;
                                   }
                                   break;


                               }
                               else{
                                   if(arr[i]%2==0){
                                       ans=(ans+arr[i])%mod;
                                   }
                                   else{
                                       ans=(ans+arr[i]-1)%mod;
                                   }

                               }


                           }
                           int l=r/n;
                           int remainingelement=r%n;
                           ans=(ans*l)%mod;
                           for(int i=1;i<=remainingelement;i++){
                               if(i==remainingelement){
                                   ans=(ans+arr[i])%mod;
                               }
                               else{
                                   if(arr[i]%2==0){
                                       ans=(ans+arr[i])%mod;
                                   }
                                   else{
                                       ans=(ans+arr[i]-1)%mod;
                                   }
                               }
                           }
                           cout<<ans<<endl;

                       }

                   }

               }

           }


        }

    }
    return 0;
}
