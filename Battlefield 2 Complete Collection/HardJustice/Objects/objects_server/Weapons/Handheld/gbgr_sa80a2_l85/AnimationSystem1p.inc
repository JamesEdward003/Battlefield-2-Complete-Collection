animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.02/0.02/0.02
animationSystem.cameraSpring.zoomDamping 2.9/2.9/0
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/30

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_deploy.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_fire.baf
animationManager.looping 0
animationManager.noiceFreq 3
animationManager.noiceAmplitude 0.002
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_idle1.baf
animationManager.looping 0
animationManager.length 2.9583
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_idle2.baf
animationManager.looping 0
animationManager.length 2.33333
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_reload.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_run.baf
animationManager.length 0.791667
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_sprint.baf
animationSystem.createAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_stand.baf

rem *** Bundles ***

animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_fire.baf

animationSystem.createBundle idle1
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_idle1.baf

animationSystem.createBundle idle2
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_idle2.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_reload.baf

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_run.baf

animationSystem.createBundle sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_sprint.baf

animationSystem.createBundle still
animationBundle.addAnimation Objects/Weapons/Handheld/gbgr_sa80a2_l85/Animations/1p/1p_gbgr_sa80a2_l85_stand.baf

rem *** Triggers ***

animationSystem.createTrigger RandomTrigger rnd_idle
animationTrigger.addBundle idle1
animationTrigger.addBundle idle2

animationSystem.createTrigger IdleTrigger idle
animationTrigger.addChild rnd_idle
animationTrigger.idleTime 5/15

animationSystem.createTrigger Trigger still
animationTrigger.addChild idle
animationTrigger.addBundle still

animationSystem.createTrigger MovementTrigger move
animationTrigger.addBundle run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger sprint
animationTrigger.addBundle sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addBundle fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger reload
animationTrigger.addBundle reload
animationTrigger.message 2

animationSystem.createTrigger Trigger normal
animationTrigger.addChild still
animationTrigger.addChild move
animationTrigger.addChild sprint
animationTrigger.addChild fire

animationTrigger.addChild reload

animationSystem.createTrigger SwitchMessageTrigger root
animationTrigger.addChild zoom
animationTrigger.addChild normal
animationTrigger.addBundle zoomTransition
animationTrigger.message 4

animationSystem.createTrigger Trigger startup
animationTrigger.addBundle deploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild startup

