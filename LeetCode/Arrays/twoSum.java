 public int[] twoSum(int[] nums, int target) {
        
        for(int i = 0; i < nums.length; i++){
          for(int j = 0; j < nums.length; j++){
            if(i != j){
                if(nums[i] + nums[j] == target){
                    int A[] = {i,j};
                    return A;
                }
            }
        }  
        }
        return null;
    }