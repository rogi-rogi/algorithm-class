#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;
vector<int> arr;
vector<int> arr2;

void merge(int left, int right) {
	if ((right - left) > (N / K)) //필요 없는 곳은 생략
		return;

	int mid = (left + right) / 2;

	int leftTemp = left; //왼쪽 값들의 인덱스
	int rightTemp = mid + 1; //오른쪽 값들의 인덱스
	int arr2Index = left; //병합된 데이터 저장할 곳

	//합병
	while (leftTemp <= mid && rightTemp <= right) 
	{
		//작은값을 먼저 임시 벡터에 저장
		if (arr[leftTemp] <= arr[rightTemp]) 
			arr2[arr2Index++] = arr[leftTemp++];	
		else arr2[arr2Index++] = arr[rightTemp++];
	}

	int tmp = leftTemp > mid ? rightTemp : leftTemp;
	while (arr2Index <= right) 
		arr2[arr2Index++] = arr[tmp++]; //작은 값들 정렬 후 나머지 합병

	for (int leftTemp = left; leftTemp <= right; leftTemp++) 
		arr[leftTemp] = arr2[leftTemp]; //원래 정렬에 저장
}

void merge_sort(int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge(left, right);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	arr.resize(N);
	arr2.resize(N);

	for (int i = 0; i < N; i++) 
	{
		cin >> arr[i];
	}

	cin >> K;

	merge_sort(0, N - 1);

	for (int i = 0; i < N; i++) 
		cout << arr2[i] << ' ';
}