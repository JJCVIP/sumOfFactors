function sum(array){
    return array.reduce( (a,b)=>a+b, 0);
}

/**
 * Returns factors of that number, except for 1 and number
 * @param {Integer} num 
 * @returns {Array} result
 */
function findFactors(num){
    const result = [];
    for( let i=2; i <= num ** (1/2); ++i ){
        if(num % i === 0){
            result.push(i);
            result.push(num / i);
        }
    }

    return result;
}
console.log(findFactors(879687888877588));
//for(let i = 1; i < 10000000; ++i){
    //let sum_of_factors = sum(findFactors(i));
    //if(sum_of_factors-i === 1 ||sum_of_factors-i === -1) console.log(`i: ${i}   Sum:${sum_of_factors}  Difference:${sum_of_factors-i}`);
    // if(sum(findFactors(i)) === i){
    //     console.log(i);
    // }
    //console.log(findFactors(650));
//}
