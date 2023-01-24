void Main() {

}

/*
Can any function be an entry point function?
* No. By default, main is the entry point function for console application.
* And WinMain is the entry point function for Windows Application.
* If we do not mention entry point function as expected in the project, we get linking error as below:
* error LNK2019: unresolved external symbol _main referenced in function "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ)
*/