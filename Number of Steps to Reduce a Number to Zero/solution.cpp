class Solution {
   public:
    int result = 0;
    int numberOfSteps(int num) {
        result++;
        return num ? (num == 1 ? this->result : numberOfSteps(!(num % 2) ? num / 2 : num - 1)) : 0;
    }
};