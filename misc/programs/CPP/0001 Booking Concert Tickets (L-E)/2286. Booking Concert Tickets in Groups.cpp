class BookMyShow {
    int* A_occupancy;
    int numRows, numCols;
    int first_A_row;
    int first_unused_row;
public:
    BookMyShow(int n, int m) {
        A_occupancy = new int[n];
        std::fill_n(A_occupancy,n,m);
        first_A_row=first_unused_row=0;
        numRows=n;
        numCols=m;
    }
    
    vector<int> gather(int k, int maxRow) {
        if(k>numCols) {return{};}
        for(int i=first_A_row;i<=maxRow;i++){
                
            if(A_occupancy[i]>=k){
                A_occupancy[i]-=k;
                if(i==first_A_row){
                    while(A_occupancy[first_A_row]==0 && first_A_row<(numRows-1) ){first_A_row++;}
                }
                if(i>=first_unused_row) first_unused_row=i+1;
                return vector<int>{i,numCols-A_occupancy[i]-k};
            }
            else{
                if(i<first_unused_row && numCols-A_occupancy[i]<=k) {
                    i = first_unused_row-1;//as after for 1 will be added
                }

            }
        }
        return vector<int>{};
    }
    
    bool scatter(int k, int maxRow) {
        long int max_tot_a1 =0;
        long int rem_a2 = 0;
        if(first_unused_row<=maxRow){
             max_tot_a1 = (long int)(first_unused_row - first_A_row + 1/*for ceil*/ )/2 * numCols;
             rem_a2 = (long int)(maxRow - first_unused_row+1 ) * numCols;
        }
        else{
            max_tot_a1 = (long int)(maxRow+1 - first_A_row + 1/*for ceil*/ )/2 * numCols;
            if(max_tot_a1<0){
                cerr<<"in scatter... unexpected..."<<endl;
                max_tot_a1 = 0;
            }
        }
        if (max_tot_a1+rem_a2<k) return false; 


        
        int a_seats=0;
        for(int i=first_A_row;i<=maxRow;i++){
            a_seats+=A_occupancy[i];
            if(a_seats>=k) {
                A_occupancy[i]=a_seats-k;
                first_A_row=i;
                while(A_occupancy[first_A_row]==0 && first_A_row<(numRows-1) ){first_A_row++;}
                if(i>=first_unused_row) first_unused_row=i+1;
                return true;
            }
        }
        return false;
    }
};


/**
 * Your BookMyShow object will be instantiated and called as such:
 * BookMyShow* obj = new BookMyShow(n, m);
 * vector<int> param_1 = obj->gather(k,maxRow);
 * bool param_2 = obj->scatter(k,maxRow);
 */
