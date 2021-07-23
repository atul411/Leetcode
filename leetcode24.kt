/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun swapPairs(head: ListNode?): ListNode? {
        var (a,ans) = Pair(head,head)

        while (a != null)
        {
            if (a.next != null)
            {
                a.`val` = (a.next)?.`val`.also { a!!.next?.`val` = a!!.`val` }!!
                a = a.next
            }
            a = a?.next
        }
        return ans
    }
}