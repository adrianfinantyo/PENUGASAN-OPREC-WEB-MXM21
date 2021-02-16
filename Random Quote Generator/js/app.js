const url = "https://api.quotable.io/random";
function generateQuote(){
   fetch(url)
  .then(function(data) {
         return data.json();
    })
    .then(function(data){    
    document.getElementById("quote").innerHTML = "<q>" + data.content + "</q>";
    document.getElementById("author").innerHTML = "- " + data.author;
    document.getElementById("tags").innerHTML = "<code>" + data.tags + "</code>";
   })
 .catch(function(err) {
    console.log(err); 
    });
}
window.onload = generateQuote();