// namespace first{
//     int x=2;
// }

// namespace second{
//     int x=2;
// }

// int main() {
//     //Namespace = provides a solution for preventing name conflicts
//     //in larde projrcts.Each entity needs a unique name.A namespace allows for
//     // identically named entities as long as the namespaces are different
//        using namespace first;

//   std :: cout  <<first::x;
 
    
#include<iostream>

int main() {
    using std::cout;
    using std::string;

    string name ="bro";


    cout << "Hello " << name ;

    

    return 0;

}