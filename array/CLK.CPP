#include <string>
using namespace std;

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string result = "";
	    bool isFirst = true;
	    
	    for (char c : S) {
	        if (isFirst && c != ' ') {
	            result += c;
	            isFirst = false;
	        } else if (c == ' ') {
	            isFirst = true;
	        }
	    }
	    
	    return result;
	}
};
