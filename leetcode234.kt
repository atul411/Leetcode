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
fun main(){
    
}









