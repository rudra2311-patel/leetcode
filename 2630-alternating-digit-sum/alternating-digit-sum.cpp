class Solution {
public:
    int alternateDigitSum(int n) {
        int answer = 0;
        int numOfDigits = 0;
        int temp = n;
        int digit;

        while (temp > 0) {
            digit = temp % 10;          
            numOfDigits++;

        
            if (numOfDigits % 2 == 0) 
                answer += digit;
            else 
                answer -= digit;

            temp /= 10;                  
        }


        if (numOfDigits % 2 == 0)
            return answer;
        else
            return -answer;
    }
};