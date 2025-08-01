void miniMaxSum(vector<int> arr) {
  long long sum = 0, max = LLONG_MIN, min = LLONG_MAX;

  for(int i = 0; i < arr.size(); i++){
    sum += arr[i];
    if(arr[i] > max) max = arr[i];
    if(arr[i] < min) min = arr[i];
  }

  long long minSum = sum - max;
  long long maxSum = sum - min;

  cout << minSum << " " << maxSum << endl;
}
