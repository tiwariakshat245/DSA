class Solution {
    public int numberOfSteps(int num) {
        return numberofSteps(num, 0);
    }
    public int numberofSteps(int num, int steps){
        if (num == 0){
            return steps;
        }
        if (num % 2 == 0) {
            return numberofSteps(num / 2, steps + 1);
        }
        return numberofSteps(num - 1, steps + 1);
    }
}