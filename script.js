let theme="dark";
function change_theme(){
    if(theme=="dark"){
        document.body.style.backgroundColor="white";
        document.body.style.color="black";
        document.getElementsByClassName("theme")[0].innerHTML='<img src="dark.png" alt="" id="dark">';
        theme="light";
    }
    else{
        document.body.style.backgroundColor="black";
        document.body.style.color="white";
        document.getElementsByClassName("theme")[0].innerHTML='<img src="light.png" alt="" id="light">';
        theme="dark";
    }
}
function sleep(ms){
    return new Promise(resolve => setTimeout(resolve,ms));
}
job()
async function job(){
    let list=["Student","Web Developer","Freelancer"];
    let element=document.getElementById("job")
    for(let i=0;i<list.length;i++){
        let s="";
        for(let j=0;j<list[i].length;j++){
            s+=list[i][j];
            element.innerHTML=s;
            await sleep(200);
        }
        for(let j=list[i].length-1;j>=0 ;j--){
            let r=s.substr(0,j);
            element.innerHTML=r;
            await sleep(200);
        }
    }
    setInterval(job(),1000);
}
