// const myarr = [1,2,3,4,5,false,"harsh"];

// console.log(myarr);
// console.log(myarr[1])
// console.log(myarr[0])

// console.log(typeof myarr)
// console.log( myarr[5])
// console.log( myarr[6])

//second way of declaring an array
//javascript array are dynamic in nature.....
//kuch bhi daal do wo array hi rahega
//tum push pop bhai use kar sakta hae
//unshift aur shift alter scheme he push pop ka hi....
//unshift aage se shift karke element insert karta he.....
//shift aage se unshift karke aage wala element hata deta he......


// const myArr = new Array(1,2,3,4);
// console.log(myArr);

// const arr = [0,1,2,3,4,5];
// console.log(arr[1]);
// console.log(arr);

// arr.unshift(9);
// console.log(arr);
// arr.shift();
// console.log(arr);


// arr.push(10);
// console.log(arr);
// arr.pop();
// console.log(arr);


//splice and slice 
//slice do argument mangta he
//ek starting index aur dusra ending index print start se ending ke ek kam tak print hota he

//splice seedha array hi alag kar deta he......


// console.log(arr.slice(1,3));
// console.log(arr);
// console.log(arr.splice(1,3));
// console.log(arr);


const marvelHeroes = ["thor","black widow","hulk","iron man"]
const dcHeroes = ["flash","wonder women","batman","super man"]

// marvelHeroes.push(dcHeroes);
// console.log(marvelHeroes)
// console.log(marvelHeroes[4][3])


// const allHeroes = marvelHeroes.concat(dcHeroes)
// console.log(allHeroes);

//concat jod deta he

//method 2 for concat

// const allHeroesNew = [...marvelHeroes,...dcHeroes]
// console.log(allHero);




//flat : jo saari substrings ko flat kar deta he;

const newArr = [1,2,3,[5,6,7],8,9,[10,[11,12]]];

console.log(newArr);

const newerArr = newArr.flat(Infinity)
console.log(newerArr);


//how check for array or not 
//false true return values......


console.log(Array.isArray("Harsh"))


//how to convert to array......
console.log(Array.from("harsh"))


//object ko array banane ke liye hume key dena hota he....???????
//nhi toh humesha empty array dega.....