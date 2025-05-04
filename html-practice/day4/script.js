const one = document.getElementById("one");
const para = document.getElementById("para")
console.log(one);


one.addEventListener("click",()=>{
    // one.innerHTML="i became red "
    para.style.color="red"
    para.textContent ="Lorem ipsum dolor sit amet consectetur adipisicing elit. <br> Nostrum veniam laboriosam rerum quam iste sapiente architecto expedita sit repellendus voluptate, minima deserunt reprehenderit quaerat eligendi esse iure magnam aut non."

})
