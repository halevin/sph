
void Sph::evaluateDensities(){
	
	for (int j = 0; j < Settings.particles; j++){
		
		double tmp = 0.0;
		
		for (int i = 0; i < Settings.particles; i++){
			tmp += Kernel.splineVal[(int)(500*!(this.particles[i].pos - this.particle[j].pos)/this.particles[i].h)]
		
		this.particles[i].density = pmass * tmp;

	}
	
	
	
}
