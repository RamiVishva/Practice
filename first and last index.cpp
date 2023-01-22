// Topic : Array
// Link : https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_839724?topList=top-array-coding-interview-questions
//Platform : Code Studio
#include <bits/stdc++.h>
using namespace std;

int firstIndex(vector<int>& arr, int n, int x){
	int s=0;
	int e=n-1;
	int ans=-1;
	int m=s+(e-s)/2;
	while(s<=e){
		
		if(arr[m]==x){
			ans=m;
			e=m-1;
		}
		else if(x<arr[m]){
			e=m-1;
		}
		else if(x>arr[m]){
			s=m+1;
		}
		m=s+(e-s)/2;
	}
	return ans;
}

int lastIndex(vector<int>& arr, int n, int x){
	int s=0, e=n-1;
	int ans=-1;
	int m=s+(e-s)/2;
	while(s<=e){
		
		if(arr[m]==x){
			ans=m;
			e=m+1;
		}
		else if(x<arr[m]){
			e=m-1;
		}
		else if(x>arr[m]){
			s=m+1;
		}
		m=(s+e)/2;
	}
	return ans;
}

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	// Write your code here.
	pair<int, int> ans;
	ans.first=firstIndex(arr,n,x);
	ans.second=lastIndex(arr,n,x);
	return ans;
}

int main(){
    vector<int> arr={-10,-5,-5,-5,2};
    pair<int,int>a=findFirstLastPosition(arr,5,-5);
    cout<<a.first<<" "<<a.second<<endl;
    return 0;
}
