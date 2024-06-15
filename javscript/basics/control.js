// if

// if(true){
// //    executable
// }
// if(false){
// //    not  executable
// }

// let num = 2;
// let string = "2";

// if(num === string){
//     console.log("executed");
// }
// else{
//     console.log("Not executable");
// }
// let balance = 600
// if(balance > 500)console.log("test"),console.log("test2");

// switch (key) {
//     case value:
        
//         break;

//     default:
//         break;
// }

const userEmail = "harshsrivastava@yje"

if(userEmail){
    console.log("got user email");
}
else{
    console.log("dont have user email");
}

// falsy values
// types of falsy values


// false, 0,-0, BigInt 0n,"",null,undefined,NaN

// truthy 
// "0","false",m," "
// string kai ander koi bhi value

const emptyObj = {}
// The Object.keys() static method returns an array of a given object's own enumerable string-keyed property names.

// how to check that the object is empty or not 

if (Object.keys(emptyObj).length === 0) {
    console.log("true")
}

// nullish coalescing operator(??): null underfined

let val1
// val1 = 5 ?? 10  
// val1 = null??10 //null hai toh null laga do nhi toh koi value aagyi hai toh wo laga do

// val1 = undefined ?? 15 ==> undefined


// console.log(val1)

// ternary operator
// condition ? true:false 