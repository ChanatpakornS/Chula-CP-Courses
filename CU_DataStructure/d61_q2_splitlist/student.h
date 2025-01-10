void splitList(list<T>& list1, list<T>& list2) {
    iterator it = begin();
    int pos_end = mSize /2;
    if (mSize % 2) ++pos_end;
    for(int i=0 ; i < pos_end; ++i) ++it;
    if(pos_end) {
        list1.mHeader->prev->next = mHeader->next;
        mHeader->next->prev = list1.mHeader->prev;
        it.ptr->prev->next = list1.mHeader;
        list1.mHeader->prev = it.ptr->prev;
    }

    if(mSize - pos_end) {
        list2.mHeader->prev->next = it.ptr;
        it.ptr->prev = list2.mHeader->prev;
        list2.mHeader->prev = mHeader->prev;
        mHeader->prev->next = list2.mHeader;
    }
    
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    
    mSize = 0;
}
