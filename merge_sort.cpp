void merge(vector < int > & arr, int left, int middle, int right) {
    vector <int> a;
    vector <int> b;
    
    int i = left;
    while(i <= middle) {
        a.push_back(arr[i]);
        i++;
    }
    
    i = middle+1;
    while(i<=right) {
        b.push_back(arr[i]);
        i++;
    }
    i = 0;
    int j = 0;
    vector <int> res;
    while (i<a.size() && j<b.size()) {
        if (a[i] < b[j]) {
            res.push_back(a[i]);
            i++;
        }
        else {
            res.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()) {
        res.push_back(a[i]);
        i++;
    }
    while(j<b.size()) {
        res.push_back(b[j]);
        j++;
    }
    
    i=left;
    for(auto element : res) {
        arr[i] = element;
        i++;
    }
    
    
}
void mergeSort(vector < int > & arr, int left, int right) {
    // Write your code here
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
