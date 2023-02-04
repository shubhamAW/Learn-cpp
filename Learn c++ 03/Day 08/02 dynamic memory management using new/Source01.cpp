int main() {
	int* pn = new int;
	*pn = 1;
	delete pn;
	pn = nullptr;
}

/*
1. malloc is not a keyword, new is a keyword.
2. malloc is a function, new is a operator.
3. malloc needs to be passed number of bytes to reserve, the number of bytes to be reserved is passed automatically to new by compiler.
4. explicit type casting is required on return value of malloc, no such type casting is required on the value returned by new
5. memory reserved using malloc should be freed using free function. memory reserved using new should be freed using delete operator.
6. In case of malloc...free inclusion of malloc.h is reuqired. In case of new delete inclusion of particular header file is not required.
7. malloc...free can be invoked in c/c++ programs. new and delete can be invoked only in c++ programs.
8. malloc doesn't invoke constructor where as new invokes constructor.
   free doesn't invoke destructor where as delete invokes destructor.
   It is because of this in c++ call to malloc...free is discouraged.

'new int' allocates one int space (4 bytes) on free store.
'delete pn' releases same space allocated on free store.
Note 'delete pn' doesn't delete 'pn' itself, it releases
memory pointed by pn.

It's possible that 'new' may fail to allocate space on free store.
In such case, an exception 'std::bad_alloc' is thrown.
If malloc fails it returns null.

Differences between malloc/free and new/delete

1. malloc and free can be called from both c/c++ programs.
   new and delete can be called only from c++ programs.

2. malloc and free are functions.
   new and delete are c++ operators.

3. To use malloc/free, we need to include malloc.h.
   No header file is needed for new and delete.

4. malloc needs to be passed with number of bytes to be allocated on
   free store.
   No such information need to be passed to new operator

5. The return value of malloc is generic pointer. Type casting is
   therefore required to convert it to specific type pointer.
   No explicit casting is required with new operator

6. malloc doesn't call constructor and free doesn't call destructor.
   new calls constructor and delete calles destructor.
*/