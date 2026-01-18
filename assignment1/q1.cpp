#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> &arr, int key, int off_set = 0){
	if(arr.empty()){
	return(-1);
	}
	int n = arr.size();
	int m = n/2;
	if (arr[m]==key){
		return(m+off_set);
	} else if(arr[m]>key){
			vector<int> temp(arr.begin(),arr.begin()+m);
		return binary(temp, key, off_set);
	} else if(arr[m]<key){
			off_set+=m+1;
			vector<int> temp(arr.begin()+m+1, arr.end());
		
		return binary(temp, key, off_set);
	}
}

int main(){
	vector<int> j;
	for(int i = 1; i<=10; i++){
		j.push_back(i);
	}
	int i = 11;
	cout<<binary(j, i);
	
}
