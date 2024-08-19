
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_gunner_B_sit.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_gunner_B_stand.baf
animationManager.looping 0

rem *** Bundles ***
animationSystem.createBundle lookAround
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.useSpeedAsTime 1
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_gunner_B_stand.baf
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_gunner_B_sit.baf


rem *** Triggers ***
animationSystem.createTrigger LookAroundTrigger root
animationTrigger.addBundle lookAround
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root

