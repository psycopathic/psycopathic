// const dog = {
//     name: "doggy",
//     legCount : 2,
//     speaks: "bhow bhow"
// }
// const cat = {
//     name: "meowth",
//     legCount : 2,
//     speaks: "mew mew"
// }
// const lion = {
//     name: "babu rao",
//     legCount : 2,
//     speaks: "uaee uaee"
// }

// function printDetails(animal){
//     console.log("animal" + " " + animal["name"]+ " " + animal["speaks"]+" "+animal["legCount"]);
// }



// printDetails(cat);

//-------------------------------------------------------------------------------------------

//class //object..

//class blue print...

class animal{
    constructor(name,legCount,speaks){
        this.name = name;
        this.legCount = legCount;
        this.speaks = speaks;
    }
}

const dog = new animal("doggy",4,"bark bark")
// console.log(dog.name +" "+dog.legCount+" "+dog.speaks)

function printDetails(animal){
    console.log("animal" + " " + "is"+ " " + animal["name"] + " " + animal["legCount"] + " " + animal["speaks"]);
}

printDetails(dog)