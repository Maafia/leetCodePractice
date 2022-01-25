class Solution {

    public int romanToInt(String s) {


        char numeralArray[] = new char[s.length()];

        for(int i = 0; i < s.length(); i++){
            numeralArray[i] = s.charAt(i);
        }

        int numberArray[] = new int[numeralArray.length];

        for(int i = 0; i < numeralArray.length; i++){
            switch (numeralArray[i]){

                case 'I':
                    numberArray[i] = 1;
                    break;

                case 'V':
                    numberArray[i] = 5;
                    break;

                case 'X':
                    numberArray[i] = 10;
                    break;

                case 'L':
                    numberArray[i] = 50;
                    break;

                case 'C':
                    numberArray[i] = 100;
                    break;

                case 'D':
                    numberArray[i] = 500;
                    break;

                case 'M':
                    numberArray[i] = 1000;
                    break;
            }
        }

        int sum = 0;
        int j = 0;
        //XLIX[10,50,1,10] = 49
        for(int i = 0; i < (numberArray.length - 1); i++){
            if(numberArray[i] < numberArray[i + 1]){
                sum+= -(numberArray[i]);
            }else if(numberArray[i] >= numberArray[i + 1]){
                sum+= numberArray[i];
            }
            j++;    // variable i, will never get to last value, so
        }
        sum+= numberArray[j]; // we have to increment j to get last value in the array
        return sum;
    }
}