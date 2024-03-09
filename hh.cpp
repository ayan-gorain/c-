class Solution{
    static List<Integer> get(int a, int b) {
        // Swap the numbers without using a temporary variable
        a = a + b;
        b = a - b;
        a = a - b;
        
        // Create a list to store the swapped numbers
        List<Integer> result = new ArrayList<>();
        result.add(a);
        result.add(b);
        
        return result;
    }
};