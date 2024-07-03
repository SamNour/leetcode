class Solution {
    public String[] reorderLogFiles(String[] logs) {
        ArrayList<String> digits_arr = new ArrayList<>();
        ArrayList<String> letters_arr = new ArrayList<>(); 


        for (String log : logs){
            if (Character.isDigit(log.split(" ", 2)[1].charAt(0))){
                digits_arr.add(log);
            } else {
                letters_arr.add(log);
            }
        }
        /* sort the logs */
        letters_arr.sort(Comparator
                    .comparing((String x)-> x.split(" ", 2)[1])
                    .thenComparing((String x)-> x.split(" ", 2)[0]));
        
        /* assemble the final list */
        ArrayList<String> output = new ArrayList<>(); 
        for (String letter_log : letters_arr) output.add(letter_log);
        for (String digit_log : digits_arr)   output.add(digit_log);
        
        return output.toArray(new String[0]);
    }
}
