
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_parachute.baf
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_parachute_landing.baf
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_parachute_die.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_parachute.baf

animationSystem.createBundle landing
animationBundle.fadeInTime 0.3
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_parachute_landing.baf

animationSystem.createBundle landed
animationBundle.fadeInTime 0.2
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Soldiers/Common/Animations/3P/3p_runForward.baf

animationSystem.createBundle die
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_parachute_die.baf

rem *** Triggers ***
animationSystem.createTrigger MessageTrigger parachute_still
animationTrigger.addBundle still
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger parachute_landing
animationTrigger.addBundle landing
animationTrigger.message 2

animationSystem.createTrigger MessageTrigger parachute_landed
animationTrigger.addBundle landed
animationTrigger.message 4

animationSystem.createTrigger Trigger root
animationTrigger.addChild parachute_still
animationTrigger.addChild parachute_landing
animationTrigger.addChild parachute_landed

animationSystem.createTrigger Trigger die
animationTrigger.addBundle die

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild die
