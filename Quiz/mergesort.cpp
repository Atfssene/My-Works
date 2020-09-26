#include<stdio.h>
int arr[] = {20,30,10,2,1,5,6,4,17,15};


void show(int left, int right){
	for(int i = left ; i <= right ; i++){
		printf("%d ",arr[i]);
	}
	puts("");
}

void merge(int left, int right){
	int middle = (left+right)/2;
	int leftIndex = left ,rightIndex = middle+1 ,arrIndex = left;
	int tempArr[200];
	while(leftIndex <= middle && rightIndex <= right){
		if(arr[leftIndex] < arr[rightIndex]){
			tempArr[arrIndex] = arr[leftIndex];
			leftIndex++;
			arrIndex++;
		}else{
			tempArr[arrIndex] = arr[rightIndex];
			rightIndex++;
			arrIndex++;	
		}
	}
	while(leftIndex <= middle){
		tempArr[arrIndex] = arr[leftIndex];
		leftIndex++;
		arrIndex++;
	}
	while(rightIndex <= right){
		tempArr[arrIndex] = arr[rightIndex];
		rightIndex++;
		arrIndex++;
	}
	for(int i = left ; i <= right ;i++){
		arr[i] = tempArr[i];
	}
}

void mergeSort(int left, int right){
	if(right <= left)return;
	
	int mid = (left+right)/2;
	//devide kiri
	mergeSort(left,mid);
	//device kanan
	mergeSort(mid+1,right);
	//merge
	merge(left,right);
}


int main(){
	int right = (sizeof(arr)/sizeof(arr[0]))-1;
	mergeSort(0,right);
	show(0,right);
	
	return 0;
}
