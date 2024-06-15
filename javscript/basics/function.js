// function sayMyname(){
//     console.log('H');
//     console.log('A');
//     console.log('R');
//     console.log('S');
//     console.log('H');
// }

// sayMyname()

// function addTwoNumer(number1,number2){
     
//     let sum = number1 + number2;
//     console.log(sum);
// }
// function addTwoNumer(number1,number2){
     
//     let sum = number1 + number2;
//     return sum;
// }

// const sum  = addTwoNumer(5, 4)

// console.log(`The sum is : ${sum}`)



// function loginUserMessage(username = sam){
//     if(!username){
//         console.log("please enter a username")
//         return
//     }
//     return `${username} just logged in`
// }
// const result = loginUserMessage("haehs")

// console.log(result);

// function calculateCartPrice(val1,val2,...num1){
//    return num1;
// }

// console.log(calculateCartPrice(2,3,4,5,6,7))


const user = {
    username : "harsh",
    prices : "4544",
}

function handleObject(anyobject){
    console.log(`username is ${anyobject.username} and price is ${anyobject.prices}`);
}

// handleObject(user)
handleObject({
    username : "sam",
    prices : 6000
})

//check type safty..

const myNewArray = [200,300,400,500]

function returnSecondValue(getArray){
    return getArray[1]
}

console.log(returnSecondValue(myNewArray))