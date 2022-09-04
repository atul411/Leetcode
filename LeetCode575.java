import java.util.*;

class Solution {
    public int distributeCandies(int[] candyType) {
        Set<Integer> set = new HashSet<>();
        int size = candyType.length;
        for (int i = 0; i < size; i++) {
            set.add(candyType[i]);
        }
        return set.size() == size / 2 ? size / 2 : set.size();
    }
}
