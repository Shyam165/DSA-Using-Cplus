// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxprof = 0;
//         int bestbuy = prices[0];

//         for(int i=1;i<prices.size();i++){
//             if(bestbuy<prices[i]){
//                 maxprof = max(maxprof, prices[i]-bestbuy);
//             }
//             bestbuy = min(bestbuy, prices[i]);
//         }
//         return maxprof;
//     }
// }