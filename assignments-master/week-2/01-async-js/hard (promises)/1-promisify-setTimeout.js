/*
    Write a function that returns a promise that resolves after n seconds have passed, where n is passed as an argument to the function.
*/

// function a(n) {
// }

// module.exports = a;

function a(n){
    return new Promise((resolve)=>{
        setTimeout(()=>{
            resolve();
        },n*1000)
    })
}
// const ans = a(2)
a(2).then(()=>{
    console.log("done");
})
