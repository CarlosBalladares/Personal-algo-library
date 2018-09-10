/*
  This is my C++ implementation of mergesort.
  sorts in O(nlogn)
*/
void merge(vector<int>* arr, int leftBegin, int middle, int rightEnd){
    // We declare out indices
    //  - i for LeftTemp
    //  - j for RightTemp
    //  - k for arr
    int i, j, k;
    // We declare the size of out temp arrays
    int n1, n2;
       
    // left arr goes from  [leftBegin, ...., middle] (sizes are +1 largest index)
    n1 = middle-leftBegin+1;
    // right arr goes from [middle+1, ... , rightEnd] (rightEnd -middle -1)+1
    n2 = rightEnd - middle; 
    
    // init temp arrs
    vector<int> leftArr (n1);
    vector<int> rightArr(n2);
    
    for (int i = 0; i < n1; i++) 
        leftArr[i]= (*arr)[i+leftBegin]; // TODO fix ugly pointers
    for (int j = 0; j < n2; j++) 
        rightArr[j]= (*arr)[j+middle+1];
    
    i = 0;
    j = 0;
    k = leftBegin;
    
    // merging subarrays into arr
    while( i < n1 && j <n2){
        if(leftArr[i] <= rightArr[j]){
            (*arr)[k] = leftArr[i];
            i++;
        }else{
            (*arr)[k] = rightArr[j];
            j++;
        }
        k++;
    }
    
    // Adding remaining elements only one of these will execute
    while(i < n1){
        (*arr)[k] = leftArr[i];
        i++;
        k++;
    }
    
    while(j < n2){
        (*arr)[k] = rightArr[j];
        j++;
        k++;
    }
    return count;
}

void mergesort_rec(vector<int> *arr, int leftBegin, int rightEnd){
    if(leftBegin >= rightEnd){
        return 0;
    }
    int mid = floor( (leftBegin + rightEnd) /2 );
    mergesort_rec(arr, leftBegin, mid);
    mergesort_rec(arr, mid+1, rightEnd);
    
    merge(arr, leftBegin, mid, rightEnd);

}

void mergesort(vector<int> *arr) {
    int n = ( arr->size() );
    return mergesort_rec(arr, 0, n-1);
}
