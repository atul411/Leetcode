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
    fun mergeTwoLists(l1: ListNode?, l2: ListNode?): ListNode? {
        if (l1 == null)
            return l2
        if (l2 == null)
            return l1
        var head1 = l1
        var head2 = l2
        var a: ListNode?
        if (head1.`val` <= head2.`val`) {
            a = head1; head1 = head1.next
        } else {
            a = head2; head2 = head2.next
            
        }
        var ans = a
        while (head1 != null && head2 != null) {
            if (head1.`val` <= head2.`val`) {
                a?.next = head1
                a = a?.next
                head1 = head1.next
            } else {
                a?.next = head2
                a = a?.next
                head2 = head2.next
            }
        }
        while (head1 != null) {
            a?.next = head1
            a = a?.next
            head1 = head1.next
        }
        while (head2 != null) {
            a?.next = head2
            a = a?.next
            head2 = head2.next
        }
        return ans
    }
}
