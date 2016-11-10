var n=6;
var c ="";
for(var i=1 ;i<=n ;i++)
{

	for(var j=n ; j>=1 ;j--){
		if(j>i)
		{	c+=" ";}
		else
		{   c+="#"; }
		
	}
	c+="\n";
	console.log(c);
}
