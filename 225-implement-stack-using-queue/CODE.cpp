//https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:

    queue<int> q1, q2;

    MyStack() {
        
    }
    
    void push(int x) {
        //transferring elements from q1 to q2:
        while( q1.empty() == false )
        {
            q2.push(q1.front());
            q1.pop();
        }

        //add x to q1:
        q1.push(x);

        //adding all elements of q2 to q1:
        while( q2.empty() == false )
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int val = q1.front();
        q1.pop();
        return val;  
    }
    
    int top() {
        return q1.front();     
    }
    
    bool empty() {
        return q1.empty();
    }
};

