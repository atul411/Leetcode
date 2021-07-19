/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * */
  class ListNode(var `val`: Int) {
      var next: ListNode? = null
  }

class Solution {
    fun isPalindrome(head: ListNode?): Boolean {
        var a = ArrayList<Int>()
        var b = head
        while (b != null)
        {
            a.add(b.`val`)
            b = b.next
        }
        var x = 0; var y = a.size-1;
        while (x<y)
        {
            if (a.elementAt(x)!= a.elementAt(y))
                return false
            x++;y--;
        }
        return true
    }
}










