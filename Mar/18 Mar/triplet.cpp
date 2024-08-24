vector<int> compareTriplets(vector<int> a, vector<int> b) {
  int length_of_array = a.size();
  int alice = 0;
  int bob = 0;
  for(int i=0;i< length_of_array; i++){
      if(a[i] > b[i]){
          alice++;
      }
      if(a[i] < b[i]){
          bob++;
      }
      else{
          continue;
      }
  }

  return {alice,bob};