package LinkedListPractice.Questions;

import java.util.*;
import java.util.List;

class solution
{
    private static List<int[]> getPairs(List<int[]> a, List<int[]> b, int target) {
        List<int[]> results = new ArrayList<>();
        Collections.sort(a, (ai, bi) -> ai[1] - bi[1]);
        Collections.sort(b, (ai, bi) -> ai[1] - bi[1]);

        int left = a.size() - 1, right = 0;
        int max = Integer.MIN_VALUE;

        while (left >= 0 && right < b.size())
        {
            int sum = a.get(left)[1] + b.get(right)[1];
            if (sum > target)
            {
                left--;
            }
            else
            {
                if (sum > max)
                {
                    max = sum;
                    results.clear();
                }
                if (sum == max)
                    results.add(new int[]{a.get(left)[0], b.get(right)[0]});
                right++;
            }
        }
        return results;
    }
}