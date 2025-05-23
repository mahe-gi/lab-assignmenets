async function data(){
    
const websiteurl ="https://nareshit.in/";


fetch(websiteurl)
  .then(response => response.json())
  .then(data => console.log(data))
  .catch(error => console.error('Error:', error));

}

function main(){


    for(let i=0;i<100;i++){
        data();
    }

}
setInterval(()=>{ main()},1000);