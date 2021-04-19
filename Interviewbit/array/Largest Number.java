public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    class comp implements Comparator<String> {
        @Override
        public int compare(String a, String b) {
            return (b + a).compareTo(a+b);
        }
    }
    public String largestNumber(final int[] A) {

        String ans="";
        int cnt=0;

        ArrayList<String> s = new ArrayList<String>();
        for(int i=0; i<A.length; i++){
            if(A[i] == 0){
                cnt++;
            }
            s.add(Integer.toString(A[i]));
        }
        Collections.sort(s, new comp());
        for(int i=0; i<A.length; i++){
            ans+=s.get(i);
        }
        if(cnt == A.length) return "0";
        else return ans;
    }
}
