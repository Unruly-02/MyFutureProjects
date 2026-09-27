#include "triangle.h"
#include <stdexcept>

namespace triangle {
 flavor kind(double a,double b,double c){
     if(a+b>=c && b+c>=a && c+a>=b && (a>0&&b>0&&c>0)){
      if(a==b && b==c){
             return flavor::equilateral;
         }
         else if(a==b||b==c||a==c){
             return flavor::isosceles;
         }
         else{
             return flavor::scalene;
         }
     }else{
         throw std::domain_error("invalid triangle");
     }
 }
}  // namespace triangle
