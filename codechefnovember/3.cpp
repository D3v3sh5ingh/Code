#include <bits/stdc++.h>
using namespace std; 

struct Point 
{ 
	long long int x, y; 
}; 

float dist(Point p1, Point p2) 
{ 
	return sqrt( (p1.x - p2.x)*(p1.x - p2.x) + 
				(p1.y - p2.y)*(p1.y - p2.y) 
			); 
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	int n,m,k;
	Point a;
	cin>>a.x>>a.y;
	cin>>n>>m>>k;
	Point b[n],c[m],d[k];
	for(int i=0;i<n;i++){
		cin>>b[i].x>>b[i].y;
	}
	for(int i=0;i<m;i++){
		cin>>c[i].x>>c[i].y;
	}
	for(int i=0;i<k;i++){
		cin>>d[i].x>>d[i].y;
	}
	int ii,ij;
	float min = FLT_MAX; 
	for (int i = 0; i < n; ++i){ 
		for (int j = 0; j < m; ++j){ 
			for(int q=0;q<k;q++){
			if (dist(a, b[i]) + dist(b[i], c[j])+dist(c[j], d[q]) < min){ 
				ii=i;
				ij=j;
				min =dist(a, b[i]) + dist(b[i], c[j])+dist(c[j], d[q]); 
			}
			if (dist(a, c[j]) + dist(c[j], b[i])+dist(b[i], d[q]) < min){ 
				ii=i;
				ij=j;
				min =dist(a, c[j]) + dist(c[j], b[i])+dist(b[i], d[q]);
			}
			}
		}
	}
	
	cout<<setprecision(10)<<min<<endl;
	}
	return 0; 
} 
