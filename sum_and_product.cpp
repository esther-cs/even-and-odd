#include <iostream>
#include <vector>
int main(){
  std::vector<int> numbers = {2,4,3,6,1,9};
  int sum_of_even  = 0;
  int product_of_odd = 1;
  for(int i=0; i < numbers.size();i++){
    if(numbers[i]%2==0){
      sum_of_even=numbers[i]+sum_of_even;
    }else{
      product_of_odd=numbers[i]*product_of_odd;
    };
  };
  std::cout<<"Sum of even numbers is "<<sum_of_even<<"\n";
  std::cout<<"Product of odd numbers is "<<product_of_odd;
}
