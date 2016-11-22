//
//  ParticleSystem.cpp
//  FirstParticleSystem
//
//  Created by Leah
//
//

#include "ParticleSystem.hpp"

ParticleSystem::ParticleSystem(ofVec2f position) {
    
    mPosition = position;
    mEmitRate = 5;
    mIsAddingParticles = true;
    
}


void ParticleSystem::update(ofVec2f force) {
    
    if (mParticleList.size() < SIZE_LIMIT) {
        // push new particles into the vector
        for (int i = 0; i < mEmitRate; i++) {
            
            Particle newParticle(mPosition);
            mParticleList.push_back(newParticle);
            
        }
    }
    
    for (int i = 0; i < mParticleList.size(); i++) {
        
        if (mParticleList[i].mLifeSpan > 75) {
            
            // calculate the distance between center and particle position
            float distance = (mParticleList[i].mPosition - mPosition).length();
            
            mParticleList[i].resetForces();
            mParticleList[i].applyForce(force);
            float velocityMultiplier = ofMap(distance, 1, 0, 0, 0);
            mParticleList[i].update(velocityMultiplier);
            
        }
        
    }
    
}


void ParticleSystem::draw() {
    
    for (int i = 0; i < mParticleList.size(); i++) {
        
        mParticleList[i].draw();
        
    }
    
}
