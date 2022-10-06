class Trie {
    private:
    struct node{
    node* dict[26]={NULL};
    bool isword=false;};
    
node* root=new node();
public:
    Trie() {
        
    }
    
    void insert(string word) {
        node* temp=root;
        for(char c:word)
        {
            if(!temp->dict[c-'a']){
                temp->dict[c-'a']=new node();
            }
            temp=temp->dict[c-'a'];}
        temp->isword=true;
                
                
            
        
    }
    
    bool search(string word) {
        node* temp=root;
        for(char c:word)
        {
            if(!temp->dict[c-'a'])return false;
            temp=temp->dict[c-'a'];}
        return temp->isword;
        }
        
        
    
    
    bool startsWith(string prefix) {
        node* temp=root;
        for(char c:prefix){
            if(!temp->dict[c-'a'])return false;
            temp=temp->dict[c-'a'];
        }
        return true;
        }
    
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */