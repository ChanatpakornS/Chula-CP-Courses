// Your code here
int process(node *n, KeyT &result, int &max_balance) {
    if (n == NULL) return 0;

    int lh = 0, rh = 0;
    if(n->left != NULL) lh = process(n->left, result, max_balance);   
    if(n->right != NULL) rh = process(n->right, result, max_balance);   

    int diff = std::abs(lh -rh);
    if(max_balance < diff) {
        max_balance = diff;
        result = n->data.first;
    }
    else if (max_balance == diff && mLess(n->data.first, result))
        result = n->data.first;    
    
    return 1 + std::max(lh, rh);
}

KeyT getValueOfMostImbalanceNode() {
    KeyT result = mRoot->data.first;
    int mxx = 0;
    process(mRoot, result, mxx);
    return result;
}
