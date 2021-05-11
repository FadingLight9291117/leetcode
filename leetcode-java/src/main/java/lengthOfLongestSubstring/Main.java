package lengthOfLongestSubstring;

public class Main {

    public static void main(String[] args) {
        System.out.println(lengthOfLongestSubstring("addenda"));
//        System.out.println(1);
    }

    public static int lengthOfLongestSubstring(String s) {
        int i = 0;
        int result = 0;
        for (int j = 0; j < s.length(); ++j) {
            if (s.substring(i, j).contains(String.valueOf(s.charAt(j)))) {
                i = s.substring(i, j).indexOf(String.valueOf(s.charAt(j))) + i + 1;
            }
            result = Math.max(result, j - i + 1);
        }
        return result;
    }
}