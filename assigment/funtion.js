// function square(n){
//    return n*n;
// }
// function cube(n){
//     return n*n*n;
// }

// function sumOfSquares(a,b){
//     const val1 = square(a)
//     const val2 = square(b)

//     return val1+val2;
// }
// function sumOfCube(a,b){
//     const val1 = cube(a)
//     const val2 = cube(b)

//     return val1+val2;
// }


// console.log(sumOfSquares(2,3));
// console.log(sumOfCube(2,3));

//DRY => are you repeating your self.....
/*upar ke dono function wale code me ek block of code repeat ho rha he jo DRY ko voilet kar rha tha 

..............................................

iss voilention ko tackel karne ke liye callback function use hota he.....*/


/*****************************************/
//using call back...
//one function is calling back another function..
function sumOfSomething(a,b,fn){
    const val1 = fn(a);
    const val2 = fn(b);
}