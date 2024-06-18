const fs = require("fs");
//fs == file system helps in reading to a file writing to a file

fs.readFile("a.txt","utf-8",function(err,data){
    console.log(data)
})

console.log("hi i am harsh shrivastava")//pehle kyuki time lega upar wala...