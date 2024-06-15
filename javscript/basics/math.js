const score = 400;  //method 1 of declaaring a number in javascript.....
// console.log(score);

const balance = new Number(100); //method 2 of declaring a number in javascript.....
// console.log(balance);
// console.log(balance.toString());
// console.log(balance.toString().length);

// console.log(balance.toFixed(1));//more number more precise


const otherNumber = 23.8966;

// console.log(otherNumber.toPrecision(1))  //range 1 - 21

const hundreds = 10000000;
// console.log(hundreds.toLocaleString('en-IN'));

//+++++++++++++++++++++++++++++++MATHS++++++++++++++++++++++++++
// console.log(Math);
// console.log(Math.abs(-4));
// console.log(Math.round(4.6333));
// console.log(Math.ceil(4.6333));
// console.log(Math.floor(4.6333));
// console.log(Math.min(4,5,3,2));
// console.log(Math.max(4,5,3,2));


console.log((Math.random()*10)+1); //0-1 ke beech me hi hoti he values //math.floor 0 dede ga isiliye +1 kara he humne


const min = 10;
const max = 20;

console.log(Math.floor(Math.random()*(max - min + 1) + min));