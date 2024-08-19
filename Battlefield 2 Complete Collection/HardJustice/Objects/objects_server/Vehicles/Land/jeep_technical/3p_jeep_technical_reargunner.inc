
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Land/jeep_technical/Animations/3p/3p_jeep_technical_reargunner.baf
animationManager.looping 0

rem *** Bundles ***
animationSystem.createBundle lookAround
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.useSpeedAsTime 1
animationBundle.addAnimation Objects/Vehicles/Land/jeep_technical/Animations/3p/3p_jeep_technical_reargunner.baf


rem *** Triggers ***
animationSystem.createTrigger LookAroundTrigger root
animationTrigger.addBundle lookAround
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root

