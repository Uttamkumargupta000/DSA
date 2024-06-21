class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        double num1=0,num2=0,den1=0,den2=0;
        string temp = "";
        
        //intilise the pointer to the stating of the string
        int i=0;
        
        //geting the individual sring as integer in numerator next and putting the pointer to the next
        while(i < str.length() && str[i] != '/'){
            num1 = num1*10 +(str[i] - '0');
            i++;
        }
        i++;
        
        while(i < str.length() && str[i] != ','){
            den1 = den1*10 + (str[i] - '0');
            i++;
        }
        
        i+=2;
        
        while(i < str.length() && str[i] != '/'){
            num2 = num2*10 +(str[i] - '0');
            i++;
        }
        i++;
        
        while(i < str.length()){
            den2 = den2*10 + (str[i] - '0');
            i++;
        }
        
        //getting the value of both fraction part
        double f1 = num1/den1;
        double f2 = num2/den2;
        
        //checking which part is greater
        if(f1 > f2){
            i=0;
            while(str[i] != ','){
                temp += str[i];
                i++;
            }
            return temp;
        }

        else if(f1 < f2){
            i = str.length() - 1;
            while(str[i] != ' '){
                temp += str[i];
                i--;
            }
            reverse(temp.begin(), temp.end());
            return temp;
        }
        
        //if both part is eqaul 
        else{
            return "equal";
        }
    }
};