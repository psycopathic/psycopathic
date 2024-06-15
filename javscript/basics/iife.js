// iife : immdiatly invoked function expression
// global scope se pollution na ho aur immidiatly execute ho jai

(function ChannelSplitterNode(){
  console.log('DB CONNECTED')
})();

// (function definition)(execution call) ==> syntax
( ()=>{
    console.log(`DB CONNECTED TWO`);
})();

// how to pass

( (name)=>{
    console.log(`DB CONNECTED TWO ${name}`)
})("aditi")