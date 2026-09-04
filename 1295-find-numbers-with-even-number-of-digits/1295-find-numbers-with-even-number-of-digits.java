class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
	    for (int num:nums){
	        if(even(num)) {
	            count++;
	        }
	    }
	    return count;
	} 
	// function to check wheather number contain even digit or not ..
	 boolean even (int num) {
	    int numberofDigits=digits(num);
	    if(numberofDigits % 2 == 0 ) {
	        return true;
	    }
	    return false; 
	    //return numberofDigits % 2 == 0;
	    // directly iss line ko bhi use kr skte instead of if condition ..
	}
	//count no of digits in a number 
	 int  digits(int num ) {
	    if(num<0) {
	        num=num*-1;
	    }
	    if(num == 0) {
	        return 1;
	    }
	    int count = 0;
	    while (num>0) {
	        count++;
	        num=num/10;
	    }
	    return count;
	    
	    
	}
        
    }
