#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  node * st = begin().ptr;
  while(st != end().ptr) {
    if (st->data == value) {
      node * remem = st->next;
      st->prev->next = st->next;
      st->next->prev = st->prev;
      delete st;
      st = remem;
      --mSize;
    } else {
      st = st->next;
    }
  }
}

#endif
