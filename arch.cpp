#include <memory>

std::shared_ptr<int> initMemory(){
	
	auto x = std::make_shared<int>();
	
	return x;
}
