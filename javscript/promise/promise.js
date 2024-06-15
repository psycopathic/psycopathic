// promise takes callback
const promiseOne = new Promise(function(resolve,reject){
   //Do an async task
   //DB calls,cryptography,network

   setTimeout(function(){
    resolve()

    console.log('Async task is compelete');
 },1000)
}) //introduced in es6
//resolve me callback milta he
//to consume..
//resolve reject ko then se connect karna hota he using resolve() 
promiseOne.then(function(){
    console.log("promise consumed");
})

new Promise(function(resolve,reject){
    setTimeout(() => {
        console.log("Async task 2");
        resolve()
    }, 1000);
}).then(function(){
    console.log("Async 2 resolved....")
})


const promiseThree = new Promise(function(resolve,reject){
     setTimeout(function(){
        resolve({username : "chai",email:"chai@example.com"})
     },1000)
})

promiseThree.then(function(user){
    console.log(user);
})
//reject error deta hai
const promiseFour = new Promise(function (resolve,reject) {
    setTimeout(() => {
        let error = false;
        if(!error){
            resolve({username:"hitesh",password:"123"})
        }else{
            reject('Error:something went wrong')
        }
    }, 1000);
})

// promiseFour.then().catch()//then value dega //agar error aaigi toh catch value de dega

//chaining
 promiseFour.then((user)=>{
    console.log(user);
    return user.username
}).then((username)=>{
  console.log(username);
}).catch((error)=>{
    console.log(error)
}).finally(()=>{
    console.log('promise is either resolved or rejected');
})

// console.log(username);
//finally humesha chalega....

const promiseFive = new Promise((reject,resolve)=>{
    setTimeout(() => {
        let error = false;
        if(!error){
            resolve({username:"aditi",password:"0302"})
        }else{
            reject('Error:something went wrong')
        }
    }, 1000);
})

async function consumePromiseFive(){
    try{const response = await promiseFive
    console.log(response);}catch(error){
        console.log(error);
    }
}

consumePromiseFive()


// async function getAllUsers(){
//    try{
//     const response = await fetch('https://api.github.com/users/hiteshchoudhary')
//     const data = await response.json()
//     console.log(data);
//    }catch(error){
//     console.log("an error occured");
//    }
// }

//getAllUsers()

fetch('https://api.github.com/users/hiteshchoudhary').then((response)=>{
    return response.json;
}).then((data)=>{
    console.log(data)
}).catch((error)=>{
    console.log('error')
})


//do then tab use hoga jab pehla the kuch return kar rha hoga...