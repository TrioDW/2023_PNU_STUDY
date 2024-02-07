#include <filesystem>
#include <iostream>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main() {
  auto begin = fs::recursive_directory_iterator();
  auto end = fs::recursive_directory_iterator();
  for(auto it = begin; it != end; ++it){
    const string blank(it.depth()*2, ' ');
    auto& entry = *it;
    if(fs::is_regular_file(entry)){
      cout << blank << " F " << entry;
      cout << " (" << file_size(entry) << ") bytes " << endl;
    } else if (fs::is_directory(entry)){
      cout << blank << " D " << entry << endl;
    }
  }
  return 0;
}
