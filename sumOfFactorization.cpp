#include <iostream>
#include <numeric>
#include <cmath>
#include <vector>


auto sum(const std::vector<int>& factors) -> int;

auto find_factors(const int number) -> std::vector<int>;

auto main() -> int{
    for (size_t i = 2; i < 1000000000; i++)
    {   
        //lemma that shows that a multiple of 6 cannot fufil the desired property
        if(i % 6 == 0){continue;}

        const auto sum_amount = sum(find_factors(i));
        if( sum_amount == i){
            std::cout << sum(find_factors(i)) << std::endl;
        } 

        if( sum_amount - 1 == i){
            std::cout << "i:" << i << " difference: 1" << std::endl;
        }
    }
};

auto sum(const std::vector<int>& factors) -> int{  
    return std::accumulate(factors.begin(), factors.end(), 0);
}

auto find_factors(const int number) -> std::vector<int>{
    auto factors = std::vector<int>{};
    factors.reserve(std::sqrt(number) / 1);
    for (size_t i = 2; i <= (std::sqrt(number)/1); ++i)
    {
        if(number % i == 0){
            factors.emplace_back(i);
            factors.emplace_back(number/i);
        }
        
        //if(sum(factors)>= i+2){break;}
    }
    
    return factors;
}

