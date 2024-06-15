//construct se agar object banega to singleton banega 
//singleton apni tarah ka ek hi object he
//literal ki tarah declare karne pe singleton nhi banega

//object literals

// Object.create <--- issi tarike se singleton banta he

//objectt me key value ka chakar hota he
//key string hoti he

const mySym = Symbol("key1")

const jsUser = {
   name:"harsh",
   age : 19,
   [mySym] : "myKey1",
   location: "delhi",
   email:"harshshrivastava333@gmail.com",
   isLoggedIn:false,
   lastLogInDays:["monday","friday"]      
}


// console.log(jsUser.name);
// console.log(jsUser["location"]);
// console.log(typeof jsUser[mySym]);


// jsUser.email = "harsh@adu.com"

//how to lock values....

// Object.freeze(jsUser)  freeze isiliye
jsUser.email = "aditi@harsh.com"

// console.log(jsUser);


jsUser.greeting = function(){
    console.log("hello js user")
}
jsUser.greeting = function(){
    console.log(`hello js user,${this.name}`)  //jab tereko same object ko print karna hota he
}

console.log(jsUser.greeting());//value dega function
console.log(jsUser.greeting); //reference dega function ka 




//normally dot pe object access hoga
//special cases me brackets aajata he