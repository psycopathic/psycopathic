// const tinderUser = new Object(); singleton object

//non singleton object.....
const tinderUser = {}

tinderUser.Id = "123abc";
tinderUser.name = "sammy";
tinderUser.isLoggedIn = false;


// console.log(tinderUser);

const regularUser = {
    email:"some@gmail.com",
    fullname:{
        userFullname:{
            firstname : "harsh",
            lastname : "shrivastava"
        }
    }
}

// console.log(regularUser.fullname.userFullname.firstname)


//combining objects....


const obj1 = {1: "a",2: "b"};
const obj2 = {3: "c",4: "d"};

// const obj3 = {obj1,obj2}; #1

// const obj3 = Object.assign({},obj1,obj2) #2 const obj3 = Object.assign(target,source)

const obj3 = {...obj1,...obj2}

// console.log(obj3);



//jab database se values aaigi......
//array ka object......


const user = [
    {
        id: 1,
        email: "h@gmail.com"
    },
    {
        id: 1,
        email: "h@gmail.com"
    },
    {
        id: 1,
        email: "h@gmail.com"
    }
]

// console.log(user[1].email)


console.log(tinderUser);

//operations on object..........

//#1 to find keys..
// console.log(Object.keys(tinderUser))
// console.log(Object.values(tinderUser))
// console.log(Object.entries(tinderUser)) // saari key value pairs ko array me daal deta he..


// console.log(tinderUser.hasOwnProperty('isLoggedIn')) //to check if a certain property exist or not

//*********destructure of object*********** */

// JavaScript Object Destructuring is the syntax for extracting values from an object property and assigning them to a variable. The destructuring is also possible for JavaScript Arrays. By default, the object key name becomes the variable that holds the respective value.

const course = {
    coursename : "js in hindi",
    coursePrice : "11111111",
    courseInstructor : "abdul bari sir"
}

const {courseInstructor} = course //object se seedha aise value humlog nikal sakte he

// console.log(courseInstructor)
// console.log(course["courseInstructor"])

//ab kisi aur variable me kisi existing wale ka value dalna he...


// const {courseInstructor : instructor} = course
// console.log(instructor)


//API => application performing interface........

//pehle server se values xml me aati thi ab jason me aati he....

//json : object without name....

//actually me key values string hoti he...

// {
//       name : "harsh",
//       coursename : "js in hindi",  
//       price : "free"
// }

 //array is form me api..... array me obj hote he

 [
    {},
    {}
 ]