//sorthand.js
//sorts a string of mahjong tiles, where "value" cards are given in 
//the form "a[1-9]", and honors are given in the form of "n", "e", "s", etc...

function sortHand(unsortedHand){
	var sortedHand = "";
	var currentChar;
    var birdies = new Array(0, 0, 0, 0, 0, 0, 0, 0, 0);
    var balls = new Array(0, 0, 0, 0, 0, 0, 0, 0, 0);
    var wan = new Array(0, 0, 0, 0, 0, 0, 0, 0, 0);
    var honors = new Array(0, 0, 0, 0, 0, 0, 0);

    // first, we separate the hand by suit and honors    
    for (var i = 0; i < unsortedHand.length; i++) {
        switch (unsortedHand[i]) {
            case 'a':
                i++;
                birdies[unsortedHand[i] - 1]++;
                break;
            case 'b':
                i++;
                balls[unsortedHand[i] - 1]++;
                break;
            case 'c':
                i++;
                wan[unsortedHand[i] - 1]++;
                break;
            case 'n':
                honors[0] += 1;
                break;
            case 'e':
                honors[1] += 1;
                break;
            case 's':
                honors[2] += 1;
                break;
            case 'w':
                honors[3] += 1;
                break;
            case 'g':
                honors[4] += 1;
                break;
            case 'r':
                honors[5] += 1;
                break;
            case 'h':
                honors[6] += 1;
                break;
            default:
                console.log("crap something else failed.");
                                break;
        }
    }
    var types = new Array(birdies, balls, wan, honors);
    for(int i = 0; i < 4; i++){ //tells you which array it's in
    	 switch(i){
    			case 0:
    				currentChar = 'a';
    				break;
    			case 1:
    				currentChar = 'b';
    				break;
    			case 2:
    				currentChar = 'c';
    				break;
    			case 3:
    				currentChar = 'x';
    				break;
    			}
    	for(int j = 0; j < types[i].length(); j++){
    		while(types[i][j]!= 0)
    		{
    			if(currentChar != 'x'){	//if the array is 0-2, or the non honor tiles
    				sortedHand.concat(currentChar);
    				sortedHand.concat(j + 1);
    				types[i][j]--;
    			}
    			else{	//if we're in the honors array
    				switch(j){
    					case 0:
    						string.concat('n');
    						types[i][j]--;
    						break;
    					case 1:
    						string.concat('e');
    						types[i][j]--;
    						break;
    					case 2:
    						string.concat('s');
    						types[i][j]--;
    						break;
    					case 3:
    						string.concat('w');
    						types[i][j]--;
    						break;
    					case 4:
    						string.concat('g');
    						types[i][j]--;
    						break;
    					case 5:
    						string.concat('r');
    						types[i][j]--;
    						break;
    					case 6:
    						string.concat('h');
    						types[i][j]--;
    						break;
    					default:
    						console.log("something went wrong!");
    						break;
    				}
    			}
    		}
    	}

    }
    return sortedHand;
}