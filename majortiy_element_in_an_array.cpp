class Solution {
public:
    int majorityElement(int a[], int size) {
        int maxcount = 0;
        int index = -1;
//initialising value 
        
        for (int i = 0; i < size; i++) {
//traverse on outer loop 
            int count = 0;
            
            for (int j = 0; j < size; j++) {
                if (a[i] == a[j])
                    count++;
//condition and checking if outer loop is equal to inner loop if eqaul then count = count + 1 return
            }
            
            if (count > maxcount) {
                maxcount = count;
                index = i;
//if count is greater than maxcount then store the value in count and make intialise the index to i
            }
        }
        
        if (maxcount > size / 2)
//if max count is greater than 2 then return the index of which is store 
            return a[index];
        
        // Return a value or throw an exception for no majority element
        // For example:
        return -1; // No majority element
    }
};
