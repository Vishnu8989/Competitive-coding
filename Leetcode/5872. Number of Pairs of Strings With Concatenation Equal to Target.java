class Solution {
    public int numOfPairs(String[] nums, String target) {
        int a = nums.length;
        int tot = 0;
        for(int i = 0;i<a;i++){
            for(int j=0;j<a;j++){
                if(i==j){
                    continue;
                }
                else if(comp((nums[i]+nums[j]),target)){
                    // System.out.println(nums[i]+"+"+nums[j]+"="+nums[i]+nums[j]+"=="+target);
                    tot++;
                }
            }
        }
        return tot;
    }
    public boolean comp(String A,String B){
            int a = A.length();
            if(A.length()!=B.length()){
                return false;
            }
            for(int i = 0;i<a;i++){
                if(A.charAt(i)!=B.charAt(i)){
                    return false;
                }
            }
            // System.out.println(A+" "+B);
            // System.out.println(A.indexOf(0)+" "+B.indexOf(0));
            return true;
        }
}
