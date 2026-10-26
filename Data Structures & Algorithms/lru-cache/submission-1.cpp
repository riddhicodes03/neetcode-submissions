struct Node {
    int key, val;
    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        val = v;
        prev = nullptr;
        next = nullptr;
    }
};
class LRUCache {
    
    unordered_map<int,Node*> mp;
    int capacity;
    Node*head;
    Node*tail;
   void deleteNode(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
   void insertNode(Node* node){
        head->next->prev=node;
        node->prev=head;
        node->next=head->next;
        head->next=node;
    }
public:
    LRUCache(int capacity) {  
    head = new Node(-1, -1);
    tail = new Node(-1, -1);
     head->next=tail;
     tail->prev=head;
     this->capacity=capacity;
    }
    
    int get(int key) {
       if(mp.find(key)!=mp.end()){
        deleteNode(mp[key]);
        insertNode(mp[key]);
        return mp[key]->val;
       }
       else return -1;
    }
    
    void put(int key, int value) {
       if(mp.find(key)!=mp.end())
       {
        mp[key]->val=value;
        deleteNode(mp[key]);
        insertNode(mp[key]);
        return;
       }else{
        if(mp.size()==capacity){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        mp[key]=new Node(key,value);
        insertNode(mp[key]);
       }
    }
};
