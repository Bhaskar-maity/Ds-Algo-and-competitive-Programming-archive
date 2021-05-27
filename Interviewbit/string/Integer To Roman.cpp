// https://www.youtube.com/watch?v=JyLrPSJNfYw
// https://www.interviewbit.com/problems/integer-to-roman/
// Input 1:
//     A = 5
// Output 1:
//     "V"

// Input 2:
//     A = 14
// Output 2:
//     "XIV"


string Solution::intToRoman(int num) {

    
    string thousands[] = {"", "M", "MM", "MMM"};
      string hundreds[] = 
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
      string tens[]  = 
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
      string units[] = 
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
      string res= thousands[num / 1000] + 
           hundreds[(num % 1000) / 100] + 
           tens[(num % 100) / 10] + 
           units[num % 10];
    
    return res;
}

