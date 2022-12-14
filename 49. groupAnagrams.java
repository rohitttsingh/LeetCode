class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> result = new ArrayList<>();

        Map<String, List<String>> m = new HashMap<>();
        for(String str : strs){
            char[] strArr = str.toCharArray();//CONVERT THE TRING TO INDIVIDUAL CHAR
            Arrays.sort(strArr);// TO SORT THE CHARACTER SUPPOSE ITS EAT->AET
            String cur = new String(strArr);
            if(!m.containsKey(cur)){
                List<String> temp = new ArrayList<String>(); 
                temp.add(str);
                m.put(cur, temp);
            }else{
                m.get(cur).add(str);
            }
        }
        result.addAll(m.values());
        return result;
    }
}
