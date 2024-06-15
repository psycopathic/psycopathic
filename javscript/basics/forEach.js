// const coding = ["js","javascript","java","cplusplus"]
//foreach value return nhi karta hai

// const value = coding.forEach((item)=>{
//     // console.log(item);
//     return item
// })
// // console.log(values);

// const myNums = [1,2,3,4,5,6,7,8,9,10]

//filter value return karta hai

// const newNums = myNums.filter((num)=>num>4) // scope use karega toh return use karna hoga
// console.log(newNums)//5,6,7,8,9,10
// const newNums = []

// myNums.forEach((nums)=>{
//     if(nums>4){
//         newNums.push(nums);
//     }
// })

// console.log(newNums)


const books = [
    { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
    { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
    { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
    { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
    { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
    { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
    { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
    { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
    { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
  ];

//   const userBooks = books.filter((bk)=>bk.genre === 'History')
  
//   const userBooks = books.filter((bk)=>bk.edition > 2000)
//   console.log(userBooks)

// const userBooks = books.filter((bk)=>{return bk.edition > 2000})
//   console.log(userBooks)

//*************************************************//
//using map easy and returns value...
// const myNumber = [1,2,3,4,5,6,7,8,9,10]
// const newNums = myNumber.map((num)=>num+10)
// console.log(newNums)

//map can be used as an alternative for filter

//chaining
//map and map
// const newNums = myNumber
// .map((num)=>num*10)
// .map((num)=>num+1)
// .filter((num)=>num>=40)

// console.log(newNums)


//****************************************************//

//reduce..
//callback lagta hi isme bhi

// const array1 = [1,2,3]

// const myTotal = array1.reduce(function(acc,curval){
//     return acc + curval
// }, 0)//value of acc

// console.log(myTotal)


//using arrow

// const myTotal = myNums.reduce((acc,curr) => acc*curr,1)
// console.log(myTotal);


const shoppingCart = [
    {
        itemName : "js course",
        price : 2999

    },
    {
        itemName : "cyber security",
        price : 999
    },
    {
        itemName : "full stack development",
        price : 1000
    },
]

const result = shoppingCart.reduce((acc,item)=>acc+item.price,0)
console.log(result)