#include <iostream>
#include <string>
namespace cpp2 {
 /* --------------------------------------------------------------------- */
 /*
 mcxi
 mcxi 記法を解析するクラスです。
 */
 /* --------------------------------------------------------------------- */
 class mcxi {

 };
} // namespace cpp2
int main(){
 cpp2::mcxi a0("xi");
 cpp2::mcxi b0("x9i");
 cpp2::mcxi result0 = a0 + b0;
 std::cout << "3x" <<" " << result0.to_string() << std::endl;
 cpp2::mcxi a1("i");
 cpp2::mcxi b1("9i");
 cpp2::mcxi result1 = a1 + b1;
 std::cout << "x" << " " << result1.to_string() << std::endl;
 cpp2::mcxi a2("c2x2i");
 cpp2::mcxi b2("4c8x8i");
 cpp2::mcxi result2 = a2 + b2;
 std::cout << "6cx" << " " << result2.to_string() << std::endl;
}
