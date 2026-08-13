class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;

        unordered_set<char> vowels={'a','e', 'i', 'o', 'u',
                                    'A', 'E', 'I', 'O', 'U'};

        while(left<right){
            while(left<right && !vowels.count(s[left])){
                left++;//move left until u found vowel
            }

            while(left<right && !vowels.count(s[right])){
                right--;//move right until u find vowel from last 
            }

            //now swap and move inward
            if(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            

        }
        return s;
        
    }
};