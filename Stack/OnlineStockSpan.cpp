// 901. Online Stock Span

// Problem Link : https://leetcode.com/problems/online-stock-span/description/

class StockSpanner {
public:
    stack<pair<int,int>>st;

    // pair.first -> price
    // pair.second -> span

    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;

        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }

        st.push({price,span});

        return span;
    }
};