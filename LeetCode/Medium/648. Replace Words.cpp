//Link : https://leetcode.com/problems/replace-words/

class Solution {
public:
    // Function to replace words in a sentence based on a given dictionary
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> words;
        string word = ""; 
        
        for(auto ch : sentence) {
            if(ch == ' ') { // If a space is encountered, add the formed word to the vector and reset the word variable
                words.push_back(word);
                word = "";
            } else {
                word += ch; 
            }
        }
        
        sort(dictionary.begin(), dictionary.end()); // Sort the dictionary in lexicographical order
        
        string result = "";
        
        words.push_back(word); // Add the last word to the vector
        
        
        for(auto it : words) {
            bool found = false;
            
            for(auto dict : dictionary) {
                int dictSize = dict.size();
                
                // If the current word starts with a word in the dictionary, replace it and break the loop
                if(it.substr(0, dictSize) == dict) {
                    found = true;
                    result += dict;
                    break;
                }
            }
            
            // If no replacement word is found, add the original word to the result
            if(!found) {
                result += it;
            }
            
            result += ' '; // Add a space after each word
        }
        
        result.pop_back(); // Remove the extra space at the end
        
        return result;
    }
};