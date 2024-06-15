const buttons = document.querySelectorAll('.button')
// console.log(button)
const body  = document.querySelector("body")

// event is browser is everytime like moving Mouse
// event ko ek function mai le sakte hai aur uske saath kuch activities kar sakte hai

buttons.forEach(function(button) {
    console.log(button)
    button.addEventListener('click',function(e){
        console.log(e);
        console.log(e.target);
        if(e.target.id === 'grey'){
            body.style.backgroundColor = e.target.id
        }
        if(e.target.id === 'blue'){
            body.style.backgroundColor = e.target.id
        }
        if(e.target.id === 'yellow'){
            body.style.backgroundColor = e.target.id
        }
        if(e.target.id === 'white'){
            body.style.backgroundColor = e.target.id
        }
    })
});