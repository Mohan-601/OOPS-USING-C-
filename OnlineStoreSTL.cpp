#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <ctime>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct Product{
    int productID;
    string name;
    string category;
};
struct Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};
int main(){
vector<Product> products = {
    {101,"Laptop","Electornics"},
    {102,"smartphone","Electornics"},
    {103,"cofee maker","Kitchen"},
    {104,"blender","kitchen"},
    {105,"deskLamp","kitchen"},
};
deque<string> recentCustomers={
    "C001"
    "C002"
    "C003"
}




    return 0;
}