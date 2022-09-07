#include <exception>
#include <experimental/filesystem> // C++-standard filesystem header file in VS15, VS17.
#include <iostream>

namespace fs = std::experimental::filesystem; // experimental for VS15, VS17.

__declspec(dllexport) void CopyDecryptedData() {

	fs:copy("Data", "Data_decrypt", fs::copy_options::recursive);

}
