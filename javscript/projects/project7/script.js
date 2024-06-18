var timer = 10;
var score = 0;
var hitrn  = 0;
document.querySelector("#sohail").textContent = score;


//jispe click karoge wo element par event raise hoga,aur event listener na milne element ke parent par listener dhundhega,wha bhi na milne pe event ke parent ke parent ke parent par event par listner dhoondhe ga
function increaseScore(){
    score+=10;
    document.querySelector("#sohail").textContent = score;
}
function newHit(){
    hitrn = Math.floor(Math.random()*10)
    document.querySelector("#hitVal").textContent = hitrn;
}
function makeBubble(){
  var clutter = "";
  for(var i = 1;i<=70;i++){
       clutter += `<div class="bubble">${Math.floor(Math.random()*10)}</div>`;
    }
document.querySelector("#pbottom").innerHTML = clutter;
}
function runTimer(){
   var timerinterval = setInterval(function(){
    if(timer>0){
        timer--;
        document.querySelector("#timerVal").textContent = timer;
    }
    else{
        clearInterval(timerinterval);
        document.querySelector("#pbottom").innerHTML = `<h1>GAME OVER</h1>`;
        document.querySelector('#finally').innerHTML = score;
    }
   },1000)
}

document.querySelector("#pbottom").addEventListener("click",function(dets){
    var clickedNumber = Number(dets.target.textContent);
    if(clickedNumber === hitrn){
        console.log(clickedNumber)
        increaseScore();
        newHit();
        makeBubble();
    }
})

runTimer();
makeBubble();
newHit();