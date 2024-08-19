
rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_sit.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_stand.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_die.baf
animationManager.looping 0

rem *** Bundles ***
animationSystem.createBundle lookAround
animationBundle.isLooping 0
animationBundle.fadeInTime 0.2
animationBundle.fadeOutTime 0.2
animationBundle.useSpeedAsTime 1
animationBundle.addAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_stand.baf
animationBundle.addAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_sit.baf

animationSystem.createBundle die
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_die.baf

rem *** Triggers ***
animationSystem.createTrigger LookAroundTrigger root
animationTrigger.addBundle lookAround
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger Trigger die
animationTrigger.addBundle die

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild die

