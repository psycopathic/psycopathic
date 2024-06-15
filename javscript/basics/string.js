// const name = "harsh "
// const repoCount = 50;

// console.log(name + repoCount +" value"); ye poorana method he 
// naye method me back tick use karte he jisme aata he string interpolation
//interpolation : a process of determining the unknown values that lie in between the known data points

//place holder banate he ${} parentheses me variable likhte he


// console.log(`hello my name is ${name} and my repo count is ${repoCount}`); //string interpolation


//other way to declare string.............
// const gameName = new String('harsh and aditi')  

// console.log(typeof gameName);


// console.log(`hi i am ${name} how its gonna be ${gameName}`);

//string methods in javascript.....
//1.string length....
 // string.length
// let me = " hi i am harsh shrivastava "
// console.log(`The length of string : ${me} is equal to ${me.length}`);
 const gameName = new String('harsh and aditi')  
// // console.log(gameName.__proto__);

// // console.log(gameName.toUpperCase());
// // console.log(gameName.charAt(10));

// console.log(gameName.indexOf('i'));

// const gameChanger = gameName.substring(10,15)
// console.log(gameChanger);


// const anotherString = gameName.slice(-9,15)//isme negative values bhi de sakte //he negative value dene pe string palat denge

// console.log(anotherString);
// console.log(gameName.length);

const string = new String('       hello      ');
console.log(string.trim());

const url = "http://hitesh.com/hitesh%20chaudary"
console.log(url.replace('%20','-'));

console.log(gameName.includes('aditi')); //to check presence in the string

console.log(gameName.split(' ')) //string split kar deta he jo bhi tum character rakho uske respect me split kar deta he 