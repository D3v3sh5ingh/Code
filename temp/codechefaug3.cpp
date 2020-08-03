   #include<iostream>
    #include<vector>
    using namespace std;
    void card(string s);
    int main()
    {
      
        int t;
        cin>>t;
        while(t--){
            string str;
            cin>>str;
            card(str);
        }
        return 0;
    }
		
    void card(string s){
        int n=s.length();
    string res="WIN";
    if(n<=1){//ye kya h ?
        if(s[0]=='0')res="LOSE"
          ;
    }
    else if(n==2){
        if((s[0]=='1'&&s[1]=='1')||(s[0]=='0'&&s[1]=='0')){
            res="LOSE";
        }
    }
    else{

        for( int j=0;j<n;j++)
        {   int i=0;
            for( i=0;i<n;i++)
            {
                if(i==n-1){
                if(s[i]=='1'&&s[i-1]!='d')
                {
                    s[i]='d';
                    if(s[i-1]=='0') s[i-1]='1';
                    if(s[i-1]=='1') s[i-1]='0';
                }
                
                else if(s[i]=='1'&&s[i-1]=='d'){
                    s[i]=='d';
                }
            }else if(i==0)
            {
                if(s[i]=='1'&&s[i+1]!='d')
                {
                    s[i]='d';
                    if(s[i+1]=='0') s[i+1]='1';
                    if(s[i+1]=='1') s[i+1]='0';
                }
                else if(s[i]=='1'&&s[i+1]=='d'){
                    s[i]=='d';
                }
            }
            else
            {

                if(s[i]=='1'&&s[i-1]!='d'&&s[i+1]!='d')
                {
                    s[i]='d';
                    if(s[i+1]=='0'){
                         s[i+1]='1';
                         
                        //  cout<<"reaching"<<s[i+1]<<endl;
                         }
                    if(s[i+1]=='1') s[i+1]='0';
                    if(s[i-1]=='0') s[i-1]='1';
                    if(s[i-1]=='1') s[i-1]='0';
                }
                else if(s[i]=='1'&&s[i-1]=='d'&&s[i+1]!='d')
                {
                    s[i]='d';
                    if(s[i+1]=='0') s[i+1]='1';
                    if(s[i+1]=='1') s[i+1]='0';
                    // if(s[i-1]='0') s[i-1]='1';
                    // if(s[i-1]='1') s[i-1]='0';
                }
            else if(s[i]=='1'&&s[i-1]!='d'&&s[i+1]=='d')
                {
                    s[i]='d';
                    // if(s[i+1]='0') s[i+1]='1';
                    // if(s[i+1]='1') s[i+1]='0';
                    if(s[i-1]=='0') s[i-1]='1';
                    if(s[i-1]=='1') s[i-1]='0';
                }
                
                else if(s[i]=='1'&&s[i+1]=='d'&&s[i-1]=='d'){
                    s[i]=='d';
                }
                // cout<<s<<" After i"<<i<<endl;
                }
            }
        }
    
    for(int i=0;i<n;i++)
            {
                if(s[i]!='d')res="LOSE";
                        break;
            }

            }
        // cout<<s<< " dsfsdf "<<endl;

    cout<<res<<endl;
        }