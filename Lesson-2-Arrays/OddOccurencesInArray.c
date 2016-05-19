int solution(int A[], int N) {
    int ele=0;
    
    for ( int i=0 ; i<N ; i++ )
    {
        ele = ele ^ A[i];
    }
    
    return ele;
}
