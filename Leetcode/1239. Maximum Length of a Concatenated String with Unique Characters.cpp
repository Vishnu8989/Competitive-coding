class Solution {
    public int maxLength(List<String> arr) {
        return helper(arr,0,new int[26]);

    }

    public int helper(List<String> arr, int idx,int[] freq){
        if(idx == arr.size()){
            return 0;
        }


        int exc = helper(arr,idx+1,freq);

        boolean isunique = true;

        String word = arr.get(idx);
        for(char ch : word.toCharArray()){
            if(freq[ch-'a'] != 0){
                isunique = false;
            }
            freq[ch-'a']++;
        }

        int inc = 0;
        if(isunique){
            inc = helper(arr,idx+1,freq) + word.length();
        }

        for(char ch : word.toCharArray()){
            freq[ch-'a']--;
        }

        return Math.max(inc,exc);

    }
}
