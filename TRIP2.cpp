    #include <iostream>
    #include <vector>
    #include<bits/stdc++.h> 


    using namespace std;
    #define lli long long int

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            int n,k;
            string res="YES";
        
            cin>>n>>k;
            vector<int>a;
            for(int i=0;i<n;i++){
                int temp;
                cin>>temp;
                a.push_back(temp);
            }
            if(n==1){
                if(a[0]==-1){
                    cout<<"YES"<<endl;
                    cout<<1<<endl;
                }
                else{
                cout<<"YES"<<endl;
                cout<<a[0]<<endl;
                }
            }
            else{
            for(int i=0;i<n;i++){
                if(a[i]==-1&&i==n-1){
                    for(int j=1;j<=k;j++){
                        if(j!=a[i-1]){
                            a[i]=j;
                            break;
                        }
                    }
                }
                else if(a[i]==-1&&i==0){
                    for(int j=1;j<=k;j++){
                        if(j!=a[i+1]){
                            a[i]=j;
                            break;
                        }
                    }
                }
                else if(a[i]==-1&&i!=n-1&&i!=0){
                    for(int j=1;j<=k;j++){
                        if(j!=a[i-1]&&j!=a[i+1]){
                            a[i]=j;
                            break;
                        }
                    }
                }
            }
            }
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    res="NO";
                }
            }
            if(res=="YES"){
                cout<<res<<endl;
                for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<res<<endl;
            }
        }   
        return 0;
    }