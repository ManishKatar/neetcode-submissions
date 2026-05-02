#include <string>
#include <cctype>
using namespace std;



class Solution {
public:
    bool isPalindrome(string s) {
        int left  = 0;
        int right = s.length() -1;

        while(left <right){
  // removing non numeric and alphabetical number from left and right 
            while(left < right && !isalnum(s[left])){
                left ++;

            }

            while(left < right && !isalnum(s[right])){
                right --;

            }
// compaing left lower aphanumeric number to right is not equal return false
            if( tolower(s[left]) != tolower(s[right])){

                return false;
            }
            left ++;
            right--;
        } 
    return true;




        
    }
};
