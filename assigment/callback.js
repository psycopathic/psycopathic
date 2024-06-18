// //promises....

// const { log } = require('console');
// const fs = require('fs');


// function harshReadFile(cb){
//     fs.readFile("a.txt","utf-8",function(err,data){
//         cb(data);
//     });
// }

// function onDone(data){
//     console.log(data);
// }



// harshReadFile(onDone);

/*using promise */

// const fs = require('fs');

// function harshReadFile(){
//     return new Promise(function(resolve){
//         fs.readFile("a.txt","utf-8",function(err,data){
//             resolve(data);
//         });
//     });
// }

// function onDone(data){
//     console.log(data);
// }

// harshReadFile().then(onDone)


//syntax
// var d = new Promise(function(resolve){
//     setTimeout(() => {
//         resolve("foo")
//     }, 1000);
// })

// function callback(){
//     console.log(d);
// }

// d.then(callback)
//.then get called whenever the async function resolves...


//async await => 

    function harshAsyncFunction(){
        let p = new Promise(function(resolve){
            setTimeout(function(){
                resolve("hi there!");

            },1000);
        });
        return p;
    }

    async function main(){
        let value = await harshAsyncFunction();
        console.log(value)
        //.then hat gya 
    }

    main();