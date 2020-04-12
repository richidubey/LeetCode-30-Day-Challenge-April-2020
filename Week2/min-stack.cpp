//Que Link:https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3292/

struct sstack
{
    struct sstack *next;
    long long int data;
};

class MinStack {
    
    private :
    struct sstack *tops;
    bool fflag;

public:
    /** initialize your data structure here. */

    long long int min;

    MinStack() {
        tops=NULL;
       fflag=true;
        
    }
    
    void push(long long int x) {
        
        struct sstack *add=new struct sstack;
        
        if(fflag==true)
        {
            cout<<"New beginnings"<<endl;
            fflag=false;
            min=x;
        }
        
        if(x<=min)
        {
          
            long long int y=2*x-min;
            min =x;
            x=y;
            cout<<"Hey new min is "<<min<<" and the value pushed is "<<x<<endl;
        }
        
        add->data=x;
        add->next=tops;
        
        tops=add;
    }
    
    void pop() {
        
        if(tops->data<min)
        {
            min=2*(long long int)min-tops->data;
        }
        tops=tops->next;
        
        if(tops==NULL)
        {
            cout<<"Hii stack got empty"<<endl;
             fflag=true;
        }
        
    }
    
    int top() {
        if(tops->data<min)
        {
            cout<<"Invoked me, so returning real min"<<min<<endl;
            return min;
        }
        
        return tops->data;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
