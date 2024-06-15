/*how fetch works...m */


fetch('https://api.github.com/users/hiteshchoudhary').then((response)=>{
    return response.json;
}).then((data)=>{
    console.log(data)
}).catch((error)=>{
    console.log('error')
})

//space in 'Content-Type"
//fetch api = library = successor of XMl
// kisi bhi request ko fetch network pe...