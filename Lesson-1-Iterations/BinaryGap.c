int solution(int N) {
    int gap=0, longestGap=0, b=N, bin[1000], i, k;
    
    //store binary to bin[]
    for( i = 0 ; b != 0 ; i++ )
    {
        bin[i] = b%2;
        b = N >> i;
    }
    
    //compute the gap between binaries
    for ( k = i-1 ; k > 0 ; k-- )
    {
        if ( bin[k] == 0 ) {
            gap++; }
        else
        {
            if (longestGap == 0 || longestGap < gap) {
                longestGap = gap;
                gap = 0; }
            else if (longestGap > gap || longestGap == gap) {
                gap = 0; }
        }    
    }
   
    return longestGap;
}
