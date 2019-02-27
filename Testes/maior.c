int main (){
	
	
	int maior (capturados, 0, capturados-1);
	
}

int maior (POKEBOLA *capturados, int i, int f){
	if (i == f)	
		return capturados[i].hp;
	else
		int n1, n2;
		int n;
		
		m = (i + f)/2;  // meio do vetor
		n1 = maior (capturados[i].hp, i, m);
		n2 = maior (capturados[i].hp, m+1, f);
		
		if (n1 < n2) return n1;
		else return n2;	
}
