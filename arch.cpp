#include <memory>

bool initMemory(){
	
	auto x = std::make_shared<int>(2);
	
	if(x == nullptr)
		return false;
	
	return true;
	
}