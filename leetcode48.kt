class Solution {
    fun rotate(matrix: Array<IntArray>): Unit {
        var (n, m) = listOf(matrix.size, matrix[0].size)
        for (i in 0 until n) {
            for (j in 0 until i) {
                matrix[i][j] = matrix[j][i].also { matrix[j][i] = matrix[i][j] }
            }
        }
        for (i in 0 until n) {
            matrix[i].reverse()
        }
    }
}