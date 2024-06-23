//  function myOwnSetTimeout(callback,duration){
//     setTimeout(callback,duration);
//  }

//  function promisifiedmyOwnSetTimeout(duration){
//    const p = new Promise();
//     return p;
//  }

//  myOwnSetTimeout(function(){
//     console.log("after settimeout");
//  },1000);    


 //to ways of creating async function promisified and non-promisified

 //promisifed returns a promise  

//  non promisified will take callback as an argument

// how its done....

// function myOwnSetTimeout(callback,duration){
//     setTimeout(function(){
//         callback();
//     },duration)
// }


//returning a promise...
//new date();

// function promisifiedmyOwnSetTimeout(duration){
//     const p = new Promise(function(resolve){
//         setTimeout(function(){
//             resolve();
//        },duration);
//     });
//     return p;
// }

//promise
// const ans = promisifiedmyOwnSetTimeout(1000);
// ans.then(function(){
//     console.log("timeout is done");
// })


// const ans = promisifiedmyOwnSetTimeout(1000);
// ans.then(()=>{
//     console.log("timeout is done");
// })
//output promise {<pending>}
//after this is done do what so ever you want...


const fs = require('fs');
fs.readFile("a.txt","utf-8",function(err,data){
    if(err){
        console.log("an error occured in the process");
    }
});

 //promisified read file

fs.readFile("a.txt","utf-8").then(function(err,data){
   
})


//async will be used....
//do a network call 
//sleep/wait for some time
//read file
//database call