#include <iostream>
#include <string>

void show_fileName(std::string);

int main(int argc, char* argv[]){
	std::string fileLink1("/home/roman/text.txt");
	std::string fileLink2("../text.txt");
	std::string fileLink3("text.txt");

	show_fileName(fileLink1);		
	show_fileName(fileLink2);		
	show_fileName(fileLink3);		

	return 0;
}

void show_fileName(std::string fLink){
	std::size_t pos = fLink.rfind('/');

	if(pos != std::string::npos)
		std::cout << fLink.substr(pos + 1) << std::endl;
	else
		std::cout << fLink << std::endl;
}
