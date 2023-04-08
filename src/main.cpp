#include "octree.cpp"
#include <iostream>

int main() {

    Octree tree(1, 1, 1, 5, 5, 5);
 
    tree.insert(1, 2, 3);
    tree.insert(1, 2, 3);
    tree.insert(6, 5, 5);
    
    std::cout << (tree.find(1, 2, 3)
                 ? "Found\n"
                 : "Not Found\n");
 
    std::cout << (tree.find(3, 4, 4)
                 ? "Found\n"
                 : "Not Found\n");

    tree.insert(3, 4, 4);
 
    std::cout << (tree.find(3, 4, 4)
                 ? "Found\n"
                 : "Not Found\n");
    std::getchar();
    return 0;
}