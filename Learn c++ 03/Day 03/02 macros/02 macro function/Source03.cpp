#include "macros.h"

int main() {
	int i = 1, j = 2;
	SWAP(i, j);
	int k = MIN(i, j);
}

/*
* To view code of a macro function or any other function, right click on the function name and
* then click on to the Goto Definition. This takes control to the respective definition (provided it is
* available).
* 
* To view content of the translation unit Click Project > Properties 
* Set Configuration to Debug and Platform to All Platforms.
* Then click on to C/C++ > Preprocessor and set
* Preprocess to a File and Preprocess Supress Line Numbers properties to Yes.
* Then close the dialog and right click on to the source file and click compile.
* This produces .i file in Project Debug directory.
* If the .i file is not visible, refresh Solution Explorer.
* The .i file will be displayed. Open the file to see the translation unit code.
*/
