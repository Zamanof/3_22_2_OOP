#include<iostream>

using namespace std;

int main() {
	// fstream library
	//	- ofstream - output stream class (for write to file)
	//	- ifstream - input stream class (for read from file)
	//	- fstream - two way stream class (for read and write)
	/*
		fstream()
		
		fstream(
		const char* name		// file name
		, int omode				// open mode
		, int filebuf:openprot	// file protected)

		fstream(
		int f					// file descriptor
		)

		fstream (
		int f					// file descriptor
		char* buf				// buffer
		int len					// buffer size
		)


		enum _Openmode{
			in			= 0x01	//	open only for read
			out			= 0x02	//	open only for write
			ate			= 0x04	//	set pointer to end of file
			app			= 0x08	//	append data to end of file
			trunc		= 0x10	//	truncate file size to 0
			_Nocreate	= 0x40	//	if file not found, file open error
			_Noreplace	= 0x80	//	if file found, file open error
			binary		= 0x20	//	open file for binary 
		}
	*/
}