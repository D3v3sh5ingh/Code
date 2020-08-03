#include<bits/stdc++.h> 


using namespace std;
#define lli long long int

struct lib{
    lli noofbooks,signuptime,booksend;
    vector<lli> books;//ye index rkha hua h n?
    
};

bool sortstructure(lib a, lib b) 
{ 
    return (a.signuptime > b.signuptime); 
} 

void sort_scored(vector<lli> &books,lli score_of_book[],lli b,lli n ){
/* 
    lli n = books.size();
    
    lli j=0;
    while(j<n){
        for(lli i =0;i<n-1;i++){
            if(score_of_book[books[i]]<score_of_book[books[i+1]]){
                swap(books[i],books[i+1]);
            }
        }
        j++;
    }  */
    
    lli arr[n];
    for(lli i=0;i<n;i++){
        arr[i] = score_of_book[books[i]];
    }
    vector<pair<int,int> >V;
    for(lli i=0;i<n;i++){
        pair<int,int>P=make_pair(arr[i],books[i]);
        V.push_back(P);
    }

    sort(V.begin(),V.end());
    for(lli i=0;i<n;i++){
        books[i] = V[i].second;
    }
   /*  cout<<"In fucntion"<<endl;
    for(lli i=0;i<n;i++) {
        cout<<books[i]<<" ";
    }   
    cout<<endl; */
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli b,l,d; //No of books, library , total no of days 
    cin>>b>>l>>d;    
    
    vector<lib> libr;
        libr.push_back(lib());

    //  Structue ka vector | each for each library
    lli score_of_book[b]; //Score of books Line 2 of input
    for(lli i=0;i<b;i++){
        cin>>score_of_book[i];
    }

    //TESTING
//     cout<<"Bhaiya score hai yeh "<<endl;
//  for(lli i=0;i<b;i++){
     
//         cout<<score_of_book[i]<<" ";
//     }
//     cout<<endl;
    //TESTING

    for(lli i=0;i<l;i++){
        lli noofbooks,signuptime,booksend;
        vector<lli> books;
        
        cin>>noofbooks>>signuptime>>booksend;
        libr[i].noofbooks=noofbooks;
        libr[i].signuptime=signuptime;
        libr[i].booksend=booksend;
        
        for(lli j=0;j<noofbooks;j++)
        {
            lli temp;
            cin>>temp;
            books.push_back(temp);
        }
        sort_scored(books,score_of_book,b,libr[i].noofbooks);

        for(lli j=0;j<noofbooks;j++)
        {
            libr[i].books.push_back(books[j]);
        }// impressive!
        
        // yaha print karane ka code likhde for testing
    //TESTING

          for(lli j=0;j<noofbooks;j++)
        {
            cout<<libr[i].books[j]<<" ";
        }
        cout<<endl;
     } 
    //TESTING

    

    sort(libr.begin(), libr.end(), sortstructure); 
    // TESTING

     for(lli i=0;i<l;i++){
        cout<<"Library number"<<i<<" "<<endl;
        cout<<libr[i].noofbooks<<" " << 
        libr[i].signuptime << " "
         << libr[i].booksend<<endl;
    }
    
    // TESTING

    lli index_filled=0, library_count=0;

    for(lli i=0;i<l;i++){
    
        if(index_filled+ libr[i].signuptime < d){
            library_count++;
            index_filled += libr[i].signuptime;
            cout << i <<" ";

        lli bacha_hua_days = d - index_filled;

        lli kitni_book_bhejegi = bacha_hua_days/ libr[i].booksend;
        
        if( kitni_book_bhejegi > libr[i].noofbooks){
            cout<<libr[i].noofbooks<<endl;
            for(int j=0;j<libr[i].noofbooks;i++){
                cout<< libr[i].books[i] <<" ";
            }
            cout<<endl;
        }
        else{
            cout<<kitni_book_bhejegi;
            for(int j=0;j<kitni_book_bhejegi;i++){
                cout<< libr[i].books[i] <<" ";
            }
            cout<<endl;
        }
        }
        
        
    }
    
    return 0;
}
// 6 2 7
// 1 2 3 6 5 4
// 5 2 2
// 0 1 2 3 4
// 4 3 1
// 3 2 5 0