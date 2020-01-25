//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int i,j;
    i=0;
    j=i+1;
    while(i<n-1 && j<n){
        if(A[i] == A[j]){
            j++;
            continue;
        }
        i++;
        swap(A[i], A[j]);
        j++;
    }
    return i+1;
}
