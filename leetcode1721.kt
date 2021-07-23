class Solution {
    fun swapNodes(head: ListNode?, k: Int): ListNode? {
        var lo = head
        var hi = head
        for(idx in 1 until k) hi = hi!!.next
        // to keep track of the 1st node to swap
        val fromHead = hi

        while(hi?.next != null){
            lo = lo!!.next
            hi = hi!!.next
        }

        // to keep track of the 2nd node to swap
        val fromTail = lo

        // to swap value of the two nodes
        val temp = fromHead!!.`val`
        fromHead!!.`val` = fromTail!!.`val`
        fromTail!!.`val` = temp

        return head
    }
}