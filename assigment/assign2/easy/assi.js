const fs = require('fs');

fs.readFile("a.txt","utf-8",function(err,data){
    if(err){
        console.log("an error detected : ",err);
        return;
    }
   console.log(data);
})