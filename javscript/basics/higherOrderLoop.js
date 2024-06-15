// // for of

// // ["","",""] 
// // [{},{},{}]

// // const arr = [1,2,3,4,5];

// // for (const yes of arr) {
// //      console.log(yes);
// // }


// const greeting = "Hello World"
// for (const x of greeting) {
//     console.log(x);
// }

// // maps

// const map = new Map()
// map.set('IN',"India")
// map.set('USA',"United States of America")
// map.set('Fr',"France")

// // console.log(map);
// for (const [key,value] of map) {
//     console.log(key,value);
// }

// // const myObject = {
// //     'game' : 'NFS',
// //     'game2' : 'BGMI',
// //     'game3' : 'spiderman'
// // }

// // for(const [key,value] of myObject){
// //     console.log(key,':-',value)
// // }//not iteratable if both are string....


// // const myObject = {
// //     game : 'NFS',
// //     game2 : 'BGMI',
// //     game3 : 'spiderman'
// // }

// // for(const [key,value] of myObject){
// //     console.log(key,':-',value)
// // }

// // for of map aur arrays wagera kai liye hota hai 

// // for in use hota hai object kai liye

// const myObject = {
//     js : 'javascript',
//     rb : 'ruby',
//     cpp : 'cplusplus'
// }

// for(const key in myObject){
//     console.log(key,myObject[key])
// }

// const programming = ["js","cpp","ruby"]

// for(const key in programming){
//     console.log(key);
// } //bas keys diya....

//ForEach ko call back funtion(iska naam nhi hota) dena hota hai



// coding.forEach (function (val){
//     console.log(val)
// })

//using arrow function
const coding  = ["js","ruby","java","python","cpp"]

coding.forEach((val)=>{
    console.log(val);
})

// referce dena funtion ka means bas naam 
//function() matlab execute karna

coding.forEach((item,index,arr)=>{
   console.log(item,index,arr);
})






const myCoding = [{
    languageName:"javascripy",
    langguageFileName:"js"
},
{
    languageName:"cplusplus",
    langguageFileName:"cpp"
},] 

myCoding.forEach((item)=>{
     console.log(item.languageName);
})





 