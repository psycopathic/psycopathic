setTimeout(function(){
    console.log("hi there");

    setTimeout(function(){
        console.log("inside the second one");
    },2000)
},1000)