class Solution {
    public int maxSubArray(int[] nums) {
        int p=0;
		int ans=Integer.MIN_VALUE;
		for(int val:nums)
		{
			p=Math.max(val,p+val);
			ans=Math.max(p,ans);
		}
		return ans;
    }
}
