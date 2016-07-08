/** Name: Kendrick Chu
 UCLA ID: 004136504
 Date: 5/13/16
 @File:  This assignment was used to have us use iterators to modify an existing binary search tree that was provided in the book.  In this assignment, I modified the binary search tree to store an int data value and included functions that would get the smallest and largest value of the binary search tree.  A bidirectional iterator was also implemented containing the functions being(), end(), and appropriate operators overloaded for the iterator.  Parent nodes were added to the TreeNodes and the erase and insert functions were modified.  I also modified the destructor to make sure that my code wouldn't create any memory leaks.  The code has been templated and modified with another Point2D class.
 */


#include "BinarySearchTree.h"
#include "PointOrder.h"
#include <string>

int main() {
    //Create binary search tree, give it values {2,3,5,11,13,17}
    BinarySearchTree<int> bst;
    bst.insert(3);
    bst.insert(2);
    bst.insert(11);
    bst.insert(13);
    bst.insert(5);
    bst.insert(17);
    
    //Prints to the console: 2,3,5,11,13,17,
    for (auto x : bst) {
        std::cout << x << ",";
    }
    std::cout << std::endl;
    
    BinarySearchTree<Point2D, PointOrderx> points_by_x;
    points_by_x.insert(Point2D(1, 2));
    points_by_x.insert(Point2D(7, 3));
    points_by_x.insert(Point2D(2, 1));
    
    //Prints to the console: (1,2),(2,1),(7,3),
    for (auto x : points_by_x) {
        std::cout << x << ",";
    }
    std::cout << std::endl;
    
    BinarySearchTree<Point2D, PointOrdery> points_by_y;
    points_by_y.insert(Point2D(1, 2));
    points_by_y.insert(Point2D(7, 3));
    points_by_y.insert(Point2D(2, 1));
    
    //Prints to the console: (2,1),(1,2),(7,3),
    for (auto x : points_by_y) {
        std::cout << x << ",";
    }
    std::cout << std::endl;
    
    BinarySearchTree<std::string, std::greater<std::string>> names;
    names.insert("Luke");
    names.insert("Kanye");
    names.insert("Pentatonix");
    
    //Prints to the console: Pentatonix, Luke, Kanye
    for (auto x : names) {
        std::cout << x << ",";
    }
    std::cout << std::endl;
    
    return 0;
}