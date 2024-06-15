//scope
// {} // this is called the block scope  
// rest is called the global scope

/*var or when we declare the element without any keyword then it can be modified any where
in the program */



// if (true) {
//     let a = 10;
//     var b = 20
//     const c = 11
// }


// // console.log(a)
// // console.log(b)
// // console.log(c)



/*******************************/

// nested scope

// function one(){
//    const username = "harsh"
//    function two(){
//     const website = "youtube"
//     console.log(username);
//    }

// //    console.log(website) //iska scope andar hi khatam ho gya tha

//    two()
// }

// one()

// one sabse bada hai
//two usse chota hai
// call stack banta hai


if(true){
    const username = "aditi"
    if(username === "aditi"){
        const website = "youtube"
        // console.log(username + website)
    }
    // console.log(website)//error because of its scope
}

// console.log(username);//error because of its scope


//*******************Interesting*********************/

console.log(addone(5))

function addone(num){
    return num+1
}

addTwo(5); 

const addTwo = function(num){ // expression......b 
    return num+2
}

//expression ke declaration ke pehle hum usme assignment mhi kar sakte

//hoisting is for variable nature and how to operate
