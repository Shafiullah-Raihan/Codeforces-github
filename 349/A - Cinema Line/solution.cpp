#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[100000];
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int p1=0, p2=0, p3=0;
	int check=0;
	for(int i=0; i<n; i++){
		if(a[i]==25){
			p1++;
		}
		else if(a[i]==50){
			p2++;
			p1--;
		}
		else{
			if(p1>=1 && p2>=1){
				p2--;
				p1--;
			}
			else if(p2==0 && p1>=3){
				p1-=3;
			}
			else{
				check=1;
			}
		}
		if(p1<0 || p2<0){
			check=1;
		}
	}
	
	if(check==0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
} 