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

const fs = require('fs');

function harshReadFile(){
    return new Promise(function(resolve){
        fs.readFile("a.txt","utf-8",function(err,data){
            resolve(data);
        });
    });
}

function onDone(data){
    console.log(data);
}

harshReadFile().then(onDone) 