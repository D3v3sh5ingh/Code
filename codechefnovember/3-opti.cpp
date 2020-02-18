#include <iostream> 
#include <float.h> 
#include <stdlib.h> 
#include <math.h> 
using namespace std; 

struct Point 
{ 
	long long int x, y; 
}; 

int compareX(const void* a, const void* b) 
{ 
	Point *p1 = (Point *)a, *p2 = (Point *)b; 
	return (p1->x - p2->x); 
} 
int compareY(const void* a, const void* b) 
{ 
	Point *p1 = (Point *)a, *p2 = (Point *)b; 
	return (p1->y - p2->y); 
} 
float dist(Point p1, Point p2) 
{ 
	return sqrt( (p1.x - p2.x)*(p1.x - p2.x) + 
				(p1.y - p2.y)*(p1.y - p2.y) 
			); 
} 

float bruteForce(Point P[], int n) 
{ 
	float min = FLT_MAX; 
	for (int i = 0; i < n; ++i) 
		for (int j = i+1; j < n; ++j) 
			if (dist(P[i], P[j]) < min) 
				min = dist(P[i], P[j]); 
	return min; 
} 

float min(float x, float y) 
{ 
	return (x < y)? x : y; 
} 



float stripClosest(Point strip[], int size, float d) 
{ 
	float min = d;
	for (int i = 0; i < size; ++i) 
		for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j) 
			if (dist(strip[i],strip[j]) < min) 
				min = dist(strip[i], strip[j]); 

	return min; 
} 

float closestUtil(Point Px[], Point Py[], int n) 
{ 
	// If there are 2 or 3 points, then use brute force 
	if (n <= 3) 
		return bruteForce(Px, n); 
	int mid = n/2; 
	Point midPoint = Px[mid]; 

	Point Pyl[mid+1]; // y sorted points on left of vertical line 
	Point Pyr[n-mid-1]; // y sorted points on right of vertical line 
	int li = 0, ri = 0; // indexes of left and right subarrays 
	for (int i = 0; i < n; i++) 
	{ 
	if (Py[i].x <= midPoint.x) 
		Pyl[li++] = Py[i]; 
	else
		Pyr[ri++] = Py[i]; 
	} 

	float dl = closestUtil(Px, Pyl, mid); 
	float dr = closestUtil(Px + mid, Pyr, n-mid); 
	float d = min(dl, dr); 

	Point strip[n]; 
	int j = 0; 
	for (int i = 0; i < n; i++) 
		if (abs(Py[i].x - midPoint.x) < d) 
			strip[j] = Py[i], j++; 

	return min(d, stripClosest(strip, j, d) ); 
} 

float closest(Point P[], int n) 
{ 
	Point Px[n]; 
	Point Py[n]; 
	for (int i = 0; i < n; i++) 
	{ 
		Px[i] = P[i]; 
		Py[i] = P[i]; 
	} 

	qsort(Px, n, sizeof(Point), compareX); 
	qsort(Py, n, sizeof(Point), compareY); 

	return closestUtil(Px, Py, n); 
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
	float res=-1,min = FLT_MAX; 
	char x='x';
	for (int i = 0; i < n; ++i){ 
			if (dist(a, b[i]) < min){ 
				min = dist(a, b[i]);
					x='b';
				ii=i; 
			}
		}
	
	for (int i = 0; i < m; ++i){ 
			if (dist(a, c[i]) < min){ 
				min = dist(a, c[i]);
				x='c';
				ii=i; 
			}
		}
		float min1 = FLT_MAX;

	int di,bi,ci;
	if(x=='c'){
		for (int i = 0; i < n; ++i){ 
			for(int j=0;j<k;j++){
			if (dist(d[j], b[i]) < min){ 
				min1 = dist(d[j], b[i]);
				di=j;
				bi=i; 
			}
			}
		}
		res=min+dist(c[ii], b[bi])+min1;
	}
	else if(x=='b'){
			for (int i = 0; i < m; ++i){ 
			for(int j=0;j<k;j++){
			if (dist(d[j], c[i]) < min){ 
				min1 = dist(d[j], c[i]);
				ci=i;
				di=j; 
			}
			}
		}
		res=min+min1+dist(b[ii],c[ci]);
	}
	cout<<res<<endl; 
	}
	return 0; 
} 
