function sumOfNumbers(n){
    var sum = 0;
    for(let i = 1;i<=n;i++){
        sum+=i;
    }
    console.log(sum);
}

function sumOfNumber(){
    sumOfNumbers(50);
}


//to make a asynchronous function synchronous we can use a busy waiting method....
//i am defining a function to very big value and performing nothing

//like
//busy waiting

function syncSleep(){
    let a = 1;
    for(let i = 1;i<100000000;i++){
        a++;
    }
}
syncSleep();
setTimeout(sumOfNumber,2000);
console.log("Harsh shrivastava");
console.log("Aditi Mishra");

//some common async function are :
// setTimeout
// fs.readFile : to read a file from your filesystem
// fetch :  to fetch some data from an API endpoints