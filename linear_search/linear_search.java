public class Linear_Search
{
    //    tbs = to be searched
    public static int algo(int tbs, int ar[]){
        for(int a = 0; a < (ar.length); a++){
            if(ar[a] == tbs) {
                return a;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        int arr[] = {30, 19, 75, 87, 65, 98, 1456, 1} ;
        int tbs = 65 ;
        int found = algo(tbs, arr) ;
        if (found == -1){
            System.out.print("Element is not found !!") ;
        }
        else if( found != -1){
            System.out.print("Element is found at index " + found) ;
        }

    }
}