
rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Stationary/ats_tow/Animations/3p/3p_ats_tow_sit.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Stationary/ats_tow/Animations/3p/3p_ats_tow_stand.baf
animationManager.looping 0

rem *** Bundles ***
animationSystem.createBundle lookAround
animationBundle.isLooping 0
animationBundle.playBackward 1
animationBundle.fadeInTime 0.0
animationBundle.fadeOutTime 0.0
animationBundle.useSpeedAsTime 1
animationBundle.addAnimation Objects/Weapons/Stationary/ats_tow/Animations/3p/3p_ats_tow_stand.baf
animationBundle.addAnimation Objects/Weapons/Stationary/ats_tow/Animations/3p/3p_ats_tow_sit.baf


rem *** Triggers ***
animationSystem.createTrigger LookAroundTrigger root
animationTrigger.addBundle lookAround
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root

