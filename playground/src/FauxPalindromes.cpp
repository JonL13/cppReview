#include <string>
#include <iostream>
using namespace std;

class FauxPalindromes {
public:
    string classifyIt(string word){
        if(checkPalindrome(word)){
            return "PALINDROME";            
        }
        if(checkFauxPalindrome(word)){
            return "FAUX";        
        }
        return "NOT EVEN FAUX"; 
    }
private:
    bool checkPalindrome(string word){
        for(size_t i = 0; i < word.length()/2; i++){
            if(word[i] != word[word.length()-1-i]){
                return false;
            }
        }
        return true;
    }
		
    bool checkFauxPalindrome(string word){
        for(size_t i = word.length()-1; i > 0; i--){
            if(word[i] == word[i-1]){
                word.erase(i,1);
            }
        }
            
        return checkPalindrome(word);
    }
};