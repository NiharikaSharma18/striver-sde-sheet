//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        stack<int> s;
        while(head!=NULL){
            s.push(head->data);
            head=head->next;
        }
        int carry=0;
        Node* result=NULL;int sum=0;
        int i=0;
        while(!s.empty() || carry!=0){
            int a=(!s.empty())? s.top():0;
            if(i==0){
             sum=a+1;
                i++;
            }
            else
            {
                sum=a+carry;
            }
            int digit=sum%10;
            carry=sum/10;
            Node* newNode = new Node(digit);
          

            newNode->next=result;
            result=newNode;
            if(!s.empty())
            s.pop();
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends