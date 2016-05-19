struct Results solution(int A[], int N, int K) {
    struct Results result;  
    result.A = A;
    result.N = N;
    
    int temp[1000];
    //rotate K times
    while ( K > 0 )
    {
        //copy A[] to temp[]
        for ( int j = 0 ; j < N ; j++ )
        {
            temp[j] = A[j];
        }
        //arrange
        for ( int i = 0 ; i < N ; i++ )
        {
            if ( i < N-1 )
            A[i+1] = temp[i];
            else 
            A[0] = temp[i];
        }
        K--;
    }    
    
    return result;
}
