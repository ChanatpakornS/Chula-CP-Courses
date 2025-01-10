void shift(int k) {
  //concat the mSize to int cause there's a problem with data type
	int n = mSize;
	k %= n;
	if(k < 0) k += n;
	if(k == 0) return;
	iterator it = begin();
	while(k--) ++it;
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	mHeader->next = it.ptr;
	mHeader->prev = it.ptr->prev;
	it.ptr->prev->next = mHeader;
	it.ptr->prev = mHeader;
}
