class primeFactor{
    public static final int mx = 1000001 ; 
    public static final List<Integer>[] factor = new ArrayList[mx] ; 
    static{
        for(int i = 0 ; i < mx ;i++) factor[i] = new ArrayList<>() ; 
        for(int i = 2 ; i<mx ;i++){
            if (factor[i].isEmpty()) {
                for (int j = i; j < mx; j += i) factor[j].add(i);
            }
        }
    }
  // this method return all the prime factor of number between 2 to 10^6. Time Complexity(mxlogmx) ; 
  // ex 
//2 [2]
//3 [3]
//4 [2]
//5 [5]
//6 [2, 3]
//7 [7]
//8 [2]
//9 [3]
//10 [2, 5] ...............
  public List<Integer>[] getFactor(){
    return factor ; 
  }
}
